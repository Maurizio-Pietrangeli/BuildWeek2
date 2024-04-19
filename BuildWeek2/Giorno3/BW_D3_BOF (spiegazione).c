#include <stdio.h>

int main () {                                      

                                      SPIEGAZIONE CODICE: viene richiesto all'utente di inserire 10 valori interi per il popolamnetno di un vettore;
									                      dopo l'inserimento il vettore viene stampato in output (a schermo);
														  successivamente il vettore viene riordinato con la variabile swap_var
														  successivamente viene stampato a schermo il vettore ordinato.
														  
														  

int vector [10], i, j, k;        /// qui viene dichiarato un array di 10 interi e 3 variabili intere
int swap_var;    /// dichiarazione della variabile intera


printf ("Inserire 10 interi:\n");   /// qui viene stampato a schermo la richiesta di inserire 10 interi

for ( i = 0 ; i < 10 ; i++)       /// ciclo for per inserire il valore nel vettore 
	{
	int c= i+1;
	printf("[%d]:", c);
	scanf ("%d", &vector[i]);
	}


printf ("Il vettore inserito e':\n");  /// qui avviene la stampa dei valori inseriti
for ( i = 0 ; i < 10 ; i++)
        {
        int t= i+1;
        printf("[%d]: %d", t, vector[i]);
	printf("\n");
	}


for (j = 0 ; j < 10 - 1; j++)          /// qui avviene il riordinamento dell' array tramite dei cicli annidati
	{
	for (k = 0 ; k < 10 - j - 1; k++)
		{
			if (vector[k] > vector[k+1])
			{
			swap_var=vector[k];    /// qui viene usata la variabile swap per ordinare i vettori
			vector[k]=vector[k+1];
			vector[k+1]=swap_var;
			}
		}
	}
printf("Il vettore ordinato e':\n");  /// qui avviene la stampa del vettore ordinato tramite il ciclo for
for (j = 0; j < 10; j++)
	{
	int g = j+1;
	printf("[%d]:", g);
	printf("%d\n", vector[j]);
	}

return 0;        ///uscita dal programma 


}
