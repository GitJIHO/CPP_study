#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *link;
} Node;

int func(int d){
    return d / 2;
}

void printNode(Node *head){
    Node *p = head;
    if (p == NULL) return;
    while( p->link != NULL ){
        printf("%d ",p->data);
        p = p->link;
    }
    printf("\n");
}

int main(){
    Node *first = NULL;
    int result, i;
    int arry[5] = {1,6,7,9,4};

    for(i=4;i>=0;i--){
        Node *p = (Node*)malloc(sizeof(Node));
        p->data = arry[i];
        p->link = first;
        first = p;
        result += arry[i];
    }
    printf("Res:%d", result);
    printNode(first);
}

/*
Res:271 6 7 9
*/