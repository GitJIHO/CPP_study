#include <stdio.h>
#include <stdlib.h>

struct node{
    int index;
    int data;
};

typedef struct node node;

int compare(const void *a, const void *b){
    return ((node*)a)->data - ((node *)b)->data;
}

int main() {
    int n;
    node *arr;
    scanf("%d", &n);
    arr = (node *)malloc(n*sizeof(node));
    for(int i=0; i<n; i++){
        scanf("%d", &(arr[i].data));
        arr[i].index = i;
    }
    
    qsort(arr, n, sizeof(node), compare);

    for(int i=0; i<n; i++){
        printf("%d %d\n",arr[i].index, arr[i].data);
    }

    free(arr);
}