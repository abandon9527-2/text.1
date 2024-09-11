#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct List
{
    int x;
    struct List* next;
}List;

typedef struct Queue
{
    struct List* head;
    struct List* tail;
}Queue;

typedef struct {
    Queue* L1;
    Queue* L2;
} MyStack;

bool myStackEmpty(MyStack* obj);

MyStack* myStackCreate() {
    MyStack* p1 = (MyStack*)malloc(sizeof(MyStack));
    Queue* ps = (Queue*)malloc(sizeof(Queue));
    Queue* ps1 = (Queue*)malloc(sizeof(Queue));
    p1->L1 = ps;
    p1->L2 = ps1;
    p1->L1->head = p1->L1->tail = NULL;
    p1->L2->tail = p1->L2->head = NULL;
    return p1;
}

void myStackPush(MyStack* obj, int x) {

    Queue* LxEmpty = obj->L1;
    Queue* LY = obj->L2;
    if (obj->L1->tail != NULL)
    {
        LxEmpty = obj->L2;
        LY = obj->L1;
    }
    List* ps = (List*)malloc(sizeof(List));
    ps->x = x;
    ps->next = NULL;
    if (LY->tail == NULL)
    {
        obj->L1->head = ps;
        obj->L1->tail = ps;
    }
    else {
        LY->tail->next = ps;
        LY->tail = LY->tail->next;
    }
}

int myStackPop(MyStack* obj) {
    Queue* LxEmpty = obj->L1;
    Queue* LY = obj->L2;
    if (obj->L1->tail != NULL)
    {
        LxEmpty = obj->L2;
        LY = obj->L1;
    }
    while (LY->head != LY->tail)
    {
        List* temp = LY->head;
        LY->head = LY->head->next;
        if (LxEmpty->tail == NULL)
        {
            LxEmpty->tail = LxEmpty->head = temp;
        }
        else {
            LxEmpty->tail->next = temp;
            LxEmpty->tail = LxEmpty->tail->next;
        }
    }
    int a = LY->head->x;
    free(LY->head);
    LY->head = LY->tail = NULL;
    if (LxEmpty->head != NULL)
    {
        LxEmpty->tail->next = NULL;
    }

    return a;

}

int myStackTop(MyStack* obj) {
    Queue* LxEmpty = obj->L1;
    Queue* LY = obj->L2;
    if (obj->L1->tail != NULL)
    {
        LxEmpty = obj->L2;
        LY = obj->L1;
    }
    while (LY->head != LY->tail)
    {
        List* temp = LY->head;

        if (LxEmpty->tail == NULL)
        {
            LxEmpty->tail = LxEmpty->head = temp;
        }
        else {
            LxEmpty->tail->next = temp;
            LxEmpty->tail = LxEmpty->tail->next;
        }
        LY->head = LY->head->next;
    }
    int a = LY->head->x;
    List* temp = LY->head;
    if(LxEmpty->head!=NULL)
    {
        LxEmpty->tail->next = temp;
        LxEmpty->tail = LxEmpty->tail->next;
        LxEmpty->tail->next = NULL;
        LY->head = LY->tail = NULL;
    }

    return a;
}

bool myStackEmpty(MyStack* obj) {
    if (obj->L1->head == NULL && obj->L2->tail == NULL)
    {
        return true;
    }
    return false;
}

void myStackFree(MyStack* obj) {

    Queue* LxEmpty = obj->L1;
    Queue* LY = obj->L2;
    if (obj->L1->tail != NULL)
    {
        LxEmpty = obj->L2;
        LY = obj->L1;
    }
    while (LY->head)
    {
        List* temp = LY->head->next;
        free(LY->head);
        LY->head = temp;
    }
    LY->head = LY->tail = NULL;
    free(obj->L1);
    free(obj->L2);
    obj->L1 = obj->L2 = NULL;
    free(obj);
    obj = NULL;

}
int main()
{
    MyStack* ps = myStackCreate();
    myStackPush(ps, 1);
    myStackPush(ps, 2);
    //myStackPush(ps, 3);
    //myStackPush(ps, 4);
    //myStackPush(ps, 5);
    //myStackPop(ps);
/*    myStackTop(ps)*/;
    //myStackTop(ps);
    myStackTop(ps);
    //myStackTop(ps);
    //myStackTop(ps);
    //myStackPop(ps);  
    myStackPop(ps);  
    //myStackPop(ps);   
    //myStackPop(ps);
    //myStackPop(ps);
    myStackFree(ps);
}