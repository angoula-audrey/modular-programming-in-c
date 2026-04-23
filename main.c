#include <stdio.h>  // Never forget your standard libraries.
#include "developper.h"  // Always call your .h fille in the main.

// Main function.
int main(){
    // Calling the fuctions written in the .h file.
    bonjour();
    experience ();

    experience ();

    experience ();

    // Using a variable decleared in the .h file.
    expGlobal++;
    printf("I have an exp of %d var global in the main.c\n",expGlobal);

    // Using a variable decleared in the .h file.
    expGlobalstatic++;
    printf("I have an exp of %d var global in the main.c\n",expGlobalstatic);
    return 1;

    
}

