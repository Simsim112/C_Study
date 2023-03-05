#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//문제1
//임의의 실수에서 소수점 이하 두자리수만 추출하여 정수형 변수에 대입하라. 
//예를들어 사용자로부터 입력받은 실수 f 가 12.3456이라면 34만 추출한다. 
//이때 반올림은 고려하지 않아도 상관없다. 
//f 가 달러 단위의 화폐 액수라고할 때 센트 단위만 추출해내는 경우라고 생각하면 된다. 
//다음 ???? 자리에 적합한 연산식을 작성하는 문제이다.
/*
int main()
{
	int i;
	float f;
	printf("실수를 입력하시오 : ");
	scanf("%f", &f);
	if (f > 0)
		i = (f - (int)f) * 100;
	else
		i = (f - (int)f) * -100;
	printf("i=%d\n", i);

	return 0;
}
*/

//문제2
//소수를 출력하라
/*
int main()
{
	int PrimeNumber[1000];
	int i =2, j;
	int num = 0;
	int count = 0; //처음에 2를 넣기위해서 0으로 설정해준다.
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
			printf("%d 번째 소수 : %d\n", num + 1, PrimeNumber[num]);
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
