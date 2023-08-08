#include <stdio.h>

int main(void) {
	// your code goes here
	int t, w, x, y, z, balance;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	    scanf("%d%d%d%d",&w,&x,&y,&z);
	    balance=(z*(x-y))+w;
	    printf("%d\n",balance);
	}
	return 0;
}

