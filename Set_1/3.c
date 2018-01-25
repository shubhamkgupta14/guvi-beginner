#include<stdio.h>
void main(){
	char chr;
	scanf("%c",&chr);
	if(chr >= 65 && chr <= 90 || chr >= 97 && chr <= 122){
		if(chr == 'a' || chr =='e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U'){
			printf("Vowel");
		}
		else{
			printf("Consonant");
		}
	}
	else{
		printf("Neither Vowel nor Consonant");
	}
}
