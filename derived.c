#include <stdio.h>

struct point {
    double x;
    double y;
};

typedef struct point Point;

int main() {
    //宣告陣列
    int a[10];
    printf("a[10]: %lu\n", sizeof(a));

    //宣告指標變數
    int *b;
    printf("*b: %lu\n", sizeof(b));

    //宣告結構
    Point c;
    printf("Point: %lu\n", sizeof(c));

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：derived.c
   功能：示範建立各種衍生資料型態的變數
   作者：張凱慶 */
