#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, m;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&m);
	    if(n<=m*36)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

