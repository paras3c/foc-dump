#include <stdio.h>
void printUserPattern(int k){
for (int i = 1; i <= k; i++){
for (int space = 1; space <= k - i; space++){
printf(" ");
}
for (int j = 1; j <= i; j++){
printf("%d", j);
}
for (int j = i - 1; j >= 1; j--){
printf("%d", j);
}
printf("\n");
}
}
int main() {
int k = 7;
printUserPattern(k);
return 0;
}
