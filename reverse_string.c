#iclude<stdio.h>
#include<stdlib.h>
int main()
{
        int n,p,c,i,j;
        printf("How many elements you want to enter?");
        scanf("%d",&n);
        getchar();
        char* s;
        s=(char*)malloc(n*sizeof(int));
        printf("Enter the string: ");
        fgets(s,n+1,stdin);
        for(i=0;i<n;i++)
        {
                char k=s[i];
                s[i]=s[n-i];
                s[n-i]=k;
        }
}
