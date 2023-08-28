#include <stdio.h>

int main(void) {
	char a,b;
	scanf("%c %c",&a,&b);
	if(a=='R' || b=='R'){
	    printf("R\n");
	}
	if((a=='G' &&  b=='B') || (a=='B' && b=='G')){
	    printf("B\n");
	}
	if(a=='B' && b=='B'){
	    printf("B\n");
	}
	if(a=='G' && b=='G'){
	    printf("G\n");
	}
	return 0;
}

