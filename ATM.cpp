
#include <stdio.h>

unsigned long amount=1000,deposit,withdraw;
int pin,choice;
char ccx;

int main()
{
    while(pin !=1234)
    {
        printf("ENTER ATM PIN:");
        scanf("%d",&pin);
        if(pin!=1234)
        {
            printf("PLEASE ENTER VALID PASSWORD ! \n");
        }
    }
    
    do{
        printf("*********WELCOME TO ABC ATM SERVICE*********\n \n"); 
        
        printf("1.Cheak Balance              Date:%s",__DATE__);
        
        printf("\n2.Withdraw                   Time:%s",__TIME__);
        
        printf("\n3.Deposit");
        
        printf("\n4.Exit");
        
        printf("\n\n*******************************************\n");
        
        printf("Enter Your Choice:");
        
        scanf("%d",&choice);
        
        switch(choice)
        
        {
            case 1:printf("\nYour Account Balance:%lu",amount); 
            
                   break;
                   
            case 2:printf("Enter The Amount To Withdraw:");
            
                   scanf("%lu",&withdraw);
                   
                   if(withdraw%100!=0)
                   
                   {
                       printf("\nPlease Enter Amount Multiple of 100");
                       
                       
                   }
                   else if(withdraw > (amount-500))
                   
                   {
                   	
                       printf("\n Insufficient Balance");
                       
                   }
                   else
                   {
                       amount=amount-withdraw;
                       
                       printf("\nPlease Collect Your Cash");
                       
                       printf("\nYour Current Balance is:%lu",amount);
                       
                   }
                   
                   break;
            case 3:printf("\nEnter The Amount To Deposit:");
            
                   scanf("%lu",&deposit);
                   
                   amount=amount + deposit;
                   
                   printf("\nYour Current Balance is:%lu",amount);
                   
                   break;
                   
            case 4:printf("\nThank You For Using ABC ATM Service !");
            
                   break;
                   
            deafault:
            	
            	printf("\nInvalid Choice !");
        }
        
        printf("\n\nDO U WANT TO CONTINUE:(Y/N):");
        
        scanf("%s",&ccx);
        
    }while(ccx=='Y' || ccx=='y');
    
    printf("Thanks For Visiting !");
    
}

