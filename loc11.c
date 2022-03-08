#include<stdio.h>
int main()
{   
    int num,i,j;
    printf("Enter the length of the side:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
         for (j=0;j<num;j++)
         {
             if(i==0 || j==0 || i==num-1 || j==num-1)
             {
                 printf("* ");
             }
             else
             {
                printf("  ");
             }
         }
         printf("\n");
    }
    return 0;
}
