import {FilterNode} from '../base'
import {printNode} from '../print'
import _isEqual from 'lodash/isEqual'
import {Printing} from "../../types";
import {CardFinish, Game} from "../../generated";
import {ObjectValues} from "../../types/common";

export const NEW_VALUES_MAP = {
  rarity: "rarity",
  flavor: "flavor",
  art: "art",
  artist: "artist",
  frame: "frame",
  language: "language",
  game: "game",
  paper: "paper",
  mtgo: "mtgo",
  arena: "arena",
  nonfoil: "nonfoil",
  foil: "foil"
} as const
export type NewValue = ObjectValues<typeof NEW_VALUES_MAP>
export const NEW_VALUES = Object.keys(NEW_VALUES_MAP);

export function newFilter(value: NewValue): FilterNode {
  return printNode(["new"], ({printing, card}) => {
    let getField: (print: Printing) => any;
    switch (value) {
      case 'game': {
        const games = new Set();
        for (const p of card.printings) {
          if (p.id === printing.id) {
            break;
          }
          p.games.forEach(it => games.add(it));
        }
        return printing.games.find(it => !games.has(it)) !== undefined
      }
      case 'paper':
      case 'mtgo':
      case 'arena': // new:arena is adding a bunch of extra cards, looking like from not main sets
        return (!printing.reprint && printing.games.includes(Game[value]))
          || _isEqual(card.printings.find(it => it.games.includes(Game[value])), printing)
      case 'rarity':
        getField = (current) => current.rarity;
        break;
      case 'flavor':
        getField = (current) => current.flavor_text;
        break;
      case 'art':
        getField = (current) => current.illustration_id;
        break;
      case 'artist':
        getField = (current) => current.artist;
        break;
      case 'frame':
        getField = (current) => current.frame;
        break;
      case 'language':
        getField = (current) => current.lang;
        break;
      case 'nonfoil':
      case 'foil':
        getField = (current) => current.finishes.includes(CardFinish[value])
    }
    return _isEqual(card.printings.find(it => getField(it) !== undefined && getField(it) === getField(printing)), printing)
  })
}