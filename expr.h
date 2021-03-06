
/**CFile****************************************************************
  FileName    [expr.h]

  SystemName  [IFJ - PROJECT]

  PackageName [Syntactic analysis]

  Synopsis    []

  Author      [Lukas Piwowarski (xpiwow00)]

  Affiliation []

  Date        [01/11/2018]

  Revision    []
***********************************************************************/
#ifndef SA_PREC_H
#define SA_PREC_H

////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////
#include "dynamic_str.h"
#include "queue.h"
#include "symtable.h"
#include "list.h"

////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////

/* Constants assigned to:
 *    - Terminals (also indexes to precedence-table)
 *    - Operators from precedence-table
 *    - Nonterminal (E)
 */
typedef enum {
/*** Terminal ***/
    _plus_,     // +
    _mult_,     // *
    _lbrc_,     // (
    _rbrc_,     // )
    _id_,       // id 
    _mins_,     // - 
    _div_,      // /
    _rel_,      // < > <= >=
    _str_,      // str
    _func_,     // f-ce() 
    _coma_,     // , 
    _empt_,     // $

/*** Rules ***/
    _sml_,      // <
    _big_,      // >
    _eql_,      // =

/*** Nonterminal ***/
    _E_,  
    _F_,

} table_elem_t;

////////////////////////////////////////////////////////////////////////
///                    FUNCTION DECLARATIONS                         ///
////////////////////////////////////////////////////////////////////////

/* 
 * @brief Operator-precedence parser. 
 *
 * @params  sc_str         Param for scanner
 *          que            Param for scanner
 *          symtable       Param for scanner
 *          loc_symtable   List of declared variables (either global or local)
 *          func_symtable  List of declared functions
 *          code_buffer    Buffer for code when if-statement/while-loop 
 *          in_stat        Determines whether in while-loop/if-statement
 *          ret_token      Result of expression 
 * @return  err code from error.h or SUCCES 
 */ 
int sa_prec(dynamicStr_t *sc_str, queue_t *que, symtable_t *var_symtable, 
            symtable_t *func_symtable, token_t **ret_token, list_t *code_buffer, 
            bool in_stat);

#endif
////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////