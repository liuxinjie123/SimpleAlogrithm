#include <iostream>
#include <stdlib.h>

using namespace std;

#define OK 1
#define ERROR 0
#define OVERFLOW -2

// �������Ա����󳤶�
#define MAXSIZE 100

typedef struct {
    // �洢�ռ�Ļ���ַ
    int *elem;
    // ����ĵ�ǰ����
    int length;
} SqList;  // ˳�������Ͷ���



// ��ʼ��������һ���յ����Ա�
int InitList(SqList &L) {
    // ����һ���յ�˳���L
    // Ϊ˳������һ����СΪ MAXSIZE������ռ�
    L.elem = new int[MAXSIZE];
    if(!L.elem) {
        exit(OVERFLOW);
    }
    L.length = 0;
    return OK;
}

// ���
//Length(L);


// ��ֵ���Ҳ���
int LocateElem(SqList L, int e) {
    // ��˳����в���ֵΪ e ��Ԫ�أ����������
    for (int i=0; i<L.length; i++) {
        if (L.elem[i] == e) {
            return i+1;
        }
    }
    return 0;
}

// ��λ����
int GetElem(SqList L, int i) {
    if (i < 1 || i > L.length) {
        return ERROR;
    }
    return L.elem[i-1];
}

// �������
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

// ɾ������
int ListDelete(SqList &L, int i) {
    // ��˳���L��ɾ���� i ��Ԫ�أ�iֵ�ĺϷ���Χ�� 1 <= i <= L.length
    if (i < 1 || i > L.length) {
        return ERROR;
    }
    for (int j=i; j<=L.length; j++) {
        L.elem[j-1] = L.elem[j];
    }
    L.length--;
    return OK;
}

// ��ֵɾ��
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

// �������
int PrintList(SqList &L) {
    for (int i=0; i<L.length; i++) {
        printf("%d ", L.elem[i]);
    }
    printf("\n");
    return OK;
}


// �пղ���
int Empty(SqList &L) {
    if (L.length == 0) {
        return 0;
    }
    return 1;
}

// ���ٲ���
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



