#include <stdio.h>  
int binaryToDecimal(int n)
{
	int num = n, dec_value = 0,base = 1;
 	int temp = num;
	while (temp) 
	{
		int last_digit = temp % 10;
		temp = temp / 10;
		dec_value += last_digit * base;
		base = base * 2;
	}
	return dec_value;
} 
int main()  
{  
       	int bin_num, dec_num;
	printf ("Enter the binary number (0s and 1s):");  
	scanf ("%d", &bin_num);  
	dec_num = binaryToDecimal(bin_num);  
	printf("Conversion of the binary number to decimal number is %d\n", dec_num);  
}  
