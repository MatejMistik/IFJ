/**CFile****************************************************************

  FileName    []

  SystemName  [IFJ - PROJECT]

  PackageName []

  Synopsis    []

  Author      []

  Affiliation []

  Date        [--/--/2018]

  Revision    []

***********************************************************************/

////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////
#ifndef SCANNER_H
#define SCANNER_H

#include <stdio.h>

////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////
typedef enum
{
    State_S,        ///Starting state
	State_ID, /// Identifier
	State_FUNC, //Function

	State_INT, /// Integer number
    State_INT0, //INT = 0
	State_FLOAT, /// Double number
	State_HEX,	//BEgining og hex number '\x'
	State_HEX_NUM,	//Hex number with one number '\xA'
	State_HEX_NUM_END,	//Hex number with two number '\xAA'

	State_QUATATION1, //Starting a string
	State_QUATATION2,	//Ending a string
	State_STR, /// String
	State_SPEC_CHAR, //Special symbols like '\n', '\s'....

	State_LEQ, /// Less or equal <=
	State_LTN, /// Less than <
	State_MEQ, /// More or equal >=
	State_MTN, /// More than >

	State_ASSIGN, /// Assign =
    State_EQ, /// Equal ==
    State_EXLAMATION, // Exlamation Mark '!'
    State_NEQ, /// Not equal !=
	State_PLUS, /// Plus +
	State_MINUS, /// Minus -
	State_MUL, /// Multiplication *
	State_DIV, /// Division / result always double

	State_LEFT_BRACKET, /// Left bracket (
	State_RIGHT_BRACKET, /// Right bracket )
    State_DOT, // Dot . (for float numbers)
    State_EXP,  //Mid-state of FLOAT ( 0e???)
    State_EXPS, //Mid-state of FLOAT with sign (0e-???)
	State_COMMA, /// Comma ,
	State_SEMICOLON, /// Semicolon ;

	State_EOF, /// End of file
	State_EOL, /// End of line
	State_COMM, //Starting of comment block EOL-> '='
	State_COMMB,	//Starting block of comments with EOL-> '=b'
	State_COMMBE,
	State_COMMBEG,
	State_COMMBEGI,
	State_COMMBEGIN,
} State;

////////////////////////////////////////////////////////////////////////
///                      MACRO DEFINITIONS                           ///
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
///                    FUNCTION DECLARATIONS                         ///
////////////////////////////////////////////////////////////////////////






#endif
////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////