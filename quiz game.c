//program to make a quiz game
#include<stdio.h>
int main(){
	int i;
	printf("What is the full form of HTML");
	printf("\n1.Hyper Text Markup language");
	printf("\n2.Hyper transfer Markup language");
	printf("\n3.Hyper Text markups logic");
	printf("\n4.Hyper Text message language");
	printf("\nWhich number answer is correct:");
	scanf("%d",&i);
	if(i>1){
		printf("The answer is incorrect");
	}
	if(1==i){
		printf("The answer is correct");
	}
	if(i>4){
		printf("\nIn this question there will olny 4 answer not 5");
	}
	
	return 0;
}
