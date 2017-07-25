/*********************************************************
**** Dato l'array dal main la funzione ricorsiva deve ****
**** verificare se è presente il numero 10, se è VERO ****
****     deve stamprare TRUE altrimenti FALSE         ****
*********************************************************/
#include <stdio.h>
#include <stdbool.h>
#define DIM 10

bool controllo(int a[], int size) // definisco la funzione ricorsiva
{
  if(size == 1) /* la funzione si interrompe se sieze che è la dimensione
  {                 dell'array diventa = 1; */
    return 0;
  }
  else{
    if(a[size -1] == 10) /*se il valore dell'array è uguale a 10 allora*/
    {                    /*  la funzione da un return 1 che corrisponde */
      return 1;          /*  a TRUE*/
    }
    else
    {
      return controllo(a, size -1); /*se invece non è stato trovato un valore */
    }                               /* che sia uguale a 10 la funzione viene  */
  }                                 /* rieseguita per cercare il prossimo valore*/
}

int main()
{
  int a[DIM] = {1,2,3,4,5,10,7,8,9,9};
  int ris;
  ris = controllo(a, DIM);
  switch(ris)
  {
    case 0:
      printf("Il valore non è presente\n");
      break;
    case 1:
      printf("Il valore è presente\n");
      break;
  }
}
