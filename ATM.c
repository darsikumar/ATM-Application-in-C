
#include<stdio.h>
void main()
{
	 int deposited,withdraw;
	 int total_amount;
     total_amount=40000;
 printf("hi welcome to ATM application \n");
   // int present_amount;
   // present_amount==10000;
	int pin;
	pin=1431;
    printf("enter your 4 digit pin \n");
    scanf("%d",&pin);
    if(pin!=1431)
    {
    	printf("wrong pin sorry");
    }
     if(pin==1431)
     {
	 printf("\n \n \n**ok processing**\n");
	 printf("\n \n  HI DARSI KUMAR \n");
	 int option;
    printf("choose your option \n1.balance\n2.deposite\n3.withdraw\n");
    scanf("%d",&option);
    printf("your option is==%d\n",option);
    if (option==1)
    {
    	printf("your present bank balance is :40000 \n");
    	
	}

	   if(option==2) 
	 {
	
	  
      printf("enter your amount to deposite\n");
      scanf("%d",&deposited);
      printf("your deposited amount==%d\n",deposited);
     
	  total_amount=total_amount + deposited;
      printf("now bank balance is==%d\n",total_amount);
      
     }
        if(option==3)
	
		{
	
		 printf("enter your amount to withdraw\n");
	   	scanf("%d",&withdraw);
		printf("your withdraw amount is:%d \n",withdraw);
	
	  total_amount=total_amount - withdraw;
      printf("now bank balance is==%d\n",total_amount);
        }
             
    
	
   }
     
}





















