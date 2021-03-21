#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define OVERFLOW -2

// 表长度的初始定义
#define InitSize 100

typedef struct {
    // 存储空间的基地址
    int *elem;
    // 数组的当前长度
    int length;
    int MaxSize;
} SqList;  // 顺序表的类型定义



// 初始化表。构造一个空的线性表
int InitList(SqList *L) {
    // 构造一个空的顺序表L
    // 为顺序表分配一个大小为 InitSize 的数组空间
    L->elem = (int *)malloc(InitSize * sizeof(int));
    if(!L->elem) {
        exit(OVERFLOW);
    }
    L->length = 0;
    L->MaxSize = InitSize;
    return OK;
}

//增加动态数组长度len
int IncreaseSize(SqList *L,int len){
    //(int*)realloc(L.data,L.MaxSize+len);
	int* p=L->elem;
	L->elem = (int*)malloc((L->MaxSize+len)*sizeof(int));
	for(int i=0; i<L->length; i++){
		L->elem[i] = p[i];//将数据复制到新区域
	}
	L->MaxSize = L->MaxSize + len;
	//释放p所指向的内存区域,函数结束后p会被系统回收。
	free(p);
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
int ListInsert(SqList *L, int i, int e) {
    if (i < 1 || i > L->length+1) {
        return ERROR;
    }
    if (L->length >= L->MaxSize) {
        return ERROR;
    }
    for (int j = L->length-1; j>=i-1; j--) {
        L->elem[j+1] = L->elem[j];
    }
    L->elem[i-1] = e;
    L->length++;
    return OK;
}

// 删除操作
int ListDelete(SqList *L, int i) {
    // 在顺序表L中删除第 i 个元素，i值的合法范围是 1 <= i <= L.length
    if (i < 1 || i > L->length) {
        return ERROR;
    }
    for (int j=i; j<=L->length; j++) {
        L->elem[j-1] = L->elem[j];
    }
    L->length--;
    return OK;
}

// 按值删除
int ListDeleteByValue(SqList *L, int key) {
    int place;
    for (int i=0; i<L->length; i++) {
        if (L->elem[i] == key) {
            place = i;
            break;
        }
    }
    for (int i=place; i<L->length-1; i++) {
        L->elem[i] = L->elem[i+1];
    }
    L->length--;
    return OK;
}

// 输出操作
int PrintList(SqList L) {
    for (int i=0; i<L.length; i++) {
        printf("%d ", L.elem[i]);
    }
    printf("\n");
    return OK;
}


// 判空操作
int Empty(SqList *L) {
    if (L == NULL || L->length == 0) {
        return 0;
    }
    return 1;
}

// 销毁操作
//Status DestoryList(SqList &L){
//    L = null;
//}


int main() {
    SqList L;
    InitList(&L);

    ListInsert(&L, 1, 1);
    ListInsert(&L, 1, 2);
    ListInsert(&L, 2, 3);
    ListInsert(&L, 2, 868);
    ListInsert(&L, 1, 9);
    ListInsert(&L, 3, 123);
    ListInsert(&L, 2, 23);
    ListInsert(&L, 6, 666);
    ListInsert(&L, 62, 333);
    ListInsert(&L, 2, 99);

    PrintList(L);

    int key = GetElem(L, 2);
    printf("%d\n", key);

    int place = LocateElem(L, 2);
    printf("%d\n", place);

    ListDelete(&L, 2);
    PrintList(L);

    ListDeleteByValue(&L, 666);
    PrintList(L);

    return 0;
}


