#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define OVERFLOW -2

// 线性表最大长度
#define MAXSIZE 100


typedef struct {
    int id;
    char name[30];
    char phone[20];
} Person;

typedef struct {
    Person *elem;
    int length;
} SqList;

// init
int init(SqList *L) {
    L->elem = (Person *)malloc(MAXSIZE * sizeof(Person));
    if (!L->elem) {
        return OVERFLOW;
    }
    L->length = 0;
    return OK;
}

// insert
int insert(SqList *L, int i, Person person) {
    if (i < 1 || i > L->length+1) {
        return ERROR;
    }
    for (int j=L->length; j>i-1; j--) {
        L->elem[j+1] = L->elem[j];
    }
    L->elem[i-1] = person;
    L->length++;
    return OK;
}

// locate
int locate(SqList L, Person person) {
    for (int i=0; i<L.length; i++) {
        if (L.elem[i].id == person.id) {
            return i+1;
        }
    }
    return 0;
}

// get by item
int getByItem(SqList L, int i, Person *person) {
    if (i < 1 || i > L.length) {
        return ERROR;
    }
    *person = L.elem[i-1];
    return OK;
}

int deleteByItem(SqList *L, int i) {
    if (i < 1 || i> L->length) {
        return ERROR;
    }
    for (int j=i; j<L->length-1; j++) {
        L->elem[j] = L->elem[j+1];
    }
    L->length--;
    return OK;
}

int deleteByValue(SqList *L, Person person) {
    int place;
    for (int i=0; i<L->length; i++) {
        if (L->elem[i].id == person.id) {
            place = i;
        }
    }
    return deleteByItem(L, place+1);
}

int printList(SqList L) {
    for (int i=0; i<L.length; i++) {
        printf("%d %s %s\n", L.elem[i].id, L.elem[i].name, L.elem[i].phone);
    }
    printf("\n");
}


int main() {
    SqList L;
    init(&L);

    Person person = {
        .id = 1,
        .name = "xj",
        .phone = "15619966666"
    };


    insert(&L, 1, person);
    int place = locate(L, person);
    printf("%d\n", place);

    Person person2;
    getByItem(L, 1, &person2);
    printf("%d %s %s\n", person2.id, person2.name, person2.phone);

    printList(L);

}



