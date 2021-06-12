# Chiffrement_Message

Chiffrement de message C
Auteur : Jean Estadieu, étudiant à l'IUT de Paul Sabatier

L'objectif de l'application est la protection de textes confidentiels. 

    1) fonction vidBuffer :
     Elle lit dans le buffer caractère par caractère grâce à getchar. On récupère un int dans la variable temporaire c. On boucle tant qu'on n'est pas à la fin du fichier (EOF). Elle permet que le Buffer soit vidé si on a rentré trop de caractères


    2) fonction lireChaine : 
    Cette fonction appelle viderBuffer si la chaine et trop longue. La fonction lire va appeler fgets et va rechercher le caractère \n à l'aide de la fonction strchr. Si ce caractère est trouvé il est remplacé par \0 pour éviter d'avoir une entrée. 

    Cette fonction retourne 1 si tout s'est bien passé, 0 s'il y a eu une erreur. 
    Elle permet de lire une chaine de caractères de manière sécurisée.

    3) fonction verifAlpha :

    Cette fonction prend une chaine de caractère en entrée, et renvoie un VRAI si la chaine est alphanumérique, sinon elle renvoie FAUX! Pour ce faire elle utilise la fonction isalnum qui permet de tester si un caractère est alpha-numérique ou non ainsi qu'une boucle pour parcourir toute la chaine. Si le caractère n'est pas alpha numérique et que ce n'est pas un espace, alors la fonction retourne FAUX. 

    4) La fonction Chiffrer : 

    Elle prend en entrée une chaine à chiffrer, une clé qui est une constante définie au début du code, et retourne cette chaine chiffrer. Pour effectuer cette opération, j'ai utilisé la table ASCII avec un chiffrement de césar.

    5) La fonction déchiffrer :

    Pour cette fonction, je ne me suis pas compliqué et j'ai réutilisé la fonction chiffrer avec cette fois-ci une clé négative afin de déchiffrer le message. 

    En ce qui concerne l'affichage et l'appel aux fonctions, il se fait dans le main.c avec un code court qui récupère le résultat de la fonction verifAlpha. Si la fonction retourne Vrai alors le programme va chiffrer puis déchiffrer le message, dans le cas contraire, (message avec caractères spéciaux) un message d'erreur s'affiche pour prévenir que la chaine n'est pas valide. 

    Pour vérifier que le code fonctionne bien, j'ai ajouté un fichier Word au projet avec différents exemples d'utilisation. 

    Liens vers le dépot git : -  git@gitlab.com:jeanestadieu/chiffrement_message.git
			      -  https://gitlab.com/jeanestadieu/chiffrement_message.git

