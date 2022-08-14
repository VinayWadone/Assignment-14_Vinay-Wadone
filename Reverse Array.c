#include<stdio.h>
int main()
{
    int n,i;
    printf("\n\nEnter the length of the array\n\n");
    scanf("%d",&n);
    int a[n];
    printf("\n\nEnter %d numbers\n\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n\nThe reverse of your array will be:");
    for(i=n-1;i>=0;i--)
        printf("\n%d",a[i]);
        printf("\n\n");
    return 0;
}
