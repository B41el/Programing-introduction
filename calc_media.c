#include <stdio.h>
#define divider 4

void main () {
   float nota1,nota2,nota3,nota4;
   float media;

   printf ("informe a primeira nota: ");
   scanf ("%f", &nota1);
   printf ("informe a segunda nota: ");
   scanf ("%f", &nota2);
   printf ("informe a terceira nota: ");
   scanf ("%f", &nota3);
   printf ("informe a quarta nota: ");
   scanf ("%f", &nota4);

   media = (nota1 + nota2 + nota3 + nota4) / divider;

   printf ("a media e de:%f",media);

}
