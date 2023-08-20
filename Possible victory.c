#include <stdio.h>

int main(void) {
	// your code goes here
	int r, o, a, c;
	scanf("%d%d%d",&r,&o,&c);
	a=((20-o)*6)*6;
	if((c+a)>r)
	printf("Yes\n");
	else
	printf("No\n");
	return 0;
}

