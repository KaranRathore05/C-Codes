#include <stdio.h>
void storetable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}

int main()
{
    int tables[2][10];
    storetable(tables,0,10,2 );
    storetable(tables,0,10,3 );
    printf("%d",storetable);
}