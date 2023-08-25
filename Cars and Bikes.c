#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    if(n%4!=0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

