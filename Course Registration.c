#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, m, k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&n,&m,&k);
	    if((m-k)>=n)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

