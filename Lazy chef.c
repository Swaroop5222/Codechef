#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int t, k, x, m, d;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&m,&d);
	    k=fmin((m*x),(x+d));
	    printf("%d\n",k);
	}
	return 0;
}

