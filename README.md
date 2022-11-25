# Pokémon Championship

Developing a Pokémon-like multiplayer turn-based battle game with C++.

## Team

| Arnold Félix | Alexandros Kossifidis | Rémi Ovazza | Jathurchan Selvakumar |
| ------------ | --------------------- | ----------- | --------------------- |

## Requirements

This is our final year project in Systems Engineering specialization at ENSEA. It must meet the following requirements:

- Design and develop a turn-based game based on an existing one.
- Use C++ programming language.
- Automatically generate all header files from UML class diagrams using *Dia2Code*.
- Use SFML APIs only for rendering.
- Allow several players to play together (client-server).
- Implement 3 different types of AI.

## Game Rules

Turn-based Pokémon duels based on a championship system.

[Learn more](/docs/game-rules.md)

## Build and Test Locally

1. `mkdir build && cd build`
2. `cmake ..`
3. `cmake --build . --target code-coverage`
4. `make`
5. `cd ..`
6. `./bin/client` (for example)
7. `gprof ./bin/client gmon.out > analysis.txt`

## Repository

- cmake
- docs
- extern
- lib
- res
- src
- test

## Appendices

- [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)