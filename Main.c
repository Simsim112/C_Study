#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//문제1 
//N 줄인 삼각형을 출력한다. 단, 사용자로 부터 임의의 N 을 입력 받는다. 아래는 N = 3 일 때의 출력 예시 이다.
/*
int main()
{
	int n;
	printf("임의의 N을 입력해주세요: ");
	scanf("%d", &n);
	for (int i =0; i < n; i++)
	{
		for (int k = 0; k < n - i; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

//문제2
//위와 동일한 형태를 취하되, 역 삼각형을 출력한다.
/*
int main()
{
	int n;
	printf("임의의 N을 입력해주세요: ");
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
	{
		for (int k = 0; k < n - i; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < i *2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

//문제3
//1000 이하의 3 또는 5 의 배수인 자연수들의 합을 구한다.
/*
int main()
{
	int sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("자연수들의 합 %d", sum);
}
*/

//문제4
//1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다
/*
int main()
{

	int sum = 0;
	int fib1 = 1;
	int fib2 = 1;
	int fib3 = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (fib1 > 1000000) { break; }
		if (fib1 % 2 == 0) { sum += fib1; }
		//printf("%d ", fib1);
		fib3 = fib2 + fib1;
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("짝수 항들의 합은 %d", sum);
}
*/

//문제5
//사용자로 부터 N 값을 입력 받고 1 부터 N 까지의 곱을 출력한다.
/*
int main()
{
	int N;
	int sum = 1;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		sum *= i;
	}
	printf("1부터 %d까지의 곱한값 : %d", N, sum);
}
*/

//문제6
//다음 식을 만족하는 자연수 a,b,c 의 개수를 구하여라
// i) a + b + c = 2000
//ii) a ＞ b > c, a, b, c 는 모두 자연수
/*
int main()
{
	int count = 0;
	for (int i = 1; i <= 2000; i++)
	{
		for (int j = 1; j <= 2000; j++)
		{
			for (int k = 1; k <= 2000; k++)
			{
				if (i + j + k == 2000 && i > j && j > k) 
				{ 
					//printf("a의 값 %d b의 값 %d c의 값 %d", i, j, k);
					printf("\n");
					count++; 
				}
			}
		}
	}
	printf("만족하는 자연수의 개수는 %d", count);
}
*/

//문제 7
//임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라.
//예를 들어서 N = 18 일 경우 N = 18 18 = 2 * 3 * 3
/*
int main()
{
	int N;
	int a = 1;
	printf("N = ");
	scanf("%d", &N);
	printf("%d =", N);
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0 && i != 1)
		{
			N /= i;
			if (a == 1)
			{
				printf(" %d", i);
				a++;
			}
			else printf(" * %d", i);
			i--;
		}
		else if (N == 1)
		{
			printf(" 1");
		}
	}
}
*/