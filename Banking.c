#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){


    int choice = 0;
    float balance = 0.0f;

    printf(" *** Welcome to the bank ***");

    do
    {
        
        printf("\n Select an option: \n");
        printf("\n 1. check Balance");
        printf("\n 2. deposit money");
        printf("\n 3. withdraw money");
        printf("\n 4. Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            
            break;
        case 2:
            balance += deposit();
             
            break;
        case 3:
            balance -= withdraw(balance) ;
            
            break;
        case 4:
        printf("\n Thank you for use the bank \n");   
        break; 
        default:
        printf("\n Invalid choice. select 1 - 4 \n");
            break;
        }


    } while (choice != 4);
    

    return 0;
}

void checkBalance(float balance){

    printf("\n your current balance is: $ %.2f", balance);
    Sleep(1000);
     system("cls");
    

}

float deposit(){

    float amount = 0.0f;

    printf("\n Enter amount to deposit: $");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("\n invalid amount");
        return 0.0f;
         Sleep(1000);
     system("cls");
    }else{
         printf("\n successfully deposited $%.2f", amount);
         
        
         return amount; 
     
          
    }
    
   

} 

float withdraw(float balance){

    float amount = 0.0f;

    printf("\n enter amount to withdraw: $");
    scanf("%f",&amount);

    if (amount < 0)
    {
       printf("\n Invalid amount");
       return 0.0f;
      
    }else if (amount > balance)
    {
        printf("\n Insufficient funds! Your balance is $%.2f",balance);
        return 0.0f;
       
    }else{

        printf("Successfullly withdrew $%.2f", amount);
        return amount;
         

    }
    
    


}