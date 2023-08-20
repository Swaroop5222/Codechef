#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    if((x+y)%2==0)
	    printf("Janmansh\n");
	    else
	    printf("Jay\n");
	}
	return 0;
}

