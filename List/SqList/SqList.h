#ifndef SQLIST_H
#define SQLIST_H

#define MAXSIZE 100
typedef int ElemType;

// 顺序表结构体定义
typedef struct {
    ElemType data[MAXSIZE];
    int length;
} SqList;

// 函数声明
void InitList(SqList* L);
int IsEmpty(SqList L);
int Length(SqList L);
int Insert(SqList* L, int pos, ElemType elem);
int Delete(SqList* L, int pos, ElemType* deletedElem);
int Find(SqList L, ElemType elem);
void PrintList(SqList L);

#endif // SQLIST_H
