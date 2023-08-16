#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, d;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&d);
	    if(abs(x-y)<=d)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}

