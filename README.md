# ft_printf

## What is it?
A simple reimplementation of C function [printf](https://en.wikipedia.org/wiki/Printf).

**Succeeded with 100%**

## Skills
- Algorithms & AI
- Rigor
- Unix logic


## Features
It only handles the following format tags: c, s, p, d, i, u, x, X and %.  
Any other tag will be outputted as is (including flags).  

### Examples:
```c
ft_printf("%c", 'a');       --> 'a'
ft_printf("%p", -1);        --> '0xffffffff'
ft_printf("%-10s", "Hello") --> '%-10s'
ft_printf("%f");            --> '%f'
```

## How to use it
Requirements:
```shell
sudo apt install clang
```

Clone the repository and run:
```shell
make
```
The library is generated on the file libftprintf.a.

## Recommended suite of tests
- [ft_printf_tester - Paulo Santana](https://github.com/paulo-santana/ft_printf_tester)

## Found any bugs?
Feel free to contact me or create an issue!

## License
This project is licensed under the GNU General Public License v3.0 - see the [COPYING](https://github.com/hde-oliv/ft_printf/blob/master/COPYING) file for details.
