#include <stdio.h>

int main(void) {
	// your code goes here
	int t, p, q, r, s;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&p,&q,&r,&s);
	    if(p>(q+r+s) || q>(p+r+s) || r>(p+q+s) || s>(p+q+r))
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

