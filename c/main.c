#include <stdio.h>

void mystrcpy(char* str1, char* str2){
	while(*str2 != 0){
		*str1 = *str2;
		str1++;
		str2++;
		printf("'%s'\n", str2);
	}
	str1 = 0;
}

main(){

	char s[10], d[20];

	printf("Insira uma string\n");
	scanf("%s", s);
	mystrcpy(d, s);
	printf("Original:      \"%s\"\n", s);
	printf("Copia: \"%s\"\n", d);
}

