# mtgql-js
magic: the gathering query language library, javascript edition

## Installation

```shell
npm install --save mtgql
```

## Usage

```typescript
import { QueryRunner, Card, DataProvider, MemoryDataProvider } from "mtgql";

// often loaded from scryfall bulk data 
const cards: Card[] = [...];

const dataProvider: DataProvider = new MemoryDataProvider({
    cubes: [...],
    otags: [...],
    atags: [...],
    blocks: [...],
});

const queryRunner = new QueryRunner({ corpus: cards, dataProvider });

const result = await queryRunner.search("t:creature c:ur")
result
    .map((cards: EnrichedCard[]) => {
        // use cards as you see fit
    })
    .mapErr((err) => {
        // handle search errors
    })
```

## Development

```shell
git clone git@github.com:dsoskey/mtgql-js.git
cd mtgql-js
# see package.json for build subcommands
npm run build
```