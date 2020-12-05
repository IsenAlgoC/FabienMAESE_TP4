#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define SEPARATEUR '/'
#define TAILLEMAX 20




void main() {

	printf("Quel est votre genre ? H/F ");
	char genre = _getch();

	printf("\nQuel est votre nom ? ");
	char nom[TAILLEMAX];
	scanf_s("%s", nom,(unsigned)_countof(nom));

	printf("\nQuel est votre prenom ? ");
	char prenom[TAILLEMAX];
	scanf_s("%s", prenom, (unsigned)_countof(prenom));
	

	if ((genre == 'h') || (genre == 'H')) {
		printf("Monsieur ");
	}

	else {
		printf("Madame ");
	}

	printf("%s %s ", prenom, nom);
}