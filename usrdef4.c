#include <stdio.h>
void printUserPattern(int k){
for (int i = 1; i <= k; i++){
printf(" ");
}
for (int j = 1; j<=i; j++){
printf("%d", i);
}
printf("\n");
}
int main(){
int k = 15;
printUserPattern(k);
return 0;
}
