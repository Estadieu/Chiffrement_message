/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet : Sujet 3                                                      *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Chiffrement de messages                                         *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : Jean Estadieu                                                *
*                                                                             *
*  Nom-prénom2 :                                                              *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :  main.c                                                   *
*                                                                             *
******************************************************************************/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "Entete.h"

#define cle 5

char chaine [200];
char ret[200] ;
char chaine1[200];
void main (){

    printf("Rentrer un message alphanumérique: ");

    lireChaine(chaine, 200);

    bool test1 = verifAlpha(chaine);
    if (test1){
        printf("Le message est : <%s>\n", chaine);
        chiffrer(chaine, cle, ret);
        printf("Le message chiffrer est : <%s>\n", ret);
        dechiffrer(ret, cle, chaine1);
        printf("Le message dechiffrer est : <%s>\n", chaine1 );
    }else{
        printf("Le message <%s> est incorect, il contient des caractères spéciaux\n", chaine);
    }
}
