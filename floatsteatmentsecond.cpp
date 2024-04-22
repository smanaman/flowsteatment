#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter your value");
	scanf("%d",&a);
	
	printf("enter your value");
	scanf("%d",&b);
	
	printf("enter your value");
	scanf("%d",&c);
	
		printf("enter your value");
	scanf("%d",&d);
if(a>b){
   if(a>c){
   	   if(a>d){
   	   	printf("%d",a);
		  }else{
		  	printf("%d",d);
		  }  	
    }else{
   	printf("%d",c);
   }
}else{
    if(b>c)	{
        if(b>d){
        	printf("%d",b);
		}else{
			printf("%d",d);
		}
	}else{
	     if(c>d){
	     	printf("%d",c);
		 }else{
		 	printf("%d",d);
		 }	
	}
}
	
}