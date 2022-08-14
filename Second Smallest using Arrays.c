#include<stdio.h>
int main()
{
    int n,i, min,smin,max;
    printf("\n\nEnter the length of the array\n\n");
    scanf("%d", &n);
    int a[n];
    printf("\n\nEnter %d values\n\n", n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];smin=a[0];max=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i]) min=a[i];
        if(max<a[i]) max=a[i];
    }
    for(i=0;i<n;i++)
        if(a[i]>min&&a[i]<=max)max=a[i];
        smin=max;
printf("\n\nSo the second smallest is: %d \n\n", smin);
return 0;
}
