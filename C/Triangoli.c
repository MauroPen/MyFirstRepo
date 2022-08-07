#include <stdio.h>

int main () {
	float l1, l2, l3;
	
	printf ("Analisi triangolo.\n\nInserire il primo lato del triangolo.\n");
	scanf ("%f", &l1);
	while (l1 <= 0) {
		printf ("\nInserire un intero positivo!\n");
		scanf ("%f", &l1);
	}
	
	printf ("\nInserire il secondo lato del triangolo.\n");
	scanf ("%f", &l2);
	while (l2 <= 0) {
		printf ("\nInserire un intero positivo!\n");
		scanf ("%f", &l2);
	}
		
	printf ("\nInserire il terzo lato del triangolo.\n");
	scanf ("%f", &l3);
	while (l3 <= 0) {
		printf ("\nInserire un intero positivo!\n");
		scanf ("%f", &l3);
    }
	
	//Controllo validit� triangolo
	if (l1 + l2 <= l3 || l2 + l3 <= l1 || l1 + l3 <= l2) {
		printf ("\nI lati inseriti non formano un triangolo.");
		return 1;
}
    //Triangolo equilatero
    if (l1==l2 && l2==l3) {
    	printf ("\nIl triangolo � equilatero.\n");
    	return 0;
    }
    //Triangolo isoscele
    if (l1 == l2 || l1 == l3 ||l2 == l3) {
    	printf ("\nIl triangolo � iscoscele.\n");
    	return 0;
    }
    	
    //Triangolo rettangolo	
    if ((l1*l1) + (l2*l2) == l3*l3 || (l2*l2) + (l3*l3) == l1*l1 || (l1*l1) * (l3*l3) == l2*l2)
        printf ("\nIl triangolo � rettangolo.\n");
    	
    else printf ("\nIl triangolo � scaleno.\n");

	return 0;	
}
