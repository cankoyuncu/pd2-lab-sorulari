#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	int len;
	strcpy(str,"test");
	len = strlen(str);
	printf("Length of |%s| is %d\n",str,len);
	return(0);
}

