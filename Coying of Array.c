#include<stdio.h>
int main()
{
    int n, i;
    printf("\n\nEnter the length of your array\n\n");
    scanf("%d",&n);
    int a[n], b[n];
    printf("\n\nEnter %d numbers\n\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
   {
    b[i]=a[i];
    printf("\n%d",b[i]);
   }
   return 0;
}
