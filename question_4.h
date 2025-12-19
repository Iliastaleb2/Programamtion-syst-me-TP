#ifndef QUESTION_4_H
#define QUESTION_4_H

#include "question_3.h"


#define size_of_new_prompt 32  // 32 bytes should be enough to hold the prompt string

#define new_prompt_format "enseaSH[%s:%d]"
#define Exit_word "exit"
#define Signal_word "signal"
#define Unknown_word "unknown"

void A_better_displayed_prompt();

#endif // QUESTION_4_H