#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	for(i=0;i<5;i++)
	{
		int temp = 1;
		printf("temp = %d\n", temp);
		temp++;
	 } 
	 //temp에 대한 선언이 루프의 시작에 있어 temp = 1이 5번 출력  
	return 0;
} 
