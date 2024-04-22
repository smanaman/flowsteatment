#include<stdio.h>
int main(){
int num1,num2,num3,num4;
printf("Enter your first number");
scanf("%d",&num1);
	
printf("Enter your second number");
scanf("%d",&num2);	
	
printf("Enter your third number");
scanf("%d",&num3);	

printf("Enter your third number");
scanf("%d",&num4);	
if(num1>num2)	{
if(num1>num3)	{
	if(num1>num4){
	printf("your maximum value is %d\n",num1);
}else{
	printf("your maximum value is %d",num4);
     }
        }
           }
else if(num2>num3)	{
	if(num2>num4){
		printf("your maximum value is %d",num1);
	}
	else{
		printf("your maximum value is %d",num4);
	}
	
	-
}	        
else if(num3>num4){
	
	printf("your maximum value is %d",num3);
}
else{
	printf("your maximum value is %d",num4);
}




}
