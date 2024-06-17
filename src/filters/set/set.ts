import { Filter, FilterNode } from '../base'
import { printNode } from '../print'
import { PrintingFilterTuple } from '../../types'

export const setFilter = (values: string[]): Filter<PrintingFilterTuple> =>
({ printing }) => {
    for (const value of values) {
        if (printing.set === value || printing.set_name.toLowerCase() === value) {
            return true
        }
    }
    return false;
}

export const setNode = (value: string[]): FilterNode =>
  printNode(['set'], setFilter(value))

export const setTypeFilter = (value: string): Filter<PrintingFilterTuple> =>
({ printing }) => printing.set_type === value

export const setTypeNode = (value: string): FilterNode =>
  printNode(['set-type'], setTypeFilter(value))
