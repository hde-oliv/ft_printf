<div align="center">
  <img src="https://i.imgur.com/6rW2BPq.png"/>
</div>
<div align="center">
  <img src="https://github.com/hde-oliv/ft_printf/actions/workflows/build.yml/badge.svg"/>
  <img src="https://github.com/hde-oliv/ft_printf/actions/workflows/norminette.yml/badge.svg"/>
  <a href="https://www.codacy.com/gh/hde-oliv/ft_printf/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=hde-oliv/ft_printf&amp;utm_campaign=Badge_Grade">
    <img src="https://app.codacy.com/project/badge/Grade/835dd5b0636c4b669f98549d34f8f50c"/>
  </a>
</div>

## What it is
This project consists of a basic copy of libc's printf.

Succeeded with 100%

## Skills
- Algorithms & AI
- Rigor
- Unix logic


## Features
It only handles basic format tags: c, s, p, d, i, u, x, X and %. Any other tag will be outputted as is. (Flags too!)
### Examples:
```c
ft_printf("%c", 'a');       --> 'a'
ft_printf("%p", -1);        --> '0xffffffff'
ft_printf("%-10s", "Hello") --> '%-10s'
ft_printf("%f");            --> '%f'
```

## How to use it
Requisites:
```shell
clang
```

Clone the repository and run:
```shell
make
```
The library is generated on the file libftprintf.a.

## Recommended suite of tests
- [ft_printf_tester - Paulo Santana](https://github.com/paulo-santana/ft_printf_tester)

## Found any bug?
Feel free to contact me or create an issue!

###### Licensed under GPLv3
