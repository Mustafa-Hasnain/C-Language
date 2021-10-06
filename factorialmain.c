#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void factorial(n){
		int i;
		int fac = n;
		for(i= n-1; i>=1; i--){
		 fac = fac * i;
		}
		printf("%d",fac);
	}
int main(int argc, char *argv[]) {
	int n;
	//n = scanf("%d");//
	factorial(4);
	return 0;
}
