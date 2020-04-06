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

// Friday, May 18, 2018

#ifndef ZEN_VM_OBJECT_ARRAY_H
#define ZEN_VM_OBJECT_ARRAY_H

#include <com/onecube/zen/Configuration.h>
#include <com/onecube/zen/virtual-machine/object/Object.h>

/*******************************************************************************
 * ObjectArray                                                                 *
 *******************************************************************************/

struct zen_ObjectArray_t {
};

typedef struct zen_ObjectArray_t zen_ObjectArray_t;

/* Value */

void zen_ObjectArray_setValue(zen_ObjectArray_t* array, int32_t index, zen_Object_t* value);
zen_Object_t* zen_ObjectArray_getValue(zen_ObjectArray_t* array, int32_t index);

#endif /* ZEN_VM_OBJECT_ARRAY_H */