#include <stdio.h>
int main(){
char n;
float s, aumento;

scanf ("%c", &n);
scanf ("%f", &s);

switch (n){
    case 'a':
        aumento = s * 0.05;
        break;
    case 'b':
        aumento = s * 0.07;
        break;
    case 'c':
aumento = s * 0.08;
    break;
}

printf("R$ %.2f\n", s + aumento);

return 0;
}