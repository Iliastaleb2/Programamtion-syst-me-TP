#include "question_2.h"

#define MAX_COMMAND_LENGTH 128

void Execution_of_a_simple_command(char* command_entered_by_user){

    read(STDIN_FILENO, command_entered_by_user, MAX_COMMAND_LENGTH);

    int status;
    pid_t pid = fork();
    if (pid = -1)      // gestion d'erreur du fork
    {
        perror("Le fork a echoué");
        exit(EXIT_FAILURE);
    }
    if (pid == 0){    // cas du processus fils
        execlp(command_entered_by_user, command_entered_by_user, NULL);
    }
    else {           // cas du processus père
        waitpid(pid, &status, 0);
    }

}