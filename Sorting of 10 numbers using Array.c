#include<stdio.h>
int main()
{
    int a[10], i, j,min=0,temp;
    printf("\n\nEnter the 10 numbers\n\n");
    for (i=0;i<=9;i++)
    scanf("%d", &a[i]);
    min=a[0];
    for (i=0;i<9;i++)
    {
      for (j=i+1;j<=9;j++)
      {
        if(a[i]<=a[j]);
        else
        {
            temp = a[j];
            a[j]=a[i];
            a[i]=temp;
        }
      }
    }
  for (i=0;i<=9;i++)
  printf("\n%d",a[i]);
  return 0;
}
