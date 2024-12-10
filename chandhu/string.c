#include<stdio.h>
int main()
{
    char arr[10];
    printf("enter 5 elements in the array:\n");
    fgets(arr,sizeof arr,stdin);
    printf("The string is :");
    for(int i=0;i<5;i++)
    {
        printf("%c",arr[i]);
    }
    for(int i=5;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
