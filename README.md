# try-styled-ppx

[![Actions Status](https://github.com//try-styled-ppx/workflows/CI/badge.svg)](https://github.com//try-styled-ppx/actions)

## [styled-ppx](https://github.com/davesnx/styled-ppx)

## Contributing

### Installing / Getting started

All the dependencies can be install via your favorite package manager:

```bash
yarn install
# Or
npm install
```

That's it! You're up and running, you can start the project with:

```bash
yarn start
# Or
npm run start
```

### Developing

Assuming you're developing with Visual Studio Code (if you're not, you should definitely give it a shot, it's awesome), all you need to develop is this extension: [vscode-reasonml](https://github.com/reasonml-editor/vscode-reasonml).

This will give you compilation errors in the editor and code intelliscence.

### Running Tests

This project uses Jest as a test framework. You can run the tests of the project with:

```bash
yarn test
# Or
npm run test
```

### Creating production builds

To create a production build of the application, you can run:

```bash
yarn build
# Or
npm run build
```

This will output the compiled files in `build/`.

### Repository Structure

The following snippet describes try-styled-ppx's repository structure.

```text
.
├── config/
|   Configuration files used to build the project, such as the webpack configuration.
│
├── public/
|   Static assets that you want to include when serving your application. 
│   The content of this folder will get copied to the production build.
│
├── src/
|   Source code of the project application.
│
├── tests/
|   Unit tests of the project.
│
├── LICENSE
│
├── package.json
│
└── README.md
```
