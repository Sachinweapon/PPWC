//pointers and arrays

#include<stdio.h>
int main()
{
        int arr[5]={5,10,15,20,25};
        int i;
        for(i=0;i<5;i++)
        {
                printf("Value of arr[%d]=\n",i);
                printf("%d\n",arr[i]);
                printf("%d\n",*(arr+1));
                printf("%d\n",*(1+arr));
                printf("%d\n",i[arr]);

        }
        return 0;
}
                
