/**CFile****************************************************************

  FileName    [sa_prec.h]

  SystemName  [IFJ - PROJECT]

  PackageName [Syntactic analysis]

  Synopsis    []

  Author      [Lukas Piwowarski, Lukas Valek]

  Affiliation []

  Date        [01/11/2018]

  Revision    []

***********************************************************************/

////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////
#ifndef SA_PREC_H
#define SA_PREC_H

////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////
typedef enum {
    _+_,
    _*_,
    _id_,
} stack_terminal_t;

typedef enum {
    _+_,
    _*_,
    _id_,
} input_token_t;

////////////////////////////////////////////////////////////////////////
///                      MACRO DEFINITIONS                           ///
////////////////////////////////////////////////////////////////////////
#define PREC_TABLE_ROWS 2   /* Max number of rows in prec_table */
#define PREC_TABLE_COLS 2   /* Max number of cols in prec_table */

////////////////////////////////////////////////////////////////////////
///                       GLOBAL VARIABLES                           ///
////////////////////////////////////////////////////////////////////////

char sa_prec_table[PREC_TABLE_ROWS][PREC_TABLE_COLS] = {
  /*  +    *    id*/  
    {'>', '<', '<'}, // +
    {'>', '<', '<'}, // *
    {'>', '>', 'X'}  // id
}


////////////////////////////////////////////////////////////////////////
///                    FUNCTION DECLARATIONS                         ///
////////////////////////////////////////////////////////////////////////






#endif
////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////