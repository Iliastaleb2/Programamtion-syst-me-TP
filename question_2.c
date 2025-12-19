#include "question_2.h"

int last_exit_status = 0; // Global variable to store the last exit status (in particular for question_4.c)

void Execution_of_a_simple_command(char *command){

    int status;
    pid_t pid = fork();           // creating a new process in order to execute the command

    if (pid == -1){                // managing fork error
        perror(Fork_failed_message);
        exit(EXIT_FAILURE);
    }

    if (pid == 0){               // case of the child process 
        execlp(command, command, NULL);    // executing the command
        perror(Execution_failed_message); // if execlp returns -1, an error occurred
        exit(EXIT_FAILURE);
    }


    else if (pid > 0){               // case of the parent process
        waitpid(pid, &status, 0);      // waiting for the child process to finish
    }
    last_exit_status = status; // storing the exit status for question_4.c
}