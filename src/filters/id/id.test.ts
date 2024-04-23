import {blackLotus} from "../_testData/blackLotus";
import {barrysLand} from "../_testData/barrysLand";
import {defaultRunner, searchNames} from "../_testData/_utils";

describe("id filters", function() {
    const corpus = [blackLotus, barrysLand];
    const runner = defaultRunner(corpus);
    describe('oracleid', function () {
        it('should match ids exactly', async function () {
            const result = await searchNames(runner, `oracleid:${barrysLand.oracle_id}`);

            expect(result).toEqual([barrysLand.name]);
        });
    });

    describe('scryfallid', function () {
        it('should match ids exactly', async function () {
            const result = await searchNames(runner, `scryfallid:${barrysLand.id}`);

            expect(result).toEqual([barrysLand.name]);
        });
    });
})