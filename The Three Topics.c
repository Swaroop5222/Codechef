#include <stdio.h>

int main(void) {
	// your code goes here
	int a, b, c, x;
	scanf("%d%d%d%d",&a,&b,&c,&x);
	if(x==a || x==b || x==c)
	printf("yes\n");
	else
	printf("no\n");
	return 0;
}

