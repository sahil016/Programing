#include<stdio.h>

void menu()
{
	printf("----------------------Menu-------------------------------\n");
    printf("1. Pizza Price = 180.00\n");
    printf("2. Burger Price = 100.00\n");
    printf("3. Dosa Price = 120.00\n");
    printf("4. Idli Price = 150.00\n");
}

calculateAmount(int choice,int quantity)
{
	float prices[]={180,100,120,150};
	return prices[choice - 1] * quantity;
}


int main()
{
	int choice,quantity;
	float total=0;
	char moreOrders;
	
	menu();
		
	while(1)
	{
		printf("Enter your choice(1-4): ");
		scanf("%d",&choice);
		
		if(choice >= 1 || choice <=4)
		{
			printf("You have selected ");
			switch(choice)
			{
				case 1:
					printf("Pizza\n");
					break;
				case 2:
					printf("Burger\n");
					break;
				case 3:
					printf("Dosa\n");
					break;
				case 4: 
					printf("Idli\n");
					break;
			}
			printf("Enter quantity: ");
			scanf("%d",&quantity);
			
			float amount = 	calculateAmount(choice, quantity);
			total += amount;
			
			printf("Amount: %.2f\n",amount);
			printf("Total amount is: %.2\n",total);
			
			printf("Do you want place more orders? y/n:   ");
			scanf(" %c",&moreOrders);
		
            if (moreOrders != 'y' && moreOrders != 'Y') {
                break;  
            }
        } else {
            printf("Invalid choice. Please enter a valid number between 1 and 4.\n");
        }
    }


}

