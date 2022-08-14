#include<stdio.h>
int main()
{
    int num[10],i,sum=0;
    printf("\n\nEnter ten numbers\n\n");
    for (i=0;i<=9;i++)
    {
    scanf("%d", &num[i]);
    sum=sum+num[i];
    }
    printf("\n\nThe sum of the numbers is: %d\n\n",sum);
}
