#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//문제 1
//메인함수의 인자를 활용한 계산기를 만들어보세요. 예를 들어서
//calc.exe 5 + 10
//을 치면 15 가 나오게 하면 되지요.
/*
int main(int argc, char** argv)
{
	int i;
	int sum = 0;
	printf("받은 인자의 개수 : %d \n", argc); //main 함수가 받은 인자의 수(기본적으로 운영체제가 넣어줌)
	for (i = 0; i < argc; i++)
	{
		if (!strcmp(argv[i], "+"))
		{
			sum = ChtoInt(argv[i - 1]) + ChtoInt(argv[i + 1]);
		}
		printf("%s ", argv[i]);	//main 함수가 받은 받은 인자들
	}
	printf("%d", sum);
	return 0;
}
//문자열에서 인트로 변경
int ChtoInt(char* str)
{
	int num = 0, num_j = 0;
	int count = 0;
	//뒤에서부터 계산하기 위해서 넘김
	while (*str)
	{
		count++;
		str++;
	}

	//뒤에서부터 숫자로 바꾸면서 자릿수를 맞추기 위해 10의 제곱을 해준다.
	for(int i = count; i >= 0; i--)
	{
		if (*str >= 48 && *str <= 57)
		{
			num += (*str - '0') * pow(10, num_j);
			num_j++;
		}
		str--;
	}
	return num;
}
*/

//문제 2
//위 성적 프로그램을 개량하여 학생별 평균을 내어 학생의 등수를 출력하는 프로그램을 만들어보세요
/*
void input_score(int student, int subject, int(*score)[student]);
void rank(int student, int subject, int(*score)[student]);
int main()
{
	int subject, student;
	printf("과목의 수를 입력해주세요: ");
	scanf("%d", &subject);
	
	printf("학생의 수를 입력해주세요: ");
	scanf("%d", &student);
	int (*student_score)[student];

	student_score= (int(*)[student])malloc(sizeof(int) * subject * student);
	
	input_score(student, subject, student_score);
	rank(student, subject, student_score);

	free(student_score);
	return 0;

}
// 점수입력
void input_score(int student, int subject, int(*score)[student])
{
	for (int i = 0; i < subject; i++)
	{
		printf("%d 번째 과목\n", i);
		for (int j = 0; j < student; j++)
		{
			printf("%d 번째 학생의 점수: ", j);
			scanf("%d", &score[i][j]);
		}
	}
}
//등수 출력
void rank(int student, int subject, int(*score)[student])
{
	int sum = 0, temp = 0;
	//학생 번호, avg, rank		학생
	int(*score_rank)[student];

	score_rank = (int(*)[student])malloc(sizeof(int) * student * 3);
	
	//평균 구하기
	for (int i = 0; i < student; i++)
	{
		sum = 0;
		for (int j = 0; j < subject; j++)
		{
			sum += score[j][i];
		}
		score_rank[1][i] = sum / subject;
		score_rank[0][i] = i;
		printf("%d 번째 학생의 과목 평균 :%d\n", score_rank[0][i],  score_rank[1][i]);
	}

	//랭크 정하기
	for (int i = 0; i < student; i++)
	{
		for (int j = i; j < student - 1; j++)
		{
			if (score_rank[1][i] < score_rank[1][j + 1])
			{
				//학생번호와 성적을 옮기기위해서
				for (int k = 0; k < 2; k++)
				{
					temp = score_rank[k][i];
					score_rank[k][i] = score_rank[k][j + 1];
					score_rank[k][j + 1] = temp;
				}
			}
		}
	}

	//학생 순위출력
	for (int  i = 0; i < student; i++)
	{
		score_rank[2][i] = i;
		printf("%d 번째 학생의 평균은 %d 등수는 %d\n", score_rank[0][i], score_rank[1][i], score_rank[2][i]);
	}

	
	free(score_rank);
}
*/

//문제3
//동적으로 할당된 배열의 크기를 다시 바꾸는 프로그램을 만들어보세요.
//즉 p 가 이미 원소가 10 인 동적으로 할당된 배열을 가리키고 있었는데 
//예상치 못하게 원소 5 개를 더 추가하려면 어떻게 해야 할까요.
/*
int main()
{
	int* p;
	int p_size;
	printf("크기를 입력해주세요: ");
	scanf("%d", &p_size);

	p = (int*)malloc(sizeof(int) * p_size);
	
	for (int i = 0; i < p_size; i++)
	{
		p[i] = i;
	}

	add_size(&p, &p_size);

	for (int i = 0; i < p_size; i++)
	{
		printf("%d ", p[i]);
	}

	free(p);
	return 0;
}
int add_size(int** p, int *p_size)	//포인터의 값을 바꾸기 위해서는 이중포인터를 사용해야한다
{
	int* p2, add_size;
	printf("늘릴 크기를 입력해주세요: ");
	scanf("%d", &add_size);
	int newsize = *p_size + add_size;

	p2 = (int*)malloc(sizeof(int) * newsize);

	for (int i = 0; i < *p_size; i++)
	{
		p2[i] = (*p)[i];
	}

	for (int i = *p_size; i < newsize; i++)
	{
		p2[i] = i;
	}

	free(*p);

	*p = p2;
	*p_size += add_size;
}
*/