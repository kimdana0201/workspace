#include <stdio.h>

/* 다중 주석
 * 변수 : 하나의 값을 저장하는 메모리 공간
 *      1. 선언 + 초기화 → int num = 4;
 *      2. 선언, 초기화  → int num; num = 4;
 *      cf. 초기화? 변수가 할당된 실제 메모리 공간에는 기존 쓰레기 파일 잔류 → 초기화를 통해 이를 삭제, 새로운 값 저장장
 *
 * "=" 대입연산자
 *  - 좌측과 우측의 값이 같다.(equal) (X) → 같다(==)
 *  - 우측의 값을 좌측에 대입한다. 
 * 
 * 변수와 상수
 *  - 변수 : 변하는 값, 한 번 생성 후 값을 여러 번 변경
 *  - 상수 : 변하지 않는 값
 *      + ex : 금리, PI
 *      + "const" 키워드 붙이면 상수 선언
 *      + 상수는 대개 대문자 사용(변수는 일반적으로 소문자 사용)
 * 
 * 자료형(Data Type)
 *  - 해당 변수에 저장할 값의 형태를 작성
 *  - int, float, double, char, array etc.
 */

int main(){
int a;      // int형 변수 a 선언
int b, c;
double da;  // double형 변수 da 선언
char ch;    // char형 변수 ch 선언 
}
a=10;       // a변수에 10 초기화
da= 3.14;   // da변수에 3.14 초기화
ch='A';     // ch 변수에 'A' 초기화
