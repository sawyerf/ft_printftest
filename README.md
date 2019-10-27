# ft_printftest

## Description
Tester for ft_printf, with 7765 tests.

## Installation
1.  Change the value of **FT_PRINTF** in the makefile with the path of your ft_printf.
2.  Run `make` or `make malloc` (if you want to test the protection of your malloc).
3.  You can now run `./test`.

## Commands
```
Usage:
./test [-d] [type] [repetition]

Options:
-d   Print debug message
```

## Example
- Debug %s:
```
./test -d s
```

- Speedtest with 500 repetitions:
```
./test 500
```

## Screenshot
![Screenshot](https://sawyerf.github.io/ft_printftest/screenshot.png)
