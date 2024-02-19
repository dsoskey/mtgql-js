module.exports = {
  testEnvironment: 'node',
  testMatch: ["**/src/**/*.test.[jt]s", '**/test/**/*.test.[jt]s'],
  collectCoverage: false,
  coverageReporters: ["html", "text"],
  coveragePathIgnorePatterns: ["/node_modules/", ".ne$"],
  moduleFileExtensions: ["ts", "tsx", "js", "json"],
  transform: {
    "^.+\\.(t|j)sx?$": "@swc/jest",
    "^.+\\.ne$": "jest-transform-nearley",
  },
};