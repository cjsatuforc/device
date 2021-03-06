/*
 *  ion.c
 *
 * Memory Allocator functions for ion
 *
 *   Copyright 2011 Google, Inc
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef __SYS_ION_MEM_MANAGER_H__
#define __SYS_ION_MEM_MANAGER_H__


int ion_memOpen(void);
int ion_memClose(void);
unsigned char* ion_allocMem(unsigned int size);
int ion_freeMem(void *vir_ptr);
unsigned int ion_getMemPhyAddr(void *vir_ptr);
int ion_flushCache(void *vir_ptr, unsigned int size);



#endif /* __SYS_ION_MEM_MANAGER_H__ */
