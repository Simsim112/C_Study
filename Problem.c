#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����1
//������ �Ǽ����� �Ҽ��� ���� ���ڸ����� �����Ͽ� ������ ������ �����϶�. 
//������� ����ڷκ��� �Է¹��� �Ǽ� f �� 12.3456�̶�� 34�� �����Ѵ�. 
//�̶� �ݿø��� ������� �ʾƵ� �������. 
//f �� �޷� ������ ȭ�� �׼������ �� ��Ʈ ������ �����س��� ����� �����ϸ� �ȴ�. 
//���� ???? �ڸ��� ������ ������� �ۼ��ϴ� �����̴�.
/*
int main()
{
	int i;
	float f;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &f);
	if (f > 0)
		i = (f - (int)f) * 100;
	else
		i = (f - (int)f) * -100;
	printf("i=%d\n", i);

	return 0;
}
*/

//����2
//�Ҽ��� ����϶�
/*
int main()
{
	int PrimeNumber[1000];
	int i =2, j;
	int num = 0;
	int count = 0; //ó���� 2�� �ֱ����ؼ� 0���� �������ش�.
	while (1)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count < 1)
		{
			PrimeNumber[num] = i;
			printf("%d ��° �Ҽ� : %d\n", num + 1, PrimeNumber[num]);
			if (num == 999) break;
			num++;
		}
		count = 0;
		j = 2;
		i++;
	}
	return 0;
}
*/
