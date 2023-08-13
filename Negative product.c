#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&a,&b,&c);
	    if(a*b<0 || b*c<0 || c*a<0)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

