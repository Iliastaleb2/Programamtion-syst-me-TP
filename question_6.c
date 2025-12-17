#include "question_6.h"

extern int last_exit_status; // Declaration of the external variable to access the last exit status

void Execution_of_a_command_with_arguments(char *command, char **arguments){
    
    int status;
    
    pid_t pid = fork();                    // creating a new process in order to execute the command

    if (pid == -1){                // managing fork error
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }

    if (pid == 0){               // case of the child process
        execvp(command, arguments);    // executing the command with arguments
        perror("Execution failed");
        exit(EXIT_FAILURE);
    }

    // case of a non-existent command
    else if (pid > 0){               // case of the parent process
        waitpid(pid, &status, 0);      // waiting for the child process to finish
    }
    last_exit_status = status;
}

