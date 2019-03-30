#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
int n,y1,w,d,y2;
n=1329;
y1=n/365;
y2=n%365;
w=y2/7;
d=y2%7;
printf("%d years %d weeks %d days",y1,w,d);

	return 0;
}

