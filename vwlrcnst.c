#include <stdio.h>
 
int main()
{
	char alp;
	printf("enter the alp:");
	scanf("%c",&alp);
	if(alp=='A'||alp=='E'||alp=='I'||alp=='O'||alp=='U'||alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u')
	{
		printf("the alphabet  %c  is vowel",alp);
	}
	else
	{
		printf("the alphabet  %c is consonent",alp);
	}
	return 0;
}
