#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c, d;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a!=c && b!=d)
	    printf("1\n");
	    else
	    printf("2\n");
	}
	return 0;
}

