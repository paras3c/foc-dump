#include <stdio.h>
int main(){
int n=7;
int space=0;
int maxNum=7;
for(int i=maxNum; i>=1; i--){
for(int j = 1; j<=space; j++){
printf(" ");
}
for(int j=1; j<=i*2-1; j++){
printf("%d ", i);
}
printf("\n");
space++;
}
space=n-2;
for(int i=2; i<=maxNum; i++){
for(int j=1; j<=space; j++){
printf(" ");
}
for(int j=1; j<=i*2-1; j++){
printf("%d ", i);
}
printf("\n");
space--;
}
return 0;
}
