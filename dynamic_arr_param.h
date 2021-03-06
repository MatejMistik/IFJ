/**CFile****************************************************************

  FileName    [dynamic_arr_params.h]

  SystemName  [IFJ - PROJECT]

  PackageName [Data type]

  Synopsis    [Dynamic params of integers implementation]

  Author      [Adam Pankuch, Lukas Valek]

  Login       [xpanku00, xvalek15]

  Affiliation []

  Date        [26/10/2018]

  Revision    []

***********************************************************************/

////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////
#ifndef DYNAMICARRPARAM_H
#define DYNAMICARRPARAM_H

#include <stdlib.h>
#include <stdbool.h>
#include "symtable.h"


////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////

typedef struct
{
  elem_t **param_arr;
  unsigned int length; // lenght of params
  unsigned int max; // maximal length of params
} dynamicArrParam_t;

////////////////////////////////////////////////////////////////////////
///                      MACRO DEFINITIONS                           ///
////////////////////////////////////////////////////////////////////////
#define DYNAMICARRPARAM_LEN 4 //Initializing length of structure
#define MULT_LEN 4  // in case of realloc add a->max and MULT_LEN

////////////////////////////////////////////////////////////////////////
///                    FUNCTION DECLARATIONS                         ///
////////////////////////////////////////////////////////////////////////


/**
 * @brief      Initialize the array of pointers
 *
 * @return     True     if succesfull, otherwise false
 */
dynamicArrParam_t *dynamicArrParams_init();


/**
 * @brief      Free array of params
 *
 * @param      a     structure to be freed
 */
void dynamicArrParams_free(dynamicArrParam_t *a);


/**
 * @brief      Add a new param ptr to the array
 *
 * @param      a      ptr to the structure of param pointers
 * @param      param  element ptr to be added
 *
 * @return     true if was succesful, otherwise false
 */
bool dynamicArrParams_add(dynamicArrParam_t *a, elem_t *param);



#endif
////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////