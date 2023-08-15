#include <stdio.h>

int main(void) {
	// your code goes here
	int t, s, x, y, z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&s,&x,&y,&z);
	    if(z<=s-(x+y))
	    printf("0\n");
	    else if(s-(x+y)<z)
	    if(s-(x+y)+x>=z || s-(x+y)+y>=z)
	    printf("1\n");
	    else
	    printf("2\n");
	}
	return 0;
}

