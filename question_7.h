#ifndef QUESTION_7_H
#define QUESTION_7_H

#include "question_6.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define Open_failed_message "Open failed"


void Managing_redirections_to_stdin_and_stdout_with_arrows(char *command, char **arguments);


#endif // QUESTION_7_H