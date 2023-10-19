#include <stdio.h>
void printUserPattern(int k){
for (int i = 1; i <= k; i++){
for (int space = 1; space <= k - 1; space++){
printf(" ");
}
for (int j = i; j >= 1; j--){
printf("%d", j);}
printf("\n");
}
}
int main() {
int k = 12;
printUserPattern(k);
return 0;
}
