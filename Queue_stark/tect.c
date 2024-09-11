#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct stark {
    int val;
    struct stark* next;
}stark;

typedef struct {
    stark* S1;
    stark* S2;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue* MQS = (MyQueue*)malloc(sizeof(MyQueue));
    MQS->S1 = MQS->S2 = NULL;
    return MQS;
}

void myQueuePush(MyQueue* obj, int x) {
    stark* ps = (stark*)malloc(sizeof(stark));
    ps->val = x;
    ps->next = obj->S1;
    obj->S1 = ps;
}

int myQueuePop(MyQueue* obj) {
    stark* temp = NULL;
    if (obj->S2 == NULL)
        while (obj->S1)
        {
            temp = obj->S1;
            obj->S1 = obj->S1->next;
            temp->next = obj->S2;
            obj->S2 = temp;
        }
    int a = obj->S2->val;
    temp = obj->S2;
    obj->S2 = obj->S2->next;
    free(temp);
    temp = NULL;
    return a;
}

int myQueuePeek(MyQueue* obj) {
    stark* temp = NULL;
    if (obj->S2 == NULL)
        while (obj->S1)
        {
            temp = obj->S1;
            obj->S1 = obj->S1->next;
            temp->next = obj->S2;
            obj->S2 = temp;
        }
    int a = obj->S2->val;
    return a;
}

bool myQueueEmpty(MyQueue* obj) {
    return obj->S1 && obj->S2;
}

void myQueueFree(MyQueue* obj) {
    while (obj->S2)
    {
        stark* temp = obj->S2;
        obj->S2 = obj->S2->next;
        free(temp);
    }
    while (obj->S1)
    {
        stark* temp = obj->S1;
        obj->S1 = obj->S1->next;
        free(temp);
    }
    free(obj);
    obj = NULL;
}


int main()
{
    MyQueue* obj = myQueueCreate();
    myQueuePush(obj, 1);
    myQueuePush(obj, 2);
    myQueuePush(obj, 3);
    myQueuePush(obj, 5);
    myQueuePush(obj, 6);
    myQueuePop(obj);
    myQueuePush(obj, 7);
    myQueuePush(obj, 8);
    myQueuePush(obj, 9);
    bool a= myQueueEmpty(obj);
}