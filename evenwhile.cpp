#include<stdio.h>

int main(){
	int i=1,n;
	printf("Enter Number");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\t",i);
		i+=2;
	}
	return 0;
}
