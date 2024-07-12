#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tail.h"

void open (FILE **fic,char *fichier){
	*fic=fopen(fichier,"r");
	if (*fic==NULL){
		printf ("erreur d'ouverture");
		exit (1);
	}
}
void afficher (FILE *fic,int nb_ligne,char *chaine){
	int i=1;
	while (feof(fic)!=1){
		fgets(chaine,100,fic);
		i++;
		if (i>=nb_ligne){
			printf("%s",chaine);
		}
	}
	fclose(fic);
}
int compteur (FILE *fic,char* chaine,int n){
	int nb_ligne=1;
	while(feof(fic)!=1){
		fgets(chaine,100,fic);
		nb_ligne++;
	}
	nb_ligne=nb_ligne-n;
	fclose(fic);
	return nb_ligne;
}

int typecast (char *argument){
	int n;
	n=atoi(argument);
	return n;
}
void verbose (FILE* fic, char* tab, char* fichier){
	char option[2] = "-v";
	if(strcmp(option,tab) == 0){
		printf("<< %s >>", fichier);
	}	
}

