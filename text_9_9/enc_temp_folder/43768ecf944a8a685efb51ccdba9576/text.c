#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct stack {
    char* arr;
    int size;
    int capacity;
};
typedef struct stack stack;
void stackInit(stack* ps) {
    ps->capacity = 0;
    ps->size = 0;
    ps->arr = NULL;
}
void newcapacity(stack* ps) {
    int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
    char* pcur = (char*)realloc(ps->arr, newcapacity * sizeof(char));
    if (pcur) {
        ps->capacity = newcapacity;
        ps->arr = pcur;
    }
    else {
        exit(1);
    }
}
void stackpush(stack* ps, char s) {
    if (ps->size == ps->capacity)
        newcapacity(ps);
    ps->arr[ps->size] = s;
    ps->size++;
}
char stackpop(stack* ps) {
    if (ps == NULL || ps->size == 0) {
        return 'w';
    }
    else {
        return ps->arr[--ps->size];
    }
}
char iwa(char a)
{
    if (a == '{') return '}';
    if (a == '[') return ']';
    if (a == '(') return ')';
    return 0;
}
bool isValid(char* s) {
    stack s1;
    stackInit(&s1);
    while (s) {
        if (*s == '(' || *s == '{' || *s == '[') {
            stackpush(&s1, *s);
        }
        else {
            char a = stackpop(&s1);
            a = iwa(a);
            if (a != *s) {
                return false;
            }
        }
        s++;
    }
    if (s1.size) {
        return false;
    }
    return true;
}
int main()
{
    char *ss = "()";
    isValid(ss);
}