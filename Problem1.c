#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//문제1 
//계산기를 만들어보세요.사용자가 1 을 누르면 + , 2 를 누르면 - 와 같은 방식으로 해서 만들면 됩니다.
//물론 이전의 계산 결과는 계속 누적되어야 하고, 지우기 기능도 있어야 합니다.
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
		printf("숫자를 입력해주세요 : ");
		scanf("%d", &a);
		printf("1 = 더하기, 2 = 빼기, 3 = 곱하기, 4 = 나누기, 5 = 이전값삭제 : 6 = 이전값보기\n입력: ");
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
				printf("이전값이 없습니다.\n");
			}
			break;
		case 6:
			show(arr, i);
			break;
		default:
			printf("입력 실패 다시 입력해주세요\n");
		}
	}
}
int add(int a)
{
	int b;
	printf("숫자를 입력해주세요 : ");
	scanf("%d", &b);
	printf("%d + %d = ", a, b);
	return a + b;
}
int minus(int a)
{
	int b;
	printf("숫자를 입력해주세요 : ");
	scanf("%d", &b);
	printf("%d - %d = ", a, b);
	return a - b;
}
int multi(int a)
{
	int b;
	printf("숫자를 입력해주세요 : ");
	scanf("%d", &b);
	printf("%d * %d = ", a, b);
	return a * b;
}
int div(int a)
{
	int b;
	printf("숫자를 입력해주세요 : ");
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

//문제2
//에라토스테네스의 체를 이용해서 1 부터 N 까지의 소수를 구하는 프로그램을 만들어보세요.
// 0공간도 생각해서 짤려고 했으나 복잡해져서 2부터 시작하게함
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
	printf("에라토스테네스의 체로 찾은 소수\n");
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
		//일정 조건이 되면 중단
		if (escape == 0) break;
		//특정 수의 배수를 삭제
		for (int i = k; i <= num; i++)
		{
			if (arr[i] % k == 0 && i != k)
			{
				arr[i] = 0;
			}
		}

		//삭제되지 않은 다음 숫자 찾기
		for (int i = k; i <= num; i++)
		{
			//찾는 숫자가 찾은 숫자의 제곱보다 작으면 중단
			if (num < pow(k, 2))
			{
				escape = 0;
				break;
			}
			//삭제되지 않은 다음 숫자 찾음
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

//문제3
//1000 자리의 수들의 덧셈, 뺄셈, 곱셈, 나눗셈을 수행하는 프로그램을 만들어보세요.
//나눗셈의 경우 소수 부분을잘라버리세요.물론, 소수 부도 1000 자리로 구현해도 됩니다. 
//1000 자리 수들의 연산 수행 시간은 1 초 미만이여야합니다.
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
//1000자리 덧셈
int add(int parr1[], int parr2[], int num)
{
	int temp[1001] = { 0 };
	int add = 0;
	for (int i = 0; i <= num; i++)
	{
		// 최상위 숫자에 올림수가 영향을 줘선 안되기에
		if (i < num)
		{
			temp[i] = parr1[i] + parr2[i];
		}
		//add가 1이라면 받아올림 있다
		if (add == 1)
		{
			temp[i] += 1;
			add = 0;
		}
		//10이상이면 받아올림을 추가하고 일의자리만 남긴다
		if (temp[i] >= 10)
		{
			temp[i] = temp[i] % 10;
			add = 1;
		}
	}
	//제대로 수가 나왔나 출력
	for (int i = num; i >= 0; i--)
	{
		//제일처음 올림수 없을 경우는 지나감
		if (temp[i] == 0 && i == num)
		{
			continue;
		}
		printf("%d", temp[i]);
	}
}

//1000자리 뺄셈(미완성) - 나중에
int minus(int parr1[], int parr2[], int num)
{
	int temp[1000] = { 0 };
	int add = 0;
	int big = 0;
	//뭐가 더 큰수인지 판별
	for(int i = num - 1; i > 0; i--)
	{
		if (parr1[i] < parr2[i])
		{
			big = 1;
			break;
		}
	}
	//뒤에 숫자가 더 큰경우
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