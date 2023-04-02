/* Generated code for Python module 'pptx.enum.shapes'
 * created by Nuitka version 1.5.4
 *
 * This code is in part copyright 2022 Kay Hayen.
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

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pptx$enum$shapes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pptx$enum$shapes;
PyDictObject *moduledict_pptx$enum$shapes;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[337];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[337];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pptx.enum.shapes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 337; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pptx$enum$shapes(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 337; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7dc653b91887b666726ec2781b60cae4;
static PyCodeObject *codeobj_0a9cbfcb8eb8168905e42417e97cd57a;
static PyCodeObject *codeobj_69e89e9fbd619017a0932872a4415e02;
static PyCodeObject *codeobj_a0e60f42d03cc8af49cedceef0a9f4e0;
static PyCodeObject *codeobj_2dfc2956ba07f36239d4888ff5163b18;
static PyCodeObject *codeobj_a732385590619f838841c84ce4c154cd;
static PyCodeObject *codeobj_c613e347796a0783f4157c1662602e96;
static PyCodeObject *codeobj_cde3f31822523054979c38226ece5bfa;
static PyCodeObject *codeobj_054842fd2dfe90c00199d3ecd6bb4abc;
static PyCodeObject *codeobj_5233a65cf862162730575f236bd7aaac;
static PyCodeObject *codeobj_0fd5e1a21cc75e5b3cb7a07397145499;
static PyCodeObject *codeobj_8af9bcf58eab3f8f415f221820d6f758;
static PyCodeObject *codeobj_5273d82fd3c0e4068540f3729432f38e;
static PyCodeObject *codeobj_9c2a1649be00144f029a75c894c74958;
static PyCodeObject *codeobj_aacf6c9d18f779fcd3d0cb0dd9b2176c;
static PyCodeObject *codeobj_ebac25c12a0f5ff5618b90b04d5152b7;
static PyCodeObject *codeobj_339af3fe8770a24bdd1c2ca8455191a0;
static PyCodeObject *codeobj_91ad2dbf4af2ea7ee91abb417c0bbaab;
static PyCodeObject *codeobj_9c1c3a0ef702a4a2e0934f25892d01cf;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[15]; CHECK_OBJECT(module_filename_obj);
    codeobj_7dc653b91887b666726ec2781b60cae4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[331], mod_consts[331], NULL, NULL, 0, 0, 0);
    codeobj_0a9cbfcb8eb8168905e42417e97cd57a = MAKE_CODE_OBJECT(module_filename_obj, 871, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[332], NULL, 1, 0, 0);
    codeobj_69e89e9fbd619017a0932872a4415e02 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[333], NULL, 0, 0, 0);
    codeobj_a0e60f42d03cc8af49cedceef0a9f4e0 = MAKE_CODE_OBJECT(module_filename_obj, 643, CO_NOFREE, mod_consts[232], mod_consts[232], mod_consts[333], NULL, 0, 0, 0);
    codeobj_2dfc2956ba07f36239d4888ff5163b18 = MAKE_CODE_OBJECT(module_filename_obj, 678, CO_NOFREE, mod_consts[241], mod_consts[241], mod_consts[333], NULL, 0, 0, 0);
    codeobj_a732385590619f838841c84ce4c154cd = MAKE_CODE_OBJECT(module_filename_obj, 831, CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[333], NULL, 0, 0, 0);
    codeobj_c613e347796a0783f4157c1662602e96 = MAKE_CODE_OBJECT(module_filename_obj, 875, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[332], NULL, 1, 0, 0);
    codeobj_cde3f31822523054979c38226ece5bfa = MAKE_CODE_OBJECT(module_filename_obj, 727, CO_NOFREE, mod_consts[272], mod_consts[272], mod_consts[333], NULL, 0, 0, 0);
    codeobj_054842fd2dfe90c00199d3ecd6bb4abc = MAKE_CODE_OBJECT(module_filename_obj, 758, CO_NOFREE, mod_consts[280], mod_consts[280], mod_consts[333], NULL, 0, 0, 0);
    codeobj_5233a65cf862162730575f236bd7aaac = MAKE_CODE_OBJECT(module_filename_obj, 881, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[332], NULL, 1, 0, 0);
    codeobj_0fd5e1a21cc75e5b3cb7a07397145499 = MAKE_CODE_OBJECT(module_filename_obj, 811, CO_NOFREE, mod_consts[305], mod_consts[305], mod_consts[333], NULL, 0, 0, 0);
    codeobj_8af9bcf58eab3f8f415f221820d6f758 = MAKE_CODE_OBJECT(module_filename_obj, 860, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[323], mod_consts[323], mod_consts[334], NULL, 2, 0, 0);
    codeobj_5273d82fd3c0e4068540f3729432f38e = MAKE_CODE_OBJECT(module_filename_obj, 834, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[310], mod_consts[310], mod_consts[335], NULL, 6, 0, 0);
    codeobj_9c2a1649be00144f029a75c894c74958 = MAKE_CODE_OBJECT(module_filename_obj, 841, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[312], mod_consts[312], mod_consts[332], NULL, 1, 0, 0);
    codeobj_aacf6c9d18f779fcd3d0cb0dd9b2176c = MAKE_CODE_OBJECT(module_filename_obj, 867, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[312], mod_consts[312], mod_consts[332], NULL, 1, 0, 0);
    codeobj_ebac25c12a0f5ff5618b90b04d5152b7 = MAKE_CODE_OBJECT(module_filename_obj, 845, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[315], mod_consts[315], mod_consts[332], NULL, 1, 0, 0);
    codeobj_339af3fe8770a24bdd1c2ca8455191a0 = MAKE_CODE_OBJECT(module_filename_obj, 849, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[317], mod_consts[317], mod_consts[332], NULL, 1, 0, 0);
    codeobj_91ad2dbf4af2ea7ee91abb417c0bbaab = MAKE_CODE_OBJECT(module_filename_obj, 853, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[319], mod_consts[319], mod_consts[332], NULL, 1, 0, 0);
    codeobj_9c1c3a0ef702a4a2e0934f25892d01cf = MAKE_CODE_OBJECT(module_filename_obj, 857, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[321], mod_consts[321], mod_consts[332], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__10_PPTX();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__11_XLSX();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__1___init__();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__2___repr__();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__3_height();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__4_icon_filename();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__5_progId();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__6_width();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__7___contains__();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__8___repr__();


static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__9_DOCX();


// The module function definitions.
static PyObject *impl_pptx$enum$shapes$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_progId = python_pars[2];
    PyObject *par_icon_filename = python_pars[3];
    PyObject *par_width = python_pars[4];
    PyObject *par_height = python_pars[5];
    struct Nuitka_FrameObject *frame_5273d82fd3c0e4068540f3729432f38e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5273d82fd3c0e4068540f3729432f38e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5273d82fd3c0e4068540f3729432f38e)) {
        Py_XDECREF(cache_frame_5273d82fd3c0e4068540f3729432f38e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5273d82fd3c0e4068540f3729432f38e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5273d82fd3c0e4068540f3729432f38e = MAKE_FUNCTION_FRAME(codeobj_5273d82fd3c0e4068540f3729432f38e, module_pptx$enum$shapes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5273d82fd3c0e4068540f3729432f38e->m_type_description == NULL);
    frame_5273d82fd3c0e4068540f3729432f38e = cache_frame_5273d82fd3c0e4068540f3729432f38e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5273d82fd3c0e4068540f3729432f38e);
    assert(Py_REFCNT(frame_5273d82fd3c0e4068540f3729432f38e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_progId);
        tmp_assattr_value_2 = par_progId;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 836;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_icon_filename);
        tmp_assattr_value_3 = par_icon_filename;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 837;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_width);
        tmp_assattr_value_4 = par_width;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 838;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_height);
        tmp_assattr_value_5 = par_height;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 839;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5273d82fd3c0e4068540f3729432f38e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5273d82fd3c0e4068540f3729432f38e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5273d82fd3c0e4068540f3729432f38e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5273d82fd3c0e4068540f3729432f38e,
        type_description_1,
        par_self,
        par_name,
        par_progId,
        par_icon_filename,
        par_width,
        par_height
    );


    // Release cached frame if used for exception.
    if (frame_5273d82fd3c0e4068540f3729432f38e == cache_frame_5273d82fd3c0e4068540f3729432f38e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5273d82fd3c0e4068540f3729432f38e);
        cache_frame_5273d82fd3c0e4068540f3729432f38e = NULL;
    }

    assertFrameObject(frame_5273d82fd3c0e4068540f3729432f38e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_progId);
    Py_DECREF(par_progId);
    CHECK_OBJECT(par_icon_filename);
    Py_DECREF(par_icon_filename);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_progId);
    Py_DECREF(par_progId);
    CHECK_OBJECT(par_icon_filename);
    Py_DECREF(par_icon_filename);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_height);
    Py_DECREF(par_height);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$enum$shapes$$$function__2___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9c2a1649be00144f029a75c894c74958;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c2a1649be00144f029a75c894c74958 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c2a1649be00144f029a75c894c74958)) {
        Py_XDECREF(cache_frame_9c2a1649be00144f029a75c894c74958);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c2a1649be00144f029a75c894c74958 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c2a1649be00144f029a75c894c74958 = MAKE_FUNCTION_FRAME(codeobj_9c2a1649be00144f029a75c894c74958, module_pptx$enum$shapes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9c2a1649be00144f029a75c894c74958->m_type_description == NULL);
    frame_9c2a1649be00144f029a75c894c74958 = cache_frame_9c2a1649be00144f029a75c894c74958;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9c2a1649be00144f029a75c894c74958);
    assert(Py_REFCNT(frame_9c2a1649be00144f029a75c894c74958) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_mod_expr_left_1 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 842;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 842;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c2a1649be00144f029a75c894c74958, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c2a1649be00144f029a75c894c74958->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c2a1649be00144f029a75c894c74958, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c2a1649be00144f029a75c894c74958,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9c2a1649be00144f029a75c894c74958 == cache_frame_9c2a1649be00144f029a75c894c74958) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c2a1649be00144f029a75c894c74958);
        cache_frame_9c2a1649be00144f029a75c894c74958 = NULL;
    }

    assertFrameObject(frame_9c2a1649be00144f029a75c894c74958);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$enum$shapes$$$function__3_height(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ebac25c12a0f5ff5618b90b04d5152b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ebac25c12a0f5ff5618b90b04d5152b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ebac25c12a0f5ff5618b90b04d5152b7)) {
        Py_XDECREF(cache_frame_ebac25c12a0f5ff5618b90b04d5152b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ebac25c12a0f5ff5618b90b04d5152b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ebac25c12a0f5ff5618b90b04d5152b7 = MAKE_FUNCTION_FRAME(codeobj_ebac25c12a0f5ff5618b90b04d5152b7, module_pptx$enum$shapes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ebac25c12a0f5ff5618b90b04d5152b7->m_type_description == NULL);
    frame_ebac25c12a0f5ff5618b90b04d5152b7 = cache_frame_ebac25c12a0f5ff5618b90b04d5152b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ebac25c12a0f5ff5618b90b04d5152b7);
    assert(Py_REFCNT(frame_ebac25c12a0f5ff5618b90b04d5152b7) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 846;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ebac25c12a0f5ff5618b90b04d5152b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ebac25c12a0f5ff5618b90b04d5152b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ebac25c12a0f5ff5618b90b04d5152b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ebac25c12a0f5ff5618b90b04d5152b7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ebac25c12a0f5ff5618b90b04d5152b7 == cache_frame_ebac25c12a0f5ff5618b90b04d5152b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ebac25c12a0f5ff5618b90b04d5152b7);
        cache_frame_ebac25c12a0f5ff5618b90b04d5152b7 = NULL;
    }

    assertFrameObject(frame_ebac25c12a0f5ff5618b90b04d5152b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$enum$shapes$$$function__4_icon_filename(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_339af3fe8770a24bdd1c2ca8455191a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_339af3fe8770a24bdd1c2ca8455191a0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_339af3fe8770a24bdd1c2ca8455191a0)) {
        Py_XDECREF(cache_frame_339af3fe8770a24bdd1c2ca8455191a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_339af3fe8770a24bdd1c2ca8455191a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_339af3fe8770a24bdd1c2ca8455191a0 = MAKE_FUNCTION_FRAME(codeobj_339af3fe8770a24bdd1c2ca8455191a0, module_pptx$enum$shapes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_339af3fe8770a24bdd1c2ca8455191a0->m_type_description == NULL);
    frame_339af3fe8770a24bdd1c2ca8455191a0 = cache_frame_339af3fe8770a24bdd1c2ca8455191a0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_339af3fe8770a24bdd1c2ca8455191a0);
    assert(Py_REFCNT(frame_339af3fe8770a24bdd1c2ca8455191a0) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 850;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_339af3fe8770a24bdd1c2ca8455191a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_339af3fe8770a24bdd1c2ca8455191a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_339af3fe8770a24bdd1c2ca8455191a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_339af3fe8770a24bdd1c2ca8455191a0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_339af3fe8770a24bdd1c2ca8455191a0 == cache_frame_339af3fe8770a24bdd1c2ca8455191a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_339af3fe8770a24bdd1c2ca8455191a0);
        cache_frame_339af3fe8770a24bdd1c2ca8455191a0 = NULL;
    }

    assertFrameObject(frame_339af3fe8770a24bdd1c2ca8455191a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$enum$shapes$$$function__5_progId(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_91ad2dbf4af2ea7ee91abb417c0bbaab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab)) {
        Py_XDECREF(cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab = MAKE_FUNCTION_FRAME(codeobj_91ad2dbf4af2ea7ee91abb417c0bbaab, module_pptx$enum$shapes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab->m_type_description == NULL);
    frame_91ad2dbf4af2ea7ee91abb417c0bbaab = cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_91ad2dbf4af2ea7ee91abb417c0bbaab);
    assert(Py_REFCNT(frame_91ad2dbf4af2ea7ee91abb417c0bbaab) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 854;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_91ad2dbf4af2ea7ee91abb417c0bbaab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91ad2dbf4af2ea7ee91abb417c0bbaab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91ad2dbf4af2ea7ee91abb417c0bbaab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91ad2dbf4af2ea7ee91abb417c0bbaab,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_91ad2dbf4af2ea7ee91abb417c0bbaab == cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab);
        cache_frame_91ad2dbf4af2ea7ee91abb417c0bbaab = NULL;
    }

    assertFrameObject(frame_91ad2dbf4af2ea7ee91abb417c0bbaab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$enum$shapes$$$function__6_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9c1c3a0ef702a4a2e0934f25892d01cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf)) {
        Py_XDECREF(cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf = MAKE_FUNCTION_FRAME(codeobj_9c1c3a0ef702a4a2e0934f25892d01cf, module_pptx$enum$shapes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf->m_type_description == NULL);
    frame_9c1c3a0ef702a4a2e0934f25892d01cf = cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9c1c3a0ef702a4a2e0934f25892d01cf);
    assert(Py_REFCNT(frame_9c1c3a0ef702a4a2e0934f25892d01cf) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 858;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c1c3a0ef702a4a2e0934f25892d01cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c1c3a0ef702a4a2e0934f25892d01cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c1c3a0ef702a4a2e0934f25892d01cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c1c3a0ef702a4a2e0934f25892d01cf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9c1c3a0ef702a4a2e0934f25892d01cf == cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf);
        cache_frame_9c1c3a0ef702a4a2e0934f25892d01cf = NULL;
    }

    assertFrameObject(frame_9c1c3a0ef702a4a2e0934f25892d01cf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$enum$shapes$$$function__7___contains__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    struct Nuitka_FrameObject *frame_8af9bcf58eab3f8f415f221820d6f758;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8af9bcf58eab3f8f415f221820d6f758 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8af9bcf58eab3f8f415f221820d6f758)) {
        Py_XDECREF(cache_frame_8af9bcf58eab3f8f415f221820d6f758);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8af9bcf58eab3f8f415f221820d6f758 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8af9bcf58eab3f8f415f221820d6f758 = MAKE_FUNCTION_FRAME(codeobj_8af9bcf58eab3f8f415f221820d6f758, module_pptx$enum$shapes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8af9bcf58eab3f8f415f221820d6f758->m_type_description == NULL);
    frame_8af9bcf58eab3f8f415f221820d6f758 = cache_frame_8af9bcf58eab3f8f415f221820d6f758;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8af9bcf58eab3f8f415f221820d6f758);
    assert(Py_REFCNT(frame_8af9bcf58eab3f8f415f221820d6f758) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_item);
        tmp_cmp_expr_left_1 = par_item;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 862;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 863;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[8]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 864;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 861;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8af9bcf58eab3f8f415f221820d6f758, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8af9bcf58eab3f8f415f221820d6f758->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8af9bcf58eab3f8f415f221820d6f758, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8af9bcf58eab3f8f415f221820d6f758,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame if used for exception.
    if (frame_8af9bcf58eab3f8f415f221820d6f758 == cache_frame_8af9bcf58eab3f8f415f221820d6f758) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8af9bcf58eab3f8f415f221820d6f758);
        cache_frame_8af9bcf58eab3f8f415f221820d6f758 = NULL;
    }

    assertFrameObject(frame_8af9bcf58eab3f8f415f221820d6f758);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$enum$shapes$$$function__9_DOCX(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0a9cbfcb8eb8168905e42417e97cd57a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a9cbfcb8eb8168905e42417e97cd57a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a9cbfcb8eb8168905e42417e97cd57a)) {
        Py_XDECREF(cache_frame_0a9cbfcb8eb8168905e42417e97cd57a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a9cbfcb8eb8168905e42417e97cd57a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a9cbfcb8eb8168905e42417e97cd57a = MAKE_FUNCTION_FRAME(codeobj_0a9cbfcb8eb8168905e42417e97cd57a, module_pptx$enum$shapes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0a9cbfcb8eb8168905e42417e97cd57a->m_type_description == NULL);
    frame_0a9cbfcb8eb8168905e42417e97cd57a = cache_frame_0a9cbfcb8eb8168905e42417e97cd57a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0a9cbfcb8eb8168905e42417e97cd57a);
    assert(Py_REFCNT(frame_0a9cbfcb8eb8168905e42417e97cd57a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_0a9cbfcb8eb8168905e42417e97cd57a->m_frame.f_lineno = 872;
        tmp_return_value = CALL_METHOD_WITH_ARGS5(
            tmp_called_instance_1,
            mod_consts[9],
            &PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 872;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a9cbfcb8eb8168905e42417e97cd57a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a9cbfcb8eb8168905e42417e97cd57a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a9cbfcb8eb8168905e42417e97cd57a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a9cbfcb8eb8168905e42417e97cd57a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0a9cbfcb8eb8168905e42417e97cd57a == cache_frame_0a9cbfcb8eb8168905e42417e97cd57a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0a9cbfcb8eb8168905e42417e97cd57a);
        cache_frame_0a9cbfcb8eb8168905e42417e97cd57a = NULL;
    }

    assertFrameObject(frame_0a9cbfcb8eb8168905e42417e97cd57a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$enum$shapes$$$function__10_PPTX(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c613e347796a0783f4157c1662602e96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c613e347796a0783f4157c1662602e96 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c613e347796a0783f4157c1662602e96)) {
        Py_XDECREF(cache_frame_c613e347796a0783f4157c1662602e96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c613e347796a0783f4157c1662602e96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c613e347796a0783f4157c1662602e96 = MAKE_FUNCTION_FRAME(codeobj_c613e347796a0783f4157c1662602e96, module_pptx$enum$shapes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c613e347796a0783f4157c1662602e96->m_type_description == NULL);
    frame_c613e347796a0783f4157c1662602e96 = cache_frame_c613e347796a0783f4157c1662602e96;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c613e347796a0783f4157c1662602e96);
    assert(Py_REFCNT(frame_c613e347796a0783f4157c1662602e96) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_c613e347796a0783f4157c1662602e96->m_frame.f_lineno = 876;
        tmp_return_value = CALL_METHOD_WITH_ARGS5(
            tmp_called_instance_1,
            mod_consts[9],
            &PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 876;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c613e347796a0783f4157c1662602e96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c613e347796a0783f4157c1662602e96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c613e347796a0783f4157c1662602e96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c613e347796a0783f4157c1662602e96,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c613e347796a0783f4157c1662602e96 == cache_frame_c613e347796a0783f4157c1662602e96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c613e347796a0783f4157c1662602e96);
        cache_frame_c613e347796a0783f4157c1662602e96 = NULL;
    }

    assertFrameObject(frame_c613e347796a0783f4157c1662602e96);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$enum$shapes$$$function__11_XLSX(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5233a65cf862162730575f236bd7aaac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5233a65cf862162730575f236bd7aaac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5233a65cf862162730575f236bd7aaac)) {
        Py_XDECREF(cache_frame_5233a65cf862162730575f236bd7aaac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5233a65cf862162730575f236bd7aaac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5233a65cf862162730575f236bd7aaac = MAKE_FUNCTION_FRAME(codeobj_5233a65cf862162730575f236bd7aaac, module_pptx$enum$shapes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5233a65cf862162730575f236bd7aaac->m_type_description == NULL);
    frame_5233a65cf862162730575f236bd7aaac = cache_frame_5233a65cf862162730575f236bd7aaac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5233a65cf862162730575f236bd7aaac);
    assert(Py_REFCNT(frame_5233a65cf862162730575f236bd7aaac) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_5233a65cf862162730575f236bd7aaac->m_frame.f_lineno = 882;
        tmp_return_value = CALL_METHOD_WITH_ARGS5(
            tmp_called_instance_1,
            mod_consts[9],
            &PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 882;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5233a65cf862162730575f236bd7aaac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5233a65cf862162730575f236bd7aaac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5233a65cf862162730575f236bd7aaac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5233a65cf862162730575f236bd7aaac,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5233a65cf862162730575f236bd7aaac == cache_frame_5233a65cf862162730575f236bd7aaac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5233a65cf862162730575f236bd7aaac);
        cache_frame_5233a65cf862162730575f236bd7aaac = NULL;
    }

    assertFrameObject(frame_5233a65cf862162730575f236bd7aaac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__10_PPTX() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__10_PPTX,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[328],
#endif
        codeobj_c613e347796a0783f4157c1662602e96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__11_XLSX() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__11_XLSX,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[329],
#endif
        codeobj_5233a65cf862162730575f236bd7aaac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__1___init__,
        mod_consts[310],
#if PYTHON_VERSION >= 0x300
        mod_consts[311],
#endif
        codeobj_5273d82fd3c0e4068540f3729432f38e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__2___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__2___repr__,
        mod_consts[312],
#if PYTHON_VERSION >= 0x300
        mod_consts[313],
#endif
        codeobj_9c2a1649be00144f029a75c894c74958,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__3_height() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__3_height,
        mod_consts[315],
#if PYTHON_VERSION >= 0x300
        mod_consts[316],
#endif
        codeobj_ebac25c12a0f5ff5618b90b04d5152b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__4_icon_filename() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__4_icon_filename,
        mod_consts[317],
#if PYTHON_VERSION >= 0x300
        mod_consts[318],
#endif
        codeobj_339af3fe8770a24bdd1c2ca8455191a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__5_progId() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__5_progId,
        mod_consts[319],
#if PYTHON_VERSION >= 0x300
        mod_consts[320],
#endif
        codeobj_91ad2dbf4af2ea7ee91abb417c0bbaab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__6_width() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__6_width,
        mod_consts[321],
#if PYTHON_VERSION >= 0x300
        mod_consts[322],
#endif
        codeobj_9c1c3a0ef702a4a2e0934f25892d01cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__7___contains__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__7___contains__,
        mod_consts[323],
#if PYTHON_VERSION >= 0x300
        mod_consts[324],
#endif
        codeobj_8af9bcf58eab3f8f415f221820d6f758,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__8___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[312],
#if PYTHON_VERSION >= 0x300
        mod_consts[326],
#endif
        codeobj_aacf6c9d18f779fcd3d0cb0dd9b2176c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[325]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$enum$shapes$$$function__9_DOCX() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$enum$shapes$$$function__9_DOCX,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[327],
#endif
        codeobj_0a9cbfcb8eb8168905e42417e97cd57a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$enum$shapes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pptx$enum$shapes[] = {
    impl_pptx$enum$shapes$$$function__1___init__,
    impl_pptx$enum$shapes$$$function__2___repr__,
    impl_pptx$enum$shapes$$$function__3_height,
    impl_pptx$enum$shapes$$$function__4_icon_filename,
    impl_pptx$enum$shapes$$$function__5_progId,
    impl_pptx$enum$shapes$$$function__6_width,
    impl_pptx$enum$shapes$$$function__7___contains__,
    NULL,
    impl_pptx$enum$shapes$$$function__9_DOCX,
    impl_pptx$enum$shapes$$$function__10_PPTX,
    impl_pptx$enum$shapes$$$function__11_XLSX,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pptx$enum$shapes;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pptx$enum$shapes) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pptx$enum$shapes[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pptx$enum$shapes,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pptx$enum$shapes(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pptx.enum.shapes");

    // Store the module for future use.
    module_pptx$enum$shapes = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pptx.enum.shapes: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pptx.enum.shapes: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pptx.enum.shapes: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpptx$enum$shapes\n");

    moduledict_pptx$enum$shapes = MODULE_DICT(module_pptx$enum$shapes);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pptx$enum$shapes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pptx$enum$shapes,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[336]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pptx$enum$shapes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pptx$enum$shapes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pptx$enum$shapes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pptx$enum$shapes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pptx$enum$shapes);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *tmp__ProgIdEnum$class_creation_1__bases = NULL;
    PyObject *tmp__ProgIdEnum$class_creation_1__bases_orig = NULL;
    PyObject *tmp__ProgIdEnum$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp__ProgIdEnum$class_creation_1__metaclass = NULL;
    PyObject *tmp__ProgIdEnum$class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_7dc653b91887b666726ec2781b60cae4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_69e89e9fbd619017a0932872a4415e02_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643 = NULL;
    struct Nuitka_FrameObject *frame_a0e60f42d03cc8af49cedceef0a9f4e0_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678 = NULL;
    struct Nuitka_FrameObject *frame_2dfc2956ba07f36239d4888ff5163b18_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727 = NULL;
    struct Nuitka_FrameObject *frame_cde3f31822523054979c38226ece5bfa_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758 = NULL;
    struct Nuitka_FrameObject *frame_054842fd2dfe90c00199d3ecd6bb4abc_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811 = NULL;
    struct Nuitka_FrameObject *frame_0fd5e1a21cc75e5b3cb7a07397145499_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *locals_pptx$enum$shapes$$$class__7_Member_831 = NULL;
    struct Nuitka_FrameObject *frame_a732385590619f838841c84ce4c154cd_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_2);
    }
    frame_7dc653b91887b666726ec2781b60cae4 = MAKE_MODULE_FRAME(codeobj_7dc653b91887b666726ec2781b60cae4, module_pptx$enum$shapes);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7dc653b91887b666726ec2781b60cae4);
    assert(Py_REFCNT(frame_7dc653b91887b666726ec2781b60cae4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[15];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pptx$enum$shapes;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[22];
        tmp_level_value_1 = mod_consts[23];
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pptx$enum$shapes,
                mod_consts[24],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[24]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pptx$enum$shapes,
                mod_consts[25],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[25]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pptx$enum$shapes,
                mod_consts[26],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[26]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pptx$enum$shapes,
                mod_consts[27],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[27]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pptx$enum$shapes,
                mod_consts[28],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[28]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pptx$enum$shapes,
                mod_consts[29],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[29]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_10);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[30];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pptx$enum$shapes;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[31];
        tmp_level_value_2 = mod_consts[23];
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 13;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pptx$enum$shapes,
                mod_consts[32],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        tmp_assign_source_12 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_12, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[23];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[33]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[34];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 17;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[35]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[37];
        tmp_getattr_default_1 = mod_consts[38];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[37]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 17;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 16;
        tmp_called_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[39]);

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[34];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        frame_69e89e9fbd619017a0932872a4415e02_2 = MAKE_CLASS_FRAME(codeobj_69e89e9fbd619017a0932872a4415e02, module_pptx$enum$shapes, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_69e89e9fbd619017a0932872a4415e02_2);
        assert(Py_REFCNT(frame_69e89e9fbd619017a0932872a4415e02_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_called_value_4;
            tmp_called_value_4 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 41;
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_4, mod_consts[48]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(182);
            {
                PyObject *tmp_called_value_5;
                PyObject *tmp_called_value_6;
                PyObject *tmp_called_value_7;
                PyObject *tmp_called_value_8;
                PyObject *tmp_called_value_9;
                PyObject *tmp_called_value_10;
                PyObject *tmp_called_value_11;
                PyObject *tmp_called_value_12;
                PyObject *tmp_called_value_13;
                PyObject *tmp_called_value_14;
                PyObject *tmp_called_value_15;
                PyObject *tmp_called_value_16;
                PyObject *tmp_called_value_17;
                PyObject *tmp_called_value_18;
                PyObject *tmp_called_value_19;
                PyObject *tmp_called_value_20;
                PyObject *tmp_called_value_21;
                PyObject *tmp_called_value_22;
                PyObject *tmp_called_value_23;
                PyObject *tmp_called_value_24;
                PyObject *tmp_called_value_25;
                PyObject *tmp_called_value_26;
                PyObject *tmp_called_value_27;
                PyObject *tmp_called_value_28;
                PyObject *tmp_called_value_29;
                PyObject *tmp_called_value_30;
                PyObject *tmp_called_value_31;
                PyObject *tmp_called_value_32;
                PyObject *tmp_called_value_33;
                PyObject *tmp_called_value_34;
                PyObject *tmp_called_value_35;
                PyObject *tmp_called_value_36;
                PyObject *tmp_called_value_37;
                PyObject *tmp_called_value_38;
                PyObject *tmp_called_value_39;
                PyObject *tmp_called_value_40;
                PyObject *tmp_called_value_41;
                PyObject *tmp_called_value_42;
                PyObject *tmp_called_value_43;
                PyObject *tmp_called_value_44;
                PyObject *tmp_called_value_45;
                PyObject *tmp_called_value_46;
                PyObject *tmp_called_value_47;
                PyObject *tmp_called_value_48;
                PyObject *tmp_called_value_49;
                PyObject *tmp_called_value_50;
                PyObject *tmp_called_value_51;
                PyObject *tmp_called_value_52;
                PyObject *tmp_called_value_53;
                PyObject *tmp_called_value_54;
                PyObject *tmp_called_value_55;
                PyObject *tmp_called_value_56;
                PyObject *tmp_called_value_57;
                PyObject *tmp_called_value_58;
                PyObject *tmp_called_value_59;
                PyObject *tmp_called_value_60;
                PyObject *tmp_called_value_61;
                PyObject *tmp_called_value_62;
                PyObject *tmp_called_value_63;
                PyObject *tmp_called_value_64;
                PyObject *tmp_called_value_65;
                PyObject *tmp_called_value_66;
                PyObject *tmp_called_value_67;
                PyObject *tmp_called_value_68;
                PyObject *tmp_called_value_69;
                PyObject *tmp_called_value_70;
                PyObject *tmp_called_value_71;
                PyObject *tmp_called_value_72;
                PyObject *tmp_called_value_73;
                PyObject *tmp_called_value_74;
                PyObject *tmp_called_value_75;
                PyObject *tmp_called_value_76;
                PyObject *tmp_called_value_77;
                PyObject *tmp_called_value_78;
                PyObject *tmp_called_value_79;
                PyObject *tmp_called_value_80;
                PyObject *tmp_called_value_81;
                PyObject *tmp_called_value_82;
                PyObject *tmp_called_value_83;
                PyObject *tmp_called_value_84;
                PyObject *tmp_called_value_85;
                PyObject *tmp_called_value_86;
                PyObject *tmp_called_value_87;
                PyObject *tmp_called_value_88;
                PyObject *tmp_called_value_89;
                PyObject *tmp_called_value_90;
                PyObject *tmp_called_value_91;
                PyObject *tmp_called_value_92;
                PyObject *tmp_called_value_93;
                PyObject *tmp_called_value_94;
                PyObject *tmp_called_value_95;
                PyObject *tmp_called_value_96;
                PyObject *tmp_called_value_97;
                PyObject *tmp_called_value_98;
                PyObject *tmp_called_value_99;
                PyObject *tmp_called_value_100;
                PyObject *tmp_called_value_101;
                PyObject *tmp_called_value_102;
                PyObject *tmp_called_value_103;
                PyObject *tmp_called_value_104;
                PyObject *tmp_called_value_105;
                PyObject *tmp_called_value_106;
                PyObject *tmp_called_value_107;
                PyObject *tmp_called_value_108;
                PyObject *tmp_called_value_109;
                PyObject *tmp_called_value_110;
                PyObject *tmp_called_value_111;
                PyObject *tmp_called_value_112;
                PyObject *tmp_called_value_113;
                PyObject *tmp_called_value_114;
                PyObject *tmp_called_value_115;
                PyObject *tmp_called_value_116;
                PyObject *tmp_called_value_117;
                PyObject *tmp_called_value_118;
                PyObject *tmp_called_value_119;
                PyObject *tmp_called_value_120;
                PyObject *tmp_called_value_121;
                PyObject *tmp_called_value_122;
                PyObject *tmp_called_value_123;
                PyObject *tmp_called_value_124;
                PyObject *tmp_called_value_125;
                PyObject *tmp_called_value_126;
                PyObject *tmp_called_value_127;
                PyObject *tmp_called_value_128;
                PyObject *tmp_called_value_129;
                PyObject *tmp_called_value_130;
                PyObject *tmp_called_value_131;
                PyObject *tmp_called_value_132;
                PyObject *tmp_called_value_133;
                PyObject *tmp_called_value_134;
                PyObject *tmp_called_value_135;
                PyObject *tmp_called_value_136;
                PyObject *tmp_called_value_137;
                PyObject *tmp_called_value_138;
                PyObject *tmp_called_value_139;
                PyObject *tmp_called_value_140;
                PyObject *tmp_called_value_141;
                PyObject *tmp_called_value_142;
                PyObject *tmp_called_value_143;
                PyObject *tmp_called_value_144;
                PyObject *tmp_called_value_145;
                PyObject *tmp_called_value_146;
                PyObject *tmp_called_value_147;
                PyObject *tmp_called_value_148;
                PyObject *tmp_called_value_149;
                PyObject *tmp_called_value_150;
                PyObject *tmp_called_value_151;
                PyObject *tmp_called_value_152;
                PyObject *tmp_called_value_153;
                PyObject *tmp_called_value_154;
                PyObject *tmp_called_value_155;
                PyObject *tmp_called_value_156;
                PyObject *tmp_called_value_157;
                PyObject *tmp_called_value_158;
                PyObject *tmp_called_value_159;
                PyObject *tmp_called_value_160;
                PyObject *tmp_called_value_161;
                PyObject *tmp_called_value_162;
                PyObject *tmp_called_value_163;
                PyObject *tmp_called_value_164;
                PyObject *tmp_called_value_165;
                PyObject *tmp_called_value_166;
                PyObject *tmp_called_value_167;
                PyObject *tmp_called_value_168;
                PyObject *tmp_called_value_169;
                PyObject *tmp_called_value_170;
                PyObject *tmp_called_value_171;
                PyObject *tmp_called_value_172;
                PyObject *tmp_called_value_173;
                PyObject *tmp_called_value_174;
                PyObject *tmp_called_value_175;
                PyObject *tmp_called_value_176;
                PyObject *tmp_called_value_177;
                PyObject *tmp_called_value_178;
                PyObject *tmp_called_value_179;
                PyObject *tmp_called_value_180;
                PyObject *tmp_called_value_181;
                PyObject *tmp_called_value_182;
                PyObject *tmp_called_value_183;
                PyObject *tmp_called_value_184;
                PyObject *tmp_called_value_185;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_4);
                tmp_called_value_5 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_5 == NULL)) {
                            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 47;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_5);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 47;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_5, mod_consts[49]);

                Py_DECREF(tmp_called_value_5);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 47;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_4);
                tmp_called_value_6 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_6 == NULL)) {
                            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 53;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_6);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 53;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_6, mod_consts[50]);

                Py_DECREF(tmp_called_value_6);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_4);
                tmp_called_value_7 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_7 == NULL)) {
                            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 60;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_7);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 60;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_7, mod_consts[51]);

                Py_DECREF(tmp_called_value_7);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_4);
                tmp_called_value_8 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_8 == NULL)) {
                            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 66;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 66;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_8, mod_consts[52]);

                Py_DECREF(tmp_called_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_4);
                tmp_called_value_9 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_9 == NULL)) {
                            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 72;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_9);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 72;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_9, mod_consts[53]);

                Py_DECREF(tmp_called_value_9);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_4);
                tmp_called_value_10 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_10 == NULL)) {
                            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_10);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 78;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_10, mod_consts[54]);

                Py_DECREF(tmp_called_value_10);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_4);
                tmp_called_value_11 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_11 == NULL)) {
                            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_11);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 84;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_11, mod_consts[55]);

                Py_DECREF(tmp_called_value_11);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_4);
                tmp_called_value_12 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_12 == NULL)) {
                            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 90;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_12);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 90;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_12, mod_consts[56]);

                Py_DECREF(tmp_called_value_12);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_4);
                tmp_called_value_13 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_13 == NULL)) {
                            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 96;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_13);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 96;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_13, mod_consts[57]);

                Py_DECREF(tmp_called_value_13);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 9, tmp_tuple_element_4);
                tmp_called_value_14 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_14 == NULL)) {
                            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_14);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 102;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_14, mod_consts[58]);

                Py_DECREF(tmp_called_value_14);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 102;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 10, tmp_tuple_element_4);
                tmp_called_value_15 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_15 == NULL)) {
                            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 108;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_15);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 108;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_15, mod_consts[59]);

                Py_DECREF(tmp_called_value_15);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 11, tmp_tuple_element_4);
                tmp_called_value_16 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_16 == NULL)) {
                            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 114;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_16);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 114;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_16, mod_consts[60]);

                Py_DECREF(tmp_called_value_16);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 12, tmp_tuple_element_4);
                tmp_called_value_17 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_17 == NULL)) {
                            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 115;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_17);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 115;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_17, mod_consts[61]);

                Py_DECREF(tmp_called_value_17);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 13, tmp_tuple_element_4);
                tmp_called_value_18 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_18 == NULL)) {
                            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 118;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_18);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 118;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_18, mod_consts[62]);

                Py_DECREF(tmp_called_value_18);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 14, tmp_tuple_element_4);
                tmp_called_value_19 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_19 == NULL)) {
                            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_19);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 124;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_19, mod_consts[63]);

                Py_DECREF(tmp_called_value_19);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 124;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 15, tmp_tuple_element_4);
                tmp_called_value_20 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_20 == NULL)) {
                            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 130;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_20);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 130;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_20, mod_consts[64]);

                Py_DECREF(tmp_called_value_20);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 16, tmp_tuple_element_4);
                tmp_called_value_21 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_21 == NULL)) {
                            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_21);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 131;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_21, mod_consts[65]);

                Py_DECREF(tmp_called_value_21);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 17, tmp_tuple_element_4);
                tmp_called_value_22 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_22 == NULL)) {
                            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 132;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_22);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 132;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_22, mod_consts[66]);

                Py_DECREF(tmp_called_value_22);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 132;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 18, tmp_tuple_element_4);
                tmp_called_value_23 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_23 == NULL)) {
                            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 133;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_23);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 133;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_23, mod_consts[67]);

                Py_DECREF(tmp_called_value_23);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 19, tmp_tuple_element_4);
                tmp_called_value_24 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_24 == NULL)) {
                            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 134;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_24);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 134;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_24, mod_consts[68]);

                Py_DECREF(tmp_called_value_24);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 20, tmp_tuple_element_4);
                tmp_called_value_25 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_25 == NULL)) {
                            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 135;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_25);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 135;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_25, mod_consts[69]);

                Py_DECREF(tmp_called_value_25);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 21, tmp_tuple_element_4);
                tmp_called_value_26 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_26 == NULL)) {
                            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 136;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_26);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 136;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_26, mod_consts[70]);

                Py_DECREF(tmp_called_value_26);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 136;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 22, tmp_tuple_element_4);
                tmp_called_value_27 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_27 == NULL)) {
                            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 137;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_27);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 137;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_27, mod_consts[71]);

                Py_DECREF(tmp_called_value_27);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 137;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 23, tmp_tuple_element_4);
                tmp_called_value_28 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_28 == NULL)) {
                            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 138;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_28);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 138;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_28, mod_consts[72]);

                Py_DECREF(tmp_called_value_28);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 24, tmp_tuple_element_4);
                tmp_called_value_29 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_29 == NULL)) {
                            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 144;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_29);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 144;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_29, mod_consts[73]);

                Py_DECREF(tmp_called_value_29);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 25, tmp_tuple_element_4);
                tmp_called_value_30 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_30 == NULL)) {
                            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 145;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_30);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 145;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_30, mod_consts[74]);

                Py_DECREF(tmp_called_value_30);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 26, tmp_tuple_element_4);
                tmp_called_value_31 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_31 == NULL)) {
                            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 146;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_31);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 146;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_31, mod_consts[75]);

                Py_DECREF(tmp_called_value_31);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 27, tmp_tuple_element_4);
                tmp_called_value_32 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_32 == NULL)) {
                            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_32);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 147;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_32, mod_consts[76]);

                Py_DECREF(tmp_called_value_32);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 28, tmp_tuple_element_4);
                tmp_called_value_33 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_33 == NULL)) {
                            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 148;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_33);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 148;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_33, mod_consts[77]);

                Py_DECREF(tmp_called_value_33);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 29, tmp_tuple_element_4);
                tmp_called_value_34 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_34 == NULL)) {
                            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 149;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_34);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 149;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_34, mod_consts[78]);

                Py_DECREF(tmp_called_value_34);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 149;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 30, tmp_tuple_element_4);
                tmp_called_value_35 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_35 == NULL)) {
                            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 150;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_35);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 150;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_35, mod_consts[79]);

                Py_DECREF(tmp_called_value_35);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 150;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 31, tmp_tuple_element_4);
                tmp_called_value_36 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_36 == NULL)) {
                            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 153;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_36);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 153;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_36, mod_consts[80]);

                Py_DECREF(tmp_called_value_36);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 32, tmp_tuple_element_4);
                tmp_called_value_37 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_37 == NULL)) {
                            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_37);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 156;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_37, mod_consts[81]);

                Py_DECREF(tmp_called_value_37);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 156;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 33, tmp_tuple_element_4);
                tmp_called_value_38 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_38 == NULL)) {
                            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 159;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_38);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 159;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_38, mod_consts[82]);

                Py_DECREF(tmp_called_value_38);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 159;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 34, tmp_tuple_element_4);
                tmp_called_value_39 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_39 == NULL)) {
                            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 165;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_39);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 165;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_39, mod_consts[83]);

                Py_DECREF(tmp_called_value_39);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 35, tmp_tuple_element_4);
                tmp_called_value_40 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_40 == NULL)) {
                            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 168;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_40);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 168;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_40, mod_consts[84]);

                Py_DECREF(tmp_called_value_40);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 36, tmp_tuple_element_4);
                tmp_called_value_41 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_41 == NULL)) {
                            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 171;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_41);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 171;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_41, mod_consts[85]);

                Py_DECREF(tmp_called_value_41);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 37, tmp_tuple_element_4);
                tmp_called_value_42 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_42 == NULL)) {
                            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 172;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_42);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 172;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_42, mod_consts[86]);

                Py_DECREF(tmp_called_value_42);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 38, tmp_tuple_element_4);
                tmp_called_value_43 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_43 == NULL)) {
                            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 173;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_43);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 173;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_43, mod_consts[87]);

                Py_DECREF(tmp_called_value_43);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 173;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 39, tmp_tuple_element_4);
                tmp_called_value_44 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_44 == NULL)) {
                            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_44);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 174;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_44, mod_consts[88]);

                Py_DECREF(tmp_called_value_44);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 40, tmp_tuple_element_4);
                tmp_called_value_45 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_45 == NULL)) {
                            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 175;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_45);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 175;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_45, mod_consts[89]);

                Py_DECREF(tmp_called_value_45);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 41, tmp_tuple_element_4);
                tmp_called_value_46 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_46 == NULL)) {
                            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_46 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 176;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_46);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 176;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_46, mod_consts[90]);

                Py_DECREF(tmp_called_value_46);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 42, tmp_tuple_element_4);
                tmp_called_value_47 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_47 == NULL)) {
                            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 177;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_47);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 177;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_47, mod_consts[91]);

                Py_DECREF(tmp_called_value_47);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 43, tmp_tuple_element_4);
                tmp_called_value_48 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_48 == NULL)) {
                            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 178;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_48);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 178;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_48, mod_consts[92]);

                Py_DECREF(tmp_called_value_48);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 178;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 44, tmp_tuple_element_4);
                tmp_called_value_49 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_49 == NULL)) {
                            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 179;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_49);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 179;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_49, mod_consts[93]);

                Py_DECREF(tmp_called_value_49);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 45, tmp_tuple_element_4);
                tmp_called_value_50 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_50 == NULL)) {
                            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 182;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_50);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 182;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_50, mod_consts[94]);

                Py_DECREF(tmp_called_value_50);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 182;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 46, tmp_tuple_element_4);
                tmp_called_value_51 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_51 == NULL)) {
                            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 188;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_51);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 188;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_51, mod_consts[95]);

                Py_DECREF(tmp_called_value_51);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 188;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 47, tmp_tuple_element_4);
                tmp_called_value_52 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_52 == NULL)) {
                            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 194;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_52);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 194;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_52, mod_consts[96]);

                Py_DECREF(tmp_called_value_52);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 48, tmp_tuple_element_4);
                tmp_called_value_53 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_53 == NULL)) {
                            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 195;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_53);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 195;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_53, mod_consts[97]);

                Py_DECREF(tmp_called_value_53);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 195;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 49, tmp_tuple_element_4);
                tmp_called_value_54 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_54 == NULL)) {
                            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_54 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 196;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_54);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 196;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_54, mod_consts[98]);

                Py_DECREF(tmp_called_value_54);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 50, tmp_tuple_element_4);
                tmp_called_value_55 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_55 == NULL)) {
                            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 202;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_55);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 202;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_55, mod_consts[99]);

                Py_DECREF(tmp_called_value_55);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 202;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 51, tmp_tuple_element_4);
                tmp_called_value_56 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_56 == NULL)) {
                            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_56 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 205;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_56);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 205;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_56, mod_consts[100]);

                Py_DECREF(tmp_called_value_56);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 52, tmp_tuple_element_4);
                tmp_called_value_57 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_57 == NULL)) {
                            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_57);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 208;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_57, mod_consts[101]);

                Py_DECREF(tmp_called_value_57);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 53, tmp_tuple_element_4);
                tmp_called_value_58 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_58 == NULL)) {
                            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_58 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 214;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_58);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 214;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_58, mod_consts[102]);

                Py_DECREF(tmp_called_value_58);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 54, tmp_tuple_element_4);
                tmp_called_value_59 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_59 == NULL)) {
                            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_59 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 217;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_59);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 217;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_59, mod_consts[103]);

                Py_DECREF(tmp_called_value_59);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 55, tmp_tuple_element_4);
                tmp_called_value_60 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_60 == NULL)) {
                            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_60 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_60);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 220;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_60, mod_consts[104]);

                Py_DECREF(tmp_called_value_60);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 56, tmp_tuple_element_4);
                tmp_called_value_61 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_61 == NULL)) {
                            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_61 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 223;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_61);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 223;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_61, mod_consts[105]);

                Py_DECREF(tmp_called_value_61);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 223;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 57, tmp_tuple_element_4);
                tmp_called_value_62 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_62 == NULL)) {
                            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_62 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 229;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_62);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 229;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_62, mod_consts[106]);

                Py_DECREF(tmp_called_value_62);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 229;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 58, tmp_tuple_element_4);
                tmp_called_value_63 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_63 == NULL)) {
                            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_63 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 232;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_63);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 232;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_63, mod_consts[107]);

                Py_DECREF(tmp_called_value_63);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 232;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 59, tmp_tuple_element_4);
                tmp_called_value_64 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_64 == NULL)) {
                            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_64 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 235;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_64);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 235;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_64, mod_consts[108]);

                Py_DECREF(tmp_called_value_64);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 60, tmp_tuple_element_4);
                tmp_called_value_65 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_65 == NULL)) {
                            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_65 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 238;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_65);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 238;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_65, mod_consts[109]);

                Py_DECREF(tmp_called_value_65);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 238;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 61, tmp_tuple_element_4);
                tmp_called_value_66 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_66 == NULL)) {
                            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_66 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 244;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_66);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 244;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_66, mod_consts[110]);

                Py_DECREF(tmp_called_value_66);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 62, tmp_tuple_element_4);
                tmp_called_value_67 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_67 == NULL)) {
                            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_67 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 250;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_67);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 250;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_67, mod_consts[111]);

                Py_DECREF(tmp_called_value_67);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 250;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 63, tmp_tuple_element_4);
                tmp_called_value_68 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_68 == NULL)) {
                            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_68 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 256;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_68);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 256;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_68, mod_consts[112]);

                Py_DECREF(tmp_called_value_68);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 256;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 64, tmp_tuple_element_4);
                tmp_called_value_69 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_69 == NULL)) {
                            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_69 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 262;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_69);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 262;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_69, mod_consts[113]);

                Py_DECREF(tmp_called_value_69);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 65, tmp_tuple_element_4);
                tmp_called_value_70 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_70 == NULL)) {
                            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_70 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 265;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_70);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 265;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_70, mod_consts[114]);

                Py_DECREF(tmp_called_value_70);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 66, tmp_tuple_element_4);
                tmp_called_value_71 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_71 == NULL)) {
                            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_71 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 271;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_71);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 271;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_71, mod_consts[115]);

                Py_DECREF(tmp_called_value_71);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 271;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 67, tmp_tuple_element_4);
                tmp_called_value_72 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_72 == NULL)) {
                            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_72 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 277;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_72);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 277;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_72, mod_consts[116]);

                Py_DECREF(tmp_called_value_72);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 277;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 68, tmp_tuple_element_4);
                tmp_called_value_73 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_73 == NULL)) {
                            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_73 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 283;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_73);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 283;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_73, mod_consts[117]);

                Py_DECREF(tmp_called_value_73);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 69, tmp_tuple_element_4);
                tmp_called_value_74 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_74 == NULL)) {
                            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_74 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 284;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_74);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 284;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_74, mod_consts[118]);

                Py_DECREF(tmp_called_value_74);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 284;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 70, tmp_tuple_element_4);
                tmp_called_value_75 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_75 == NULL)) {
                            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_75 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 290;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_75);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 290;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_75, mod_consts[119]);

                Py_DECREF(tmp_called_value_75);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 71, tmp_tuple_element_4);
                tmp_called_value_76 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_76 == NULL)) {
                            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_76 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 296;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_76);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 296;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_76, mod_consts[120]);

                Py_DECREF(tmp_called_value_76);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 296;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 72, tmp_tuple_element_4);
                tmp_called_value_77 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_77 == NULL)) {
                            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_77 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 299;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_77);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 299;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_77, mod_consts[121]);

                Py_DECREF(tmp_called_value_77);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 299;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 73, tmp_tuple_element_4);
                tmp_called_value_78 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_78 == NULL)) {
                            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_78 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 305;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_78);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 305;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_78, mod_consts[122]);

                Py_DECREF(tmp_called_value_78);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 305;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 74, tmp_tuple_element_4);
                tmp_called_value_79 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_79 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_79 == NULL)) {
                            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_79 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 311;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_79);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 311;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_79, mod_consts[123]);

                Py_DECREF(tmp_called_value_79);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 75, tmp_tuple_element_4);
                tmp_called_value_80 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_80 == NULL)) {
                            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_80 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 314;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_80);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 314;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_80, mod_consts[124]);

                Py_DECREF(tmp_called_value_80);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 314;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 76, tmp_tuple_element_4);
                tmp_called_value_81 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_81 == NULL)) {
                            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_81 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 320;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_81);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 320;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_81, mod_consts[125]);

                Py_DECREF(tmp_called_value_81);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 320;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 77, tmp_tuple_element_4);
                tmp_called_value_82 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_82 == NULL)) {
                            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_82 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 326;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_82);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 326;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_82, mod_consts[126]);

                Py_DECREF(tmp_called_value_82);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 326;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 78, tmp_tuple_element_4);
                tmp_called_value_83 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_83 == NULL)) {
                            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_83 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_83);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 332;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_83, mod_consts[127]);

                Py_DECREF(tmp_called_value_83);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 79, tmp_tuple_element_4);
                tmp_called_value_84 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_84 == NULL)) {
                            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_84 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 333;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_84);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 333;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_84, mod_consts[128]);

                Py_DECREF(tmp_called_value_84);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 80, tmp_tuple_element_4);
                tmp_called_value_85 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_85 == NULL)) {
                            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_85 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 334;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_85);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 334;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_85, mod_consts[129]);

                Py_DECREF(tmp_called_value_85);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 334;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 81, tmp_tuple_element_4);
                tmp_called_value_86 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_86 == NULL)) {
                            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_86 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 335;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_86);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 335;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_86, mod_consts[130]);

                Py_DECREF(tmp_called_value_86);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 335;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 82, tmp_tuple_element_4);
                tmp_called_value_87 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_87 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_87 == NULL)) {
                            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_87 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 336;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_87);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 336;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_87, mod_consts[131]);

                Py_DECREF(tmp_called_value_87);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 336;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 83, tmp_tuple_element_4);
                tmp_called_value_88 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_88 == NULL)) {
                            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_88 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 337;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_88);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 337;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_88, mod_consts[132]);

                Py_DECREF(tmp_called_value_88);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 337;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 84, tmp_tuple_element_4);
                tmp_called_value_89 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_89 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_89 == NULL)) {
                            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_89 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 338;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_89);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 338;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_89, mod_consts[133]);

                Py_DECREF(tmp_called_value_89);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 338;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 85, tmp_tuple_element_4);
                tmp_called_value_90 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_90 == NULL)) {
                            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_90 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 339;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_90);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 339;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_90, mod_consts[134]);

                Py_DECREF(tmp_called_value_90);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 339;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 86, tmp_tuple_element_4);
                tmp_called_value_91 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_91 == NULL)) {
                            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_91 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 340;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_91);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 340;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_91, mod_consts[135]);

                Py_DECREF(tmp_called_value_91);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 340;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 87, tmp_tuple_element_4);
                tmp_called_value_92 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_92 == NULL)) {
                            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_92 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 341;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_92);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 341;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_92, mod_consts[136]);

                Py_DECREF(tmp_called_value_92);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 341;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 88, tmp_tuple_element_4);
                tmp_called_value_93 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_93 == NULL)) {
                            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_93 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 344;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_93);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 344;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_93, mod_consts[137]);

                Py_DECREF(tmp_called_value_93);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 344;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 89, tmp_tuple_element_4);
                tmp_called_value_94 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_94 == NULL)) {
                            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_94 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 345;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_94);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 345;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_94, mod_consts[138]);

                Py_DECREF(tmp_called_value_94);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 345;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 90, tmp_tuple_element_4);
                tmp_called_value_95 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_95 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_95 == NULL)) {
                            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_95 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 348;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_95);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 348;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_95, mod_consts[139]);

                Py_DECREF(tmp_called_value_95);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 348;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 91, tmp_tuple_element_4);
                tmp_called_value_96 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_96 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_96 == NULL)) {
                            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_96 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 354;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_96);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 354;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_96, mod_consts[140]);

                Py_DECREF(tmp_called_value_96);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 354;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 92, tmp_tuple_element_4);
                tmp_called_value_97 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_97 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_97 == NULL)) {
                            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_97 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 355;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_97);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 355;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_97, mod_consts[141]);

                Py_DECREF(tmp_called_value_97);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 355;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 93, tmp_tuple_element_4);
                tmp_called_value_98 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_98 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_98 == NULL)) {
                            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_98 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 356;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_98);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 356;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_98, mod_consts[142]);

                Py_DECREF(tmp_called_value_98);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 356;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 94, tmp_tuple_element_4);
                tmp_called_value_99 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_99 == NULL)) {
                            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_99 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 359;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_99);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 359;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_99, mod_consts[143]);

                Py_DECREF(tmp_called_value_99);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 359;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 95, tmp_tuple_element_4);
                tmp_called_value_100 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_100 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_100 == NULL)) {
                            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_100 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 365;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_100);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 365;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_100, mod_consts[144]);

                Py_DECREF(tmp_called_value_100);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 365;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 96, tmp_tuple_element_4);
                tmp_called_value_101 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_101 == NULL)) {
                            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_101 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 371;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_101);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 371;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_101, mod_consts[145]);

                Py_DECREF(tmp_called_value_101);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 97, tmp_tuple_element_4);
                tmp_called_value_102 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_102 == NULL)) {
                            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_102 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 377;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_102);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 377;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_102, mod_consts[146]);

                Py_DECREF(tmp_called_value_102);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 98, tmp_tuple_element_4);
                tmp_called_value_103 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_103 == NULL)) {
                            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_103 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 380;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_103);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 380;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_103, mod_consts[147]);

                Py_DECREF(tmp_called_value_103);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 99, tmp_tuple_element_4);
                tmp_called_value_104 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_104 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_104 == NULL)) {
                            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_104 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 386;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_104);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 386;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_104, mod_consts[148]);

                Py_DECREF(tmp_called_value_104);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 386;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 100, tmp_tuple_element_4);
                tmp_called_value_105 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_105 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_105 == NULL)) {
                            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_105 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 392;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_105);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 392;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_105, mod_consts[149]);

                Py_DECREF(tmp_called_value_105);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 392;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 101, tmp_tuple_element_4);
                tmp_called_value_106 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_106 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_106 == NULL)) {
                            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_106 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 393;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_106);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 393;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_106, mod_consts[150]);

                Py_DECREF(tmp_called_value_106);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 393;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 102, tmp_tuple_element_4);
                tmp_called_value_107 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_107 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_107 == NULL)) {
                            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_107 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 399;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_107);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 399;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_107, mod_consts[151]);

                Py_DECREF(tmp_called_value_107);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 399;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 103, tmp_tuple_element_4);
                tmp_called_value_108 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_108 == NULL)) {
                            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_108 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 405;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_108);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 405;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_108, mod_consts[152]);

                Py_DECREF(tmp_called_value_108);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 405;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 104, tmp_tuple_element_4);
                tmp_called_value_109 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_109 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_109 == NULL)) {
                            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_109 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 411;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_109);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 411;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_109, mod_consts[153]);

                Py_DECREF(tmp_called_value_109);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 411;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 105, tmp_tuple_element_4);
                tmp_called_value_110 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_110 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_110 == NULL)) {
                            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_110 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 414;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_110);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 414;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_110, mod_consts[154]);

                Py_DECREF(tmp_called_value_110);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 414;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 106, tmp_tuple_element_4);
                tmp_called_value_111 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_111 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_111 == NULL)) {
                            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_111 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 420;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_111);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 420;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_111, mod_consts[155]);

                Py_DECREF(tmp_called_value_111);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 420;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 107, tmp_tuple_element_4);
                tmp_called_value_112 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_112 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_112 == NULL)) {
                            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_112 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 426;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_112);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 426;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_112, mod_consts[156]);

                Py_DECREF(tmp_called_value_112);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 426;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 108, tmp_tuple_element_4);
                tmp_called_value_113 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_113 == NULL)) {
                            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_113 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 432;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_113);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 432;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_113, mod_consts[157]);

                Py_DECREF(tmp_called_value_113);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 432;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 109, tmp_tuple_element_4);
                tmp_called_value_114 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_114 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_114 == NULL)) {
                            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_114 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 438;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_114);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 438;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_114, mod_consts[158]);

                Py_DECREF(tmp_called_value_114);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 438;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 110, tmp_tuple_element_4);
                tmp_called_value_115 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_115 == NULL)) {
                            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_115 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 441;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_115);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 441;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_115, mod_consts[159]);

                Py_DECREF(tmp_called_value_115);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 441;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 111, tmp_tuple_element_4);
                tmp_called_value_116 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_116 == NULL)) {
                            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_116 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 447;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_116);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 447;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_116, mod_consts[160]);

                Py_DECREF(tmp_called_value_116);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 447;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 112, tmp_tuple_element_4);
                tmp_called_value_117 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_117 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_117 == NULL)) {
                            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_117 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 453;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_117);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 453;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_117, mod_consts[161]);

                Py_DECREF(tmp_called_value_117);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 453;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 113, tmp_tuple_element_4);
                tmp_called_value_118 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_118 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_118 == NULL)) {
                            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_118 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 459;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_118);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 459;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_118, mod_consts[162]);

                Py_DECREF(tmp_called_value_118);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 459;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 114, tmp_tuple_element_4);
                tmp_called_value_119 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_119 == NULL)) {
                            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_119 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 465;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_119);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 465;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_119, mod_consts[163]);

                Py_DECREF(tmp_called_value_119);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 465;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 115, tmp_tuple_element_4);
                tmp_called_value_120 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_120 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_120 == NULL)) {
                            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_120 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 471;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_120);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 471;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_120, mod_consts[164]);

                Py_DECREF(tmp_called_value_120);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 471;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 116, tmp_tuple_element_4);
                tmp_called_value_121 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_121 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_121 == NULL)) {
                            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_121 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 478;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_121);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 478;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_121, mod_consts[165]);

                Py_DECREF(tmp_called_value_121);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 478;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 117, tmp_tuple_element_4);
                tmp_called_value_122 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_122 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_122 == NULL)) {
                            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_122 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 484;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_122);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 484;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_122, mod_consts[166]);

                Py_DECREF(tmp_called_value_122);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 484;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 118, tmp_tuple_element_4);
                tmp_called_value_123 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_123 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_123 == NULL)) {
                            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_123 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 485;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_123);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 485;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_123, mod_consts[167]);

                Py_DECREF(tmp_called_value_123);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 119, tmp_tuple_element_4);
                tmp_called_value_124 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_124 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_124 == NULL)) {
                            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_124 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 486;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_124);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 486;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_124, mod_consts[168]);

                Py_DECREF(tmp_called_value_124);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 486;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 120, tmp_tuple_element_4);
                tmp_called_value_125 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_125 == NULL)) {
                            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_125 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 487;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_125);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 487;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_125, mod_consts[169]);

                Py_DECREF(tmp_called_value_125);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 487;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 121, tmp_tuple_element_4);
                tmp_called_value_126 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_126 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_126 == NULL)) {
                            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_126 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 488;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_126);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 488;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_126, mod_consts[170]);

                Py_DECREF(tmp_called_value_126);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 488;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 122, tmp_tuple_element_4);
                tmp_called_value_127 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_127 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_127 == NULL)) {
                            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_127 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 489;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_127);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 489;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_127, mod_consts[171]);

                Py_DECREF(tmp_called_value_127);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 489;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 123, tmp_tuple_element_4);
                tmp_called_value_128 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_128 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_128 == NULL)) {
                            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_128 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 490;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_128);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 490;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_128, mod_consts[172]);

                Py_DECREF(tmp_called_value_128);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 490;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 124, tmp_tuple_element_4);
                tmp_called_value_129 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_129 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_129 == NULL)) {
                            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_129 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 491;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_129);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 491;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_129, mod_consts[173]);

                Py_DECREF(tmp_called_value_129);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 491;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 125, tmp_tuple_element_4);
                tmp_called_value_130 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_130 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_130 == NULL)) {
                            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_130 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 492;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_130);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 492;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_130, mod_consts[174]);

                Py_DECREF(tmp_called_value_130);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 492;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 126, tmp_tuple_element_4);
                tmp_called_value_131 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_131 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_131 == NULL)) {
                            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_131 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 498;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_131);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 498;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_131, mod_consts[175]);

                Py_DECREF(tmp_called_value_131);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 498;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 127, tmp_tuple_element_4);
                tmp_called_value_132 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_132 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_132 == NULL)) {
                            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_132 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 504;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_132);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 504;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_132, mod_consts[176]);

                Py_DECREF(tmp_called_value_132);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 504;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 128, tmp_tuple_element_4);
                tmp_called_value_133 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_133 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_133 == NULL)) {
                            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_133 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 505;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_133);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 505;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_133, mod_consts[177]);

                Py_DECREF(tmp_called_value_133);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 505;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 129, tmp_tuple_element_4);
                tmp_called_value_134 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_134 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_134 == NULL)) {
                            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_134 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 506;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_134);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 506;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_134, mod_consts[178]);

                Py_DECREF(tmp_called_value_134);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 506;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 130, tmp_tuple_element_4);
                tmp_called_value_135 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_135 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_135 == NULL)) {
                            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_135 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 507;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_135);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 507;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_135, mod_consts[179]);

                Py_DECREF(tmp_called_value_135);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 507;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 131, tmp_tuple_element_4);
                tmp_called_value_136 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_136 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_136 == NULL)) {
                            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_136 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 510;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_136);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 510;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_136, mod_consts[180]);

                Py_DECREF(tmp_called_value_136);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 510;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 132, tmp_tuple_element_4);
                tmp_called_value_137 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_137 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_137 == NULL)) {
                            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_137 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 511;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_137);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 511;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_137, mod_consts[181]);

                Py_DECREF(tmp_called_value_137);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 511;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 133, tmp_tuple_element_4);
                tmp_called_value_138 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_138 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_138 == NULL)) {
                            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_138 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 512;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_138);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 512;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_138, mod_consts[182]);

                Py_DECREF(tmp_called_value_138);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 512;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 134, tmp_tuple_element_4);
                tmp_called_value_139 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_139 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_139 == NULL)) {
                            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_139 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 513;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_139);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 513;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_139, mod_consts[183]);

                Py_DECREF(tmp_called_value_139);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 513;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 135, tmp_tuple_element_4);
                tmp_called_value_140 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_140 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_140 == NULL)) {
                            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_140 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 514;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_140);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 514;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_140, mod_consts[184]);

                Py_DECREF(tmp_called_value_140);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 514;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 136, tmp_tuple_element_4);
                tmp_called_value_141 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_141 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_141 == NULL)) {
                            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_141 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 515;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_141);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 515;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_141, mod_consts[185]);

                Py_DECREF(tmp_called_value_141);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 515;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 137, tmp_tuple_element_4);
                tmp_called_value_142 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_142 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_142 == NULL)) {
                            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_142 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 516;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_142);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 516;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_142, mod_consts[186]);

                Py_DECREF(tmp_called_value_142);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 516;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 138, tmp_tuple_element_4);
                tmp_called_value_143 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_143 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_143 == NULL)) {
                            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_143 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 522;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_143);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 522;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_143, mod_consts[187]);

                Py_DECREF(tmp_called_value_143);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 522;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 139, tmp_tuple_element_4);
                tmp_called_value_144 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_144 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_144 == NULL)) {
                            tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_144 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 528;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_144);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 528;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_144, mod_consts[188]);

                Py_DECREF(tmp_called_value_144);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 528;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 140, tmp_tuple_element_4);
                tmp_called_value_145 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_145 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_145 == NULL)) {
                            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_145 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 529;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_145);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 529;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_145, mod_consts[189]);

                Py_DECREF(tmp_called_value_145);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 529;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 141, tmp_tuple_element_4);
                tmp_called_value_146 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_146 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_146 == NULL)) {
                            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_146 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 532;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_146);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 532;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_146, mod_consts[190]);

                Py_DECREF(tmp_called_value_146);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 532;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 142, tmp_tuple_element_4);
                tmp_called_value_147 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_147 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_147 == NULL)) {
                            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_147 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 533;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_147);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 533;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_147, mod_consts[191]);

                Py_DECREF(tmp_called_value_147);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 533;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 143, tmp_tuple_element_4);
                tmp_called_value_148 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_148 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_148 == NULL)) {
                            tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_148 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 536;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_148);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 536;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_148, mod_consts[192]);

                Py_DECREF(tmp_called_value_148);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 536;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 144, tmp_tuple_element_4);
                tmp_called_value_149 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_149 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_149 == NULL)) {
                            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_149 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 542;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_149);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 542;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_149, mod_consts[193]);

                Py_DECREF(tmp_called_value_149);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 542;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 145, tmp_tuple_element_4);
                tmp_called_value_150 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_150 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_150 == NULL)) {
                            tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_150 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 543;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_150);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 543;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_150, mod_consts[194]);

                Py_DECREF(tmp_called_value_150);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 543;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 146, tmp_tuple_element_4);
                tmp_called_value_151 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_151 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_151 == NULL)) {
                            tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_151 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 544;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_151);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 544;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_151, mod_consts[195]);

                Py_DECREF(tmp_called_value_151);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 544;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 147, tmp_tuple_element_4);
                tmp_called_value_152 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_152 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_152 == NULL)) {
                            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_152 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 545;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_152);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 545;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_152, mod_consts[196]);

                Py_DECREF(tmp_called_value_152);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 545;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 148, tmp_tuple_element_4);
                tmp_called_value_153 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_153 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_153 == NULL)) {
                            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_153 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 546;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_153);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 546;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_153, mod_consts[197]);

                Py_DECREF(tmp_called_value_153);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 546;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 149, tmp_tuple_element_4);
                tmp_called_value_154 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_154 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_154 == NULL)) {
                            tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_154 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 552;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_154);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 552;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_154, mod_consts[198]);

                Py_DECREF(tmp_called_value_154);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 552;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 150, tmp_tuple_element_4);
                tmp_called_value_155 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_155 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_155 == NULL)) {
                            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_155 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 555;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_155);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 555;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_155, mod_consts[199]);

                Py_DECREF(tmp_called_value_155);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 555;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 151, tmp_tuple_element_4);
                tmp_called_value_156 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_156 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_156 == NULL)) {
                            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_156 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 561;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_156);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 561;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_156, mod_consts[200]);

                Py_DECREF(tmp_called_value_156);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 561;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 152, tmp_tuple_element_4);
                tmp_called_value_157 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_157 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_157 == NULL)) {
                            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_157 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 567;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_157);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 567;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_157, mod_consts[201]);

                Py_DECREF(tmp_called_value_157);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 567;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 153, tmp_tuple_element_4);
                tmp_called_value_158 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_158 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_158 == NULL)) {
                            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_158 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 568;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_158);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 568;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_158, mod_consts[202]);

                Py_DECREF(tmp_called_value_158);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 568;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 154, tmp_tuple_element_4);
                tmp_called_value_159 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_159 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_159 == NULL)) {
                            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_159 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 571;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_159);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 571;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_159, mod_consts[203]);

                Py_DECREF(tmp_called_value_159);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 571;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 155, tmp_tuple_element_4);
                tmp_called_value_160 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_160 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_160 == NULL)) {
                            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_160 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 577;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_160);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 577;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_160, mod_consts[204]);

                Py_DECREF(tmp_called_value_160);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 577;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 156, tmp_tuple_element_4);
                tmp_called_value_161 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_161 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_161 == NULL)) {
                            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_161 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 583;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_161);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 583;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_161, mod_consts[205]);

                Py_DECREF(tmp_called_value_161);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 583;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 157, tmp_tuple_element_4);
                tmp_called_value_162 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_162 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_162 == NULL)) {
                            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_162 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 589;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_162);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 589;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_162, mod_consts[206]);

                Py_DECREF(tmp_called_value_162);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 589;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 158, tmp_tuple_element_4);
                tmp_called_value_163 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_163 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_163 == NULL)) {
                            tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_163 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 590;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_163);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 590;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_163, mod_consts[207]);

                Py_DECREF(tmp_called_value_163);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 590;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 159, tmp_tuple_element_4);
                tmp_called_value_164 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_164 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_164 == NULL)) {
                            tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_164 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 591;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_164);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 591;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_164, mod_consts[208]);

                Py_DECREF(tmp_called_value_164);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 591;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 160, tmp_tuple_element_4);
                tmp_called_value_165 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_165 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_165 == NULL)) {
                            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_165 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 592;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_165);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 592;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_165, mod_consts[209]);

                Py_DECREF(tmp_called_value_165);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 592;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 161, tmp_tuple_element_4);
                tmp_called_value_166 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_166 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_166 == NULL)) {
                            tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_166 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 593;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_166);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 593;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_166, mod_consts[210]);

                Py_DECREF(tmp_called_value_166);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 593;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 162, tmp_tuple_element_4);
                tmp_called_value_167 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_167 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_167 == NULL)) {
                            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_167 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 594;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_167);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 594;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_167, mod_consts[211]);

                Py_DECREF(tmp_called_value_167);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 594;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 163, tmp_tuple_element_4);
                tmp_called_value_168 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_168 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_168 == NULL)) {
                            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_168 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 595;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_168);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 595;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_168, mod_consts[212]);

                Py_DECREF(tmp_called_value_168);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 595;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 164, tmp_tuple_element_4);
                tmp_called_value_169 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_169 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_169 == NULL)) {
                            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_169 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 596;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_169);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 596;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_169, mod_consts[213]);

                Py_DECREF(tmp_called_value_169);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 596;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 165, tmp_tuple_element_4);
                tmp_called_value_170 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_170 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_170 == NULL)) {
                            tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_170 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 597;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_170);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 597;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_170, mod_consts[214]);

                Py_DECREF(tmp_called_value_170);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 597;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 166, tmp_tuple_element_4);
                tmp_called_value_171 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_171 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_171 == NULL)) {
                            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_171 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 598;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_171);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 598;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_171, mod_consts[215]);

                Py_DECREF(tmp_called_value_171);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 598;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 167, tmp_tuple_element_4);
                tmp_called_value_172 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_172 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_172 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_172 == NULL)) {
                            tmp_called_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_172 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 599;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_172);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 599;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_172, mod_consts[216]);

                Py_DECREF(tmp_called_value_172);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 599;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 168, tmp_tuple_element_4);
                tmp_called_value_173 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_173 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_173 == NULL)) {
                            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_173 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 600;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_173);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 600;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_173, mod_consts[217]);

                Py_DECREF(tmp_called_value_173);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 600;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 169, tmp_tuple_element_4);
                tmp_called_value_174 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_174 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_174 == NULL)) {
                            tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_174 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 606;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_174);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 606;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_174, mod_consts[218]);

                Py_DECREF(tmp_called_value_174);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 606;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 170, tmp_tuple_element_4);
                tmp_called_value_175 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_175 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_175 == NULL)) {
                            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_175 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 607;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_175);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 607;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_175, mod_consts[219]);

                Py_DECREF(tmp_called_value_175);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 607;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 171, tmp_tuple_element_4);
                tmp_called_value_176 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_176 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_176 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_176 == NULL)) {
                            tmp_called_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_176 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 608;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_176);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 608;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_176, mod_consts[220]);

                Py_DECREF(tmp_called_value_176);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 608;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 172, tmp_tuple_element_4);
                tmp_called_value_177 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_177 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_177 == NULL)) {
                            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_177 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 609;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_177);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 609;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_177, mod_consts[221]);

                Py_DECREF(tmp_called_value_177);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 609;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 173, tmp_tuple_element_4);
                tmp_called_value_178 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_178 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_178 == NULL)) {
                            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_178 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 610;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_178);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 610;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_178, mod_consts[222]);

                Py_DECREF(tmp_called_value_178);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 610;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 174, tmp_tuple_element_4);
                tmp_called_value_179 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_179 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_179 == NULL)) {
                            tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_179 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 611;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_179);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 611;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_179, mod_consts[223]);

                Py_DECREF(tmp_called_value_179);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 611;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 175, tmp_tuple_element_4);
                tmp_called_value_180 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_180 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_180 == NULL)) {
                            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_180 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 617;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_180);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 617;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_180, mod_consts[224]);

                Py_DECREF(tmp_called_value_180);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 617;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 176, tmp_tuple_element_4);
                tmp_called_value_181 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_181 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_181 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_181 == NULL)) {
                            tmp_called_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_181 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 620;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_181);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 620;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_181, mod_consts[225]);

                Py_DECREF(tmp_called_value_181);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 620;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 177, tmp_tuple_element_4);
                tmp_called_value_182 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_182 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_182 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_182 == NULL)) {
                            tmp_called_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_182 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 626;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_182);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 626;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_182, mod_consts[226]);

                Py_DECREF(tmp_called_value_182);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 626;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 178, tmp_tuple_element_4);
                tmp_called_value_183 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_183 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_183 == NULL)) {
                            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_183 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 632;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_183);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 632;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_183, mod_consts[227]);

                Py_DECREF(tmp_called_value_183);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 632;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 179, tmp_tuple_element_4);
                tmp_called_value_184 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_184 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_184 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_184 == NULL)) {
                            tmp_called_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_184 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 635;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_184);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 635;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_184, mod_consts[228]);

                Py_DECREF(tmp_called_value_184);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 635;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 180, tmp_tuple_element_4);
                tmp_called_value_185 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[29]);

                if (tmp_called_value_185 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_185 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_185 == NULL)) {
                            tmp_called_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_185 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 638;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_185);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_69e89e9fbd619017a0932872a4415e02_2->m_frame.f_lineno = 638;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_185, mod_consts[229]);

                Py_DECREF(tmp_called_value_185);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 638;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 181, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[230], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_69e89e9fbd619017a0932872a4415e02_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_69e89e9fbd619017a0932872a4415e02_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_69e89e9fbd619017a0932872a4415e02_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_69e89e9fbd619017a0932872a4415e02_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_69e89e9fbd619017a0932872a4415e02_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_186;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_186 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[34];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 17;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_186, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_value_1 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17);
        locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17);
        locals_pptx$enum$shapes$$$class__1_MSO_AUTO_SHAPE_TYPE_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 17;
        goto try_except_handler_2;
        outline_result_1:;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 16;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_18);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        tmp_assign_source_20 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_21 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[23];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[33]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_187;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_187 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[33]);
        if (tmp_called_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        tmp_tuple_element_7 = mod_consts[232];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 643;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_187, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_187);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[35]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[37];
        tmp_getattr_default_2 = mod_consts[38];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[37]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 643;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_25;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_188;
        PyObject *tmp_called_value_189;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;

            goto try_except_handler_5;
        }
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 642;
        tmp_called_value_188 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_189, mod_consts[233]);

        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;

            goto try_except_handler_5;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[234];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[232];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_7;
        }
        frame_a0e60f42d03cc8af49cedceef0a9f4e0_3 = MAKE_CLASS_FRAME(codeobj_a0e60f42d03cc8af49cedceef0a9f4e0, module_pptx$enum$shapes, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a0e60f42d03cc8af49cedceef0a9f4e0_3);
        assert(Py_REFCNT(frame_a0e60f42d03cc8af49cedceef0a9f4e0_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[235];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[236];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_called_value_190;
            tmp_called_value_190 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[29]);

            if (tmp_called_value_190 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_190 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                    if (unlikely(tmp_called_value_190 == NULL)) {
                        tmp_called_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                    }

                    if (tmp_called_value_190 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 666;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_190);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_a0e60f42d03cc8af49cedceef0a9f4e0_3->m_frame.f_lineno = 666;
            tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_190, mod_consts[237]);

            Py_DECREF(tmp_called_value_190);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 666;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_called_value_191;
                PyObject *tmp_called_value_192;
                PyObject *tmp_called_value_193;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_9);
                tmp_called_value_191 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[29]);

                if (tmp_called_value_191 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_191 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_191 == NULL)) {
                            tmp_called_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_191 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 667;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_191);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_a0e60f42d03cc8af49cedceef0a9f4e0_3->m_frame.f_lineno = 667;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_191, mod_consts[238]);

                Py_DECREF(tmp_called_value_191);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 667;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_9);
                tmp_called_value_192 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[29]);

                if (tmp_called_value_192 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_192 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_192 == NULL)) {
                            tmp_called_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_192 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 668;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_192);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_a0e60f42d03cc8af49cedceef0a9f4e0_3->m_frame.f_lineno = 668;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_192, mod_consts[239]);

                Py_DECREF(tmp_called_value_192);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 668;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_9);
                tmp_called_value_193 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[27]);

                if (tmp_called_value_193 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_193 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_193 == NULL)) {
                            tmp_called_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                        }

                        if (tmp_called_value_193 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 669;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_193);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_a0e60f42d03cc8af49cedceef0a9f4e0_3->m_frame.f_lineno = 669;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_193, mod_consts[240]);

                Py_DECREF(tmp_called_value_193);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 669;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[230], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 665;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a0e60f42d03cc8af49cedceef0a9f4e0_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a0e60f42d03cc8af49cedceef0a9f4e0_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a0e60f42d03cc8af49cedceef0a9f4e0_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a0e60f42d03cc8af49cedceef0a9f4e0_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_a0e60f42d03cc8af49cedceef0a9f4e0_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_value_194;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_194 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_10 = mod_consts[232];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_10 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 643;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_194, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 643;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_value_2 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643);
        locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643);
        locals_pptx$enum$shapes$$$class__2_MSO_CONNECTOR_TYPE_643 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 643;
        goto try_except_handler_5;
        outline_result_2:;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 642;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_188, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_188);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_26);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_29 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_11 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[23];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[33]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_195;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_13 = tmp_class_creation_3__metaclass;
        tmp_called_value_195 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[33]);
        if (tmp_called_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        tmp_tuple_element_12 = mod_consts[241];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_12 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 678;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_195, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_195);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[35]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[37];
        tmp_getattr_default_3 = mod_consts[38];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_15 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[37]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 678;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 678;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_33;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_196;
        PyObject *tmp_called_value_197;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_197 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_197 == NULL)) {
            tmp_called_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;

            goto try_except_handler_8;
        }
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 677;
        tmp_called_value_196 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_197, mod_consts[242]);

        if (tmp_called_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;

            goto try_except_handler_8;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[243];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[241];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_10;
        }
        frame_2dfc2956ba07f36239d4888ff5163b18_4 = MAKE_CLASS_FRAME(codeobj_2dfc2956ba07f36239d4888ff5163b18, module_pptx$enum$shapes, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2dfc2956ba07f36239d4888ff5163b18_4);
        assert(Py_REFCNT(frame_2dfc2956ba07f36239d4888ff5163b18_4) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[244];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = mod_consts[245];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 693;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_called_value_198;
            tmp_called_value_198 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

            if (tmp_called_value_198 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_198 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_called_value_198 == NULL)) {
                        tmp_called_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_called_value_198 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 698;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_198);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 698;
            tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_198, mod_consts[246]);

            Py_DECREF(tmp_called_value_198);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 698;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(26);
            {
                PyObject *tmp_called_value_199;
                PyObject *tmp_called_value_200;
                PyObject *tmp_called_value_201;
                PyObject *tmp_called_value_202;
                PyObject *tmp_called_value_203;
                PyObject *tmp_called_value_204;
                PyObject *tmp_called_value_205;
                PyObject *tmp_called_value_206;
                PyObject *tmp_called_value_207;
                PyObject *tmp_called_value_208;
                PyObject *tmp_called_value_209;
                PyObject *tmp_called_value_210;
                PyObject *tmp_called_value_211;
                PyObject *tmp_called_value_212;
                PyObject *tmp_called_value_213;
                PyObject *tmp_called_value_214;
                PyObject *tmp_called_value_215;
                PyObject *tmp_called_value_216;
                PyObject *tmp_called_value_217;
                PyObject *tmp_called_value_218;
                PyObject *tmp_called_value_219;
                PyObject *tmp_called_value_220;
                PyObject *tmp_called_value_221;
                PyObject *tmp_called_value_222;
                PyObject *tmp_called_value_223;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_14);
                tmp_called_value_199 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_199 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_199 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_199 == NULL)) {
                            tmp_called_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_199 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 699;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_199);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 699;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_199, mod_consts[247]);

                Py_DECREF(tmp_called_value_199);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 699;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_14);
                tmp_called_value_200 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_200 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_200 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_200 == NULL)) {
                            tmp_called_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_200 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 700;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_200);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 700;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_200, mod_consts[248]);

                Py_DECREF(tmp_called_value_200);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 700;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_14);
                tmp_called_value_201 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_201 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_201 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_201 == NULL)) {
                            tmp_called_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_201 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 701;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_201);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 701;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_201, mod_consts[249]);

                Py_DECREF(tmp_called_value_201);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 701;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_14);
                tmp_called_value_202 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_202 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_202 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_202 == NULL)) {
                            tmp_called_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_202 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 702;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_202);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 702;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_202, mod_consts[250]);

                Py_DECREF(tmp_called_value_202);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 702;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_14);
                tmp_called_value_203 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_203 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_203 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_203 == NULL)) {
                            tmp_called_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_203 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 703;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_203);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 703;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_203, mod_consts[251]);

                Py_DECREF(tmp_called_value_203);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 703;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_14);
                tmp_called_value_204 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_204 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_204 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_204 == NULL)) {
                            tmp_called_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_204 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 704;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_204);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 704;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_204, mod_consts[252]);

                Py_DECREF(tmp_called_value_204);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 704;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_14);
                tmp_called_value_205 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_205 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_205 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_205 == NULL)) {
                            tmp_called_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_205 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 705;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_205);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 705;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_205, mod_consts[253]);

                Py_DECREF(tmp_called_value_205);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 705;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_14);
                tmp_called_value_206 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_206 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_206 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_206 == NULL)) {
                            tmp_called_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_206 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 706;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_206);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 706;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_206, mod_consts[254]);

                Py_DECREF(tmp_called_value_206);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 706;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_14);
                tmp_called_value_207 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_207 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_207 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_207 == NULL)) {
                            tmp_called_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_207 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 707;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_207);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 707;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_207, mod_consts[255]);

                Py_DECREF(tmp_called_value_207);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 707;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 9, tmp_tuple_element_14);
                tmp_called_value_208 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_208 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_208 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_208 == NULL)) {
                            tmp_called_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_208 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 708;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_208);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 708;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_208, mod_consts[256]);

                Py_DECREF(tmp_called_value_208);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 708;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 10, tmp_tuple_element_14);
                tmp_called_value_209 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_209 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_209 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_209 == NULL)) {
                            tmp_called_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_209 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 709;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_209);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 709;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_209, mod_consts[257]);

                Py_DECREF(tmp_called_value_209);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 709;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 11, tmp_tuple_element_14);
                tmp_called_value_210 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_210 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_210 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_210 == NULL)) {
                            tmp_called_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_210 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 710;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_210);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 710;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_210, mod_consts[258]);

                Py_DECREF(tmp_called_value_210);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 710;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 12, tmp_tuple_element_14);
                tmp_called_value_211 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_211 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_211 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_211 == NULL)) {
                            tmp_called_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_211 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 711;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_211);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 711;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_211, mod_consts[259]);

                Py_DECREF(tmp_called_value_211);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 711;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 13, tmp_tuple_element_14);
                tmp_called_value_212 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_212 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_212 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_212 == NULL)) {
                            tmp_called_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_212 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 712;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_212);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 712;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_212, mod_consts[260]);

                Py_DECREF(tmp_called_value_212);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 712;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 14, tmp_tuple_element_14);
                tmp_called_value_213 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_213 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_213 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_213 == NULL)) {
                            tmp_called_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_213 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 713;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_213);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 713;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_213, mod_consts[261]);

                Py_DECREF(tmp_called_value_213);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 713;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 15, tmp_tuple_element_14);
                tmp_called_value_214 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_214 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_214 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_214 == NULL)) {
                            tmp_called_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_214 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 714;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_214);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 714;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_214, mod_consts[262]);

                Py_DECREF(tmp_called_value_214);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 714;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 16, tmp_tuple_element_14);
                tmp_called_value_215 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_215 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_215 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_215 == NULL)) {
                            tmp_called_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_215 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 715;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_215);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 715;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_215, mod_consts[263]);

                Py_DECREF(tmp_called_value_215);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 715;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 17, tmp_tuple_element_14);
                tmp_called_value_216 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_216 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_216 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_216 == NULL)) {
                            tmp_called_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_216 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 716;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_216);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 716;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_216, mod_consts[264]);

                Py_DECREF(tmp_called_value_216);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 716;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 18, tmp_tuple_element_14);
                tmp_called_value_217 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_217 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_217 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_217 == NULL)) {
                            tmp_called_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_217 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 717;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_217);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 717;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_217, mod_consts[265]);

                Py_DECREF(tmp_called_value_217);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 717;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 19, tmp_tuple_element_14);
                tmp_called_value_218 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_218 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_218 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_218 == NULL)) {
                            tmp_called_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_218 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 718;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_218);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 718;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_218, mod_consts[266]);

                Py_DECREF(tmp_called_value_218);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 718;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 20, tmp_tuple_element_14);
                tmp_called_value_219 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_219 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_219 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_219 == NULL)) {
                            tmp_called_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_219 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 719;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_219);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 719;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_219, mod_consts[267]);

                Py_DECREF(tmp_called_value_219);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 719;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 21, tmp_tuple_element_14);
                tmp_called_value_220 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_220 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_220 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_220 == NULL)) {
                            tmp_called_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_220 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 720;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_220);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 720;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_220, mod_consts[268]);

                Py_DECREF(tmp_called_value_220);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 720;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 22, tmp_tuple_element_14);
                tmp_called_value_221 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_221 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_221 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_221 == NULL)) {
                            tmp_called_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_221 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 721;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_221);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 721;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_221, mod_consts[269]);

                Py_DECREF(tmp_called_value_221);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 721;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 23, tmp_tuple_element_14);
                tmp_called_value_222 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[26]);

                if (tmp_called_value_222 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_222 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_222 == NULL)) {
                            tmp_called_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_222 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 722;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_222);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 722;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_222, mod_consts[270]);

                Py_DECREF(tmp_called_value_222);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 722;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 24, tmp_tuple_element_14);
                tmp_called_value_223 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[27]);

                if (tmp_called_value_223 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_223 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_223 == NULL)) {
                            tmp_called_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                        }

                        if (tmp_called_value_223 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 723;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_223);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame.f_lineno = 723;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_223, mod_consts[271]);

                Py_DECREF(tmp_called_value_223);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 723;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 25, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[230], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 697;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2dfc2956ba07f36239d4888ff5163b18_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2dfc2956ba07f36239d4888ff5163b18_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2dfc2956ba07f36239d4888ff5163b18_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2dfc2956ba07f36239d4888ff5163b18_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_2dfc2956ba07f36239d4888ff5163b18_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 678;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_224;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_224 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_15 = mod_consts[241];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_15 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 678;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_224, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 678;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_value_3 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678);
        locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678);
        locals_pptx$enum$shapes$$$class__3_MSO_SHAPE_TYPE_678 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 678;
        goto try_except_handler_8;
        outline_result_3:;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 677;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_196, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_196);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_34);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_16;
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        tmp_assign_source_36 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_16);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_37 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_16 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[23];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[33]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_225;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_18 = tmp_class_creation_4__metaclass;
        tmp_called_value_225 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[33]);
        if (tmp_called_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        tmp_tuple_element_17 = mod_consts[272];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_17 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 727;
        tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_225, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_225);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[35]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[37];
        tmp_getattr_default_4 = mod_consts[38];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[37]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 727;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_41;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[273];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[272];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_13;
        }
        frame_cde3f31822523054979c38226ece5bfa_5 = MAKE_CLASS_FRAME(codeobj_cde3f31822523054979c38226ece5bfa, module_pptx$enum$shapes, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_cde3f31822523054979c38226ece5bfa_5);
        assert(Py_REFCNT(frame_cde3f31822523054979c38226ece5bfa_5) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[274];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = mod_consts[275];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 741;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_called_value_226;
            tmp_called_value_226 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[26]);

            if (tmp_called_value_226 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_226 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_called_value_226 == NULL)) {
                        tmp_called_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                    }

                    if (tmp_called_value_226 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 744;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_226);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_cde3f31822523054979c38226ece5bfa_5->m_frame.f_lineno = 744;
            tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_226, mod_consts[276]);

            Py_DECREF(tmp_called_value_226);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 744;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_called_value_227;
                PyObject *tmp_called_value_228;
                PyObject *tmp_called_value_229;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_19);
                tmp_called_value_227 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[26]);

                if (tmp_called_value_227 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_227 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_227 == NULL)) {
                            tmp_called_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_227 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 745;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_227);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_cde3f31822523054979c38226ece5bfa_5->m_frame.f_lineno = 745;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_227, mod_consts[277]);

                Py_DECREF(tmp_called_value_227);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 745;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_19);
                tmp_called_value_228 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[26]);

                if (tmp_called_value_228 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_228 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_called_value_228 == NULL)) {
                            tmp_called_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
                        }

                        if (tmp_called_value_228 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 746;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_228);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_cde3f31822523054979c38226ece5bfa_5->m_frame.f_lineno = 746;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_228, mod_consts[278]);

                Py_DECREF(tmp_called_value_228);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 746;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_19);
                tmp_called_value_229 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[27]);

                if (tmp_called_value_229 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_229 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_229 == NULL)) {
                            tmp_called_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                        }

                        if (tmp_called_value_229 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 747;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_229);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_cde3f31822523054979c38226ece5bfa_5->m_frame.f_lineno = 747;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_229, mod_consts[279]);

                Py_DECREF(tmp_called_value_229);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 747;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[230], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 743;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cde3f31822523054979c38226ece5bfa_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cde3f31822523054979c38226ece5bfa_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cde3f31822523054979c38226ece5bfa_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cde3f31822523054979c38226ece5bfa_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_cde3f31822523054979c38226ece5bfa_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;

            goto try_except_handler_13;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_230;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_230 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_20 = mod_consts[272];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_20 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 727;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_230, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_42 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727);
        locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727);
        locals_pptx$enum$shapes$$$class__4_PP_MEDIA_TYPE_727 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 727;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_42);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        tmp_assign_source_44 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_45 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_21 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[23];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_22 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[33]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_231;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_23 = tmp_class_creation_5__metaclass;
        tmp_called_value_231 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[33]);
        if (tmp_called_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        tmp_tuple_element_22 = mod_consts[280];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_22 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 758;
        tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_231, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_231);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_24 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[35]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[37];
        tmp_getattr_default_5 = mod_consts[38];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_25 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[37]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 758;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 758;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_49;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_232;
        PyObject *tmp_called_value_233;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_233 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_233 == NULL)) {
            tmp_called_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;

            goto try_except_handler_14;
        }
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 757;
        tmp_called_value_232 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_233, mod_consts[281]);

        if (tmp_called_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;

            goto try_except_handler_14;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[282];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[280];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_16;
        }
        frame_054842fd2dfe90c00199d3ecd6bb4abc_6 = MAKE_CLASS_FRAME(codeobj_054842fd2dfe90c00199d3ecd6bb4abc, module_pptx$enum$shapes, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_054842fd2dfe90c00199d3ecd6bb4abc_6);
        assert(Py_REFCNT(frame_054842fd2dfe90c00199d3ecd6bb4abc_6) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[283];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 772;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = mod_consts[245];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_called_value_234;
            tmp_called_value_234 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

            if (tmp_called_value_234 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_234 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                    if (unlikely(tmp_called_value_234 == NULL)) {
                        tmp_called_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                    }

                    if (tmp_called_value_234 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 779;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_234);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 779;
            tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_234, mod_consts[284]);

            Py_DECREF(tmp_called_value_234);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 779;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(20);
            {
                PyObject *tmp_called_value_235;
                PyObject *tmp_called_value_236;
                PyObject *tmp_called_value_237;
                PyObject *tmp_called_value_238;
                PyObject *tmp_called_value_239;
                PyObject *tmp_called_value_240;
                PyObject *tmp_called_value_241;
                PyObject *tmp_called_value_242;
                PyObject *tmp_called_value_243;
                PyObject *tmp_called_value_244;
                PyObject *tmp_called_value_245;
                PyObject *tmp_called_value_246;
                PyObject *tmp_called_value_247;
                PyObject *tmp_called_value_248;
                PyObject *tmp_called_value_249;
                PyObject *tmp_called_value_250;
                PyObject *tmp_called_value_251;
                PyObject *tmp_called_value_252;
                PyObject *tmp_called_value_253;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_24);
                tmp_called_value_235 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_235 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_235 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_235 == NULL)) {
                            tmp_called_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_235 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 780;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_235);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 780;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_235, mod_consts[285]);

                Py_DECREF(tmp_called_value_235);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 780;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_24);
                tmp_called_value_236 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_236 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_236 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_236 == NULL)) {
                            tmp_called_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_236 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 781;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_236);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 781;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_236, mod_consts[286]);

                Py_DECREF(tmp_called_value_236);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 781;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_24);
                tmp_called_value_237 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_237 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_237 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_237 == NULL)) {
                            tmp_called_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_237 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 782;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_237);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 782;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_237, mod_consts[287]);

                Py_DECREF(tmp_called_value_237);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 782;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_24);
                tmp_called_value_238 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_238 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_238 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_238 == NULL)) {
                            tmp_called_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_238 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 783;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_238);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 783;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_238, mod_consts[288]);

                Py_DECREF(tmp_called_value_238);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 783;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_24);
                tmp_called_value_239 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_239 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_239 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_239 == NULL)) {
                            tmp_called_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_239 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 784;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_239);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 784;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_239, mod_consts[289]);

                Py_DECREF(tmp_called_value_239);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 784;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_24);
                tmp_called_value_240 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_240 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_240 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_240 == NULL)) {
                            tmp_called_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_240 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 785;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_240);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 785;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_240, mod_consts[290]);

                Py_DECREF(tmp_called_value_240);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 785;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_24);
                tmp_called_value_241 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_241 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_241 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_241 == NULL)) {
                            tmp_called_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_241 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 786;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_241);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 786;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_241, mod_consts[291]);

                Py_DECREF(tmp_called_value_241);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 786;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_24);
                tmp_called_value_242 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_242 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_242 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_242 == NULL)) {
                            tmp_called_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_242 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 787;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_242);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 787;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_242, mod_consts[292]);

                Py_DECREF(tmp_called_value_242);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 787;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_24);
                tmp_called_value_243 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_243 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_243 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_243 == NULL)) {
                            tmp_called_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_243 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 788;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_243);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 788;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_243, mod_consts[293]);

                Py_DECREF(tmp_called_value_243);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 788;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 9, tmp_tuple_element_24);
                tmp_called_value_244 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_244 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_244 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_244 == NULL)) {
                            tmp_called_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_244 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 794;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_244);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 794;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_244, mod_consts[294]);

                Py_DECREF(tmp_called_value_244);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 794;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 10, tmp_tuple_element_24);
                tmp_called_value_245 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_245 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_245 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_245 == NULL)) {
                            tmp_called_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_245 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 795;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_245);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 795;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_245, mod_consts[295]);

                Py_DECREF(tmp_called_value_245);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 795;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 11, tmp_tuple_element_24);
                tmp_called_value_246 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_246 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_246 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_246 == NULL)) {
                            tmp_called_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_246 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 796;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_246);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 796;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_246, mod_consts[296]);

                Py_DECREF(tmp_called_value_246);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 796;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 12, tmp_tuple_element_24);
                tmp_called_value_247 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_247 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_247 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_247 == NULL)) {
                            tmp_called_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_247 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 797;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_247);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 797;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_247, mod_consts[297]);

                Py_DECREF(tmp_called_value_247);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 797;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 13, tmp_tuple_element_24);
                tmp_called_value_248 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_248 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_248 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_248 == NULL)) {
                            tmp_called_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_248 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 798;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_248);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 798;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_248, mod_consts[298]);

                Py_DECREF(tmp_called_value_248);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 798;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 14, tmp_tuple_element_24);
                tmp_called_value_249 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[29]);

                if (tmp_called_value_249 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_249 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[29]);

                        if (unlikely(tmp_called_value_249 == NULL)) {
                            tmp_called_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
                        }

                        if (tmp_called_value_249 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 799;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_249);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 799;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_249, mod_consts[299]);

                Py_DECREF(tmp_called_value_249);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 799;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 15, tmp_tuple_element_24);
                tmp_called_value_250 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[27]);

                if (tmp_called_value_250 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_250 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_250 == NULL)) {
                            tmp_called_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                        }

                        if (tmp_called_value_250 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 800;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_250);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 800;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_250, mod_consts[300]);

                Py_DECREF(tmp_called_value_250);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 800;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 16, tmp_tuple_element_24);
                tmp_called_value_251 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[27]);

                if (tmp_called_value_251 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_251 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_251 == NULL)) {
                            tmp_called_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                        }

                        if (tmp_called_value_251 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 801;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_251);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 801;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_251, mod_consts[301]);

                Py_DECREF(tmp_called_value_251);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 801;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 17, tmp_tuple_element_24);
                tmp_called_value_252 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[27]);

                if (tmp_called_value_252 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_252 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_252 == NULL)) {
                            tmp_called_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                        }

                        if (tmp_called_value_252 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 802;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_252);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 802;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_252, mod_consts[302]);

                Py_DECREF(tmp_called_value_252);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 802;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 18, tmp_tuple_element_24);
                tmp_called_value_253 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[27]);

                if (tmp_called_value_253 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_253 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_253 == NULL)) {
                            tmp_called_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                        }

                        if (tmp_called_value_253 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 803;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_253);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame.f_lineno = 803;
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_253, mod_consts[303]);

                Py_DECREF(tmp_called_value_253);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 803;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 19, tmp_tuple_element_24);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[230], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 778;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_054842fd2dfe90c00199d3ecd6bb4abc_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_054842fd2dfe90c00199d3ecd6bb4abc_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_054842fd2dfe90c00199d3ecd6bb4abc_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_054842fd2dfe90c00199d3ecd6bb4abc_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_054842fd2dfe90c00199d3ecd6bb4abc_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 758;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 758;

            goto try_except_handler_16;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_254;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_254 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_25 = mod_consts[280];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_25 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 758;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_254, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 758;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_value_4 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_value_4);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758);
        locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758);
        locals_pptx$enum$shapes$$$class__5_PP_PLACEHOLDER_TYPE_758 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 758;
        goto try_except_handler_14;
        outline_result_5:;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 757;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_232, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_232);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 757;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_50);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_6;
        tmp_dircall_arg1_6 = mod_consts[304];
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_52 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_26 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[23];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_27 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[33]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_255;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_28 = tmp_class_creation_6__metaclass;
        tmp_called_value_255 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[33]);
        if (tmp_called_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        tmp_tuple_element_26 = mod_consts[305];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_26 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 811;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_255, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_255);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_29 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[35]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[36];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[37];
        tmp_getattr_default_6 = mod_consts[38];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[37]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 811;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 811;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_56;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[306];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[305];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_19;
        }
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_tuple_element_28;
            tmp_tuple_element_28 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[307]);

            if (tmp_tuple_element_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_28 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_tuple_element_28);
                } else {
                    goto try_except_handler_19;
                }
            }

            tmp_assign_source_58 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_58, 0, tmp_tuple_element_28);
            assert(tmp__ProgIdEnum$class_creation_1__bases_orig == NULL);
            tmp__ProgIdEnum$class_creation_1__bases_orig = tmp_assign_source_58;
        }
        frame_0fd5e1a21cc75e5b3cb7a07397145499_7 = MAKE_CLASS_FRAME(codeobj_0fd5e1a21cc75e5b3cb7a07397145499, module_pptx$enum$shapes, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0fd5e1a21cc75e5b3cb7a07397145499_7);
        assert(Py_REFCNT(frame_0fd5e1a21cc75e5b3cb7a07397145499_7) == 2);

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_dircall_arg1_7;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases_orig);
            tmp_dircall_arg1_7 = tmp__ProgIdEnum$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_7);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
                tmp_assign_source_59 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp__ProgIdEnum$class_creation_1__bases == NULL);
            tmp__ProgIdEnum$class_creation_1__bases = tmp_assign_source_59;
        }
        {
            PyObject *tmp_assign_source_60;
            tmp_assign_source_60 = MAKE_DICT_EMPTY();
            assert(tmp__ProgIdEnum$class_creation_1__class_decl_dict == NULL);
            tmp__ProgIdEnum$class_creation_1__class_decl_dict = tmp_assign_source_60;
        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_metaclass_value_7;
            nuitka_bool tmp_condition_result_24;
            int tmp_truth_name_7;
            PyObject *tmp_type_arg_13;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_bases_value_7;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases);
            tmp_truth_name_7 = CHECK_IF_TRUE(tmp__ProgIdEnum$class_creation_1__bases);
            if (tmp_truth_name_7 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_condition_result_24 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases);
            tmp_expression_value_31 = tmp__ProgIdEnum$class_creation_1__bases;
            tmp_subscript_value_7 = mod_consts[23];
            tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_7, 0);
            if (tmp_type_arg_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
            Py_DECREF(tmp_type_arg_13);
            if (tmp_metaclass_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_7);
            condexpr_end_7:;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases);
            tmp_bases_value_7 = tmp__ProgIdEnum$class_creation_1__bases;
            tmp_assign_source_61 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
            Py_DECREF(tmp_metaclass_value_7);
            if (tmp_assign_source_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp__ProgIdEnum$class_creation_1__metaclass == NULL);
            tmp__ProgIdEnum$class_creation_1__metaclass = tmp_assign_source_61;
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_expression_value_32;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__metaclass);
            tmp_expression_value_32 = tmp__ProgIdEnum$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_32, mod_consts[33]);
            tmp_condition_result_25 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_256;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__metaclass);
            tmp_expression_value_33 = tmp__ProgIdEnum$class_creation_1__metaclass;
            tmp_called_value_256 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[33]);
            if (tmp_called_value_256 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_tuple_element_29 = mod_consts[9];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases);
            tmp_tuple_element_29 = tmp__ProgIdEnum$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_29);
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__class_decl_dict);
            tmp_kwargs_value_12 = tmp__ProgIdEnum$class_creation_1__class_decl_dict;
            frame_0fd5e1a21cc75e5b3cb7a07397145499_7->m_frame.f_lineno = 831;
            tmp_assign_source_62 = CALL_FUNCTION(tmp_called_value_256, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_called_value_256);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp__ProgIdEnum$class_creation_1__prepared == NULL);
            tmp__ProgIdEnum$class_creation_1__prepared = tmp_assign_source_62;
        }
        {
            bool tmp_condition_result_26;
            PyObject *tmp_operand_value_7;
            PyObject *tmp_expression_value_34;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__prepared);
            tmp_expression_value_34 = tmp__ProgIdEnum$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_34, mod_consts[35]);
            tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_condition_result_26 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_26 != false) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        {
            PyObject *tmp_raise_type_7;
            PyObject *tmp_raise_value_7;
            PyObject *tmp_mod_expr_left_7;
            PyObject *tmp_mod_expr_right_7;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_getattr_target_7;
            PyObject *tmp_getattr_attr_7;
            PyObject *tmp_getattr_default_7;
            tmp_raise_type_7 = PyExc_TypeError;
            tmp_mod_expr_left_7 = mod_consts[36];
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__metaclass);
            tmp_getattr_target_7 = tmp__ProgIdEnum$class_creation_1__metaclass;
            tmp_getattr_attr_7 = mod_consts[37];
            tmp_getattr_default_7 = mod_consts[38];
            tmp_tuple_element_30 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_35;
                PyObject *tmp_type_arg_14;
                PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_30);
                CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__prepared);
                tmp_type_arg_14 = tmp__ProgIdEnum$class_creation_1__prepared;
                tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_14);
                assert(!(tmp_expression_value_35 == NULL));
                tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[37]);
                Py_DECREF(tmp_expression_value_35);
                if (tmp_tuple_element_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 831;
                    type_description_2 = "o";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_30);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_mod_expr_right_7);
            goto try_except_handler_20;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
            Py_DECREF(tmp_mod_expr_right_7);
            if (tmp_raise_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            exception_type = tmp_raise_type_7;
            Py_INCREF(tmp_raise_type_7);
            exception_value = tmp_raise_value_7;
            exception_lineno = 831;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        branch_no_19:;
        goto branch_end_18;
        branch_no_18:;
        {
            PyObject *tmp_assign_source_63;
            tmp_assign_source_63 = MAKE_DICT_EMPTY();
            assert(tmp__ProgIdEnum$class_creation_1__prepared == NULL);
            tmp__ProgIdEnum$class_creation_1__prepared = tmp_assign_source_63;
        }
        branch_end_18:;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__prepared);
            tmp_set_locals_7 = tmp__ProgIdEnum$class_creation_1__prepared;
            locals_pptx$enum$shapes$$$class__7_Member_831 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[308];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[14], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[309];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[43], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        frame_a732385590619f838841c84ce4c154cd_8 = MAKE_CLASS_FRAME(codeobj_a732385590619f838841c84ce4c154cd, module_pptx$enum$shapes, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a732385590619f838841c84ce4c154cd_8);
        assert(Py_REFCNT(frame_a732385590619f838841c84ce4c154cd_8) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pptx$enum$shapes$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[310], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;
            type_description_3 = "o";
            goto frame_exception_exit_8;
        }


        tmp_dictset_value = MAKE_FUNCTION_pptx$enum$shapes$$$function__2___repr__();

        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[312], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 841;
            type_description_3 = "o";
            goto frame_exception_exit_8;
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_called_value_257;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_258;
            PyObject *tmp_args_element_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[314]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 844;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            tmp_condition_result_27 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_257 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[314]);

            if (unlikely(tmp_called_value_257 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[314]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 844;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_called_value_257 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 844;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_pptx$enum$shapes$$$function__3_height();

            frame_a732385590619f838841c84ce4c154cd_8->m_frame.f_lineno = 844;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_257, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_257);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 844;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_258 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_pptx$enum$shapes$$$function__3_height();

            frame_a732385590619f838841c84ce4c154cd_8->m_frame.f_lineno = 844;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_258, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 844;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[315], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 845;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_called_value_259;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_260;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[314]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 848;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            tmp_condition_result_28 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_259 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[314]);

            if (unlikely(tmp_called_value_259 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[314]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 848;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_called_value_259 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 848;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_pptx$enum$shapes$$$function__4_icon_filename();

            frame_a732385590619f838841c84ce4c154cd_8->m_frame.f_lineno = 848;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_259, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_259);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 848;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_260 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_pptx$enum$shapes$$$function__4_icon_filename();

            frame_a732385590619f838841c84ce4c154cd_8->m_frame.f_lineno = 848;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_260, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 848;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[317], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 849;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_called_value_261;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_262;
            PyObject *tmp_args_element_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[314]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 852;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            tmp_condition_result_29 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_261 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[314]);

            if (unlikely(tmp_called_value_261 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[314]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 852;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_called_value_261 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 852;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_pptx$enum$shapes$$$function__5_progId();

            frame_a732385590619f838841c84ce4c154cd_8->m_frame.f_lineno = 852;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_261, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_261);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 852;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_262 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_10 = MAKE_FUNCTION_pptx$enum$shapes$$$function__5_progId();

            frame_a732385590619f838841c84ce4c154cd_8->m_frame.f_lineno = 852;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_262, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 852;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[319], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 853;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_called_value_263;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_264;
            PyObject *tmp_args_element_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[314]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 856;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            tmp_condition_result_30 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_263 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[314]);

            if (unlikely(tmp_called_value_263 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[314]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 856;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_called_value_263 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 856;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_pptx$enum$shapes$$$function__6_width();

            frame_a732385590619f838841c84ce4c154cd_8->m_frame.f_lineno = 856;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_263, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_263);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 856;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_264 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_12 = MAKE_FUNCTION_pptx$enum$shapes$$$function__6_width();

            frame_a732385590619f838841c84ce4c154cd_8->m_frame.f_lineno = 856;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_264, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 856;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[321], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 857;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a732385590619f838841c84ce4c154cd_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a732385590619f838841c84ce4c154cd_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a732385590619f838841c84ce4c154cd_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a732385590619f838841c84ce4c154cd_8,
            type_description_3,
            outline_6_var___class__
        );



        assertFrameObject(frame_a732385590619f838841c84ce4c154cd_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_7:;
        type_description_2 = "o";
        goto try_except_handler_22;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases);
            tmp_cmp_expr_left_6 = tmp__ProgIdEnum$class_creation_1__bases;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases_orig);
            tmp_cmp_expr_right_6 = tmp__ProgIdEnum$class_creation_1__bases_orig;
            tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases_orig);
        tmp_dictset_value = tmp__ProgIdEnum$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__7_Member_831, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_value_265;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__metaclass);
            tmp_called_value_265 = tmp__ProgIdEnum$class_creation_1__metaclass;
            tmp_tuple_element_31 = mod_consts[9];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases);
            tmp_tuple_element_31 = tmp__ProgIdEnum$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_pptx$enum$shapes$$$class__7_Member_831;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__class_decl_dict);
            tmp_kwargs_value_13 = tmp__ProgIdEnum$class_creation_1__class_decl_dict;
            frame_0fd5e1a21cc75e5b3cb7a07397145499_7->m_frame.f_lineno = 831;
            tmp_assign_source_64 = CALL_FUNCTION(tmp_called_value_265, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 831;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_64;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_dictset_value = outline_6_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_pptx$enum$shapes$$$class__7_Member_831);
        locals_pptx$enum$shapes$$$class__7_Member_831 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pptx$enum$shapes$$$class__7_Member_831);
        locals_pptx$enum$shapes$$$class__7_Member_831 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 831;
        goto try_except_handler_20;
        outline_result_7:;
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[9], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 831;
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases_orig);
        Py_DECREF(tmp__ProgIdEnum$class_creation_1__bases_orig);
        tmp__ProgIdEnum$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp__ProgIdEnum$class_creation_1__bases);
        tmp__ProgIdEnum$class_creation_1__bases = NULL;
        Py_XDECREF(tmp__ProgIdEnum$class_creation_1__class_decl_dict);
        tmp__ProgIdEnum$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp__ProgIdEnum$class_creation_1__metaclass);
        tmp__ProgIdEnum$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp__ProgIdEnum$class_creation_1__prepared);
        tmp__ProgIdEnum$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto frame_exception_exit_7;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases_orig);
        Py_DECREF(tmp__ProgIdEnum$class_creation_1__bases_orig);
        tmp__ProgIdEnum$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__bases);
        Py_DECREF(tmp__ProgIdEnum$class_creation_1__bases);
        tmp__ProgIdEnum$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__class_decl_dict);
        Py_DECREF(tmp__ProgIdEnum$class_creation_1__class_decl_dict);
        tmp__ProgIdEnum$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__metaclass);
        Py_DECREF(tmp__ProgIdEnum$class_creation_1__metaclass);
        tmp__ProgIdEnum$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp__ProgIdEnum$class_creation_1__prepared);
        Py_DECREF(tmp__ProgIdEnum$class_creation_1__prepared);
        tmp__ProgIdEnum$class_creation_1__prepared = NULL;


        tmp_dictset_value = MAKE_FUNCTION_pptx$enum$shapes$$$function__7___contains__();

        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[323], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 860;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_pptx$enum$shapes$$$function__8___repr__();

        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[312], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        {
            PyObject *tmp_called_value_266;
            PyObject *tmp_args_element_value_13;
            tmp_called_value_266 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[32]);

            if (tmp_called_value_266 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_266 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_called_value_266 == NULL)) {
                        tmp_called_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_called_value_266 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 870;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_266);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_value_13 = MAKE_FUNCTION_pptx$enum$shapes$$$function__9_DOCX();

            frame_0fd5e1a21cc75e5b3cb7a07397145499_7->m_frame.f_lineno = 870;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_266, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_266);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 870;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 871;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_267;
            PyObject *tmp_args_element_value_14;
            tmp_called_value_267 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[32]);

            if (tmp_called_value_267 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_267 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_called_value_267 == NULL)) {
                        tmp_called_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_called_value_267 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 874;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_267);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_value_14 = MAKE_FUNCTION_pptx$enum$shapes$$$function__10_PPTX();

            frame_0fd5e1a21cc75e5b3cb7a07397145499_7->m_frame.f_lineno = 874;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_267, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_267);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 874;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 875;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_268;
            PyObject *tmp_args_element_value_15;
            tmp_called_value_268 = PyObject_GetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[32]);

            if (tmp_called_value_268 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_268 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_called_value_268 == NULL)) {
                        tmp_called_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_called_value_268 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 880;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_268);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_value_15 = MAKE_FUNCTION_pptx$enum$shapes$$$function__11_XLSX();

            frame_0fd5e1a21cc75e5b3cb7a07397145499_7->m_frame.f_lineno = 880;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_268, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_268);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 880;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 881;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0fd5e1a21cc75e5b3cb7a07397145499_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0fd5e1a21cc75e5b3cb7a07397145499_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0fd5e1a21cc75e5b3cb7a07397145499_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0fd5e1a21cc75e5b3cb7a07397145499_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_0fd5e1a21cc75e5b3cb7a07397145499_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_6:;

        goto try_except_handler_19;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_6__bases;
            tmp_cmp_expr_right_7 = mod_consts[304];
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 811;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        tmp_dictset_value = mod_consts[304];
        tmp_res = PyObject_SetItem(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811, mod_consts[231], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 811;

            goto try_except_handler_19;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_value_269;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_269 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_32 = mod_consts[305];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_32 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_6__class_decl_dict;
            frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 811;
            tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_269, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 811;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_65;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_57 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811);
        locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811);
        locals_pptx$enum$shapes$$$class__6__ProgIdEnum_811 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 811;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_57);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_270;
        tmp_called_value_270 = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[305]);

        if (unlikely(tmp_called_value_270 == NULL)) {
            tmp_called_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[305]);
        }

        if (tmp_called_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;

            goto frame_exception_exit_1;
        }
        frame_7dc653b91887b666726ec2781b60cae4->m_frame.f_lineno = 885;
        tmp_assign_source_66 = CALL_FUNCTION_NO_ARGS(tmp_called_value_270);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 885;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_66);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7dc653b91887b666726ec2781b60cae4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7dc653b91887b666726ec2781b60cae4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7dc653b91887b666726ec2781b60cae4, exception_lineno);
    }



    assertFrameObject(frame_7dc653b91887b666726ec2781b60cae4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_8:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pptx.enum.shapes", false);

    Py_INCREF(module_pptx$enum$shapes);
    return module_pptx$enum$shapes;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pptx$enum$shapes, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pptx$enum$shapes", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
