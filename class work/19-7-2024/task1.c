 #include<stdio.h>
 #include<stdlib.h>
 main()
 {
 	printf("********************Welcome the game************************");
 	printf("\n**********Enter Number between 1 to 50***********\n");
 	
 	while(1)
 	{
 		int choice,n=rand() % 50;
		printf("\nEnter Number: ");
		scanf("%d",&choice);	
		
		if(choice>50)
		{
			printf("Invalid Choice!!");
			break;
		}
		else if(choice==n)
		{
			printf("%You are win!!");
			break;
		}
		else if(choice<n)
		{
			printf("%d is Smaller than original number\n",choice);
		}
		else
		{
			printf("%d is Greater than original number\n",choice);
		}
	}
 }
