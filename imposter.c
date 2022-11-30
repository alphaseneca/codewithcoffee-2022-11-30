#include <stdio.h>

int n;
int arr[];

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    printf("Enter the number of people in a room: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
