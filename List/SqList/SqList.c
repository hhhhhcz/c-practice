#include <stdio.h>
#include "SqList.h"

void InitList(SqList* L) {
    L->length = 0;
}

int IsEmpty(SqList L) {
    return L.length == 0;
}

int Length(SqList L) {
    return L.length;
}

int Insert(SqList* L, int pos, ElemType elem) {
    if (pos < 1 || pos > L->length + 1 || L->length >= MAXSIZE)
        return 0;

    for (int i = L->length - 1; i >= pos - 1; i--) {
        L->data[i + 1] = L->data[i];
    }
    L->data[pos - 1] = elem;
    L->length++;
    return 1;
}

int Delete(SqList* L, int pos, ElemType* deletedElem) {
    if (pos < 1 || pos > L->length)
        return 0;

    *deletedElem = L->data[pos - 1];
    for (int i = pos; i < L->length; i++) {
        L->data[i - 1] = L->data[i];
    }
    L->length--;
    return 1;
}

int Find(SqList L, ElemType elem) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == elem)
            return i + 1;
    }
    return 0;
}

void PrintList(SqList L) {
    printf("顺序表元素：");
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.data[i]);
    }
    printf("\n");
}
