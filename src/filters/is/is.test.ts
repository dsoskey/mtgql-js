import {kroxaTitanOfDeathsHungerNew, kroxaTitanOfDeathsHungerOld} from "../_testData/kroxaTitanOfDeathsHunger";
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
import {emrakulTheAeonsTorn} from "../_testData/emrakulTheAeonsTorn";
import {bloodCryptNew, bloodCryptOld} from "../_testData/bloodCrypt";
import {gruulTurfNew, gruulTurfOld} from "../_testData/gruulTurf";
import {seachromeCoastNew, seachromeCoastOld} from "../_testData/seachromeCoast";
import {jwarIsleRefugeNew, jwarIsleRefugeOld} from "../_testData/jwarIsleRefuge";
import {shineshadowSnarlNew, shineshadowSnarlOld} from "../_testData/shineshadowSnarl";
import {templeOfMaladyNew, templeOfMaladyOld} from "../_testData/templeOfMalady";
import {prairieStreamNew, prairieStreamOld} from "../_testData/prairieStream";
import {rejuvenatingSpringsNew, rejuvenatingSpringsOld} from "../_testData/rejuvenatingSprings";
import {stormCarvedCoastNew, stormCarvedCoastOld} from "../_testData/stormcarvedCoast";
import {hedgeMaze, hedgeMazeNew, hedgeMazeOld} from "../_testData/hedgeMaze";
import {blightstepPathway} from "../_testData/blightstepPathway";

describe('is filters', function () {
    describe('default', function() {
        it('should find cards that have default-coded frame effects', async function () {
            const corpus = [
                alpineMeadow, // snow
                emrakulTheAeonsTorn, //legendary
                kroxaTitanOfDeathsHungerOld, // promo_type: stamped
                soldierOfFortune, // frame_effects: undefined,
                bonecrusherGiant, // showcase
            ]
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:default");

            expect(result).toEqual([alpineMeadow.name, emrakulTheAeonsTorn.name, soldierOfFortune.name])
        });
    })

    describe('etb', function () {
        it('should find cards that have an ability related to entering the battlefield (old wording)', async function () {
            const corpus = [kroxaTitanOfDeathsHungerOld, soldierOfFortune, sunpetalGroveOld];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "has:etb");

            expect(result).toEqual([kroxaTitanOfDeathsHungerOld.name, sunpetalGroveOld.name])
        });
        it('should find cards that have an ability related to entering the battlefield (new wording)', async function () {
            const corpus = [kroxaTitanOfDeathsHungerNew, soldierOfFortune, sunpetalGroveNew];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "has:etb");

            expect(result).toEqual([kroxaTitanOfDeathsHungerNew.name, sunpetalGroveNew.name])
        });
    });

    describe('party', function () {
        it('should find cards with a party type', async function () {
            const corpus = [kroxaTitanOfDeathsHungerOld, norinTheWary, asymmetrySage, yawgmothThranPhysician, merfolkSpy];
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
            const corpus = [kroxaTitanOfDeathsHungerOld, chameleonColossus];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:party");

            expect(result).toEqual([chameleonColossus.name])
        });
        it("should find cards that are granted a party type by an ability", async function () {
            const corpus = [kroxaTitanOfDeathsHungerOld, tajuruPreserver];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:party");

            expect(result).toEqual([tajuruPreserver.name])
        })
    })

    describe('outlaw', function () {
        it('should find cards with an outlaw type', async function () {
            const corpus = [kroxaTitanOfDeathsHungerOld, avenHeartstabber, cloudPirate, faerieDreamthief, merfolkSpy, soldierOfFortune];
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
            const corpus = [kroxaTitanOfDeathsHungerOld, chameleonColossus];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:outlaw");

            expect(result).toEqual([chameleonColossus.name])
        });
        it("should find cards that are granted an outlaw type by an ability", async function () {
            const corpus = [kroxaTitanOfDeathsHungerOld, tajuruPreserver];
            const queryRunner = defaultRunner(corpus)
            const result = await searchNames(queryRunner, "is:outlaw");

            expect(result).toEqual([tajuruPreserver.name])
        })
    })

    describe('permanent', function () {
        it('should find all permanent types', async function () {
            const corpus = [kroxaTitanOfDeathsHungerOld, sunpetalGroveOld, preordain, negate, lich, blackLotus, invasionOfTarkir,];
            const queryRunner = defaultRunner(corpus);
            const result = await searchNames(queryRunner, "is:permanent");

            expect(result).toEqual([
                blackLotus.name,
                invasionOfTarkir.name,
                kroxaTitanOfDeathsHungerOld.name,
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

    describe('dual land filters', function () {
        [
            { filter: 'battleland', wordingType: 'old', card: prairieStreamOld },
            { filter: 'battleland', wordingType: 'new', card: prairieStreamNew },
            { filter: 'bondland', wordingType: 'old', card: rejuvenatingSpringsOld },
            { filter: 'bondland', wordingType: 'new', card: rejuvenatingSpringsNew },
            { filter: 'checkland', wordingType: 'old', card: sunpetalGroveOld },
            { filter: 'checkland', wordingType: 'new', card: sunpetalGroveNew },
            { filter: 'karoo', wordingType: 'old', card: gruulTurfOld },
            { filter: 'karoo', wordingType: 'new', card: gruulTurfNew },
            { filter: 'fastland', wordingType: 'old', card: seachromeCoastOld },
            { filter: 'fastland', wordingType: 'new', card: seachromeCoastNew },
            { filter: 'gainland', wordingType: 'old', card: jwarIsleRefugeOld },
            { filter: 'gainland', wordingType: 'new', card: jwarIsleRefugeNew },
            { filter: 'scryland', wordingType: 'old', card: templeOfMaladyOld },
            { filter: 'scryland', wordingType: 'new', card: templeOfMaladyNew },
            { filter: 'shockland', wordingType: 'old', card: bloodCryptOld },
            { filter: 'shockland', wordingType: 'new', card: bloodCryptNew },
            { filter: 'snarl', wordingType: 'old', card: shineshadowSnarlOld },
            { filter: 'snarl', wordingType: 'new', card: shineshadowSnarlNew },
            { filter: 'slowland', wordingType: 'old', card: stormCarvedCoastOld },
            { filter: 'slowland', wordingType: 'new', card: stormCarvedCoastNew },
            { filter: 'surveilland', wordingType: 'old', card: hedgeMazeOld },
            { filter: 'surveilland', wordingType: 'new', card: hedgeMazeNew },
            { filter: 'pathway', wordingType: '', card: blightstepPathway },
        ].forEach(({ filter, wordingType, card}) => {
            it (`should handle ${wordingType} ${filter} oracle text`, async function()  {
                const corpus = [card];
                const queryRunner = defaultRunner(corpus);
                const result = await searchNames(queryRunner, `is:${filter}`);

                expect(result).toEqual([card.name]);
            })
        })
    })
});