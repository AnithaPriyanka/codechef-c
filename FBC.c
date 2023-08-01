#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--){
	    int k, x;
	    scanf("%d %d", &k, &x);
	    printf("%d\n", k-x);
	}
	return 0;
}

