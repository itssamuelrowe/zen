/*
 * Copyright 2017-2020 Samuel Rowe
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Thursday, October 29, 2019

#ifndef COM_ONECUBE_ZEN_COMPILER_AST_CONTEXT_WITH_PARAMETERS_CONTEXT_H
#define COM_ONECUBE_ZEN_COMPILER_AST_CONTEXT_WITH_PARAMETERS_CONTEXT_H

#include <jtk/collection/list/ArrayList.h>

#include <com/onecube/zen/Configuration.h>
#include <com/onecube/zen/compiler/ast/ASTNode.h>

/*******************************************************************************
 * WithParametersContext                                                       *
 *******************************************************************************/

/**
 * @class WithParametersContext
 * @ingroup zen_compiler_ast
 * @author Samuel Rowe
 * @since zen 1.0
 */
struct zen_WithParametersContext_t {
    zen_ASTNode_t* m_node;
    jtk_ArrayList_t* m_withParameters;
};

/**
 * @memberof WithParametersContext
 */
typedef struct zen_WithParametersContext_t zen_WithParametersContext_t;

// Constructor

/**
 * @memberof WithParametersContext
 */
zen_WithParametersContext_t* zen_WithParametersContext_new(zen_ASTNode_t* node);

// Destructor

/**
 * @memberof WithParametersContext
 */
void zen_WithParametersContext_delete(zen_WithParametersContext_t* context);

// Children

/**
 * @memberof WithParametersContext
 */
void zen_WithParametersContext_getChildren(zen_WithParametersContext_t* context,
    jtk_ArrayList_t* children);

#endif /* COM_ONECUBE_ZEN_COMPILER_AST_CONTEXT_WITH_PARAMETERS_CONTEXT_H */