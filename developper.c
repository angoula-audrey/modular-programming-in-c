#include <stdio.h>
#include "developper.h"

int expGlobal = 5;
int static expGlobalstatic = 15;
int bonjour(void){
    bonjourStatic ();
    printf ("bonjour\n");
    printf("hello\n");
    return 1;
}

void experience (){
    int explocal = 10;
    explocal++;
    printf("I have an exp of %d var local\n",explocal);

    static int expLocalStatic = 10;
    expLocalStatic++;
    printf("I have an exp of %d var local static\n",expLocalStatic);

    expGlobal++;
    printf("I have an exp of %d var global\n",expGlobal);
}
// function reserved just to the file developper .c .
static int bonjourStatic (){
    printf("salut static\n");
    return 1;
}
