#include <stdio.h>
void printUserPattern(int n){
int space = n - 1;
for (int i = 1; i <= n; i++){
for (int j = 1; j <= space; j++){
printf(" ");
}
for (int j = 1; j <= i; j++){
printf("%d ", i);
}
printf("\n");
space--;
}
space = 1;
for (int i = n - 1; i >= 1; i--){
for (int j = 1; j <= space; j++){
printf(" ");
}
for (int j = 1; j <= i; j++){
printf("%d ", i);
}
printf("\n");
space++;
}
}
int main() {
int n = 5;
printUserPattern(n);
return 0;
}
