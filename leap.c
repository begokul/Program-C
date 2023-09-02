#include<stdio.h>

int main(){
	int year;
	printf("Enter the year :")
	scanf("%d",&year);
	(year%100!=0 && year%400==0 || year$4==0)?printf("yes"):printf("no");
	return 0;
}
