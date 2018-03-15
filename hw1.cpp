#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

int main()
{
	int m=1,n=1;
	int N=pow(10,9);   //10^9
	clock_t t1,t2;
	// addition
    t1 = clock();
    for (int i=0;i<N;i++){
    	m=n+20;
	}
    t2 = clock();
    printf("time for addition= %.3f s\n", (t2-t1)/(double)(CLOCKS_PER_SEC));
    //printf("m=%d \nn=%d\n",m,n);

	// multiple
    t1 = clock();
    for (int i=0;i<N;i++){
    	m=n*20;
	}  
    t2 = clock();
    printf("time for multiple= %.3f s\n", (t2-t1)/(double)(CLOCKS_PER_SEC));

	// sine function
    t1 = clock();
    for (int i=0;i<N;i++){
    	m=sin(n);
	}
    t2 = clock();
    printf("time for sine function= %.3f s\n", (t2-t1)/(double)(CLOCKS_PER_SEC));
    return 0;
}
