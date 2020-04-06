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

// Sunday, September 23, 2018

#ifndef COM_ONECUBE_ZEN_VIRTUAL_MACHINE_LOADER_ENTITY_RESOLVER_H
#define COM_ONECUBE_ZEN_VIRTUAL_MACHINE_LOADER_ENTITY_RESOLVER_H

#include <com/onecube/zen/Configuration.h>
#include <com/onecube/zen/virtual-machine/loader/ResolutionManager.h>

/*******************************************************************************
 * EntityResolver                                                              *
 *******************************************************************************/

/**
 * @class EntityResolver
 * @ingroup zen_vm_loader
 * @author Samuel Rowe
 * @since zen 1.0
 */
struct zen_EntityResolver_t {
    zen_ResolutionManager_t* m_resolutionManager;
};

/**
 * @memberof EntityResolver
 */
typedef struct zen_EntityResolver_t zen_EntityResolver_t;

#endif /* COM_ONECUBE_ZEN_VIRTUAL_MACHINE_LOADER_ENTITY_RESOLVER_H */