# C-Variable-Type

此專案示範 C 的變數與型態。

於 64 位元電腦編譯執行 type.c ，如下

```
$ gcc type.c
$ a.out
short: 2
int: 4
long: 8
long long: 8
float: 4
double: 8
lone double: 16
char: 1
$
```

於 64 位元電腦編譯執行 range.c ，如下

```
$ gcc range.c
$ a.out
signed char 的最小值: -128
signed char 的最大值: 127
unsigned char 的最大值: 255
char 的最小值: -128
char 的最大值: 127
unsigned short 的最大值: 65535
short 的最小值: -32768
short 的最大值: 32767
unsigned int 的最大值: 4294967295
int 的最小值: -2147483648
int 的最大值: 2147483647
unsigned long 的最大值: 18446744073709551615
long 的最小值: 9223372036854775807
long 的最大值: -9223372036854775808
unsigned long long 的最大值: 18446744073709551615
long long 的最小值: 9223372036854775807
long long 的最大值: -9223372036854775808
$
```

於 64 位元電腦編譯執行 range.c ，如下

```
$ gcc range.c
$ a.out
a[10]: 40
*b: 8
Point: 16
$
```
