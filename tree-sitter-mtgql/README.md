# tree-sitter-mtgql

This package contains the [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for [mtgql](../README.md).

## Current State

The grammar is fully implemented and compatible with mtgql-js 1.4.1. All grammar features are covered by tests (`npm run test` from this dir).
Treat the entrypoint, [grammar.js](./grammar.js), and `gsrc/` imports as the public interface: everything else in `gsrc/` is private and subject to change in a minor version bump.


## Next Steps

- Integrate with mtgql-js's filter engine backend
  - Build WASM library.
- create single source of truth of token literals to use for grammar and documentation
