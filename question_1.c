#include "question_1.h"


void Welcome_prompt(){
    write(STDOUT_FILENO, Welcoming_message, size_of_welcome_prompt);
}

void Normal_prompt(){
    write(STDOUT_FILENO, Normal_message, size_of_normal_prompt);
}