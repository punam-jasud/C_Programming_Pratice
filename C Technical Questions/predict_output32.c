#include<stdio.h>

static struct student
{
	int a;
	int b;
}struct_var{2,3};

int main()
{
	printf("%d %d\n",struct_var.a,struct_var.b);
	return 0;
}
