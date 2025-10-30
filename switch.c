#include<stdio.h>
main (void)
{
	int a,b;
	int add,sub,mul,mod;
	float div;
	char op;
	printf("enter the opration:");
	scanf("%c",&op);
	printf("enter any two values to perform the operation %c/n :",op);
	scanf ("%d",&a,&b);
	switch(op)
	{
		case '+': add = a+b;
		          printf("add %d",add);
		          break;
		case '-':  sub = a-b;
		          printf("sub %d",sub);
				  break;
		case '*':  mul = a*b;
		          printf("mul %d",mul);
				  break;
		case '/':  div = (float)a/b;
		          printf("division:%f",div);
				  break;
		case '%':  mod = a%b;
		          printf("remainder:%d",mod);
				  break;
		default : printf("sorry invalid option :(");		  		  	  	          
	}
}
