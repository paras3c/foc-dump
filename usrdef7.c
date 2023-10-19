#include <stdio.h>
void printUserPattern(int n){
int space = 0;
int maxNum = n;
for (int i = maxNum; i >= 1; i--){
for (int j = 1; j <= space; j++){
printf(" ");
}
for (int j = 1; j <= i * 2 - 1; j++){
printf("%d", i);
}
printf("\n");
space++;
}
space = n - 2;
for (int i = 2; i <= maxNum; i++){
for (int j = 1; j <= space; j++){
printf(" ");
}
for (int j = 1; j <= i * 2 - 1; j++){
printf("%d", i);
}
printf("\n");space--;
}
}
int main() {
int n = 7;
printUserPattern(n);
return 0;
}
