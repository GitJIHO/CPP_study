#include <stdio.h>

int fac(int n){
    int result = 1;
    for(int i=2; i<=n; i++){
        result *= i;
    }
    return result;
}


int main(){
    int n;
    scanf("%d", &n);

    printf("%d",fac(n));
}