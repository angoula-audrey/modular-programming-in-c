#include <stdio.h>
#include "developper.h"
int main(){
    bonjour();
    experience ();

    experience ();

    experience ();

    expGlobal++;
    printf("I have an exp of %d var global in the main.c\n",expGlobal);

    expGlobalstatic++;
    printf("I have an exp of %d var global in the main.c\n",expGlobalstatic);
    return 1;

    
}

