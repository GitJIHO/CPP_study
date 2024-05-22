#include <stdio.h>

int len(char *str){
    int length = 0;
    while(str[length] != '\0'){
        length ++;
    }
    return length;
}

int main() {
    char str[50];
    printf("한 개의 문자열을 입력하세요: ");
    scanf("%s",str);

    int length = len(str);
    printf("입력받은 문자열의 길이는 %d 입니다.", length);
}

