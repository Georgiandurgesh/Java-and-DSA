#include<stdio.h>
void main(){
  int num,c=2;
  scanf("%d",&num);
  if(c<num){
    if(num%c==0){
      printf("not prime");
    }
    c=c+1;
  }

