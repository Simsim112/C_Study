#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//���� 1
//�����Լ��� ���ڸ� Ȱ���� ���⸦ ��������. ���� ��
//calc.exe 5 + 10
//�� ġ�� 15 �� ������ �ϸ� ������.
/*
int main(int argc, char** argv)
{
	int i;
	int sum = 0;
	printf("���� ������ ���� : %d \n", argc); //main �Լ��� ���� ������ ��(�⺻������ �ü���� �־���)
	for (i = 0; i < argc; i++)
	{
		if (!strcmp(argv[i], "+"))
		{
			sum = ChtoInt(argv[i - 1]) + ChtoInt(argv[i + 1]);
		}
		printf("%s ", argv[i]);	//main �Լ��� ���� ���� ���ڵ�
	}
	printf("%d", sum);
	return 0;
}
//���ڿ����� ��Ʈ�� ����
int ChtoInt(char* str)
{
	int num = 0, num_j = 0;
	int count = 0;
	//�ڿ������� ����ϱ� ���ؼ� �ѱ�
	while (*str)
	{
		count++;
		str++;
	}

	//�ڿ������� ���ڷ� �ٲٸ鼭 �ڸ����� ���߱� ���� 10�� ������ ���ش�.
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

//���� 2
//�� ���� ���α׷��� �����Ͽ� �л��� ����� ���� �л��� ����� ����ϴ� ���α׷��� ��������
/*
void input_score(int student, int subject, int(*score)[student]);
void rank(int student, int subject, int(*score)[student]);
int main()
{
	int subject, student;
	printf("������ ���� �Է����ּ���: ");
	scanf("%d", &subject);
	
	printf("�л��� ���� �Է����ּ���: ");
	scanf("%d", &student);
	int (*student_score)[student];

	student_score= (int(*)[student])malloc(sizeof(int) * subject * student);
	
	input_score(student, subject, student_score);
	rank(student, subject, student_score);

	free(student_score);
	return 0;

}
// �����Է�
void input_score(int student, int subject, int(*score)[student])
{
	for (int i = 0; i < subject; i++)
	{
		printf("%d ��° ����\n", i);
		for (int j = 0; j < student; j++)
		{
			printf("%d ��° �л��� ����: ", j);
			scanf("%d", &score[i][j]);
		}
	}
}
//��� ���
void rank(int student, int subject, int(*score)[student])
{
	int sum = 0, temp = 0;
	//�л� ��ȣ, avg, rank		�л�
	int(*score_rank)[student];

	score_rank = (int(*)[student])malloc(sizeof(int) * student * 3);
	
	//��� ���ϱ�
	for (int i = 0; i < student; i++)
	{
		sum = 0;
		for (int j = 0; j < subject; j++)
		{
			sum += score[j][i];
		}
		score_rank[1][i] = sum / subject;
		score_rank[0][i] = i;
		printf("%d ��° �л��� ���� ��� :%d\n", score_rank[0][i],  score_rank[1][i]);
	}

	//��ũ ���ϱ�
	for (int i = 0; i < student; i++)
	{
		for (int j = i; j < student - 1; j++)
		{
			if (score_rank[1][i] < score_rank[1][j + 1])
			{
				//�л���ȣ�� ������ �ű�����ؼ�
				for (int k = 0; k < 2; k++)
				{
					temp = score_rank[k][i];
					score_rank[k][i] = score_rank[k][j + 1];
					score_rank[k][j + 1] = temp;
				}
			}
		}
	}

	//�л� �������
	for (int  i = 0; i < student; i++)
	{
		score_rank[2][i] = i;
		printf("%d ��° �л��� ����� %d ����� %d\n", score_rank[0][i], score_rank[1][i], score_rank[2][i]);
	}

	
	free(score_rank);
}
*/

//����3
//�������� �Ҵ�� �迭�� ũ�⸦ �ٽ� �ٲٴ� ���α׷��� ��������.
//�� p �� �̹� ���Ұ� 10 �� �������� �Ҵ�� �迭�� ����Ű�� �־��µ� 
//����ġ ���ϰ� ���� 5 ���� �� �߰��Ϸ��� ��� �ؾ� �ұ��.
/*
int main()
{
	int* p;
	int p_size;
	printf("ũ�⸦ �Է����ּ���: ");
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
int add_size(int** p, int *p_size)	//�������� ���� �ٲٱ� ���ؼ��� ���������͸� ����ؾ��Ѵ�
{
	int* p2, add_size;
	printf("�ø� ũ�⸦ �Է����ּ���: ");
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