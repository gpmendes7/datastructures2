#include <stdio.h>
#include <string.h>

int compareStrings(char [], char []);

int main(){
	char a[100], b[100];
	int position;
	
	printf("\n\n Enter some text: ");
	
	gets(a);
	
	printf("\n\n Enter a string you want to find in this text: ");
	gets(b);
	
	position = compareStrings(a, b);
	
	if(position != -1){
		printf("\n\n Pattern is found at location %d\n\n", position + 1);
	}
	else {
		printf("\n\n Pattern does not exist in the text!\n\n");
	}
		
	return 0;
}

int compareStrings(char text[], char pattern[]){
	int c, d, e;
	int text_length, pattern_length;
	int position = -1;
	
	text_length = strlen(text);
	pattern_length = strlen(pattern);
	
	if(pattern_length > text_length){
		return -1;
	}
	
	for(c = 0; c <= text_length; c++){
		position = e = c;
	
		for(d = 0; d < pattern_length; d++){
			if(pattern[d] == text[e]){
				e++;
			}
			else{
				break;
			}
		}
		
		if(d == pattern_length){
			return position;
		}
   }
   
   return -1;

}
