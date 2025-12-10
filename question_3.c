#include "question_3.h"

void Exit_prompt_or_ctrl_d_prompt(){
    write (STDOUT_FILENO, "Au revoir.\n", Max_command_length);
    write (STDOUT_FILENO, "Au revoir...\n", Max_command_length);
    exit(EXIT_SUCCESS);
}