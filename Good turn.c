#include <stdio.h>

int main(){
    int x, y, n, t;
    scanf("%d",&t);
    for(n=1; n<=t; n++){
        scanf("%d %d",&x ,&y);
        if(x+y>6){
            printf("yes\n");
        }
        else{
          printf("no\n");  
        }
    }	
	
	
	return 0;
}

