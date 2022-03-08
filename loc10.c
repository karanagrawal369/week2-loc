#include<stdio.h>
int main()
{  
int mat1[2][2];int sum=0;int mat2[2][2];int product=1,i,j;
    
    printf("Enter the elements of first matrix:\n");
    
    for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for( i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of second matrix:\n");
     for( i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for( j=0;j<2;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    printf("Sum :\n");
    for(i =0;i<2;i++)
    {
        for ( j=0;j<2;j++)
        {
            sum=mat1[i][j]+mat2[i][j];
            printf("%d ",sum);
                       
        }
        printf("\n");
    }
    printf("Product:\n");
    for( i =0;i<2;i++)
    {
        for ( j=0;j<2;j++)
        {
            product=mat1[i][j]*mat2[i][j];
            printf("%d ",product);
                       
        }
        printf("\n");
    }

    

    return 0;
}
