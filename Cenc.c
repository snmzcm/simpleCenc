#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,string argv[]){
string s = get_string("Kelimeleri giriniz: \n");
int n = strlen(s);
int key = atoi(argv[2]);
//printf("%i eee\n" , atoi(argv[2]));

if(strcmp(argv[1], "enc") == 0){
	for(int i = 0; i < n ; i++){
	if(s[i] >= 'A' &&  s[i]<= 'z' )
	{
		printf("%c", s[i] + key);
	}
	else{
		printf("Error!");
		}
}

printf("\n Kullanılan anahtar: %i .",key);
printf("\n");
}
else if(strcmp(argv[1], "dec") == 0){
	for(int i = 0; i < n ; i++){
	if(s[i] >= 'A' &&  s[i]<= 'z' )
	{
		printf("%c", s[i] - key);
	}
	else{
		printf("Error!");
		}
}

printf("\n Kullanılan anahtar: %i .",key);
printf("\n");
}

}// prin
