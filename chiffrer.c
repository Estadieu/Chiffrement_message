#include <string.h>
#include <ctype.h>

#include "chiffrer.h"

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