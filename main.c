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

#include "VerifAlpha.h"
#include "chiffrer.h"

char chaine [] = "test2bug ";
char chaine2[150] ;
void main (){

    bool test1 = VerifAlpha(chaine);
    if (test1){
        printf("Le message est %s\n", chaine);
    }else{
        printf("Le message %s est incorect, il contient des caractères spéciaux\n", chaine);
    }

   
    chiffrer(chaine, 3, chaine2);

    printf("Le message chiffrer est : %s\n", chaine2);
}