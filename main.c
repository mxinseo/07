#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 10;
	
	printf("함수 호출 전 i = %d\n", i); //처음 초기화 그대로 출력  
	inc(i);
	printf("함수 호출 후 i = %d\n", i); //함수 종료와 함께 매개변수 소멸   
	
	return 0; 
} 
int inc(int counter)
{
	counter++;
	return counter;
}
