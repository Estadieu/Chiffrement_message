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
*  Nom du fichier :  Entete.h                                                 *
*                                                                             *
******************************************************************************/

#include <stdio.h>

#ifndef _Entete_H
#define _Entete_H

void vidBuffer();
int lireChaine (char *chaine, int longueur);
bool verifAlpha (char chaine[]);
void chiffrer (const char* chaine, int cle, char * ret);
void dechiffrer (const char* ret, int cle, char * chaine2);

#endif