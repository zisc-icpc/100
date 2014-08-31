//Time - 38:00
//Compilation Error

#include <stdio.h>
#include <stdlib.h>

int cl;
int clength(int n);
void foo(int n);

int main(){
	int i,j,count, maxcl, clen, min, max;
	maxcl = 0;
	while(scanf("%d %d\n",&i,&j)==2){
		min = (i<=j)*i + (i>j)*j;
		max = (i<=j)*j + (i>j)*i;
		for(count=min;count<=max;count++){
			clen = clength(count);
			if(clen>maxcl) maxcl = clen;
		}
		printf("%d %d %d\n",i,j,maxcl);
		maxcl = 0;
	}
}

void foo(int n){
	
	cl++;
	
	if(n==1) {
		return;
	} if(n%2) {
		foo(3*n+1);
	} else {
		foo(n/2);
	}

}

int clength(int n){
	cl=0;
	foo(n);
	return(cl);
}
