#include<stdio.h>
main(){
int c1,c2;
double basic;
double bonus=2500;
double hra,da,gs;
printf("Choose:\n 1:Graduated\n 2.Post-Graduated\n");
scanf("%d",&c1);
switch(c1){
case 1: printf("Choose:\n 1:If working for more than 3 yrs\n 2.Working for less than 3 years\n");
	scanf("%d",&c2);
	switch(c2)
	{
	  case 1: basic=5000; 
	  	hra=0.2*basic; da=0.3*basic;
		gs=basic+hra+da+bonus;
		printf("your final salary is:\n");
		printf("%lf\n",gs);
		break;
	  case 2: basic=5000; 
	  	hra=0.2*basic; da=0.3*basic;
		gs=basic+hra+da;
		printf("your final salary is:\n");
		printf("%lf\n",gs);
		break;
	  default: printf("Enter the correct option\n");
	}
	break;
case 2: printf("Choose:\n 1:If working for more than 3 yrs\n 2.Working for less than 3 years\n");
	scanf("%d",&c2);
	switch(c2)
	{
	  case 1: basic=6000;hra=0.3*basic; da=0.4*basic;
		gs=basic+hra+da+bonus;
		printf("your final salary is:\n");
		printf("%lf\n",gs);
		break;
	  case 2: basic=6000;hra=0.3*basic; da=0.4*basic;
		gs=basic+hra+da;
		printf("your final salary is:\n");
		printf("%lf\n",gs);
		break;
	  default: printf("Enter the correct option\n");
	}
	break;
default: printf("Enter the correct option\n");
}
return 0;
}
		

