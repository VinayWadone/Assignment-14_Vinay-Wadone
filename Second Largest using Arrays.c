#include<stdio.h>
int main()
{
    int n,i, max,smax;
    printf("\n\nEnter the length of the array\n\n");
    scanf("%d", &n);
    int a[n];
    printf("\n\nEnter %d values\n\n", n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];smax=a[0];
    for(i=1;i<n;i++)
      {

       if(max>a[i])
        {
            max=max;
            //smax=a[i];
        }
        else
    {
        smax=max;
        max=a[i];
    }
}

//printf("\n\n%d\n\n", max);
printf("\n\nSo the second highest is: %d \n\n", smax);
return 0;
}
