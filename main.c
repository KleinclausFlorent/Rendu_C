#include <stdio.h>
#include <stdlib.h>

#define CAR1 '*'
#define CAR2 '+'

int main()
{
    int largeur;
    int hauteur;

    int i=0;
    int j=0;

    printf("Entrez la hauteur.\n");
    scanf("%d",&hauteur);
    printf("Entrez la largeur.\n");
    scanf("%d",&largeur);

    for(i=0;i<hauteur;i++){//boucle des lignes
        for(j=0;j<largeur;j++){//boucle des colonnes
            if ((i==0) || (i==hauteur-1) || (j==0) || (j==largeur-1)){
                printf("%c",CAR1);
            }else{
                printf("%c",CAR2);
            }
        }
        printf("\n");
    }
    return 0;
}

/*
FONCTION : Dessine un rectangle
BUT : Dessiner un rectangle avec des * sur les bords et des + au centre
ENTREE : L'utilisateur entre la largeur et la hauteur du rectangle
SORTIE : On affiche le carrré à l'écran

CONSTANTES

    CAR1 <- '*' : CARACTERE
    CAR2 <- '+' : CARACTERE

VARIABLES

    largeur : ENTIER
    hauteur : ENTIER
    i : ENTIER
    j : ENTIER

ALGORITHME

    DEBUT
        ECRIRE "Hauteur ?"
        LIRE hauteur
        ECRIRE "Largeur ?"
        LIRE largeur
        POUR i de 1 à hauteur faire
        DEBUT POUR
            POUR j de 1 à largeur faire
            DEBUT POUR
                SI ((i=1) OU (i=hauteur) OU ((j=1) OU (j=largeur)) ALORS
                DEBUT SI
                    ECRIRE CAR1
                FIN SI
                SINON
                DEBUT SINON
                    ECRIRE CAR2
                FIN SINON
            FIN POUR
            ECRIRE RETOUR A LA LIGNE
        FIN POUR
    FIN
*/
