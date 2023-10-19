#include <stdio.h>

int main(){
int k=8;
for(int i=k; i>=1; i--){
for(int j=1; j<=k-i+1; j++){
printf("%d", i);
}
printf("\n");
}
return 0;
}
