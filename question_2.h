#ifndef QUESTION_2_H
#define QUESTION_2_H

#include "question_1.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_COMMAND_LENGTH 128
#define size_of_command_not_found_message 18

#define Command_not_found_message "Command not found\n"
#define Fork_failed_message "Fork failed\n"
#define Execution_failed_message "Execution failed\n"

extern int last_exit_status; // Declaration of the external variable to store the last exit status

void Execution_of_a_simple_command(char *command);

#endif // QUESTION_2_H