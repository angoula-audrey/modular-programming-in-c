//protect us from loop inclusion if we include a file more than once.so the file will be incuded just once.
// it is an instruction of the pre-processor.
#ifndef DEVELOPPER_H  // you can call it as you want . but it is good to give a name that talks.
#define DEVELOPPER_H

// call the prototypes
int bonjour(void);
void experience ();

// We can also declare variables here in the .h file but without giving them a value;
extern int expGlobal;

// We can also declare variables here in the .h file but without giving them a value;
int static expGlobalstatic;
static int bonjourStatic ();

#endif  // Here we close the ifndef fuction