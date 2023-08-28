#include <stdio.h>

int main(void) {
	// your code goes here
	int t, basic; 
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&basic);
	    float hra, da;
	    if(basic<1500){
	        hra=0.1*basic;
	        da=0.9*basic;
	        printf("%.2f\n",basic+hra+da);
	    }
	    else{
	        hra=500;
	        da=0.98*basic;
	        printf("%.2f\n",basic+hra+da);
	    }
	}
	return 0;
}

