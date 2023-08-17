#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a, b, c, d;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if((a+c)==180 || (b+d)==180)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}

