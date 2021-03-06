/**CFile****************************************************************

  FileName    [token.h]

  SystemName  [IFJ - PROJECT]

  PackageName [Compiler]

  Synopsis    [Token manipulation]

  Author      [Adam Pankuch]

  Login       [xpanku00]

  Affiliation []

  Date        [18/10/2018]

  Revision    []

***********************************************************************/

////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////
#ifndef TOKEN_H
#define TOKEN_H

#include <stdio.h>
#include <stdbool.h>

#include "symtable.h"

////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////

/**
 * @brief Token info union
 * 
 */
typedef union token_info {
    elem_t *ptr;    // either ptr to info-element in hash table
    char *string;   // or string
} token_info_t;


/**
 * @brief Token structure
 * 
 */
typedef struct token {
    char *name;         // token name eg. "ID", "STR", "+", "==", "EOL", ...
    token_info_t info;  // token info      
} token_t;

////////////////////////////////////////////////////////////////////////
///                      MACRO DEFINITIONS                           ///
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
///                    FUNCTION DECLARATIONS                         ///
////////////////////////////////////////////////////////////////////////

/**
 * @brief Creates token and initializes it
 * 
 * @param name token name eg. "ID", "STR", "+", "==", "EOL", ...
 * @param info either info or ptr to corresponding info-element in hashtable
 * @return token_t* initialized token or NULL if not succesful
 */
token_t *createToken(char *name, token_info_t info);


/**
 * @brief Destroys token
 * 
 * @param token token to be destroyed
 */
void destroyToken(token_t *token);


#endif
////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////