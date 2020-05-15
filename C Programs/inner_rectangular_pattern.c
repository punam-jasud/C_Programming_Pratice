#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
int main() 
{

    int n,a[MAX][MAX],size,front,back,i,j;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    size = n * 2 -1;
    front = 0;
    back = size - 1;
    if(n >= 1 && n <= 1000)
    {
        while(n != 0)
        {
            for(i=front ; i <= back ;i++)
            {
                for(j = front ; j <=  back ; j++)
                {
                    if((i == front) || (i == back) || (j == front) || (j == back))
                    {
                        a[i][j] = n;
                    } 
                }
            }
            front++;
            back--;
            n--;
        }

        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

        
    }
    return 0;
}


