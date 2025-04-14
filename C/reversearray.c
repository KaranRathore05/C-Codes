#include <stdio.h>
void reverse(int array[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = array[i];
        int secoundval = array[n - i - 1];
         array[i] = secoundval;
         array[n - i - 1] = firstval;
    }
}

int main()
{
    int n = 6;
    int array[6] = {1, 2, 3, 4, 5, 6};
    reverse(array, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d", array[i]);
    }
}
