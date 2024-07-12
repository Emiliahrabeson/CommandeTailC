#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tail.h"

int main (int argc,char *argv[]){
	FILE *fic=NULL;
	char chaine[100];
	int nb_ligne;
	int n;
	verbose (fic,argv[1], argv[3]);
	open(&fic,argv[3]);
	n=typecast(argv[2]);
	nb_ligne=compteur(fic,chaine,n);
	open(&fic,argv[3]);
	afficher (fic,nb_ligne,chaine);
	return 0;
}

