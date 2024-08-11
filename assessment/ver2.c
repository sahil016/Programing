#include<stdio.h>
void menu(const char *foods[],float prices[],int size )	
{
	int i;
	printf("----------------------Menu-------------------------------\n");
	for(i=0;i < size;i++)
	{
		printf("%d %s Price = %.2f\n",i+1,foods[i],prices[i]);
	}
}

float calculateAmount(int choice, int quantity,float prices[])
{
	return prices[choice - 1]* quantity;	
}

void displayBill(float total)
{
	printf("Your Total 	amount is : %.2f\n",total);
}

int main()
{
	const char*foods[]={"pizza","burger","dosa","idli"};
	float prices[]={180,100,120,150};
	int choice, quantity;
	float total=0;
	char moreOrders;
	int size= sizeof(prices) /sizeof(prices[0]); //calculate the size of array
	
	do
	{
		menu(foods, prices, size);
		
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		if(choice>= 1 && choice <=4)
		{
			printf("You have selected %s\n",foods[choice-1]);
			printf("Enter quantity: ");
			scanf("%d",&quantity);
			
			float amount = calculateAmount(choice, quantity, prices);
			printf("Amount: %.2f\n",prices[choice-1]);
			
			total += amount;
			printf("Total amount is :%.2f",total);
			
			
			printf("Do you want to place more orders? (y/n): ");
			scanf(" %c",&moreOrders);
		}
		else
		{
			printf("Invalid choice. pleace enter a vali nuumber between 1 and 4.\n");
		}
		
		
	}while (moreOrders == 'y' || moreOrders == 'Y');
	
	displayBill(total);
}
