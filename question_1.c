#include "question_1.h"

#define size_of_welcome_prompt_message 30

void Welcome_prompt(){
    write (STDOUT_FILENO, "Welcome to my ENSEA's shell !", size_of_welcome_prompt_message);
}