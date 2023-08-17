#include <stdio.h>

int main(void) {
	// your code goes here
	int t, p;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&p);
	    if(p%100<=(10-(p/100)))
	    printf("%d\n",(p/100)+(p%100));
	    else
	    printf("-1\n");
	}
	return 0;
}

