```
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
```

### Deal with minus signs, exemples:

`ft_atoi("-233", 10);` return `-233`

`ft_atoi("--233", 10);` return `0`

`ft_atoi("-2-33", 10);` return `-2`

`ft_atoi("-2147483648", 10);` return `-2147483648`

### Other outputs:

`ft_atoi("2147483647", 10);` return `2147483647`

`ft_atoi("+2147483647", 10);` return `2147483647`

### Exemple of converting:

<img width="417" alt="Screen Shot 2023-02-14 at 11 43 00 AM" src="https://user-images.githubusercontent.com/109855801/218731548-db7ecef5-e0b0-456b-91d9-9033c3f05024.png">


- 25 in octal to decimal
`ft_atoi("25", 8);`

25<sub>8</sub> = ((2 x 8<sup>1</sup>) + (5 x 8<sup>0</sup>))<sub>10</sub>

25<sub>8</sub> = ((2 x 8) + (5 x 1))<sub>10</sub>

25<sub>8</sub> = (16 + 5)<sub>10</sub>

25<sub>8</sub> = 21<sub>10</sub>

- 11101<sub>2</sub> in binary to decimal
`ft_atoi("11101", 2);`

11101<sub>2</sub> = ((1 x 2<sup>4</sup>) + (1 x 2<sup>3</sup>) + (1 x 2<sup>2</sup>) + (0 x 2<sup>1</sup>) + (1 x 2<sup>0</sup>))<sub>10</sub>

11101<sub>2</sub> = ((1 x 16) + (1 x 8) + (1 x 4) + (0 x 2) + (1 x 1))<sub>10</sub>

11101<sub>2</sub> = (16 + 8 + 4 + 0 + 1)<sub>10</sub>

11101<sub>2</sub> = 29<sub>10</sub>

