#include <stdio.h>

int main()
{
	int max = -1, list[26] = {};
	char a;
	
	for(;~scanf("%c", &a);) if(a != ' ' && a != '\n') list[a - 'a']++;
	
	for(int i=0;i<26;i++) if(list[i] > max) max = list[i];
	
	for(int i=0;i<26;i++) if(list[i] == max) printf("%c", 'a'+i);
	
	return 0;	
}