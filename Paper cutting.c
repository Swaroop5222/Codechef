#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&k);
	    printf("%d\n",(((n/k)*k)*((n/k)*k)/(k*k)));
	}
	return 0;
}

