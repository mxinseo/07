#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 10;
	
	printf("�Լ� ȣ�� �� i = %d\n", i); //ó�� �ʱ�ȭ �״�� ���  
	inc(i);
	printf("�Լ� ȣ�� �� i = %d\n", i); //�Լ� ����� �Բ� �Ű����� �Ҹ�   
	
	return 0; 
} 
int inc(int counter)
{
	counter++;
	return counter;
}
