#include<stdio.h>

int main() {
	char ch;
	printf("enter the character: ");
	scanf("%c", &ch);
	if(ch>='A' && ch<='Z') {
		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
			printf("vowel");
		} else {
			printf("consonant");
		}
	} else if(ch>='a' && ch<='z') {
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {

			printf("vowel1");
		} else {
			printf("consonant1");
		}
	} else {
		printf("it is not character");
	}
}
