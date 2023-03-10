// 날짜 : 2023-03-08
// 작성자 : 김동훈

int main2() 
{
	// 실수형 자료형을 컴퓨터가 표현하는 법
	// 실수의 소수점을 얼마만큼 표현할 것인가를 정해야 한다.
	// 부동 소수점 : 소수점 2개가 모여야 1이 된다 -> 비트당 1/2, 1/4 , 1/8 .... 을 표현하는 방식
	// 지수 부분을 표기해야한다.
	// MSB 1비트, 지수파트 표기, 2진수 비트 표기로 이루어 진다.
	// 실수형 자료는 정확한 값을 표현하기 어렵다. 따라서 근사값을 표현한다.
	// 실수를 다룰 때 간과하는 점,, mistake
	// 최종 실수의 합이 1이되어야 하는대, 값이 안맞을 때가 있다.
	// 오차를 줄일 방법을 찾거나 원인을 파악해야 한다.

	int a = 4 + 4.0; // 형 변환이 일어난다. 

	float f = 10.2145f + (float)20; // 명시적으로 변환하여 의도를 표현하자.

	// 연산자

	int data = 10 + 10; // 연산자의 우선 순위

	data = data + 20;  // 반복되는 것을 줄이기 위한 표현법
	data += 20;

	// 정수의 나눗셈, 실수의 나눗셈
	// 실수의 나누기는 오류가 뜬다. 어디까지 나눠야 할지 컴퓨터가 모르기 때문에..
	data = (int)(10. / 3.); // f가 없는 실수형 => double로 판단한다.

	++data;
	data++; // 차이점 : 가장 후순위로 실행된다. 뒤에 ++이 붙으면, 즉 다른 연산자와 함께 사용할 때 결과가 달라질 수 있다.

	int c = 10;
	data = c++; // 뒤에 ++가 붙으면 대입보다 늦게 이루어 진다. 따라서 C+1이 아닌 C가 들어간다.

	return 0;
}