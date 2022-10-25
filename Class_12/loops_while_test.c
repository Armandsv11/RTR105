#include<stdio.h>

int main()
{
int a=10;
while(a>=0)
{
printf("a; %d/n", a);
a--; // a= a - 1 -=1);
}

printf("a (pēc cikla): %d/n", a);
// sākumā a ir 10
// 1. a (10) >=0 - 0000 0000 0000 0000 0000 0000 0000 0001 ("true")
// 2. printf -> 10
// 3. a samazinās par 1 -> 0
// 4. a (9) >=0 - 0000 0000 0000 0000 0000 0000 0000 0001 ("true")
