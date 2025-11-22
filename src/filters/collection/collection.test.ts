import {normCardList} from "../../types";
import {barrysLand} from "../_testData/barrysLand";
import {delverOfSecrets} from "../_testData/delverOfSecrets";
import {bloodCryptOld} from "../_testData/bloodCrypt";
import {arrogantBloodlord} from "../_testData/arrogantBloodlord";
import {narcomoeba} from "../_testData/narcomoeba";
import {seasideHaven} from "../_testData/seasideHaven";
import {QueryRunner} from "../../queryRunner";
import {CachingFilterProvider} from "../index";
import {defaultDataProvider, defaultOptions, names} from "../_testData/_utils";

describe('collection filter', function () {
    const collectionId1 = "custom-collection1"
    const custom1 = normCardList([barrysLand, delverOfSecrets], collectionId1)
    const collectionId2 = "custom-collection2"
    const custom2 = normCardList([arrogantBloodlord, bloodCryptOld], collectionId2);
    const officials = normCardList([narcomoeba, seasideHaven]);
    const all = [...custom1, ...custom2, ...officials];
    const search = QueryRunner.generateSearchFunction(all, new CachingFilterProvider(defaultDataProvider));
    it("filters cards that have a specific collection", async () => {
        const result = await names(search(`collection:${collectionId1}`, defaultOptions))

        expect(result).toEqual([barrysLand.name, delverOfSecrets.name])
    })
    it('is:custom filters out official cards', async function() {
        const result = await names(search(`is:custom`, defaultOptions))

        expect(result).toEqual([arrogantBloodlord.name, barrysLand.name, bloodCryptOld.name, delverOfSecrets.name])
    })
    it('not:custom filters out custom cards', async function() {
        const result = await names(search(`not:custom`, defaultOptions))

        expect(result).toEqual([narcomoeba.name, seasideHaven.name])
    })
});