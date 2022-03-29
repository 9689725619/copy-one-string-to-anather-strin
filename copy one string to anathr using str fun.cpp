#include<stdio.h>
#include<string.h>

	int main(){
	
	char str1[100],str2[50];
	printf("enter string str 1");
	gets(str1);
	strcpy(str2,str1);
	printf("string is copied str2 is %s",str2);
	return 0;
	
}
