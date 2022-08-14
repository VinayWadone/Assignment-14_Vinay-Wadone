#include<stdio.h>
int main()
{
    int num[10],i,esum=0,osum=0,j;
    printf("\n\nEnter ten numbers\n\n");
    for (i=0;i<=9;i++)
    {
    scanf("%d", &num[i]);
    if(num[i]%2)osum=osum+num[i];
    else esum=esum+num[i];
    }
    printf("\n\nThe sum of the even numbers is: %d\n\n",esum);
    printf("\n\nThe sum of the odd numbers is: %d\n\n",osum);
    return 0;
}
