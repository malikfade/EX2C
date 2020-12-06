#include <stdio.h>
#include "myBank.c"


int main()
{
char x;
printf("Please choose a transaction type:\n");
	printf("O-Open Account\nB-Balance Inquiry\nD-Deposit\nW-Withdrawal\nC-Close Account\nI-Interest\nP-Print\nE-Exit\n");
	
	


double z,a,p;
int n,e,f ,close =0 ;


while (!close)
{
	scanf("%c",&x);

	switch(x)
	{
	case 'o' :

		printf("Please enter initial amount:");
		scanf("%lf",&z);
		
		if(z>0)
			{
				openAcc(z);
				break;
			}
			
			else
				printf("invalid amount");
				break;
			



	case 'b' :

	
		printf("Enter your bank account number : ");
		scanf("%d",&f);
		printBalance(f);
		break;
	
	case 'd' :
	
		printf("Enter your bank number :\n");
		scanf("%d",&n);
		printf("Enter your amount of deposit :");
		scanf("%lf" ,&a);
		Deposit(n,a);  
		break;
	
	case 'w' :
	
		printf("Enter your bank number :\n");
		scanf("%d",&e);
		printf("Enter your amount of withdrawal :");
		scanf("%lf" ,&p);
		Withdraw(e,p);
		break;
	
	case 'c' :

		
		printf("Enter your bank number :\n");
		scanf("%d",&e);
		closeAcc(e);
		break;
	case 'i' :
	
		rebet();
		break;

	case 'p' :

		printall();
		break;

	case 'e' :

		closeall();
		close = 1;
		break;

	
	}

}

return 0;
}
 







	
