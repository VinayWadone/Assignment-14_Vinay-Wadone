#include<stdio.h>
int main()
{
    int a[10], i, min=0;
    printf("\n\nEnter the 10 numbers\n\n");
    for (i=0;i<=9;i++)
    scanf("%d", &a[i]);
    min=a[0];
    for (i=0;i<=9;i++)
    {
        if(a[i]<=min)min=a[i];
        else min=min;
        printf ("\n\nThe min number is: %d \n\n",min);
    }
    printf ("\n\nThe min number is: %d \n\n",min);
    return 0;

}
