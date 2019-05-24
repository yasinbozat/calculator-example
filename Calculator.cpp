//Calcultor
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int division(int value1,int value2){
	int sum = 0;
	sum = value1 / value2;
  return sum;
}

int multiplication(int value1,int value2){
	int sum = 0;
	sum = value1 * value2;
  return sum;
}

int subtraction(int value1,int value2){
	int sum = 0;
	sum = value1 - value2;
  return sum;
}

int addition(int value1,int value2){
	int sum = 0;
	sum = value1 + value2;
  return sum;
}


main(){
	base:
	int select = 0,value1,value2;
	printf("----------------------------------------------------------------------\n");
	printf("1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Division \n\nSelect =   ");
	scanf("%d",&select);
	if(select < 1 || select > 4){
		system("cls");
		printf("Wrong Select! Please Try Again.");
		Sleep(1500);
		system("cls");
		goto base;
	}
	printf("----------------------------------------------------------------------\n");
	printf("\nEnter Value 1 = ");	scanf("%d",&value1);
	printf("Enter Value 2 = ");	scanf("%d",&value2);
	printf("\n----------------------------------------------------------------------\n");
	
	switch (select){
	case 1: printf("\nSelected Addition");
	printf("\nResult = %d",addition(value1,value2));
	
	break;
	
	case 2: printf("\nSelected Subtraction");
	printf("\nResult = %d",subtraction(value1,value2));
	break;
	
	case 3: printf("\nSelected Multiplication");
	printf("\nResult = %d",multiplication(value1,value2));
	break;
	
	case 4: printf("\nSelected Division");
	printf("\nResult = %d",division(value1,value2));
	break;
	
	}
}

