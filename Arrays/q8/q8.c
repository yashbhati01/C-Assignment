#include<stdio.h>
int main()
{
    int array[50], position, c, n, value;
    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter number of elements\n");
    for(c=0;c<n;c++)
    { scanf("%d",&array[c]); }

    printf("Enter location you want to change: ");
    scanf("%d",&position);

    for(c=n-1;c>=position;c--)
    {
        array[c+1] = array[c];
        array[position-1] = value;
    }
    
    printf("Resultant array is: \n");

    for(c=0;c<=n;c++)
        { printf("%d\n",array[c]); }

    return 0;
}