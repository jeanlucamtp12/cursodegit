#include<stdio.h>

int subtracao(int a , int b)
{
	
	int sub_num = a - b;
	
	return sub_num;
	
}

int soma(int a , int b)
{
	int soma_num = a + b;
	
	return soma_num;
}

int main ()
{
	
	printf ("A soma dos numero %d\n",soma(3,4));
	printf ("A subtracao dos numeros %d\n",subtracao(5,2));
	
	return 0;
	
}
