#include <stdio.h>
int main()
{
    int a[10], n, i, small, large;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    small = large = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] < small)
            small = a[i];

        if(a[i] > large)
            large = a[i];
    }
    printf("Smallest element = %d\n", small);
    printf("Largest element = %d\n", large);
    return 0;
}
