#include <iostream>
#include <stdio.h> // ǥ�� ����� �Լ� ���
using namespace std;


// �츮�� main�Լ� �ȿ��� �ڵ带 �ۼ��ϰ� �ִ�.
// �Լ� �ȿ��� �ۼ��ϰ� �ִ� ��� ������ ����������� �Ѵ�.

// ���� ���� : �Լ� ���� �ۿ� ����� ����.

// �Լ��� �˾ƾ� ����, ���� ������ �� �� �ִ�.
// �Լ��� �����ΰ�?
// Function (���)�� ������ ���� ��
// ����� ���ȭ. ���� ��� ���� ��Ƽ� ���� Ŀ���� ��.
// �ϳ��� ����� ��Ȯ�ϰ� �����ϰ� �� �ɰ����� �Ѵ�.
// ������ ���ȭ��? ���� �ʿ� ���� ����� ���ԵǾ� �ִ� �� (����� �� ���� �� �� ����)
// �� ����� ~����� (Good), �� ����� ~�Լ��� ~���� ~��(Bad)

int Add(int a, int b) {
	return a + b;
}

int global = 0;

// main�� ��ü?
// ���α׷����� ��ü
// main�� ȣ���ϸ鼭 �����Ѵ�.

int main()
{
	// ����
	// ���� ����
	// ���� ����
	// ���� ����
	// �ܺ� ����

	// ���� ����
	// �Լ� �ȿ� �Ǵٸ� ������ ����� �� �� �ִ�.
	{
		// ������ ��Ģ
		// ���� ������ �ִ� ������ �켱 ������ ����.
		// ���� ������ ������ ȿ���� �Ҵ´�.
	}

	int iData = Add(100, 200); // Add�Լ��� ȣ���Ѵ� -> return ��ȯ�ϸ鼭 �Լ��� ����ȴ�.

	for (int i=0;i < 10;i++) {
		printf("Output Test\n");

		continue; // Ű���带 ������ ���� �ݺ��� ������ �̵�

		break; // �ݺ����� �ٷ� ����
	}

	int i = 0;
	while (i < 2) {
		printf("Output Test\n");
		++i;
	}

	return 0; // ���α׷��� ���� 
	// ���α׷��� ���Ḧ ����ϴ� �����?
	// ���α׷� ���Ժο��� ��� �ݺ����ش�.
	// �ݺ����� ��� ��Ƶθ鼭, Ư�� Ű�� �Է��ؾ� ���ᰡ �ǵ��� �����Ѵ�.
}