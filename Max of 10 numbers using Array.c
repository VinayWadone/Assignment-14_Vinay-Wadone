#include<stdio.h>
int main()
{
    int a[10], i,max;
    printf("\n\nEnter 10 numbers\n\n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]>=max)max=a[i];
        else max=max;

    }
    printf("\n\nThe max number is: %d\n\n",max);
    return 0;
}
