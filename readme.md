# i18n-format

[![CI Build](https://github.com/molingyu/i18n-format/actions/workflows/build.yaml/badge.svg)](https://github.com/molingyu/i18n-format/actions/workflows/build.yaml)

**i18n-format** is a multi-language conversion library for formatting data, used to solve the problem of multiple languages for program-generated content in games and other fields. 

Supporting singular-plural conversion,
natural language number and Arabic number conversion, date, etc.

## Format string data translation problem
Singular and plural, quantifiers, etc. have always been difficult to translate format strings. It is even more difficult for software that uses a lot of procedural content generation (such as most roguelike games).

>Why? Because translating software is very hard (contrary to what most people seem to believe) and it gets harder in a game with tons of generative content. Translating static texts on the surface is trivial – just use a base placeholder like “YouAttack” and provide an English translation (“You attack!”) and a German one (“Du greifst an!”). And there we are! So why is Biskup not doing translations?

>Ok, so you might think “Let’s just use two different templates”. But that’s not good enough. Because the change depends on the gender of the nouns. And we have three genders in German (male, female, neuter) that all make a difference. So you’d need eight templates to cover this simple example (and internal code logic that recognizes the gender for each noun and applies the correct form – which requires a lot more internal data and logic than for English were you just can fill in some blanks).

>As a consequence it’s impossible (well, with reasonable effort) to translate a procedural/generative game that creates lots of text unless you design the game for that from the very beginning. Which is yet another huge challenge for a small team. Because – among the team members of Team ADOM – we speak Spanish, German, English and Polish. And probably a couple of words in a couple of other languages. But none of us are trained linguists that immediately think of all the special rules of their languages – but the internal API needs to be designed for that. So there is ample room for many stupid mistakes. And this ignores the fact that we might want to translate to Russian or Chinese – languages we don’t know at all.

*[From developer of the famous roguelike game Ancient Domains Of Mystery](https://www.ultimate-adom.com/index.php/2018/11/22/translating-a-roguelike-game/)*

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