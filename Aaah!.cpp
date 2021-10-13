#include <stdio.h>
#include<string.h>

int main(){
	char target[1001], spell[1001];
	int a=1, b=0;
	
	scanf("%[^\n]",&target); 
	scanf("%[^\n]",&spell);
	
	for(int i=0; i<strlen(target); i++){
		if(target[i]=='a'){
			a++;
		}
		else{
			break;
		}
	}
	
	for(int i=0; i<strlen(spell); i++){
		if(spell[i]=='a'){
			b++;
		}
		else{
			break;
		}
	}
	
	(b>=a) ? printf("no\n") : printf("go\n");

    return 0;
}
