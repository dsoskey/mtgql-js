import { FilterType, FILTERTYPE_REPR } from './filterKeyword'
import { Prices } from '../generated'
import { Operator } from '../filters/base'

interface AstNodeCommon {
  offset: number
}
export interface AstLeaf extends AstNodeCommon {
  filter: FilterType
  unit?: keyof Prices
  operator?: Operator
  value: any
}

export interface BinaryNode extends AstNodeCommon {
  operator: "and" | "or"
  left: AstNode
  right: AstNode
}

export interface UnaryNode extends AstNodeCommon {
  operator: "negate"
  clause: AstNode
}

export type AstNode = BinaryNode | AstLeaf | UnaryNode

/**
 *  Render an S-expression for an abstract syntax tree (AST)
 * @param ast - AST to render
 * @param depth - tracks recursive depth. Callers don't need to pass in a value here.
 */
export function astSexpr(ast: AstNode, depth: number = 1): string {
  const s = " ".repeat(2 * (depth-1));
  switch (ast.operator) {
    case "negate":
      return `-(${astSexpr(ast.clause, depth + 1)})`
    case "and":
      return `${depth > 1 ? "╮\n":""}${s}&(${astSexpr(ast.left, depth + 1)}\n${s}  ${astSexpr(ast.right, depth + 1)})`
    case "or":
      return `${depth > 1 ? "╮\n":""}${s}|(${astSexpr(ast.left, depth + 1)}\n${s}  ${astSexpr(ast.right, depth + 1)})`
    default:
      return `(${FILTERTYPE_REPR[ast.filter].name}`
          + (ast.unit ? " "+ast.unit:"")
          + (ast.operator ? " "+ast.operator :"")
          + (ast.value ? ` ${ast.value})` : ")"); // JSON.stringify({...ast, filter: FILTERTYPE_REPR[ast.filter].name })
  }
}