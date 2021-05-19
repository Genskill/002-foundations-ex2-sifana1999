#include <stdio.h>
#include <cs50.h>
int main(){
    float larger;
    float num1=get_float("side 1 ");
	float num2=get_float("side 2 ");
	float num3=get_float("side 3 ");
	if(num1 > num2){
	    if(num1 > num3)
	        larger=num1;
	    else
	        larger=num3;
	}
	 else{
	     if(num2>num3)
	         larger=num2;
	     else
	         larger=num3;
	 }
	 if(larger == num1){
	     if(num1*num1 == num2*num2 + num3*num3)
	        printf("Yes\n");
	     else
	        printf("No\n");
	 }
	 else if(larger == num2){
	     if(num2*num2 == num1*num1 + num3*num3)
	        printf("Yes\n");
	     else
	        printf("No\n");
	 }
	 else{
	     if(num3*num3 == num1*num1 + num2*num2)
	        printf("Yes\n");
	     else
	        printf("No\n");
	 }
   
}
