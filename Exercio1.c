#include <stdio.h>
 
int main(void) {

   int verao[] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016,2020};
   int copa[] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014,2018,2022};
 
   int ano;
   
   scanf("%d", &ano);
 
   int  teve_jogos_olimpicos = 0;
   for (int i = 0; i < sizeof(verao) / sizeof(verao[0]); i++) {
       if (ano == verao[i]) {
           teve_jogos_olimpicos = 1;
           break;
       }
   }
 
   int teve_copa_do_mundo = 0;
   for (int i = 0; i < sizeof(copa) / sizeof(copa[0]); i++) {
       if (ano == copa[i]) {
           teve_copa_do_mundo = 1;
           break;
       }
   }
 
   if (teve_jogos_olimpicos && teve_copa_do_mundo) {
       printf("Os Jogos Olimpicos de Verao e a Copa do Mundo de Futebol ocorreram no ano de %d.\n", ano);
   } else if (teve_jogos_olimpicos) {
       printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
   } else if (teve_copa_do_mundo) {
       printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
   } else {
       printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
   }
 
   return 0;
}