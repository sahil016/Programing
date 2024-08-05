 #include<stdio.h>
 
 fac(int n)	//function defination
 {
 	int i,fac=1;
 	for(i=1;i<=n;i++)
 	{
 		fac*=i;
	}
	printf("Factorial : %d",fac);	 
 }
 
 add(int a,int b)
 {
 	
 	printf("\n Addition : %d",a+b);
 	
 }
 
  sub()
 {
 	int a,b;
 	printf("\n Enter A: ");
 	scanf("%d",&a);
 	printf("\n Enter B: ");
 	scanf("%d",&b);
 	printf("\n sub : %d",a-b);
 	
 }
 
  mul()
 {
 	int a,b;
 	printf("\n Enter A: ");
 	scanf("%d",&a);
 	printf("\n Enter B: ");
 	scanf("%d",&b);
 	printf("\n Mul : %d",a*b);
 	
 }
 main()
 {
 	int choice;
 	printf("Press 1 for Factorial");
 	printf("\nPress 2 for Addition");
 	printf("\nPress 3 for Subtraction");
 	printf("\nPress 4 for Multiplication");
 	printf("\nPress 5 for Exit");
 	while(1)
 	{
 		printf("\nEnter Choice:");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			fac(5);
		}
		else if(choice==2)
		{
			add(10,20);	
		}
		else if(choice==3)
		{
			sub(50,10);	
		}	
		else if(choice==4)
		{
			mul(5,10);
			
		}
		else if(choice==5)
		{
			printf("Thank you!!");
			break;
		}
		else
		{
			printf("Invalid choice!!");
			break;
		}
	}
 }
