#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����1
//���ڰ� ���� +4�ؼ� ������ ���� ���ڸ� �Լ��� �����϶�
/*
int magic_box(int num)
{
	return num + 4;
}
int main()
{
	printf("%d", magic_box(36));
}
*/

//����2
//����� ������ �����̰� �ÿ�ġ �ʾ����� �������� �����ϰ� 10000 �޷��� ì������ ���� ����ġ ���� ������ ��� �Ǿ����ϴ�.
//�������� slave �Լ��� ���ڸ� 2 ���� ������, �ϳ��� ���� ������ ���, �ٸ� �ϳ��� ���� ������ ������ ���ڷ� ���޹޴� ���ο� �Լ��� ����� ������
/*
int slave(int Rich, int income)
{
	printf("���� ������ ���: %d\n", Rich);

	printf("���� ������ ����: %d", income);

	return 0;
}

int main()
{
	int money = 10000;
	int income = 2000;
	slave(money, income);

	return 0;
}
*/

//����3
//1 ���� n ������ ���� ���ϴ� �Լ��� �ۼ��غ�����.(for�������ۼ�)
/*
int sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i;
	}
	printf("1���� %d������ ���� = %d", n, result);
	return 0;
}
int main()
{
	int n;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &n);
	sum(n);
	return 0;
}
*/

//����4
//N ���� �Է� �޾Ƽ� 1 ���� N ������ �Ҽ��� ������ ����ϴ� �Լ��� �����غ�����.
/*
int prime_num(int n)
{
	int num[1000];
	int prime_count = 0;
	int count = 0;
	int i = 2, s = 0, j;
	while (1) 
	{
		if (n == i) break;
		for (j = 2; j < i; j++)
		{
			if (i % j != 0) //0�� �ƴϸ� �� �������°Ŵ�(�Ҽ���)
			{
				count++;
			}
			else //������ ��(�Ҽ��� �ƴ�)
			{
				break;
			}
		}
		if (count >= 1 && i == j)
		{
			num[s] = i;
			prime_count++;
			s++;
		}
		j = 2;
		count = 0;
		i++;
	}
	for (int i = 0; i < s; i++)
	{
		printf("%d ��° %d \n",i + 1, num[i]);
	}
	printf("\n1~ %d ������ �� �Ҽ��� ������ %d��", n, prime_count);

}

int main()
{
	prime_num(1000);
	return 0;
}
*/

//���� 5
//Ư���� �� N �� �Է¹޾Ƽ� N �� ���μ������� ����� ��µǰ� �غ�����
//��) factorize(10); ��°��: 2 �� 5
//factorize(180); ��°��: 2 �� 2 �� 3 �� 3 �� 5

//���� 6
//�� 10 ���� ���ҵ� �� �ִ밪 ���ϴ� �Լ��� �̿��Ͽ�, 
//10 ���� ���Ҹ� �Է� �ް� �� ���Ҹ� ū ������ ����ϴ� �Լ��� ��������. 
/*
int max_num(int* a);
int main() {
	int arr[10];
	
	for (int i = 0; i < 10; i++)
	{
		printf("");
		scanf("%d", &arr[i]);
	}

	max_num(arr);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
int max_num(int* parr) {
	int max = 0;
	int temp = 0;

	for(int i = 0; i < 10 ; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (parr[i] < parr[j])
			{
				temp = parr[i];
				parr[i] = parr[j];
				parr[j] = temp;
			}
		}
	}
	return 0;
}
*/

//����6
//2 ���� �迭�� �� ���ҿ� 1 �� ���ϴ� �Լ��� ���ڴ� � ����ϱ��?
/*
int two_dimen(int parr[][2]);
int main()
{
	int arr[][2] = { {1,2},{3,4} };
	two_dimen(arr);
	printf("\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
}
int two_dimen(int parr[][2]) //(*parr)[2]�� ����
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", parr[i][j]);
			parr[i][j]++;
		}
	}
}
*/

//����7
//����ڷ� ���� 5 ���� �л��� ����, ����, ���� ������ �Է� �޾Ƽ� 
//����� ���� ���� ��� ���� ����� ���� ���� ������� ���ĵǾ� ����ϵ��� �ϼ���. 
//Ư��, ����� �������� ��� �̻��� ��� ������ '�հ�', �ƴ� ����� '���հ�' �� ����ϰ� �غ�����
/*
int score_sort(int pstudent[][4], int row);
int main()
{
	int student[5][4];
	int score = 0;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			switch (j)
			{
			case 0:
				printf("���� : ");
				break;
			case 1:
				printf("���� : ");
				break;
			case 2:
				printf("���� : ");
				break;
			}
			scanf("%d", &student[i][j]);
			score += student[i][j];
		}
		student[i][j] = score / j;
		score = 0;
	}
	score_sort(student, 5);
}
int score_sort(int pstudent[][4], int row)
{
	int temp;
	int sum_avg = 0;
	int i, j, k;

	for (i = 0; i < 4; i++)
	{
		for (j = i; j < row; j++)	// i, j ��� ũ���
		{
			for (k = 0; k < 4; k++)	//k �� �ٲ�
			{
				if (pstudent[i][3] < pstudent[j][3])
				{
					temp = pstudent[i][k];
					pstudent[i][k] = pstudent[j][k];
					pstudent[j][k] = temp;
				}
			}
		}
	}

	for (int i = 0; i < row; i++)	//������� ���
	{
		sum_avg += pstudent[i][3];
	}
	printf("�л� ���� ���� ���� ���  ��/��\n"); //�˾ƺ��� ���� ����

	for (int i = 0; i < row; i++)
	{
		printf("%d ", i + 1);	//�л���ȣ ���
		for (int j = 0; j < 4; j++)
		{
			printf("%4d ", pstudent[i][j]);	//���� ���
			if (j == 3)		//��տ� ���� �հ� ���հ� ���
			{
				if (pstudent[i][3] >= sum_avg / row)
				{
					printf("	  �հ�");
				}
				else
				{
					printf("	  ���հ�");
				}
			}
		}
		printf("\n");
	}
}
*/

//����8
//��Ŭ���� ȣ������ �̿��ؼ� N ���� ������ �ִ������� ���ϴ� �Լ��� ��������.
/*
int Euclid(int arr[], int n);
int main()
{
	int n = 3;
	int arr[3] = { 1071, 1029, 124125};
	printf("�ִ� ����� : %d",Euclid(arr, n));
	return 0;
}
int Euclid(int arr[], int n)
{
	int i = 0;
	int num = 0;
	int temp;
	while (1)
	{
		if (arr[i] < arr[i + 1])	//a>b�Ͻ� ��Ŭ���� ȣ���� ��밡��
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
		if (arr[i] % arr[i + 1] != 0)	//��Ŭ���� ȣ���� ���(������ ������������ �ݺ�)
		{
			num = arr[i] % arr[i + 1];
		}
		else						//������ �������� ���� ���ڿ� ���ؼ� ã��
		{
			i++;
			if (i == n -1) break;		//���� �ٵ��� ����
		}
		arr[i] = arr[i + 1];
		arr[i + 1] = num;
	}
	return num;	//ã�� �ִ�����
}
*/

//����9
//�ڱ� �ڽ��� ȣ���ϴ� �Լ��� �̿��ؼ� 1 ���� Ư���� �������� ���� ���ϴ� ���α׷��� ��������.
/*
int rotate(int n);
int main()
{
	int n = 10;
	printf("%d", rotate(n));


}
int rotate(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * rotate(n - 1);
}
*/