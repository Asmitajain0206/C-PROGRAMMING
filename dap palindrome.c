// Design a function: int isPalindrome(int  x); The function returns true (1), if x is palindrome number otherwise it returns false(0).
#include<stdio.h>
int isPalindrome(int x);

int main()
{
    int x,ans;
    printf("\nEnter no. to be checked : ");
    scanf("%d",&x);
    if(isPalindrome(x)==1)
        printf("\nA palindrome");
    else
        printf("\nNOT A palindrome");
    return 0;
}
int isPalindrome(int x)
{
    int y=x,no=0;
    while(x)
    {
        no=no*10 + x%10;
        x/=10;
    }
    printf("\nno: %d",no);
    if(no==y)
        return 1;
    return 0;
}
