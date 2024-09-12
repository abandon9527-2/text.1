
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct {
    int* arr;
    int capacity;
    int front;
    int rear;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* ps = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    ps->arr = (int*)malloc(sizeof(int) * (k + 1));
    ps->front = ps->rear = 0;
    ps->capacity = k;
    return ps;
}

bool myCircularQueueEnQueue(MyCircularQueue* ps, int value) {
    if ((ps->rear+1)  % (ps->capacity+1) == ps->front)
    {
        return false;
    }

    ps->arr[ps->rear++] = value;
    
    ps->rear = ps->rear  % (ps->capacity+1);
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if (obj->front == obj->rear)
    {
        return false;
    }
    obj->front++;
    obj->front = obj->front  % (obj->capacity+1);
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if (obj->front == obj->rear)
    {
        return -1;
    }
    else
    {
        return obj->arr[obj->front];
    }
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if (obj->front == obj->rear)
    {
        return -1;
    }
    else
    {
        int a;
        if (obj->rear ==  0)
        {
             a = obj->capacity-1;
        }
        else
        {
             a = obj->rear - 1;
        }
        return obj->arr[a];
    }
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    if (obj->front == obj->rear)
    {
        return true;
    }
    return false;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    if ((obj->rear + 1) % (obj->capacity + 1) == obj->front)
    {
        return true;
    }
    return false;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->arr);
    free(obj);
    obj = NULL;
}

int main()
{
    MyCircularQueue* obj = myCircularQueueCreate(3);
    myCircularQueueEnQueue(obj, 1);
    myCircularQueueEnQueue(obj, 2);
    myCircularQueueEnQueue(obj, 3);
    myCircularQueueEnQueue(obj, 4);
    myCircularQueueDeQueue(obj);
    myCircularQueueEnQueue(obj, 4);
}