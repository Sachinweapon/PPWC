#include<stdio.h>

void fibs(int n,int *arr);

int main()
{       int n;
        printf("Enter the no. of terms of the series\n");
        scanf("%d",n);
        int fib[n+1];
        fibs(n,fib);
        printf("The series is:");
        for(int i=0;i<=n;i++)
        {
                printf("%d\n",*(fib+1));
        }
        return 0;
        void fibs(int n, int *arr)
        {
       
                *arr=0;
                *(arr+1)=1;
                for(int i=2;i<=n;i++)
                {
                        *(arr+i)=*(arr+i-1)+*(arr+i-2);
                }
        }
}
