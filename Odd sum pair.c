#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&a,&b,&c);
	    if((a+b)%2!=0 || (b+c)%2!=0 || (a+c)%2!=0)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

