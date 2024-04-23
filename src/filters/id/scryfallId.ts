import {printNode} from "../print";
import {FilterNode} from "../base";

export function scryfallIdNode(scryfallId: string): FilterNode {
    return printNode(['scryfall-id'], ({ printing }) => printing.id === scryfallId)
}