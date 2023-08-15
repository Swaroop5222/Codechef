#include <stdio.h>

int main(void) {
	// your code goes here
	int t, w, x, y, z;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
	scanf("%d%d%d%d",&w,&x,&y,&z);
	if(w==(x+y) || w==(y+z) || w==(z+x) || w==x || w==y || w==z || w==(x+y+z))
	printf("Yes\n");
	else
	printf("No\n");
	}
	
	return 0;
}

