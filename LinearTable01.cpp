#include <iostream>
#include <stdlib.h>

using namespace std;

#define OK 1
#define ERROR 0
#define OVERFLOW -2

// 定义线性表的最大长度
#define MAXSIZE 100

typedef struct {
    // 存储空间的基地址
    int *elem;
    // 数组的当前长度
    int length;
} SqList;  // 顺序表的类型定义



// 初始化表。构造一个空的线性表
int InitList(SqList &L) {
    // 构造一个空的顺序表L
    // 为顺序表分配一个大小为 MAXSIZE的数组空间
    L.elem = new int[MAXSIZE];
    if(!L.elem) {
        exit(OVERFLOW);
    }
    L.length = 0;
    return OK;
}

// 求表长
//Length(L);


// 按值查找操作
int LocateElem(SqList L, int e) {
    // 在顺序表中查找值为 e 的元素，返回其序号
    for (int i=0; i<L.length; i++) {
        if (L.elem[i] == e) {
            return i+1;
        }
    }
    return 0;
}

// 按位查找
int GetElem(SqList L, int i) {
    if (i < 1 || i > L.length) {
        return ERROR;
    }
    return L.elem[i-1];
}

// 插入操作
int ListInsert(SqList &L, int i, int e) {
    if (i < 1 || i > L.length+1) {
        return ERROR;
    }
    if (L.length == MAXSIZE) {
        return ERROR;
    }
    for (int j = L.length-1; j>=i-1; j--) {
        L.elem[j+1] = L.elem[j];
    }
    L.elem[i-1] = e;
    L.length++;
    return OK;
}

// 删除操作
int ListDelete(SqList &L, int i) {
    // 在顺序表L中删除第 i 个元素，i值的合法范围是 1 <= i <= L.length
    if (i < 1 || i > L.length) {
        return ERROR;
    }
    for (int j=i; j<=L.length; j++) {
        L.elem[j-1] = L.elem[j];
    }
    L.length--;
    return OK;
}

// 按值删除
int ListDeleteByValue(SqList &L, int key) {
    int place;
    for (int i=0; i<L.length; i++) {
        if (L.elem[i] == key) {
            place = i;
            break;
        }
    }
    for (int i=place; i<L.length-1; i++) {
        L.elem[i] = L.elem[i+1];
    }
    L.length--;
    return OK;
}

// 输出操作
int PrintList(SqList &L) {
    for (int i=0; i<L.length; i++) {
        printf("%d ", L.elem[i]);
    }
    printf("\n");
    return OK;
}


// 判空操作
int Empty(SqList &L) {
    if (L.length == 0) {
        return 0;
    }
    return 1;
}

// 销毁操作
//Status DestoryList(SqList &L){
//    L = NULL;
//}


int main() {
    SqList L;
    InitList(L);

    ListInsert(L, 1, 1);
    ListInsert(L, 1, 2);
    ListInsert(L, 2, 3);
    ListInsert(L, 3, 66);
    ListInsert(L, 1, 99);
    ListInsert(L, 2, 123);
    ListInsert(L, 5, 22);
    ListInsert(L, 6, 6);
    ListInsert(L, 3, 99);
    ListInsert(L, 6, 169);
    ListInsert(L, 5, 333);
    ListInsert(L, 7, 88);

    PrintList(L);

    int key = GetElem(L, 1);
    printf("%d\n", key);

    ListDelete(L, 3);
    PrintList(L);

    ListDeleteByValue(L, 66);
    PrintList(L);

    return 0;
}



