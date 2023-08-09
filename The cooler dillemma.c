#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, m;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&m);
	    if(x*m<y)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

