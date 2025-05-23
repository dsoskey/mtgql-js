import {AstLeaf, FilterType, FILTERTYPE_REPR, NearlyError} from "./types";

export function parseEnumToken(
    filterType: FilterType,
    filterToken: { offset: number },
    valueToken: { offset: number, value: any },
    operatorToken?: { offset: number, value: any }
): AstLeaf {
    const {value} = valueToken;
    const typeRepr = FILTERTYPE_REPR[filterType];
    const aliasedValue: string = ((typeRepr.aliasValues?.[value] ?? value) as string).replace(/_/g, "");
    if (!typeRepr.validValues.includes(aliasedValue)) {
        const err: NearlyError = new Error(`Unrecognized '${typeRepr.name}' value ${value}`) as NearlyError;
        err.token = valueToken;
        throw err;
    }
    return ({
        filter: filterType,
        value: aliasedValue,
        operator: operatorToken?.value,
        offset: filterToken.offset
    })
}

/**
 * Parses a mana cost string with no curly braces in it.
 * Multiple number costs are combined into a single generic cost
 * @param rawManaCost - cost to parse
 * @return an array of raw mana symbols
 */
export function parseSimpleManaCost(rawManaCost: string): string[] {
    const split = rawManaCost.toLowerCase().split("")
    let genericCost = 0;
    let currentNumberString = '';
    const nonDigits = [];
    for (let i = 0; i < split.length; i++) {
        const currentChar = split[i];
        if (Number.isNaN(parseInt(currentChar))) {
            nonDigits.push(currentChar);
            if (currentNumberString.length > 0) {
                genericCost += parseInt(currentNumberString);
                currentNumberString = '';
            }
        } else {
            currentNumberString += currentChar;
        }
    }
    if (currentNumberString.length > 0) {
        genericCost += parseInt(currentNumberString);
    }
    if (genericCost) {
        return [genericCost.toString(), ...nonDigits];
    }
    return nonDigits;
}
