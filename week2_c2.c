#include <stdio.h>
#include <stdbool.h>

int compare(char *str1, char *str2){
    while (*str1 != '\0' && *str2 != '\0') {
        if(*str1 != *str2) {
            return 0;
        }
        else{
        str1++;
        str2++;
        }
    }
    bool result = true;
    result = (*str1 == '\0' && *str2 == '\0');
    
    return result;
}


int main() {
    char str1[50];
    char str2[50];

    printf("첫 번째 문자열을 입력하세요: ");
    scanf("%s",str1);
    printf("두 번째 문자열을 입력하세요: ");
    scanf("%s",str2);

    if(compare(str1, str2)){
        printf("두 문자열은 같습니다.");
    }
    else printf("두 문자열은 다릅니다.");
}

