// Friday, March 09, 2018

#ifndef ZEN_ST_ENUMERATE_SYMBOL_H
#define ZEN_ST_ENUMERATE_SYMBOL_H

#include <com/onecube/zen/compiler/ast/Node.h>
#include <com/onecube/zen/st/Symbol.h>
#include <com/onecube/zen/st/Modifier.h>
#include <com/onecube/zen/collection/ArrayList.h>

/*******************************************************************************
 * EnumerateSymbol                                                             *
 *******************************************************************************/

struct zen_EnumerateSymbol_t {
    zen_Symbol_t* m_symbol;
};

typedef struct zen_EnumerateSymbol_t zen_EnumerateSymbol_t;

zen_EnumerateSymbol_t* zen_EnumerateSymbol_new(zen_ASTNode_t* identifier,
    zen_Scope_t* enclosingScope);
void zen_EnumerateSymbol_delete(zen_EnumerateSymbol_t* symbol);
zen_Symbol_t* zen_EnumerateSymbol_getSymbol(zen_EnumerateSymbol_t* symbol);

#endif /* ZEN_ST_ENUMERATE_SYMBOL_H */