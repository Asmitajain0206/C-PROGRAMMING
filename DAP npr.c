#include<stdio.h>
int npr(int n, int r);
int main()
{
    int n,r;
    printf("ENTER N AND R :");
    scanf("%d %d",&n,&r);
    printf("\nThe value is : %d",npr(n,r));
    return 0;
}
int npr(int n,int r)
{
    int num=1,i;
    for(i=0;i<r;i++)
        num*=(n-i);
    return num;
}
