#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char a[5], b[5];
	int i, t;
	scanf("%d",&t);
	while(t--){
	    scanf("%s",a);
	    scanf("%s",b);
		for(i=0; i<5; i++){
	    if(a[i]==b[i]){
	    printf("G");
	    }
	    else{
	    printf("B");
	    }
	}
	printf("\n");
	}
	return 0;
}

