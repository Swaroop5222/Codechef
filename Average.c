#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c;
	float avg;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    scanf("%d%d%d",&a,&b,&c);
	    if((a+b)/2.0>c)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

