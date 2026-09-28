#include <stdio.h>
#include <windows.h>
#define N 9

void print_array(const int A[], int n)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]");
}

void insertion_sort(int A[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;

        printf("Ітерація %d: ", i);
        print_array(A, n);
        printf("\n");
    }
}

int main(void)
{
    int A[N] = {7, 89, 4, 68, 70, 49, 10, 62, 51};

    printf("Початковий масив: ");
    print_array(A, N);
    printf("\nТрасування сортування вставками:\n");

    insertion_sort(A, N);

    printf("\nВідсортований масив: ");
    print_array(A, N);
    printf("\n");

    return 0;
}
