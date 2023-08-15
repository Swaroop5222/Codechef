#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, k, m;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&n,&k,&m);
	    if(n%(k*m)==0)
	    printf("%d\n",n/(k*m));
	    else
	    printf("%d\n",(n/(k*m))+1);
	}
	return 0;
}

