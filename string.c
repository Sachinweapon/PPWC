#include<stdio.h>
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
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]=='a')
                {
                        s[i]='A';
                }
                if(s[i]=='e')
                {
                        s[i]='E';
                }
                if(s[i]=='i')
                {
                        s[i]='I';
                }
                if(s[i]=='o')
                {
                        s[i]='O';
                }
                if(s[i]=='u')
                {
                        s[i]='U';
                }
                
        }
        printf("Converted string: %s\n",s);
        printf("Do you want to change the size of the memory?\n1.Yes\n2.No");
        scanf("%d",&c);
        printf("Enter the no. of characters you want to enter");
        scanf("%d",&p);
        getchar();
        s=realloc(s,p);
        printf("Enter the string: ");
        fgets(s,p+1,stdin);
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]=='a')
                {
                        s[i]='A';
                }
                if(s[i]=='e')
                {
                        s[i]='E';
                }
                if(s[i]=='i')
                {
                        s[i]='I';
                }
                if(s[i]=='o')
                {
                        s[i]='O';
                }
                if(s[i]=='u')
                {
                        s[i]='U';
                }
                
        }
         printf("Converted string: %s\n",s);
        free(s);
        return 0;
        
}
