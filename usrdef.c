#include <stdio.h>
void printUserPattern(int k){
for (int i = k; i >= 1; i--){
for (int j = 1; j <= k - i + 1; j++){
printf("%d", i);
}
printf("\n");
}
}
int main() {
int k = 11;
printUserPattern(k);
return 0;
}
