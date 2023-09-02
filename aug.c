#include<stdio.h>
int main(){
	char name[] = "Gokul";
	char grd ='A';
	int sub1 = 95, sub2 = 90, sub3= 85;
	int total_marks = sub1 + sub2 + sub3;
	float percentage = (total_marks*100)/300;
	printf("My Name is %s and my Percentage is %f and my grade is %s",name,percentage,grd);
	return 0;	
}
