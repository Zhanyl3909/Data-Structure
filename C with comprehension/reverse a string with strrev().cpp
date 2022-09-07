#include <stdio.h>
#include <string.h>

int main() {
	char str[50]; //static array for char
	printf("\nEnter a stirng to be reserved: ");
	scanf("%s", str);
	
	//use strrev() function to reverse a stirng
	printf("\nAfter the reverse of a string : %s\n", strrev(str));
	
	return 0;
}
