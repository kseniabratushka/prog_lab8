#include <stdio.h>

#define N 3
#define M 4

int main() 
{
    system("chcp 65001");
    int A[N][M];     
    int B[M];       
    int C[N];     
    int i, j;

    printf("Введіть елементи матриці %dx%d:\n", N, M);
    for (i = 0; i < N; i += 1) 
    {
        for (j = 0; j < M; j += 1) 
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Введіть елементи вектора розміром %d:\n", M);
    for (j = 0; j < M; j += 1) 
    {
        printf("B[%d] = ", j);
        scanf("%d", &B[j]);
    }

    for (i = 0; i < N; i += 1) 
    {
        C[i] = 0;
        for (j = 0; j < M; j += 1) 
        {
            C[i] += A[i][j] * B[j];
        }
    }

    printf("\nРезультат множення матриці на вектор:\n");
    for (i = 0; i < N; i += 1) 
    {
        printf("C[%d] = %d\n", i, C[i]);
    }

    int max_negative = -2147483648;
    int position = -1;
    for (i = 0; i < N; i += 1) 
    {
        if (C[i] < 0 && C[i] > max_negative) 
        {
            max_negative = C[i];
            position = i;
        }
    }

    if (position != -1) 
    {
        printf("\nНайбільше серед від’ємних значення: %d\n", max_negative);
        printf("Номер елемента: %d\n", position);
    } else 
    {
        printf("\nВід’ємних значень немає.\n");
    }

    return 0;
}
