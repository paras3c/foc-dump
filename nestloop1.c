#include <stdio.h>

int main(){
int k=9;
for (int i=1; i<=k; i++){
for (int j=i; j>=1; j--){
printf("%d", j);
}
printf("\n");
}
return 0;
}
