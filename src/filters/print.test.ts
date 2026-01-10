import {gristDfcDefault, gristPlaneswalker, GRISTS} from "./_testData/grist";
import {defaultRunner} from "./_testData/_utils";
import {overflowingBasinUniversesBeyond, overflowingBasinUniversesWithin} from "./_testData/overflowingBasin";
import {preordain} from "./_testData/preordain";
import {smugglersCopterBattleBus} from "./_testData/smugglerscopter";

describe('unique:art', () => {
    const runner = defaultRunner(GRISTS)
    it('Should handle dfcs', async function () {
        const result = (await runner.search("unique:art")).map(card => card.id);

        expect(result).toEqual([gristPlaneswalker.id, gristDfcDefault.id]);
    })
})

describe('prefer', () => {
    describe(':ub', () => {
        it('should choose prints that are ub if possible', async function() {
            const corpus = [overflowingBasinUniversesBeyond, overflowingBasinUniversesWithin, preordain];

            const queryRunner = defaultRunner(corpus);

            const result = (await queryRunner.search('prefer:ub')).map(card => card.id);

            expect(result).toEqual([overflowingBasinUniversesBeyond.id, preordain.id]);
        });
    });

    describe(':notub', () => {
        it('should choose prints that are not ub if possible', async function() {
            const corpus = [overflowingBasinUniversesBeyond, overflowingBasinUniversesWithin, smugglersCopterBattleBus];

            const queryRunner = defaultRunner(corpus);

            const result = (await queryRunner.search('prefer:notub')).map(card => card.id);

            expect(result).toEqual([overflowingBasinUniversesWithin.id, smugglersCopterBattleBus.id]);
        });
    })
})