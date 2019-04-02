#include <stdio.h>

int main(void) {
	// your code goes here
	int T,a,b,c,d,x,y,s;
	s=0;
	scanf("%d",&T);
	scanf("%d %d %d %d",&a,&b,&c,&d);
	for(x=a;x<=b;x++)
	 for(y=c;y<=d;y++)
	 if(x<y)
	  s++;
	  printf("%d",s);
	return 0;
}

//INPUT
1
2 3 3 4
//OUTPUT
3
