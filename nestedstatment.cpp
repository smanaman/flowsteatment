#include<stdio.h>
int main(){
int a,b,c;
printf("Enter your first number");
scanf("%d",&a);
	
printf("Enter your second number");
scanf("%d",&b);	
	
printf("Enter your third number");
scanf("%d",&c);	
	
if(a<b)	{
	if(a<c)	{
		printf("your minemum value is %d\n",a);
	}else{
		printf("%d",c);
	}
}else {
	if(b<c){
			printf("your minemum value is %d\n",b);
	}else{
		printf("%d",c);
	}
} 

}