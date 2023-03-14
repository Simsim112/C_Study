//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Test {
//	int a;
//	int b;
//}t;
//void change_size(t** test, int * arr_size);
//void print_arr(t* test, int arr_size);
//int main()
//{
//	int arr_size = 3;
//	t* test = (t*)malloc(sizeof(t) * arr_size);
//	change_size(&test, &arr_size);
//	print_arr(test, arr_size);
//	
//	free(test);
//	return 0;
//}
//void change_size(t** test, int* arr_size)
//{
//	*arr_size += 3;
//	*test = (t *)realloc(*test, sizeof(t) * *arr_size);
//
//	for (int i =0; i < *arr_size; i++)
//	{
//		scanf("%d",  &(*test)[i].a);
//	}
//}
//void print_arr(t* test, int arr_size)
//{
//	for (int i = 0; i < arr_size; i++)
//	{
//		printf("%d ", test[i].a);
//	}
//	return;
//}