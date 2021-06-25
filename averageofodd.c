#include<stdio.h>

float average(int n)
{
    int a[n],i,sum=0,j=0;
    float avg;
    printf("\nenter the no: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            sum+=a[i];
            j++;
        }
    }
    avg=(float)sum/j;
    return avg;

}
int main()
{
    int n;
    printf("\nenter no of element : ");
    scanf("%d",&n);
    float p=average(n);
    printf("\n average = %.2f",p);
    return 0;
}
