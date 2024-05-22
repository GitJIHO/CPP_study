#include <stdio.h>
#define wow printf("wow")

void binary(int n){
    int bin;
    if (n > 0) {
        bin = n % 2;
        n = n / 2;
        binary(n);
        printf("%d\n", bin);
    }
    return;
}

int main() {
    // binary(4);

    // int n = 30;
    // double x = -0.314e4;
    // printf("%+3.1f %d",x, sizeof(x));
    // printf("%o %#o",n,n);
    // wow;

    // (n==30) ? printf("oh") : printf("yeah");

    // switch(n){
    //     case 30:
    //     printf("it's 30");
    //     break;

    //     default:
    //     printf("nooo");
    // }
    int ary[][4] = {1,2,3,4,5,6,7,8};
    int (*p)[4] = ary;

    printf("%2d, %2d\n", *(*(ary+1)+3), *(p[1]+3));
    
}