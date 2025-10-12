import {kroxaTitanOfDeathsHunger} from "../_testData/kroxaTitanOfDeathsHunger";
import {tajuruPreserver} from "../_testData/tajuruPreserver";
import {chameleonColossus} from "../_testData/chameleonColossus";
import {norinTheWary} from "../_testData/norinTheWary";
import {asymmetrySage} from "../_testData/asymmetrySage";
import {yawgmothThranPhysician} from "../_testData/yawgmothThranPhysician";
import {merfolkSpy} from "../_testData/merfolkSpy";
import { defaultRunner, searchNames} from "../_testData/_utils";
import {cloudPirate} from "../_testData/cloudPirate";
import {faerieDreamthief} from "../_testData/faerieDreamthief";
import {soldierOfFortune} from "../_testData/soldierOfFortune";
import {avenHeartstabber} from "../_testData/avenHeartstabber";
import {sunpetalGroveNew, sunpetalGroveOld} from "../_testData/sunpetalGrove";
import {preordain} from "../_testData/preordain";
import {negate} from "../_testData/negate";
import {lich} from "../_testData/lich";
import {blackLotus} from "../_testData/blackLotus";
import {invasionOfTarkir} from "../_testData/invasionOfTarkir";
import {emberethShieldbreaker} from "../_testData/emberethShieldbreaker";
import {seaGateRestoration} from "../_testData/seaGateRestoration";
import {bedeckBedazzle} from "../_testData/bedeckBedazzle";
import {torstenVonUrsus} from "../_testData/torstenVonUrsus";
import {collectThemAll} from "../_testData/collectThemAll";
import {bonecrusherGiant} from "../_testData/bonecrusherGiant";
import {alpineMeadow} from "../_testData/alpineMeadow";

describe('is filters', function () {
    describe('default', function() {
        it('should find cards that have default-coded frame effects', async function () {
            const corpus = [
                alpineMeadow, // snow
                kroxaTitanOfDeathsHunger, //legendary
                soldierOfFortune, // frame_effects: undefined,
                bonecrusherGiant, // showcase
            ]
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:default");

            expect(result).toEqual([alpineMeadow.name, kroxaTitanOfDeathsHunger.name, soldierOfFortune.name])
        });
    })

    describe('etb', function () {
        it('should find cards that have an ability related to entering the battlefield', async function () {
            const corpus = [kroxaTitanOfDeathsHunger, soldierOfFortune, sunpetalGroveOld];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "has:etb");

            expect(result).toEqual([kroxaTitanOfDeathsHunger.name, sunpetalGroveOld.name])
        });
    });

    describe('party', function () {
        it('should find cards with a party type', async function () {
            const corpus = [kroxaTitanOfDeathsHunger, norinTheWary, asymmetrySage, yawgmothThranPhysician, merfolkSpy];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:party");

            expect(result).toEqual([
                asymmetrySage.name,
                merfolkSpy.name,
                norinTheWary.name,
                yawgmothThranPhysician.name,
            ])
        })
        it('should find cards with changeling', async function () {
            const corpus = [kroxaTitanOfDeathsHunger, chameleonColossus];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:party");

            expect(result).toEqual([chameleonColossus.name])
        });
        it("should find cards that are granted a party type by an ability", async function () {
            const corpus = [kroxaTitanOfDeathsHunger, tajuruPreserver];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:party");

            expect(result).toEqual([tajuruPreserver.name])
        })
    })

    describe('outlaw', function () {
        it('should find cards with an outlaw type', async function () {
            const corpus = [kroxaTitanOfDeathsHunger, avenHeartstabber, cloudPirate, faerieDreamthief, merfolkSpy, soldierOfFortune];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:outlaw");

            expect(result).toEqual([
                avenHeartstabber.name,
                cloudPirate.name,
                faerieDreamthief.name,
                merfolkSpy.name,
                soldierOfFortune.name,
            ])
        })
        it('should find cards with changeling', async function () {
            const corpus = [kroxaTitanOfDeathsHunger, chameleonColossus];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:outlaw");

            expect(result).toEqual([chameleonColossus.name])
        });
        it("should find cards that are granted an outlaw type by an ability", async function () {
            const corpus = [kroxaTitanOfDeathsHunger, tajuruPreserver];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:outlaw");

            expect(result).toEqual([tajuruPreserver.name])
        })
    })

    describe('permanent', function () {
        it('should find all permanent types', async function () {
            const corpus = [kroxaTitanOfDeathsHunger, sunpetalGroveOld, preordain, negate, lich, blackLotus, invasionOfTarkir,];
            const queryRunner = defaultRunner(corpus);
            const result = await searchNames(queryRunner, "is:permanent");

            expect(result).toEqual([
                blackLotus.name,
                invasionOfTarkir.name,
                kroxaTitanOfDeathsHunger.name,
                lich.name,
                sunpetalGroveOld.name,
            ]);
        });
        it('should find permanents with instant or sorcery in a card face', async function () {
            const corpus = [emberethShieldbreaker, negate, seaGateRestoration];
            const queryRunner = defaultRunner(corpus);
            const result = await searchNames(queryRunner, "is:permanent");

            expect(result).toEqual([
                emberethShieldbreaker.name,
                seaGateRestoration.name,
            ]);
        });
    });

    describe("vanilla", function() {
        it('should handle cards with card_faces', async function () {
            const corpus = [bedeckBedazzle, torstenVonUrsus, emberethShieldbreaker, collectThemAll];
            const queryRunner = defaultRunner(corpus);
            const result = await searchNames(queryRunner, "is:vanilla");

            expect(result).toEqual([emberethShieldbreaker.name, torstenVonUrsus.name]);
        });
    })

    describe('checkland', function() {
        [
            { type: 'old', card: sunpetalGroveOld },
            { type: 'new', card: sunpetalGroveNew },

        ].forEach((testCase) => {
            it (`should handle ${testCase.type} checkland oracle text`, async function()  {
                const corpus = [testCase.card];
                const queryRunner = defaultRunner(corpus);
                const result = await searchNames(queryRunner, "is:checkland");

                expect(result).toEqual([testCase.card.name]);
            })
        })

    })
});