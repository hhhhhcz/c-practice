#include <stdio.h>
#include "SqList.h"

int main() {
    SqList L;
    InitList(&L);

    Insert(&L, 1, 10);
    Insert(&L, 2, 20);
    Insert(&L, 3, 30);
    PrintList(L);

    int del;
    if (Delete(&L, 2, &del)) {
        printf("删除的元素：%d\n", del);
    } else {
        printf("删除失败！\n");
    }

    PrintList(L);

    int pos = Find(L, 30);
    if (pos)
        printf("元素30的位置是：%d\n", pos);
    else
        printf("未找到元素30\n");

    return 0;
}
