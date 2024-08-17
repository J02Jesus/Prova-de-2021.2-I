#include <stdio.h>
int main(){
int decimal, n, m, o;
int l, p, q, r, u, t, y;
int soma=0;
  
printf("digite um decimal:\n\n");
scanf("%d", &decimal);

n=(decimal/1000)%10;
m=(decimal/100)%10;
o=(decimal/10)%10;
l=(decimal/1)%10;


if(decimal>1){ 

 switch(l){
   case 0:
    soma-=1;
   break;
   case 1:
  soma+=0;
   break;
   case 2:
  soma+=1;
   break;
 }
} if(decimal>10){ 
     switch(o){
   case 0:
  soma-=3;
   break;
   case 1:
  soma+=0;
   break;
   case 2:
  soma+=3;
   break;
 }
}if(decimal>100){ 
  switch(m){
   case 0:
  soma-=9;
   break;
   case 1:
  soma+=0;
   break;
   case 2:
  soma+=9;
   break;
 }
}if(decimal>1000){ 
switch(n){
   case 0:
  soma-=27;
   break;
   case 1:
  soma+=0;
   break;
   case 2:
  soma+=27;
   break;
 }
}else{
  printf("erro");
}
printf("\n\ntrit: %d %d %d %d %d",l, o,m,n, soma);
}
