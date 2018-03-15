#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

int main()
{
	int m=1,n=1;
	int N=pow(10,9);
	printf ("N = %d\n",N);
	clock_t t1,t2,T1,T2;
	// addition
    t1 = clock();
    for (int i=0;i<N;i++){
    	m=n+200;
	}
    t2 = clock();
    
    T1 = clock();
    for (int i=0;i<N;i++){
    	m=n+200;
    	m=n+200;
	}
    T2 = clock();
    printf("time for addition(N times)= %.3f s\n", ((T2-T1)-(t2-t1))/(double)(CLOCKS_PER_SEC));
    //printf("m=%d \nn=%d\n",m,n);

	// multiple
    t1 = clock();
    for (int i=0;i<N;i++){
    	m=n*200;
	}  
    t2 = clock();
    
    T1 = clock();
    for (int i=0;i<N;i++){
    	m=n*200;
    	m=n*200;
	}
    T2 = clock();
    printf("time for multiple(N times)= %.3f s\n", ((T2-T1)-(t2-t1))/(double)(CLOCKS_PER_SEC));

	// sine function
    t1 = clock();
    for (int i=0;i<N;i++){
    	m=sin(n);
	}
    t2 = clock();
    
    T1 = clock();
    for (int i=0;i<N;i++){
    	m=sin(n);
    	m=sin(n);
	}
    T2 = clock();
    printf("time for sine function(N times)= %.3f s\n", ((T2-T1)-(t2-t1))/(double)(CLOCKS_PER_SEC));
    return 0;

}
