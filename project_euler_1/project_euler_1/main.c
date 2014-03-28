//
//  main.c
//  project_euler_1
//
//  Created by Neil de Vries on 2014-03-27.
//  Copyright (c) 2014 Neil de Vries. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

bool problem_001(bool p), problem_002(bool p);

int const ATTEMPT_COUNT = 2;
bool (*problem[ATTEMPT_COUNT])(bool) = {problem_001, problem_002};

int main(void)
{
    int const CURRENT_PROBLEM = 2;
    printf("\n%d\n", (*problem[CURRENT_PROBLEM-1])(1));
    
    /*
    // small io for user to interact with solutions
    
    int solved = 0; // determin total number of solved problems
    for (int i = 0; i < ATTEMPT_COUNT; i++) {
        solved += (*problem[i])(0);
    }
     
    printf("Total number of solved problems: %d\n", solved);
    printf("__ Number of attempted problems: %d\n", ATTEMPT_COUNT);
    printf("_____________ by: Neil de Vries\n\n");
     
    printf("Choose a problem (enter a #1-%d): ", ATTEMPT_COUNT);
    int option;
    scanf("%d", &option);
    
    // check if solved, run function with side effects
    if ((*problem[option-1])(1)) {
        // my personal solution scored full marks
        printf("Correct Solution!\n");
    } else {
        // solution is a work in progress
        printf("Solution in progress...\n");
    }
    */
    
    return 0;
}

bool problem_001(bool p)
{
    int result = 1;
    for (int i = 1; i <= 10; i++) {
        if (i%3 == 0 || i%5 == 0) {
            result += i;
        }
    }
    if (p) printf("problem_001 solution: %d\n", result);
    return true;
}

bool problem_002(bool p)
{
    int result = 0;
    
    if (p) printf("problem_002 solution: %d\n", result);
    return 0;
}