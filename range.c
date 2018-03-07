#include <stdio.h>
#include <limits.h>

int main() {
    printf("signed char 的最小值: %d\n", SCHAR_MIN);
    printf("signed char 的最大值: %d\n", SCHAR_MAX);
    printf("unsigned char 的最大值: %d\n", UCHAR_MAX);
    printf("char 的最小值: %d\n", CHAR_MIN);
    printf("char 的最大值: %d\n", CHAR_MAX);
    printf("unsigned short 的最大值: %d\n", USHRT_MAX);
    printf("short 的最小值: %d\n", SHRT_MIN);
    printf("short 的最大值: %d\n", SHRT_MAX);
    printf("unsigned int 的最大值: %u\n", UINT_MAX);
    printf("int 的最小值: %d\n", INT_MIN);
    printf("int 的最大值: %d\n", INT_MAX);
    printf("unsigned long 的最大值: %lu\n", ULONG_MAX);
    printf("long 的最小值: %ld\n", LONG_MAX);
    printf("long 的最大值: %ld\n", LONG_MIN);
    printf("unsigned long long 的最大值: %llu\n", ULLONG_MAX);
    printf("long long 的最小值: %lld\n", LLONG_MAX);
    printf("long long 的最大值: %lld\n", LLONG_MIN);
    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：range.c
   功能：終端機顯示各種型態的最大值與最小值
   作者：張凱慶 */
