#include <stdio.h>
#include <string.h>

void LoopMove(char *pstr,int steps)
{
	int n = strlen(pstr) - steps;
	char tmp[20];
	strcpy(tmp,pstr + n);
	strcpy(tmp + steps,pstr);
	*(tmp + strlen(pstr)) = '\0';
	strcpy(pstr,tmp);
}

int main()
{
	char * str = "abcdefghigk";
	//LoopMove(str,3);
	printf("%s",str);
	return 0; //??
}
