#include<stdio.h>
void main(){
int p,q,r,s;
printf("enter the values of p,q,r,s\n");
scanf("%d %d %d %d",&p,&q,&r,&s);
if(q>r && s>p && r+s>p+q)
  printf("Correct values");
else printf("Wrong values");
}
