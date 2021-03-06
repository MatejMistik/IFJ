/**CFile****************************************************************

  FileName    [stack_expr.h]

  SystemName  [IFJ - PROJECT]

  PackageName []

  Synopsis    []

  Author      [Lukas Piwowarski (xpiwow00)]

  Affiliation []

  Date        [11/11/2018]

  Revision    []

***********************************************************************/

////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////
#ifndef STACK_SA_PREC_H
#define STACK_SA_PREC_H

#include <stdbool.h>
#include "expr.h"

////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////

typedef struct stack_item {
    char term;
    token_t *token;
    struct stack_item *rptr;
    struct stack_item *lptr;
} stack_item_t;

typedef struct stack_sa {
    stack_item_t *bot;    /* Pointer to bottom of stack             */
    stack_item_t *top;    /* Pointer to top of stack                */ 
} stack_sa_t;

////////////////////////////////////////////////////////////////////////
///                      MACRO DEFINITIONS                           ///
////////////////////////////////////////////////////////////////////////
#define STACK_INIT_CAP 20 /* Initial capacity of stack              */
#define RESIZE_STEP 10    /* Used when there is no more space       */
#define EMPTY -1          /* Top == -1 when stack is empty          */

////////////////////////////////////////////////////////////////////////
///                    FUNCTION DECLARATIONS                         ///
////////////////////////////////////////////////////////////////////////

/**
 * @brief Creates new stack
 *
 * @return stack_sa_t *  Pointer to new stack
 *         NULL          If error ocurres
 */
stack_sa_t *stc_init();

/**
 * @brief      Pushes term to stack
 *
 * @param      stack  Pointer to stack
 * @param      term   Term to be pushed to stack
 *
 * @return     true   If term is pushed successfuly
 *             false  If error ocurres 
 */
bool stc_push(stack_sa_t *stack, char term, token_t *token);

/**
 * @brief Pops token from top of stack
 *
 * @param  stack_sa_t * Pointer to stack
 * @return char         Term on top of stack
 */
char stc_popTop(stack_sa_t *stack);

/**
 * @brief Frees memory allocated by stack.
 *
 * @param stack_t * Pointer to stack.
 */
void stc_destroy(stack_sa_t *stack);

/**
 * @brief Returns non-terminal nearest to top of stack
 *
 * @param   stack Stack containing wanted non-terminal
 * @return  char  Non-terminal nearest to top of stack
 *          EMPTY If there is no terminal in stack
 */
char stc_topTerm(stack_sa_t *stack);

/*
 * @brief Pushes element after terminal closest to the top of stack
 * 
 * @param  stack  Stack where the element should be pushed
 *         term   Terminal after which the element should be pushed
 *         rule   Element which should be pushed to the stack
 * @return true   If success.
 *         false  If error ocurred.
 */
bool stc_pushAfter(stack_sa_t *stack, table_elem_t term, table_elem_t rule);

/*
 * @brief Print stack to stdout
 */
void stc_print(stack_sa_t *stack);

/* 
 * @brief Return terminal or nonterminal from top of stack
 */
char stc_Top(stack_sa_t *stack);

/*
 * @brief Return token and terminal or nonterminal from top of stack
 *        and pop it out.
 */
token_t *stc_tokPopTop(stack_sa_t *stack, table_elem_t *term);


#endif
////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////
