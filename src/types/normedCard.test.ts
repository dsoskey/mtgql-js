import {normCardList} from "./normedCard";
import {delverOfSecrets, ftvDelverOfSecrets} from "../filters/_testData/delverOfSecrets";
import {eomerKingOfRohan} from "../filters/_testData/eomerKingOfRohan";

describe("normCardList", function() {
    it('should ignore image_uris from single and double-faced cards', function() {
        const result = normCardList([delverOfSecrets, ftvDelverOfSecrets, eomerKingOfRohan]);

        expect(result.length).toEqual(2);
        const delver = result[0];
        for (const face of delver.card_faces) {
            expect('image_uris' in face).toEqual(false);
        }
        expect(delver.printings.length).toEqual(2);
        for(const printing of delver.printings) {
            expect('image_uris' in printing).toEqual(false);
            for (const face of printing.card_faces) {
                expect('image_uris' in face).toEqual(false);
            }
        }
        const eomer = result[1];
        expect('image_uris' in eomer).toEqual(false);
        for (const printing of eomer.printings) {
            expect('image_uris' in printing).toEqual(false);
        }
    })
})