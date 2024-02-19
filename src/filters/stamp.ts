import { FilterNode } from './base'
import { printNode } from './print'
import {PrintingFilterTuple} from "../types";

export const stampFilter = (value: string): FilterNode =>
  printNode(['stamp'], ({ printing }: PrintingFilterTuple) =>
      printing.security_stamp?.toString() === value)