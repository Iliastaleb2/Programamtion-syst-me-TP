#include "question_4.h"

extern int last_exit_status; // Declaration of the external variable to access the last exit status

void A_better_displayed_prompt(){
    char prompt_buffer[size_of_new_prompt];  // Buffer to hold the formatted prompt
    int lenght = 0;                          // Length of the formatted prompt


    if(WIFEXITED(last_exit_status)){
        lenght = snprintf(prompt_buffer, size_of_new_prompt, new_prompt_format, Exit_word, WEXITSTATUS(last_exit_status)); // we store in lenght the number of characters written in prompt_buffer and we format the string according to new_prompt_format
    }    // We allowed ourselves to use snprintf here for formatting the prompt string

    else if(WIFSIGNALED(last_exit_status)){
        lenght = snprintf(prompt_buffer, size_of_new_prompt, new_prompt_format, Signal_word, WTERMSIG(last_exit_status));
    }

    else{
        lenght = snprintf(prompt_buffer, size_of_new_prompt, new_prompt_format, Unknown_word, 0);
    }

    write(STDOUT_FILENO, prompt_buffer, lenght);
}