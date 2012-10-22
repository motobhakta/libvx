/*

Copyright (c) 2006-2012 Hartmut Seichter
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied, of the VideoExtractor Project.

*/

#ifndef _LIBVX_VX_CONTEXT_H_
#define _LIBVX_VX_CONTEXT_H_ 1

#include <vx/cdecl.h>
#include <vx/def.h>
#include <vx/frame.h>
#include <vx/source.h>


VX_C_DECL_BEGIN

typedef struct vx_context vx_context;

typedef void (*vx_frame_cb_t) (vx_context* c, const vx_frame* f, void *userdata);

vx_context* vx_context_create(const char* name);

int vx_context_ref(vx_context* c);

int vx_context_unref(vx_context* c);

int vx_context_set_frame_callback(vx_context* c, vx_frame_cb_t* cb, void* userdata);

VX_C_DECL_END


#endif