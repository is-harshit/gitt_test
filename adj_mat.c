#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int vertices,flag=0,count=0,vertex1,vertex2,print_flag;
    scanf("%d",&vertices);
    int matrix[vertices][vertices];
    int target;
    
    if(vertices==0)
    {
        printf("-1");
        exit(0);
    }
 
    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            matrix[i][j]=0;
        }
    }
            
    while(flag==0)
    {
    scanf("%d",&vertex1);
    print_flag=scanf("%d",&vertex2);
        
    if(print_flag!=-1)
    {
        matrix[vertex1-1][vertex2-1]=1;
    }
    else
    {
        flag=1;
        target=vertex1;
    }
    }

    for(int i=0;i<vertices;i++)
    {
        if(matrix[target-1][i]==1)
          count++;
    }

    if(count==0)
    {
        printf("-1");
        exit(0);
    }
    else if(count==1)
      printf("%d",target);
    else
    {
    for(int i=0;i<vertices;i++)
    {
        if(matrix[target-1][i]==1)
        {
            printf("%d",i+1);
            if (count>1)
            {
                printf(",");
                count--;
            }
        } 
    }
    }
    
    return 0;
}


