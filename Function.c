#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//문제1
//숫자가 들어가면 +4해서 나오는 마술 상자를 함수로 구현하라
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

//문제2
//어느날 귀족이 돈벌이가 시원치 않아져서 이전에는 일정하게 10000 달러씩 챙겼지만 이제 일정치 않은 수입을 얻게 되었습니다.
//여러분은 slave 함수를 인자를 2 개를 가져서, 하나는 현재 귀족의 재산, 다른 하나는 오늘 귀족의 수입을 인자로 전달받는 새로운 함수를 만들어 보세요
/*
int slave(int Rich, int income)
{
	printf("현재 귀족의 재산: %d\n", Rich);

	printf("오늘 귀족의 수입: %d", income);

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

//문제3
//1 부터 n 까지의 합을 구하는 함수를 작성해보세요.(for문으로작성)
/*
int sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i;
	}
	printf("1부터 %d까지의 합은 = %d", n, result);
	return 0;
}
int main()
{
	int n;
	printf("숫자를 입력하세요: ");
	scanf("%d", &n);
	sum(n);
	return 0;
}
*/

//문제4
//N 값을 입력 받아서 1 부터 N 까지의 소수의 개수를 출력하는 함수를 제작해보세요.
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
			if (i % j != 0) //0이 아니면 안 나눠지는거다(소수다)
			{
				count++;
			}
			else //나눠질 때(소수가 아님)
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
		printf("%d 번째 %d \n",i + 1, num[i]);
	}
	printf("\n1~ %d 까지의 총 소수의 개수는 %d개", n, prime_count);

}

int main()
{
	prime_num(1000);
	return 0;
}
*/

//문제 5
//특정한 수 N 을 입력받아서 N 을 소인수분해한 결과가 출력되게 해보세요
//예) factorize(10); 출력결과: 2 × 5
//factorize(180); 출력결과: 2 × 2 × 3 × 3 × 5

//문제 6
//위 10 개의 원소들 중 최대값 구하는 함수를 이용하여, 
//10 개의 원소를 입력 받고 그 원소를 큰 순으로 출력하는 함수를 만들어보세요. 
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

//문제6
//2 차원 배열의 각 원소에 1 을 더하는 함수의 인자는 어떤 모양일까요?
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
int two_dimen(int parr[][2]) //(*parr)[2]와 동일
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

//문제7
//사용자로 부터 5 명의 학생의 수학, 국어, 영어 점수를 입력 받아서 
//평균이 가장 높은 사람 부터 평균이 가장 낮은 사람까지 정렬되어 출력하도록 하세요. 
//특히, 평균을 기준으로 평균 이상인 사람 옆에는 '합격', 아닌 사람은 '불합격' 을 출력하게 해보세요
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
				printf("수학 : ");
				break;
			case 1:
				printf("국어 : ");
				break;
			case 2:
				printf("영어 : ");
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
		for (j = i; j < row; j++)	// i, j 평균 크기비교
		{
			for (k = 0; k < 4; k++)	//k 행 바꿈
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

	for (int i = 0; i < row; i++)	//평균점수 계산
	{
		sum_avg += pstudent[i][3];
	}
	printf("학생 수학 국어 영어 평균  합/불\n"); //알아보기 쉽게 정리

	for (int i = 0; i < row; i++)
	{
		printf("%d ", i + 1);	//학생번호 출력
		for (int j = 0; j < 4; j++)
		{
			printf("%4d ", pstudent[i][j]);	//점수 출력
			if (j == 3)		//평균에 따라서 합격 불합격 출력
			{
				if (pstudent[i][3] >= sum_avg / row)
				{
					printf("	  합격");
				}
				else
				{
					printf("	  불합격");
				}
			}
		}
		printf("\n");
	}
}
*/

//문제8
//유클리도 호제법을 이용해서 N 개의 수들의 최대공약수를 구하는 함수를 만들어보세요.
/*
int Euclid(int arr[], int n);
int main()
{
	int n = 3;
	int arr[3] = { 1071, 1029, 124125};
	printf("최대 공약수 : %d",Euclid(arr, n));
	return 0;
}
int Euclid(int arr[], int n)
{
	int i = 0;
	int num = 0;
	int temp;
	while (1)
	{
		if (arr[i] < arr[i + 1])	//a>b일시 유클리드 호제법 사용가능
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
		if (arr[i] % arr[i + 1] != 0)	//유클리드 호제법 사용(나누어 떨어질때까지 반복)
		{
			num = arr[i] % arr[i + 1];
		}
		else						//나누어 떨어지면 다음 숫자와 비교해서 찾음
		{
			i++;
			if (i == n -1) break;		//숫자 다돌면 종료
		}
		arr[i] = arr[i + 1];
		arr[i + 1] = num;
	}
	return num;	//찾은 최대공약수
}
*/

//문제9
//자기 자신을 호출하는 함수를 이용해서 1 부터 특정한 수까지의 곱을 구하는 프로그램을 만들어보세요.
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