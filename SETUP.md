# C Setup

## GCC

GCC is a widely used C compiler. On Debian/Ubuntu:

```bash
sudo apt update
sudo apt install build-essential
```

Check:

```bash
gcc --version
```

On Windows, use a current GCC distribution such as MinGW-w64, or use WSL. On macOS, install Xcode Command Line Tools with `xcode-select --install` and use Clang if GCC is not available.

## Editor

VS Code, Vim, Neovim, Code::Blocks, or another editor is fine. The editor is not the skill. Your ability to understand compiler output is.

## Compile correctly

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic -Wconversion -Wshadow -Wformat=2 main.c -o main
```

For multiple source files:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic main.c helpers.c -o app
```

## Recommended workflow

1. Create or open a `.c` file.
2. Write a small change.
3. Compile.
4. Read every warning.
5. Run the program.
6. Test normal and edge inputs.
7. Only then add the next feature.

## Sanitizers

When available, use AddressSanitizer and UndefinedBehaviorSanitizer during development:

```bash
gcc -std=c17 -Wall -Wextra -g -fsanitize=address,undefined program.c -o program
```

Sanitizers are development tools, not substitutes for understanding memory safety.

