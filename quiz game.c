//program to make a quiz game
#include<stdio.h>
int main(){
	int i,j,a;
	printf("What is the full form of HTML");
	printf("\n1.Hyper Text Markup language");
	printf("\n2.Hyper transfer Markup language");
	printf("\n3.Hyper Text message logic");
	printf("\n4.Hyper Text Markup language");
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
	printf("\nWhat is a full form of CPU");
	printf("\n1.center processor unit");
	printf("\n2.All of the above");
	printf("\n3.center programming unit");
	printf("\n4.center processing unit");
	printf("\nWhich number answer is correct:");
	scanf("%d",&j);
	if(j==4){
		printf("The answer is correct");
	}
	else{
		printf("The answer is incorrect");
	}
	printf("\nwhat is full form MB");
	printf("\n1.Memory bit:");
	printf("\n2.Mega bit");
	printf("\n3.Mega bittle");
	printf("\n4.All of the none");
	printf("\nWhich number answer is correct:");
	scanf("%d",&j);
	if(a==2){
		printf("The answer is correct");
	}
	else{
		printf("The answer is incorrect");
	}
	return 0;
}
