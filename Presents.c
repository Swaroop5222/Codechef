#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    printf("%d\n",(n-(n/5)));
	}
	return 0;
}

