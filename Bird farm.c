#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x, y, z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&z);
	    if(z%x==0 && z%y!=0)
	    printf("Chicken\n");
	    else if(z%y==0 && z%x!=0)
	    printf("Duck\n");
	    else if(z%x==0 && z%y==0)
	    printf("Any\n");
	    else
	    printf("None\n");
	}
	return 0;
}

