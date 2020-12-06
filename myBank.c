#include <stdio.h>
#include "myBank.h"

double bankAcc[2][50] = {{0}};

void openAcc (double amount)
{
	int openacc = 0;
	if(openacc < 50)
	{
		
		for(int i=0 ; i<50 ; i++)
		{
			
		if(bankAcc[1][i] == 0 && bankAcc[0][i] == 0 )
			{	
		
				bankAcc[1][i] = amount;
				bankAcc[0][i] = 1;
				openacc++;
		printf("Your new bank Account number is %d\n",901+i);
			
				break;
			}
		
		}

	}
	else 
		printf("We have no available room in our bank for you!");
			
		

}
		
	

void printBalance(int AccNumber)
{
	if(AccNumber>900 && AccNumber<950)
	{
		for(int i=0 ; i<50 ; i++)
		{
			if(901+i == AccNumber && bankAcc[0][i] == 1)
			{
				printf("Your account's balance is %.02lf",bankAcc[1][i]);
			}
			if(901+i == AccNumber && bankAcc[0][i] == 0)
			{
				printf("Your account is closed.");
			}
		}
	}
	else
		printf("Enter a valid  Account number!");

}

void Deposit(int AccNumber , double amount)
{
	if(AccNumber>900 && AccNumber<950 && amount > 0 )
	{
		for(int i=0 ; i<50 ; i++)
		{
			if(901+i == AccNumber && bankAcc[0][i] == 1)

			{
				bankAcc[1][i] = bankAcc[1][i] + amount;
				printf("Your new account balance is %.02lf",bankAcc[1][i]);
			}
			if(901+i == AccNumber && bankAcc[0][i] == 0)
			{
				printf("Your account is closed.");
			}
		}
	}

	else
		printf("Enter a valid  Account number! or a positive amount");
}

void Withdraw(int AccNumber , double amount)
{
	if(AccNumber>900 && AccNumber<950)
	{
		
		for(int i=0 ; i<50 ; i++)
		{
			if(901+i == AccNumber && bankAcc[0][i] == 1)

			{
				if(amount <= bankAcc[1][i])
				{
					bankAcc[1][i] = bankAcc[1][i] - amount;
					printf("Your new account balance is %.02lf",bankAcc[1][i]);
				}
				else
					printf("You can't withdraw because your balance is %.02lf" , bankAcc[1][i]);
			}
				if(901+i == AccNumber && bankAcc[0][i] == 0)
				{
					printf("Your account is closed.");
				}
		}
	}

	else
		printf("Enter a valid  Account number!");
}

void closeAcc(int AccNumber)
{
	if(AccNumber>900 && AccNumber<950)
	{
		for(int i=0 ; i<50; i++)
		{
			if(bankAcc[0][i] == 1 && AccNumber == 901+i )
			{
				bankAcc[0][i] = 0;
				break;
			}
			
			if(901+i == AccNumber && bankAcc[0][i] == 0)
			{
				printf("Your account is already closed.");
			}
		}
	}
	else
		printf("Enter a valid  Account number!");
}

void printall()
{
	for(int i=0 ; i<50 ; i++)
	{
		if(bankAcc[0][i] == 1)
		{
			printf("Account number %d is open\n" , 901+i);
			printf("With a balance of %.02lf\n" , bankAcc[1][i]);
		}
	}
}

void rebet()
{
	int percent;
	printf("please enter your percent :");
	scanf("%d",&percent);
	
	for(int i = 0; i < 50; i++)
	{
		if(bankAcc[0][i] == 1)
		{
			bankAcc[1][i] = bankAcc[1][i] + ((bankAcc[1][i] * percent)/100);
		printf("this is your new balance : %.02lf\n",bankAcc[1][i]); 											
		}
	
	}
}

void closeall()
{
	for(int i=0 ; i<50 ; i++)
	{
		if(bankAcc[1][i] == 1)
		{
			bankAcc[1][i] = 0;
		}
	}
}

	

			
				
				











	






















	
	
	



































 
					
	




































