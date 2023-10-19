#include <stdio.h>
void printUserPattern(int k) {
for (int i = 1; i <= k; i++) {
for (int j = i; j >= 1; j--) {
printf("%d", j);
}
printf("\n");
}
}
int main() {
int k = 6;
printUserPattern(k);
return 0;
}
