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
 	fac(); //function calling
 	add();
 	sub();
 	mul();
 }
