#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<string.h>




int main() {

	printf("\nQuel est votre mot? ");
	char mot[20];
	scanf_s("%s", mot, (unsigned)_countof(mot));
	int longueur = strlen(mot);

	if (longueur % 2 == 0) {			//un palyndrome ne peut pas être pair
		printf("\nCe n'est pas un palyndrome");
	}

	char moitie = mot[strlen(mot)/2 + 1];
	char *token = strtok_s(mot, sizeof(mot), moitie);
	
	printf("%s", token);

}