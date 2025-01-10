# include <stdio.h>

// Format
// - Decimal    : %d
// - Float      : %f
// - Character  : %c 
// - String     : %s

int main(){
printf("%d\n", 10);         // %d 위치에 10 출력!
printf("%.1lf\n", 3.45);    // %lf 위치에 3.45 출력, 소수점 첫 번째 자리까지 반올림해서 출력!
printf("%d와 %d의 합은 %d입니다.", 10, 20, 10+20);
}