import {adantoVanguard} from "../_testData/adantoVanguard";
import {ancientStirrings} from "../_testData/ancientStirrings";
import {defaultRunner, searchNames} from "../_testData/_utils";
import {birdsOfParadise} from "../_testData/birdsOfParadise";

describe('order', () => {
    const corpus = [adantoVanguard, ancientStirrings, birdsOfParadise];
    const queryRunner = defaultRunner(corpus);

    it("handles order:name", async () => {
        const result = await searchNames(queryRunner, "* order:name");

        expect(result).toEqual([adantoVanguard.name, ancientStirrings.name, birdsOfParadise.name])
    })

    it("handles order:mv", async () => {
        const result = await searchNames(queryRunner, "* order:mv");

        expect(result).toEqual([ancientStirrings.name, birdsOfParadise.name, adantoVanguard.name])
    })

    it("handles order:cmc", async () => {
        const result = await searchNames(queryRunner, "* order:cmc");

        expect(result).toEqual([ancientStirrings.name, birdsOfParadise.name, adantoVanguard.name])
    })


    it("handles order:artist", async () => {
        const result = await searchNames(queryRunner, "* order:artist");

        expect(result).toEqual([adantoVanguard.name, birdsOfParadise.name, ancientStirrings.name])
    })

    it("handles order:released", async () => {
        const result = await searchNames(queryRunner, "* order:released");

        expect(result).toEqual([birdsOfParadise.name, adantoVanguard.name, ancientStirrings.name])
    })
    it("handles order:spoiled", async () => {
        const result = await searchNames(queryRunner, "* order:spoiled");

        expect(result).toEqual([birdsOfParadise.name, adantoVanguard.name, ancientStirrings.name])
    })

    it("handles order:cube", async () => {
        const result = await searchNames(queryRunner, "* order:cube");

        expect(result).toEqual([adantoVanguard.name, ancientStirrings.name, birdsOfParadise.name])
    })

    it("handles order:wc", async () => {
        const result = await searchNames(queryRunner, "* order:wc");

        expect(result).toEqual([birdsOfParadise.name, adantoVanguard.name, ancientStirrings.name])
    })

    it("handles order:fwc", async () => {
        const result = await searchNames(queryRunner, "* order:fwc");

        expect(result).toEqual([birdsOfParadise.name, adantoVanguard.name, ancientStirrings.name])
    })

    it("handles order:color", async () => {
        const result = await searchNames(queryRunner, "* order:color");

        expect(result).toEqual([adantoVanguard.name, ancientStirrings.name, birdsOfParadise.name])
    })

    it("handles order:power", async () => {
        const result = await searchNames(queryRunner, "* order:power");

        expect(result).toEqual([ancientStirrings.name, birdsOfParadise.name, adantoVanguard.name])
    })

    it("handles order:toughness", async () => {
        const result = await searchNames(queryRunner, "* order:toughness");

        expect(result).toEqual([ancientStirrings.name, adantoVanguard.name, birdsOfParadise.name])
    })

    it("handles order:penny", async () => {
        const result = await searchNames(queryRunner, "* order:penny");

        expect(result).toEqual([birdsOfParadise.name, ancientStirrings.name, adantoVanguard.name])
    })

    it("handles order:edhrec", async () => {
        const result = await searchNames(queryRunner, "* order:edhrec");

        expect(result).toEqual([ancientStirrings.name, adantoVanguard.name, birdsOfParadise.name])
    })
    it("handles dir:ascending", async () => {
        const result = await searchNames(queryRunner, "* order:edhrec dir:asc");

        expect(result).toEqual([birdsOfParadise.name, adantoVanguard.name, ancientStirrings.name])
    })

    it("handles order:set", async () => {
        const result = await searchNames(queryRunner, "* order:set");

        expect(result).toEqual([birdsOfParadise.name, adantoVanguard.name, ancientStirrings.name])
    })

    it("handles order:usd", async () => {
        const result = await searchNames(queryRunner, "* order:usd");

        expect(result).toEqual([birdsOfParadise.name, ancientStirrings.name, adantoVanguard.name])
    })

    it("handles order:tix", async () => {
        const result = await searchNames(queryRunner, "* order:tix");

        expect(result).toEqual([ancientStirrings.name, birdsOfParadise.name, adantoVanguard.name])
    })

    it("handles order:eur", async () => {
        const result = await searchNames(queryRunner, "* order:eur");

        expect(result).toEqual([birdsOfParadise.name, ancientStirrings.name, adantoVanguard.name])
    })


});