#include <stdio.h>

int main(){
    char grade;
    char name[20];

    printf("학점:");
    scanf("%c", &grade);

    printf("이름:");
    scanf("%s", name); //배열은 &를 붙이지 않는다.
    printf("%s의 학점은 %c 입니다.", name, grade);
}