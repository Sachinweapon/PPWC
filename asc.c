#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n,i,j;
        printf("How many elements you want to enter?");
        scanf("%d",&n);
        int *p;
        p=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
                printf("Enter number: \n");
                scanf("%d",(p+i));
        }
        
        for(i=0;i<n;i++)
        {
              for(j=i+1;j<n;j++)
              {
                        if((*(p+i))>(*(p+j)))
                        {
                                int x=*(p+i);
                                *(p+i)=*(p+j);
                                *(p+j)=x;
                        }
              }    
        }
        printf("Sorted number:\n");
        for(i=0;i<n;i++)
        {
                printf("%d\n",*(p+i));
        }
        
free(p);
return 0;
}
                
