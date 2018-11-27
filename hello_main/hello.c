#include <stdio.h>

int alarg(int * a, int * b)
{
	int tmp;
	if (* b > * a)
	{
		tmp = * a;
		* a = * b;
		* b = tmp;
	}
	return * a;
}

int main(int argc,char * argv[])
{
	int x = 1;
	int y = 2;
	int z = alarg(&x,&y);
	printf("(%d#%d)%d is larger \n",x,y,z);
	return 0;
}

