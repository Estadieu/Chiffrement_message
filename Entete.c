#include<stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Entete.h"

bool VerifAlpha (char chaine[]){
        size_t Tchaine = strlen(chaine);
        bool estJuste = true;
       
       for(int i = 0; i< Tchaine; i++) {
           if (isalnum(chaine[i]) == false){
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

