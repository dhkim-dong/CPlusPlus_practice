#pragma once

// 날짜   : 2023-03-07
// 작성자 : 김동훈

int main1() 
{
	// int : 자료형 (크기 단위 byte)
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float(4), double(8)
	// i   : 변수명
	// 자료형에 다양한 종류가 있는 이유는? 담을 수 있는 크기가 다르기 때문이다.
	// 8bit = 1byte, 1024 byte = 1KB, 1024 KB = 1MB, 1024MB = 1GB, 1024GB = 1TB
	// bit에는 0과 1만 담을 수 있다. 
	// byte는 2의8승 즉 256가지를 표현할 수 있다.
	// 여기서 질문! 1바이트로 표현할 수 있는 정수의 범위는 얼마나 되는가?
	// 양의 정수는 0부터 255까지 표현할 수 있다.
	int i = 0;  // i라는 변수 이름을 가진 변수는 정수형 int크기만큼 자료를 담는 변수이다.
	unsigned char c = 0; // 양의 정수만 포함하겠다는 키워드 unsigned 

	c = 0;
	c = 255; 
	// if c에 256를 넣으면 어떻게 되나요?
	c = 256;// 0이 된다.

	// 음수가 표현되는 경우에는 어떻게 될 것인가?

	// 컴퓨터에서의 음수 표현
	// 중요한점 !! MSB 뒷자리가 50일때 -50 이런 방식이 아니라는 점!!
	// 컴퓨터 에서의 뺄샘은 음수의 덧셈이다.
	// 즉, 컴퓨터에서 음수란 양의 정수와 더 했을 때 0이 되는 값이다.
	// 예를들어,(MSB가 1이고) (8비트 일때) 127과 더해서 0이 되게 하는 값이 -127이다.
	// 2의 7승 첫번째 자리수가 0일때는 양수, 1일 때는 음수로 표현한다.
	// 양수는 0~ 127, 음수는 -1 부터 -128까지 배정
	// MSB ( Most Significant Bit) 가장 중요한 비트, 음수 양수를 판별하는 부호 비트
	// -128 ~ 0 ~ 127
	signed char c1 = 0; // signed는 생략되어 있다.
	c1 = -1;
	c1 = 255; // c1 변수에 111111111을 넣어라 => 이것은 음수형태로 -1이다.

	// c의 255와 c1의 255는 동일한 비트 값을 갖지만, 다른 관점(sign이냐 unsign이냐)으로 해석하는 것이다.

	// 보수법 : 음수를 빨리 찾는 방법. 양수 비트를 반전시킨다음에 1을 더해주면 된다.

	return 0;
}

