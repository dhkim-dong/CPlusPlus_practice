// ��¥ : 2023-03-08
// �ۼ��� : �赿��

int main2() 
{
	// �Ǽ��� �ڷ����� ��ǻ�Ͱ� ǥ���ϴ� ��
	// �Ǽ��� �Ҽ����� �󸶸�ŭ ǥ���� ���ΰ��� ���ؾ� �Ѵ�.
	// �ε� �Ҽ��� : �Ҽ��� 2���� �𿩾� 1�� �ȴ� -> ��Ʈ�� 1/2, 1/4 , 1/8 .... �� ǥ���ϴ� ���
	// ���� �κ��� ǥ���ؾ��Ѵ�.
	// MSB 1��Ʈ, ������Ʈ ǥ��, 2���� ��Ʈ ǥ��� �̷�� ����.
	// �Ǽ��� �ڷ�� ��Ȯ�� ���� ǥ���ϱ� ��ƴ�. ���� �ٻ簪�� ǥ���Ѵ�.
	// �Ǽ��� �ٷ� �� �����ϴ� ��,, mistake
	// ���� �Ǽ��� ���� 1�̵Ǿ�� �ϴ´�, ���� �ȸ��� ���� �ִ�.
	// ������ ���� ����� ã�ų� ������ �ľ��ؾ� �Ѵ�.

	int a = 4 + 4.0; // �� ��ȯ�� �Ͼ��. 

	float f = 10.2145f + (float)20; // ���������� ��ȯ�Ͽ� �ǵ��� ǥ������.

	// ������

	int data = 10 + 10; // �������� �켱 ����

	data = data + 20;  // �ݺ��Ǵ� ���� ���̱� ���� ǥ����
	data += 20;

	// ������ ������, �Ǽ��� ������
	// �Ǽ��� ������� ������ ���. ������ ������ ���� ��ǻ�Ͱ� �𸣱� ������..
	data = (int)(10. / 3.); // f�� ���� �Ǽ��� => double�� �Ǵ��Ѵ�.

	++data;
	data++; // ������ : ���� �ļ����� ����ȴ�. �ڿ� ++�� ������, �� �ٸ� �����ڿ� �Բ� ����� �� ����� �޶��� �� �ִ�.

	int c = 10;
	data = c++; // �ڿ� ++�� ������ ���Ժ��� �ʰ� �̷�� ����. ���� C+1�� �ƴ� C�� ����.

	return 0;
}