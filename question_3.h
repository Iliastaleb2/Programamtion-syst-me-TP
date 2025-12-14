#include "question_2.h"
#include <string.h>

#define BUFFER_SIZE 256
#define EXIT_MESSAGE "Exiting shell...\n"
#define EXIT_MESSAGE_LENGTH 16
#define Length_of_exit_command 4

void Exit_prompt_or_ctrl_d_prompt(char *command);