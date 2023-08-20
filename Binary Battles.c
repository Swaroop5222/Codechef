#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, a, b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&n,&a,&b);
	    int count=-1;
	    while(n>0)
	    {
	        n=n/2;
	        count++;
	    }
	    int s = (a*count) + b*(count-1);
	    printf("%d\n",s);
	}
	return 0;
}

