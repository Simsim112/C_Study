#include <stdio.h>
int main() {
    int i;
    scanf("%d", &i);

    if (i & 1)  // �� ���� Ȧ���ΰ�
    {
        printf("%d �� Ȧ�� �Դϴ� \n", i);
    }
    else {
        printf("%d �� ¦�� �Դϴ� \n", i);
    }
    return 0;
}