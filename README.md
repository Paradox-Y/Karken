# Karken

A terminal text editor written in C (inspired by classic modal editors).

## Requirements

- GCC (e.g. [MSYS2](https://www.msys2.org/) on Windows)
- A terminal that supports your locale/Unicode output

## Build

```bash
make
```

The binary is written to `build/karken` (or `build/karken.exe` on Windows).

## Run

```bash
./build/karken
```

Pass a file path to open it on startup:

```bash
./build/karken path/to/file.txt
```

## Project layout

| File        | Role                          |
|-------------|-------------------------------|
| `main.c`    | Entry point and event loop    |
| `editor.c`  | Editing commands              |
| `buffer.c`  | Text buffer                   |
| `input.c`   | Keyboard input                |
| `terminal.c`| Terminal control and rendering|
| `kraken.h`  | Shared types and declarations |

## License

Add a license file if you plan to open-source the project.
