import {gristDfcDefault, gristPlaneswalker, GRISTS} from "./_testData/grist";
import {defaultRunner} from "./_testData/_utils";

describe('unique:art', () => {
    const runner = defaultRunner(GRISTS)
    it('Should handle dfcs', async function () {
        const result = (await runner.search("unique:art")).map(card => card.id);

        expect(result).toEqual([gristPlaneswalker.id, gristDfcDefault.id]);
    })
})