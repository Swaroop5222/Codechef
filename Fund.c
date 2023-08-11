#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&a,&b);
	    if(a/0.1>b/0.2)
	    printf("First\n");
	    else if(a/0.1<b/0.2)
	    printf("Second\n");
	    else if(a/0.1==b/0.2)
	    printf("Any\n");
	}
	return 0;
}

