#include <stdio.h>

int main(void) {
	// your code goes here
	int t, m, n, k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&m,&n,&k);
	    if((n*k)<m)
	    printf("Yes\n");
	    else
	    printf("No\n");
	    }
	return 0;
}

