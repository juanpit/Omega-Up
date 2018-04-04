#include<stdio.h>
#include<string.h>
int main(){
	char p[10000];
	int x;
	gets(p);
	x=strlen(p);
	for(x;x>=-1;x--){
		printf("%c",p[x-1]);
	}
	return 0;
}
