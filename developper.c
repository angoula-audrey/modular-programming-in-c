#include <stdio.h>  // Never forget you main standard library.
#include "developper.h"  // Cll all your external files .h in the main file.
  
// declaration of global variables.
int expGlobal = 5;
int static expGlobalstatic = 15;

// body of my function.
int bonjour(void){
    bonjourStatic ();  // inclusion of the static fuction in a non static function so that it can work even out of the file if called since it is static.
    printf ("bonjour\n");
    printf("hello\n");
    return 1;
}

// clear understanding of the difference between local,local static,global and global static variables.
void experience (){
    int explocal = 10;  // declaration of a local variable.
    explocal++;
    printf("I have an exp of %d var local\n",explocal);

    static int expLocalStatic = 10;
    expLocalStatic++;  // Declaration of a local static variable.
    printf("I have an exp of %d var local static\n",expLocalStatic);

    expGlobal++;
    printf("I have an exp of %d var global\n",expGlobal);
}
// function reserved just to the file developper .c .

// We can also have static functions.
static int bonjourStatic (){  // DEclaration of a static function.
    printf("salut static\n");
    return 1;
}
