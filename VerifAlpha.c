#include<stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "VerifAlpha.h"

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