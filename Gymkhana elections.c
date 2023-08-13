#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, m;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&m);
	    printf("%d\n",(m/2)+1);
	}
	return 0;
}

