import {oracleNode} from "../oracle";
import {FilterNode} from "../base";

export function oracleIdNode(oracleId: string): FilterNode {
   return oracleNode({
       filtersUsed: ["oracle-id"],
       filterFunc: card => card.oracle_id === oracleId
   })
}