#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
void check(int a[], int i, int n)
{ //supplying array and position of current goti to check other goti position
    int j;
    for (j = 1; j <= n; j++)
    {
        if (i != j) //it should not compare current goti to current goti
        {
            if (a[i] == a[j])
            {
                a[i] = 0; // replacing last goti to 0 if condition matched
                break;
            }
        }
    }
}
int main()
{
    int a[MAX] = {}, n, i, roll, flag = 1;
    printf("enter no of players : ");
    scanf("%d", &n);
    srand(time(0));
    while (flag) //we need to play till anyone wins
    {
        for (i = 1; i <= n; i++) //to increase khaane where goti is of every player turn by turn
        {
            if (flag) //so tht if we got winner
            {
                printf("\n%d roll the dice : ", i);
                getch();
                roll = (rand() % 6 + 1);
                a[i] += roll; //rolling the dice for each player randomly from 1 to 6
                printf("%d ,position = %d", roll, a[i]);

                check(a, i, n); //checking if kisi ki goti piti?
            }
             if (a[i] >= 10) //checking if anyone reached 100
            {
                printf("\n%d player is the winner", i); //printing winner
                flag = 0;                               //to break while loop
                break;                                  //here we need to break this as well as while loop ?
            }

        }
    }
    return 0;
}
