#include<stdio.h>
int main()
{
  int arr[5];
  printf("enter the 5 elements in the array :\n");
 for(int i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("The original array is:[");
  for (int i=0;i<5;i++) 
{  
    if(i<4)
  {
    printf("%d,",arr[i]);
  }
  else
  {
    printf("%d",arr[i]);
  }
}
printf("]\n");
int min=arr[0],max=arr[0];
for (int i=0;i<5;i++)
{
    if (min>arr[i]);
    {
        min=arr[i];
    }
}
for (int i=0;i<5;i++)
{
    if(max<arr[i])
    {
        max=arr[i];
    }
}
printf("minimum elememt of the array is :%d",min);
printf("\nmaximum element of the array is :%d",max);
return 0;
}
