#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//����1 
//���⸦ ��������.����ڰ� 1 �� ������ + , 2 �� ������ - �� ���� ������� �ؼ� ����� �˴ϴ�.
//���� ������ ��� ����� ��� �����Ǿ�� �ϰ�, ����� ��ɵ� �־�� �մϴ�.
/*
int add(int a);
int minus(int a);
int multi(int a);
int div(int a);
int del(int arr[], int row);
int show(int arr[], int row);

int main()
{
	int a, sel, arr[1000];
	int i = 0;

	while (1)
	{
		printf("---------------------\n");
		printf("���ڸ� �Է����ּ��� : ");
		scanf("%d", &a);
		printf("1 = ���ϱ�, 2 = ����, 3 = ���ϱ�, 4 = ������, 5 = ���������� : 6 = ����������\n�Է�: ");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			arr[i] = add(a);
			printf("%d\n", arr[i]);
			i++;
			break;
		case 2:
			arr[i] = minus(a);
			printf("%d\n", arr[i]);
			i++;
			break;
		case 3:
			arr[i] = multi(a);
			printf("%d\n", arr[i]);
			i++;
			break;
		case 4:
			arr[i] = div(a);
			printf("%d\n", arr[i]);
			i++;
			break;
		case 5:
			if (i != 0)
			{
				del(arr, i);
				i--;
			}
			else
			{
				printf("�������� �����ϴ�.\n");
			}
			break;
		case 6:
			show(arr, i);
			break;
		default:
			printf("�Է� ���� �ٽ� �Է����ּ���\n");
		}
	}
}
int add(int a)
{
	int b;
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%d", &b);
	printf("%d + %d = ", a, b);
	return a + b;
}
int minus(int a)
{
	int b;
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%d", &b);
	printf("%d - %d = ", a, b);
	return a - b;
}
int multi(int a)
{
	int b;
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%d", &b);
	printf("%d * %d = ", a, b);
	return a * b;
}
int div(int a)
{
	int b;
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%d", &b);
	printf("%d / %d = ", a, b);
	return a / b;
}
int del(int arr[], int row)
{
	for (int i = 0; i < row; i++)
	{
		if (i == row - 1)
			arr[i] = 0;
	}
}
int show(int arr[], int row)
{
	for (int i = 0; i < row; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
*/

//����2
//�����佺�׳׽��� ü�� �̿��ؼ� 1 ���� N ������ �Ҽ��� ���ϴ� ���α׷��� ��������.
// 0������ �����ؼ� ©���� ������ ���������� 2���� �����ϰ���
/*
int era(int arr[], int num);
int main()
{
	int num;
	int arr[1000];
	scanf("%d", &num);

	for (int i = 2; i <= num; i++)
	{
		arr[i] = i;
	}
	era(arr, num);
	printf("�����佺�׳׽��� ü�� ã�� �Ҽ�\n");
	for (int i = 2; i <= num; i++)
	{
		if (arr[i] != 0)
			printf(" %d", arr[i]);
	}
}
int era(int arr[], int num)
{
	int k = 2;
	int prev[1000];
	int escape = 1;

	while (1)
	{
		//���� ������ �Ǹ� �ߴ�
		if (escape == 0) break;
		//Ư�� ���� ����� ����
		for (int i = k; i <= num; i++)
		{
			if (arr[i] % k == 0 && i != k)
			{
				arr[i] = 0;
			}
		}

		//�������� ���� ���� ���� ã��
		for (int i = k; i <= num; i++)
		{
			//ã�� ���ڰ� ã�� ������ �������� ������ �ߴ�
			if (num < pow(k, 2))
			{
				escape = 0;
				break;
			}
			//�������� ���� ���� ���� ã��
			else if(arr[i] != 0 && i != k)
			{
				k = arr[i];
				escape = k;
				break;
			}
		}
	}
}
*/

//����3
//1000 �ڸ��� ������ ����, ����, ����, �������� �����ϴ� ���α׷��� ��������.
//�������� ��� �Ҽ� �κ����߶��������.����, �Ҽ� �ε� 1000 �ڸ��� �����ص� �˴ϴ�. 
//1000 �ڸ� ������ ���� ���� �ð��� 1 �� �̸��̿����մϴ�.
int add(int parr1[], int parr2[], int num);
int minus(int parr1[], int parr2[], int num);
int main()
{
	int num = 3;
	int arr1[1000] = { 2,1,3,1,3,2,1 };
	int arr2[1000]= { 2,2,4,1,2,3,4 };

	/*for (int i = 0; i < num; i++)
	{
		arr1[i] = 2;
		arr2[i] = 4;
	}*/

	add(arr1, arr2, num);
	//minus(arr1, arr2, num);
}
//1000�ڸ� ����
int add(int parr1[], int parr2[], int num)
{
	int temp[1001] = { 0 };
	int add = 0;
	for (int i = 0; i <= num; i++)
	{
		// �ֻ��� ���ڿ� �ø����� ������ �༱ �ȵǱ⿡
		if (i < num)
		{
			temp[i] = parr1[i] + parr2[i];
		}
		//add�� 1�̶�� �޾ƿø� �ִ�
		if (add == 1)
		{
			temp[i] += 1;
			add = 0;
		}
		//10�̻��̸� �޾ƿø��� �߰��ϰ� �����ڸ��� �����
		if (temp[i] >= 10)
		{
			temp[i] = temp[i] % 10;
			add = 1;
		}
	}
	//����� ���� ���Գ� ���
	for (int i = num; i >= 0; i--)
	{
		//����ó�� �ø��� ���� ���� ������
		if (temp[i] == 0 && i == num)
		{
			continue;
		}
		printf("%d", temp[i]);
	}
}

//1000�ڸ� ����(�̿ϼ�) - ���߿�
int minus(int parr1[], int parr2[], int num)
{
	int temp[1000] = { 0 };
	int add = 0;
	int big = 0;
	//���� �� ū������ �Ǻ�
	for(int i = num - 1; i > 0; i--)
	{
		if (parr1[i] < parr2[i])
		{
			big = 1;
			break;
		}
	}
	//�ڿ� ���ڰ� �� ū���
	if (big == 1)
	{
		for (int i = num - 1; i > 0; i++)
		{
			temp[i] = parr2[i] - parr1[i];
			if (temp[i] < 0)
			{
				parr2[i + 1] -= 1;
				temp[i] = parr2[i] + 10;
			}
		}
		for (int i = num; i > 0; i--)
		{
			printf("%d ", temp[i]);
		}
	}
	printf("%d", big);

}