#include "question_3.h"

void Exit_prompt_or_ctrl_d_prompt(char *command) {
    // Read user input
    ssize_t bytes_read = read(STDIN_FILENO, command, BUFFER_SIZE - 1); 

    // case of read error
    if (bytes_read < 0) {
        perror("Read failed");
        exit(EXIT_FAILURE);
    } 
    else if (bytes_read == 0) { // Check for exit on Ctrl+D
        write(STDOUT_FILENO, EXIT_MESSAGE, EXIT_MESSAGE_LENGTH);
        exit(EXIT_SUCCESS);
    }

    command[bytes_read] = '\0';  // Null-terminate the string
    
    if (bytes_read > 0 && command[bytes_read - 1] == '\n') {  
        command[bytes_read - 1] = '\0'; // Remove trailing newline
    }
    
    if (command[0] == '\0') { 
        return; // Empty command, return to main loop
    }

    if (strncmp(command, "exit", 4) == 0 && command[4] == '\0') {  // Check for "exit" command
         write(STDOUT_FILENO, EXIT_MESSAGE, EXIT_MESSAGE_LENGTH);
         exit(EXIT_SUCCESS);
    }
    
    // if we reach here, the command is neither empty nor "exit"
}