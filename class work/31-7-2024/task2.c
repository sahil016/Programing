 #include<stdio.h>
 
 fac()	//function defination
 {
 	int n,i,fac=1;
 	printf("Enter Number :");
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		fac*=i;
	}
	printf("Factorial : %d",fac);	 
 }
 
 add()
 {
 	int a,b;
 	printf("\n Enter A: ");
 	scanf("%d",&a);
 	printf("\n Enter B: ");
 	scanf("%d",&b);
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
			fac();
		}
		else if(choice==2)
		{
			add();	
		}
		else if(choice==3)
		{
			sub();	
		}	
		else if(choice==4)
		{
			mul();
			
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
