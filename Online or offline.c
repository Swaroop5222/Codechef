#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, m;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&m);
	    if(m<n-(0.1*n))
	    printf("Dining\n");
	    else if(m>n-(0.1*n))
	    printf("Online\n");
	    else
	    printf("Either\n");
	}
	return 0;
}

