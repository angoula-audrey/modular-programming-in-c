//protect us from loop inclusion if we include a file more than once.so the file will be incuded just once.
// it is an instruction of the pre-processor.
#ifndef DEVELOPPER_H  // you can call it as you want . but it is good to give a name that talks.
#define DEVELOPPER_H
int bonjour(void);
void experience ();
extern int expGlobal;
int static expGlobalstatic;
static int bonjourStatic ();

#endif