/**
 * 명명규칙(Naming Rule) (어떤 언어든 공동으로 쓰이고 있는 룰이다. 외워)
 * 1. 알파벳 대문자(A~Z), 소문자(a~z), 숫자(0~9), 특수문자(_)만 사용 가능
 * 2. 첫 글자는 숫자 사용 불가능
 *    + ex) int 1a; (X), int a1; (O) 
 *    + ex) int a b; (X), int a_b; (O)
 *    + ex) int a-b; (X), int a_b; (O)
 *    + ex) 1ABC; (X), ABC1; (O)
 * 3. 대문자와 소문자는 다르게 인식
 *    + ex) ABC != Abc != abc (같지 않음)
 * 4. 예약어 사용 불가능
 *    + ex) 프로그래밍 언어에서 이미 사용하고 있는 키워드
 *    main, printf, sizeof
 * 
 * 네이밍 케이스 (합성어 표현)
 * ex) student + number (학번)
 * C : Class(객체)
 * M : Method(함수)
 * V : Variable(변수)
 * 
 * 1. 파스칼 케이스 → Age, StudentNumber (첫글자를 대문자로 씀)
 * 2. 카멜 케이스 → age, studentNumber (첫글자를 소문자로 씀)
 *    - 자바에서 많이 사용, C(V, M), JAVA(V, M), JSON
 * 3. 스네이크 케이스 → age, student_number (전부 소문자, 언더바)
 *    - Python(V, M)
 * 4. 케밥 케이스 → age, student-number (소문자, 대쉬 사용)
 *    - 웹디자인(HTML, CSS)
 * 
 */

// JAVA 예시
// StudentNumber → Class
// studentNumber → Method (소괄호 있으면)
// studentNumers → Variable (변수)