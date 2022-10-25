#include<stdio.h>
int main()
{
int a=10;
// NB! for( ; ; ) - for cikla () vienmēr satur divus semikolus - ;
{
int a;
for (a>=0 ; a-=0 ; a--)
// darbības pirms pirmā semikola tiek izpildītas tikai vienu reizi
// tālāk izteiksmes rezultāta aprēķins (jeb nosacījumnu pārbaude)
// cikla ķermeņa iekš {} izpilde
// cikla mainīgo izmaina atbilstoši aprakstam aiz otrā;
// turpinā cikla izteiksmes (nosacījuma) rezukltāta aprēķins;
{
printf(a": %d\n", a);
a--; // a = a - 1; a -= 1;
}
printf("a (pēc cikla): %d\n", a);

return 0;
}
