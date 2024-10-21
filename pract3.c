#include<stdio.h>

int main()
{
	double tot=100.80;
	
	double petrolp=1.8*56.00;
	printf("Money spent on petrol: \n");
	printf("%lf\n",petrolp);
	double bara=35.00;
	printf("Money spent on bara: \n");
	printf("%lf\n",bara);
	printf("Balance left: \n");
	double bal=tot-petrolp-bara;
	printf("%lf\n",bal);
	return 0;
}	 
