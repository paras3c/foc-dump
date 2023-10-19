#include <stdio.h>

int main(){
int k=9;
for(int i=1; i<=k; i++){
for(int j=k-i; j>=1; j--){
printf(" ");
}
for(int j=1; j<=i; j++){
printf("%d", i);
}
printf("\n");
}
return 0;
}
