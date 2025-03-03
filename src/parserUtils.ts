import {AstLeaf, FilterType, FILTERTYPE_REPR, NearlyError} from "./types";

export function parseEnumToken(
    filterType: FilterType,
    filterToken: { offset: number },
    valueToken: { offset: number, value: any },
    operatorToken?: { offset: number, value: any }
): AstLeaf {
    const {value} = valueToken;
    const typeRepr = FILTERTYPE_REPR[filterType];
    const aliasedValue = typeRepr.aliasValues?.[value] ?? value;
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