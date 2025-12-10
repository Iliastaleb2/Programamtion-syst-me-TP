#include "question_1.h"


void Welcome_prompt(){
    write (STDOUT_FILENO, "Bienvenue dans le noyau !", size_of_the_prompt);
}

void Normal_prompt(){
    write (STDOUT_FILENO, "ensea$ ", size_of_the_prompt);
}