# i18n-format

**i18n-format** is a multi-language conversion library for formatting data, supporting singular-plural conversion,
natural language number and Arabic number conversion, date, etc.

## Features

- **word2number**: Conversion between natural language numbers and Arabic numbers, and also supports conversion of
  numbers in different languages
- **plural**: Singular to plural conversion
- **date**: Natural language representation of dates and times

## i18n-format language support

| lang  | word2number | plural | date |
|-------|:-----------:|:------:|:----:|
| en    |      ✅      |   ❌    |  ❌   |
| zh_CN |      ❌      |   ❌    |  ❌   |
| zh_TW |      ❌      |   ❌    |  ❌   |
| ja    |      ❌      |   ❌    |  ❌   |

## Building

- Install CMake
- Install Python
- Ensure CMake and Python are in the user PATH
- Visual Studio: run `build.bat` from the command prompt
- Otherwise: run `build.sh` from a bash shell
- Results are in the build sub-folder
- On Windows you can open i18n_format.sln

## Documentation

[Manual]()

## Contributing
I18n-format welcomes users of different languages to contribute relevant implementations of their own languages.

## License

i18n-format is developed by stark233 and I18n-format contributors the MIT license.