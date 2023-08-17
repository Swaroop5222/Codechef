#include <stdio.h>

int main(void) {
	// your code goes here
	int a, b;
	scanf("%d%d",&a,&b);
	if(a==0 && b==0 || a==0 && b==1)
	printf("https://www.codechef.com/practice\n");
	if(a==1 && b==0)
	printf("https://www.codechef.com/contests\n");
	else if(a==1 && b==1)
	printf("https://discuss.codechef.com\n");
	return 0;
}

