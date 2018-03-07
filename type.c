#include <stdio.h>

int main() {
    printf("short: %lu\n", sizeof(short));
    printf("int: %lu\n", sizeof(int));
    printf("long: %lu\n", sizeof(long));
    printf("long long: %lu\n", sizeof(long long));
    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("lone double: %lu\n", sizeof(long double));
    printf("char: %lu\n", sizeof(char));
    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：type.c
   功能：終端機顯示各種型態需要的位元組數
   作者：張凱慶 */
