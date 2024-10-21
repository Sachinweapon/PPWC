#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n;
        printf("How many elements you want to enter?");
        scanf("%d",&n);
        int *p;
        p=(int*)calloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
                printf("Enter number: \n");
                scanf("%d",(p+i));
        }
        print("Print number:\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t",*(p+i));
        }
        for(i=0;i<n;i++)
        {
                if(*(p+i)>*(p+(i+1)))
                {
                        int x=*(p+i);
                        *(p+i)=*(p+(i+1));
                        *(p+(i+1))=x;
                }
        }
        print("Sorted number:\n");
        for(i=0;i<n;i++)
        {
                printf("%d\t",*(p+i));
        }
        
        free(p);
        return 0;
                
