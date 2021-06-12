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
*  Nom du fichier :  Entete.c                                                 *
*                                                                             *
******************************************************************************/


#include<stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Entete.h"

void vidBuffer(){
        int c =0;
        while (c != '\n' && c != EOF){
            c = getchar();
        }
    }

    int lireChaine (char *chaine, int longueur){
        char *posEntree = NULL;
        if (fgets(chaine, longueur, stdin) != NULL){
            posEntree = strchr(chaine, '\n');
            if (posEntree != NULL){
                *posEntree = '\0';
            }
            else{
                vidBuffer();
            }
            return 1;
        }
        else
        {
            vidBuffer();
            return 0;
        }
    }

bool verifAlpha (char chaine[]){
        size_t Tchaine = strlen(chaine);
        bool estJuste = true;
       
       for(int i = 0; i< Tchaine; i++) {
           if (isalnum(chaine[i]) == false && chaine[i] != ' '){
               estJuste = false;
           }
       }
    return estJuste;
    }

 void chiffrer (const char* chaine, int cle, char * ret){
        int i = 0;
        short rang;
        while (chaine[i] != '\0'){
            if ((chaine[i] >= 'a')&&(chaine[i] <= 'z')){
                rang = (chaine[i] - 'a' + cle)%26;
                if(rang < 0) rang += 26;
                ret[i] = 'a' + rang;
            }
            else if ((chaine[i] >= 'A') && (chaine[i] <= 'Z')){
                rang = (chaine[i] - 'A' + cle)%26;
                if (rang <0) rang +=26;
                ret[i] =  'A' + rang;
            }else{
                ret[i] = chaine[i];
            }
            i++;
        }
        ret[i] = '\0';
    }

void dechiffrer (const char* ret, int cle, char * chaine2){
    chiffrer(ret, -cle, chaine2);
}

