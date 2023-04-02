/* Generated code for Python module 'pptx.oxml'
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

/* The "module_pptx$oxml" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pptx$oxml;
PyDictObject *moduledict_pptx$oxml;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[447];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[447];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pptx.oxml"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 447; i++) {
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
void checkModuleConstants_pptx$oxml(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 447; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_97b337b9cb573aeed1fd959d23454525;
static PyCodeObject *codeobj_a99e45479fdecba038c45ffab25603e9;
static PyCodeObject *codeobj_1babd2df8ea98ab74691c16352a0d282;
static PyCodeObject *codeobj_2e183417974763b074213482e7b59cc7;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[27]; CHECK_OBJECT(module_filename_obj);
    codeobj_97b337b9cb573aeed1fd959d23454525 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[442], mod_consts[442], NULL, NULL, 0, 0, 0);
    codeobj_a99e45479fdecba038c45ffab25603e9 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[50], mod_consts[50], mod_consts[443], NULL, 1, 0, 0);
    codeobj_1babd2df8ea98ab74691c16352a0d282 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[12], mod_consts[12], mod_consts[444], NULL, 1, 0, 0);
    codeobj_2e183417974763b074213482e7b59cc7 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS, mod_consts[51], mod_consts[51], mod_consts[445], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pptx$oxml$$$function__1_parse_from_template();


static PyObject *MAKE_FUNCTION_pptx$oxml$$$function__2_parse_xml();


static PyObject *MAKE_FUNCTION_pptx$oxml$$$function__3_register_element_cls();


// The module function definitions.
static PyObject *impl_pptx$oxml$$$function__1_parse_from_template(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_template_name = python_pars[0];
    PyObject *var_thisdir = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_f = NULL;
    PyObject *var_xml = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_a99e45479fdecba038c45ffab25603e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a99e45479fdecba038c45ffab25603e9 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a99e45479fdecba038c45ffab25603e9)) {
        Py_XDECREF(cache_frame_a99e45479fdecba038c45ffab25603e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a99e45479fdecba038c45ffab25603e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a99e45479fdecba038c45ffab25603e9 = MAKE_FUNCTION_FRAME(codeobj_a99e45479fdecba038c45ffab25603e9, module_pptx$oxml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a99e45479fdecba038c45ffab25603e9->m_type_description == NULL);
    frame_a99e45479fdecba038c45ffab25603e9 = cache_frame_a99e45479fdecba038c45ffab25603e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a99e45479fdecba038c45ffab25603e9);
    assert(Py_REFCNT(frame_a99e45479fdecba038c45ffab25603e9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = 28;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_thisdir == NULL);
        var_thisdir = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_expression_value_3 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_thisdir);
        tmp_args_element_value_2 = var_thisdir;
        tmp_args_element_value_3 = mod_consts[4];
        tmp_args_element_value_4 = mod_consts[5];
        tmp_mod_expr_left_1 = mod_consts[6];
        CHECK_OBJECT(par_template_name);
        tmp_mod_expr_right_1 = par_template_name;
        tmp_args_element_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_filename == NULL);
        var_filename = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(var_filename);
        tmp_open_filename_1 = var_filename;
        tmp_open_mode_1 = mod_consts[7];
        tmp_assign_source_3 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_4 = tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = 30;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_5 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[9]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_7 = tmp_with_1__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_f = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_f);
        tmp_called_instance_1 = var_f;
        frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = 31;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        assert(var_xml == NULL);
        var_xml = tmp_assign_source_8;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a99e45479fdecba038c45ffab25603e9, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a99e45479fdecba038c45ffab25603e9, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        tmp_args_element_value_6 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_7 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_8 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 31;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a99e45479fdecba038c45ffab25603e9->m_frame) frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 30;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a99e45479fdecba038c45ffab25603e9->m_frame) frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
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

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = 31;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[11]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = 31;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[11]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_4;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_xml == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_xml;
        frame_a99e45479fdecba038c45ffab25603e9->m_frame.f_lineno = 32;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a99e45479fdecba038c45ffab25603e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a99e45479fdecba038c45ffab25603e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a99e45479fdecba038c45ffab25603e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a99e45479fdecba038c45ffab25603e9,
        type_description_1,
        par_template_name,
        var_thisdir,
        var_filename,
        var_f,
        var_xml
    );


    // Release cached frame if used for exception.
    if (frame_a99e45479fdecba038c45ffab25603e9 == cache_frame_a99e45479fdecba038c45ffab25603e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a99e45479fdecba038c45ffab25603e9);
        cache_frame_a99e45479fdecba038c45ffab25603e9 = NULL;
    }

    assertFrameObject(frame_a99e45479fdecba038c45ffab25603e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_thisdir);
    Py_DECREF(var_thisdir);
    var_thisdir = NULL;
    CHECK_OBJECT(var_filename);
    Py_DECREF(var_filename);
    var_filename = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_xml);
    var_xml = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_thisdir);
    var_thisdir = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_xml);
    var_xml = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_template_name);
    Py_DECREF(par_template_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_template_name);
    Py_DECREF(par_template_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$oxml$$$function__2_parse_xml(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xml = python_pars[0];
    PyObject *var_root_element = NULL;
    struct Nuitka_FrameObject *frame_1babd2df8ea98ab74691c16352a0d282;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1babd2df8ea98ab74691c16352a0d282 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1babd2df8ea98ab74691c16352a0d282)) {
        Py_XDECREF(cache_frame_1babd2df8ea98ab74691c16352a0d282);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1babd2df8ea98ab74691c16352a0d282 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1babd2df8ea98ab74691c16352a0d282 = MAKE_FUNCTION_FRAME(codeobj_1babd2df8ea98ab74691c16352a0d282, module_pptx$oxml, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1babd2df8ea98ab74691c16352a0d282->m_type_description == NULL);
    frame_1babd2df8ea98ab74691c16352a0d282 = cache_frame_1babd2df8ea98ab74691c16352a0d282;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1babd2df8ea98ab74691c16352a0d282);
    assert(Py_REFCNT(frame_1babd2df8ea98ab74691c16352a0d282) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xml);
        tmp_args_element_value_1 = par_xml;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1babd2df8ea98ab74691c16352a0d282->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_root_element == NULL);
        var_root_element = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1babd2df8ea98ab74691c16352a0d282, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1babd2df8ea98ab74691c16352a0d282->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1babd2df8ea98ab74691c16352a0d282, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1babd2df8ea98ab74691c16352a0d282,
        type_description_1,
        par_xml,
        var_root_element
    );


    // Release cached frame if used for exception.
    if (frame_1babd2df8ea98ab74691c16352a0d282 == cache_frame_1babd2df8ea98ab74691c16352a0d282) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1babd2df8ea98ab74691c16352a0d282);
        cache_frame_1babd2df8ea98ab74691c16352a0d282 = NULL;
    }

    assertFrameObject(frame_1babd2df8ea98ab74691c16352a0d282);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_root_element);
    tmp_return_value = var_root_element;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_root_element);
    Py_DECREF(var_root_element);
    var_root_element = NULL;
    goto function_return_exit;
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_xml);
    Py_DECREF(par_xml);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_xml);
    Py_DECREF(par_xml);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pptx$oxml$$$function__3_register_element_cls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nsptagname = python_pars[0];
    PyObject *par_cls = python_pars[1];
    PyObject *var_nsptag = NULL;
    PyObject *var_namespace = NULL;
    struct Nuitka_FrameObject *frame_2e183417974763b074213482e7b59cc7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2e183417974763b074213482e7b59cc7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2e183417974763b074213482e7b59cc7)) {
        Py_XDECREF(cache_frame_2e183417974763b074213482e7b59cc7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2e183417974763b074213482e7b59cc7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2e183417974763b074213482e7b59cc7 = MAKE_FUNCTION_FRAME(codeobj_2e183417974763b074213482e7b59cc7, module_pptx$oxml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2e183417974763b074213482e7b59cc7->m_type_description == NULL);
    frame_2e183417974763b074213482e7b59cc7 = cache_frame_2e183417974763b074213482e7b59cc7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2e183417974763b074213482e7b59cc7);
    assert(Py_REFCNT(frame_2e183417974763b074213482e7b59cc7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nsptagname);
        tmp_args_element_value_1 = par_nsptagname;
        frame_2e183417974763b074213482e7b59cc7->m_frame.f_lineno = 50;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_nsptag == NULL);
        var_nsptag = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_nsptag);
        tmp_expression_value_2 = var_nsptag;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2e183417974763b074213482e7b59cc7->m_frame.f_lineno = 51;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_namespace == NULL);
        var_namespace = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_cls);
        tmp_ass_subvalue_1 = par_cls;
        CHECK_OBJECT(var_namespace);
        tmp_ass_subscribed_1 = var_namespace;
        CHECK_OBJECT(var_nsptag);
        tmp_expression_value_3 = var_nsptag;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2e183417974763b074213482e7b59cc7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2e183417974763b074213482e7b59cc7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2e183417974763b074213482e7b59cc7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2e183417974763b074213482e7b59cc7,
        type_description_1,
        par_nsptagname,
        par_cls,
        var_nsptag,
        var_namespace
    );


    // Release cached frame if used for exception.
    if (frame_2e183417974763b074213482e7b59cc7 == cache_frame_2e183417974763b074213482e7b59cc7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2e183417974763b074213482e7b59cc7);
        cache_frame_2e183417974763b074213482e7b59cc7 = NULL;
    }

    assertFrameObject(frame_2e183417974763b074213482e7b59cc7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_nsptag);
    Py_DECREF(var_nsptag);
    var_nsptag = NULL;
    CHECK_OBJECT(var_namespace);
    Py_DECREF(var_namespace);
    var_namespace = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_nsptag);
    var_nsptag = NULL;
    Py_XDECREF(var_namespace);
    var_namespace = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_nsptagname);
    Py_DECREF(par_nsptagname);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nsptagname);
    Py_DECREF(par_nsptagname);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pptx$oxml$$$function__1_parse_from_template() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$oxml$$$function__1_parse_from_template,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a99e45479fdecba038c45ffab25603e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$oxml,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$oxml$$$function__2_parse_xml() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$oxml$$$function__2_parse_xml,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1babd2df8ea98ab74691c16352a0d282,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$oxml,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pptx$oxml$$$function__3_register_element_cls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pptx$oxml$$$function__3_register_element_cls,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2e183417974763b074213482e7b59cc7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pptx$oxml,
        mod_consts[24],
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

function_impl_code functable_pptx$oxml[] = {
    impl_pptx$oxml$$$function__1_parse_from_template,
    impl_pptx$oxml$$$function__2_parse_xml,
    impl_pptx$oxml$$$function__3_register_element_cls,
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

    function_impl_code *current = functable_pptx$oxml;
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

    if (offset > sizeof(functable_pptx$oxml) || offset < 0) {
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
        functable_pptx$oxml[offset],
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
        module_pptx$oxml,
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
PyObject *modulecode_pptx$oxml(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pptx.oxml");

    // Store the module for future use.
    module_pptx$oxml = module;

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
        PRINT_STRING("pptx.oxml: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pptx.oxml: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pptx.oxml: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpptx$oxml\n");

    moduledict_pptx$oxml = MODULE_DICT(module_pptx$oxml);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pptx$oxml,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pptx$oxml,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[446]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pptx$oxml,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pptx$oxml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pptx$oxml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pptx$oxml);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pptx$oxml, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pptx$oxml, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pptx$oxml, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pptx$oxml);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_11__module = NULL;
    PyObject *tmp_import_from_12__module = NULL;
    PyObject *tmp_import_from_13__module = NULL;
    PyObject *tmp_import_from_14__module = NULL;
    PyObject *tmp_import_from_15__module = NULL;
    PyObject *tmp_import_from_16__module = NULL;
    PyObject *tmp_import_from_17__module = NULL;
    PyObject *tmp_import_from_18__module = NULL;
    PyObject *tmp_import_from_19__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_20__module = NULL;
    PyObject *tmp_import_from_21__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
    struct Nuitka_FrameObject *frame_97b337b9cb573aeed1fd959d23454525;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST1(mod_consts[28]);
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_3);
    }
    frame_97b337b9cb573aeed1fd959d23454525 = MAKE_MODULE_FRAME(codeobj_97b337b9cb573aeed1fd959d23454525, module_pptx$oxml);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97b337b9cb573aeed1fd959d23454525);
    assert(Py_REFCNT(frame_97b337b9cb573aeed1fd959d23454525) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[2];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[27];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[32], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[33], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD___FUTURE__();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[35]);
        }
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[36]);
        }
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_8 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[37]);
        }
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_9 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[38]);
        }
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_9);
    }
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT0(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[40];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[41];
        tmp_level_value_1 = mod_consts[2];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 12;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[15],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[42];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[43];
        tmp_level_value_2 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 14;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[19],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 18;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[45]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 19;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[47], 0), mod_consts[48]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_14);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 20;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_pptx$oxml$$$function__1_parse_from_template();

        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_pptx$oxml$$$function__2_parse_xml();

        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_pptx$oxml$$$function__3_register_element_cls();

        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[52];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[53];
        tmp_level_value_3 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 55;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[54],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_18);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[55];
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_args_element_value_3 == NULL));
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[56];
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[57];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[58];
        tmp_level_value_4 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 61;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[59],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[59]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[60],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[60]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[61],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[61]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[62],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[62]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[63],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[63]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[64],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[64]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[65],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[65]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[66],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[66]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[67],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[67]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[68],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[68]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[69],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[69]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_30);
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[70];
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[71];
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[72];
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = mod_consts[73];
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = mod_consts[74];
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[75];
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = mod_consts[76];
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = mod_consts[77];
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[78];
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[79];
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[80];
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[81];
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_16, call_args);
        }

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = mod_consts[82];
        tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_args_element_value_31 == NULL)) {
            tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[83];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[84];
        tmp_level_value_5 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 90;
        tmp_assign_source_31 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[85],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[85]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[86],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[86]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[87],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[87]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[88],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[88]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[89],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[89]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_36);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = mod_consts[90];
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
        }

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = mod_consts[91];
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_19, call_args);
        }

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = mod_consts[92];
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_20, call_args);
        }

        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = mod_consts[93];
        tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_args_element_value_39 == NULL)) {
            tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
        }

        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = mod_consts[94];
        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_args_element_value_41 == NULL)) {
            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41};
            tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
        }

        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[95];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[96];
        tmp_level_value_6 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 105;
        tmp_assign_source_37 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_20 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[97],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[97]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_21 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[98],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[98]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_22 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[99],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[99]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_40);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = mod_consts[100];
        tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_args_element_value_43 == NULL)) {
            tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = mod_consts[101];
        tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_args_element_value_45 == NULL)) {
            tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = mod_consts[102];
        tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_args_element_value_47 == NULL)) {
            tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[103];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[104];
        tmp_level_value_7 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 112;
        tmp_assign_source_41 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_23 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[105],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[105]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_24 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[106],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[106]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_43);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = mod_consts[107];
        tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_args_element_value_49 == NULL)) {
            tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = mod_consts[108];
        tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_args_element_value_51 == NULL)) {
            tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[109];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[110];
        tmp_level_value_8 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 118;
        tmp_assign_source_44 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_44;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_25 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[111],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[111]);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_26 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[112],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[112]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_27 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[113],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[113]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_47);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = mod_consts[114];
        tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_args_element_value_53 == NULL)) {
            tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_28, call_args);
        }

        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = mod_consts[115];
        tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_args_element_value_55 == NULL)) {
            tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = mod_consts[116];
        tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_args_element_value_57 == NULL)) {
            tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_30, call_args);
        }

        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[117];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[118];
        tmp_level_value_9 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 125;
        tmp_assign_source_48 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_48;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_28 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[119],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[119]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_29 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[120],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[120]);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_30 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[121],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[121]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_31 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[122],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[122]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_32 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[123],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[123]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_33 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[124],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[124]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_34 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[125],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[125]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_35 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[126],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[126]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_36 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[127],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[127]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_37 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[128],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[128]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_38 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[129],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[129]);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_39 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[130],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[130]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_40 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[131],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[131]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_41 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[132],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[132]);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_62);
    }
    goto try_end_6;
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

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = mod_consts[133];
        tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_args_element_value_59 == NULL)) {
            tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = mod_consts[134];
        tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_args_element_value_61 == NULL)) {
            tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_32, call_args);
        }

        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = mod_consts[135];
        tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_args_element_value_63 == NULL)) {
            tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_33, call_args);
        }

        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = mod_consts[136];
        tmp_args_element_value_65 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_args_element_value_65 == NULL)) {
            tmp_args_element_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65};
            tmp_call_result_33 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_34, call_args);
        }

        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = mod_consts[137];
        tmp_args_element_value_67 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_args_element_value_67 == NULL)) {
            tmp_args_element_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_35, call_args);
        }

        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = mod_consts[138];
        tmp_args_element_value_69 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_args_element_value_69 == NULL)) {
            tmp_args_element_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_args_element_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = mod_consts[139];
        tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_args_element_value_71 == NULL)) {
            tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71};
            tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_37, call_args);
        }

        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = mod_consts[140];
        tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_args_element_value_73 == NULL)) {
            tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73};
            tmp_call_result_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_38, call_args);
        }

        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = mod_consts[141];
        tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_args_element_value_75 == NULL)) {
            tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_39, call_args);
        }

        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = mod_consts[142];
        tmp_args_element_value_77 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_args_element_value_77 == NULL)) {
            tmp_args_element_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77};
            tmp_call_result_39 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_40, call_args);
        }

        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = mod_consts[143];
        tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_79 == NULL)) {
            tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 152;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_call_result_40 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_41, call_args);
        }

        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = mod_consts[144];
        tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_args_element_value_81 == NULL)) {
            tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_call_result_41 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_42, call_args);
        }

        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = mod_consts[145];
        tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_args_element_value_83 == NULL)) {
            tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83};
            tmp_call_result_42 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = mod_consts[146];
        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_args_element_value_85 == NULL)) {
            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 155;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85};
            tmp_call_result_43 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_44, call_args);
        }

        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[147];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[148];
        tmp_level_value_10 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 158;
        tmp_assign_source_63 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_63;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_42 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[149],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[149]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_43 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[150],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[150]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_44 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[151],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[151]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_45 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[152],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[152]);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_46 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[153],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[153]);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_47 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[154],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[154]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_69);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = mod_consts[155];
        tmp_args_element_value_87 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_args_element_value_87 == NULL)) {
            tmp_args_element_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_45, call_args);
        }

        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = mod_consts[156];
        tmp_args_element_value_89 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_args_element_value_89 == NULL)) {
            tmp_args_element_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89};
            tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_46, call_args);
        }

        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_args_element_value_91;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = mod_consts[157];
        tmp_args_element_value_91 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_args_element_value_91 == NULL)) {
            tmp_args_element_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91};
            tmp_call_result_46 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_47, call_args);
        }

        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_call_result_47;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = mod_consts[158];
        tmp_args_element_value_93 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_args_element_value_93 == NULL)) {
            tmp_args_element_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_call_result_47 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_48, call_args);
        }

        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_call_result_48;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = mod_consts[159];
        tmp_args_element_value_95 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_args_element_value_95 == NULL)) {
            tmp_args_element_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95};
            tmp_call_result_48 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_49, call_args);
        }

        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_args_element_value_97;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = mod_consts[160];
        tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_args_element_value_97 == NULL)) {
            tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
            tmp_call_result_49 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_50, call_args);
        }

        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_50;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_98 = mod_consts[161];
        tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_args_element_value_99 == NULL)) {
            tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99};
            tmp_call_result_50 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_51, call_args);
        }

        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_51;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = mod_consts[162];
        tmp_args_element_value_101 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_args_element_value_101 == NULL)) {
            tmp_args_element_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101};
            tmp_call_result_51 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_52, call_args);
        }

        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_args_element_value_103;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = mod_consts[163];
        tmp_args_element_value_103 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_args_element_value_103 == NULL)) {
            tmp_args_element_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_args_element_value_102, tmp_args_element_value_103};
            tmp_call_result_52 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_53, call_args);
        }

        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[164];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[165];
        tmp_level_value_11 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 178;
        tmp_assign_source_70 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_9__module == NULL);
        tmp_import_from_9__module = tmp_assign_source_70;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_48 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[166],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[166]);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_49 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[167],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[167]);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_50 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[168],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME(tmp_import_name_from_50, mod_consts[168]);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_51 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[169],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME(tmp_import_name_from_51, mod_consts[169]);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_52 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[170],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME(tmp_import_name_from_52, mod_consts[170]);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_53;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_53 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[171],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME(tmp_import_name_from_53, mod_consts[171]);
        }

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_54;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_54 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_54,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[172],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME(tmp_import_name_from_54, mod_consts[172]);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_55 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_55,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[173],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME(tmp_import_name_from_55, mod_consts[173]);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_56 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_56,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[174],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME(tmp_import_name_from_56, mod_consts[174]);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_57;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_57 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_57,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[175],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME(tmp_import_name_from_57, mod_consts[175]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_80);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = mod_consts[176];
        tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_105 == NULL)) {
            tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_call_result_53 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_54, call_args);
        }

        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = mod_consts[177];
        tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_107 == NULL)) {
            tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107};
            tmp_call_result_54 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_55, call_args);
        }

        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_args_element_value_109;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = mod_consts[178];
        tmp_args_element_value_109 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_109 == NULL)) {
            tmp_args_element_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_value_108, tmp_args_element_value_109};
            tmp_call_result_55 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_56, call_args);
        }

        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_args_element_value_111;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_110 = mod_consts[179];
        tmp_args_element_value_111 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_args_element_value_111 == NULL)) {
            tmp_args_element_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = {tmp_args_element_value_110, tmp_args_element_value_111};
            tmp_call_result_56 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_57, call_args);
        }

        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = mod_consts[180];
        tmp_args_element_value_113 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_113 == NULL)) {
            tmp_args_element_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113};
            tmp_call_result_57 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_58, call_args);
        }

        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_args_element_value_115;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = mod_consts[181];
        tmp_args_element_value_115 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_115 == NULL)) {
            tmp_args_element_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_114, tmp_args_element_value_115};
            tmp_call_result_58 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_59, call_args);
        }

        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_call_result_59;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_args_element_value_117;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_116 = mod_consts[182];
        tmp_args_element_value_117 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_117 == NULL)) {
            tmp_args_element_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_116, tmp_args_element_value_117};
            tmp_call_result_59 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_60, call_args);
        }

        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_call_result_60;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_args_element_value_119;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = mod_consts[183];
        tmp_args_element_value_119 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_args_element_value_119 == NULL)) {
            tmp_args_element_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_args_element_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_118, tmp_args_element_value_119};
            tmp_call_result_60 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_61, call_args);
        }

        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_args_element_value_121;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_120 = mod_consts[184];
        tmp_args_element_value_121 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_121 == NULL)) {
            tmp_args_element_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_120, tmp_args_element_value_121};
            tmp_call_result_61 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_62, call_args);
        }

        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_args_element_value_123;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_122 = mod_consts[185];
        tmp_args_element_value_123 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_args_element_value_123 == NULL)) {
            tmp_args_element_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_args_element_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_value_122, tmp_args_element_value_123};
            tmp_call_result_62 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_63, call_args);
        }

        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_call_result_63;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_args_element_value_125;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_124 = mod_consts[186];
        tmp_args_element_value_125 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_args_element_value_125 == NULL)) {
            tmp_args_element_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        if (tmp_args_element_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_124, tmp_args_element_value_125};
            tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_64, call_args);
        }

        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_call_result_64;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_args_element_value_127;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_126 = mod_consts[187];
        tmp_args_element_value_127 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_127 == NULL)) {
            tmp_args_element_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_126, tmp_args_element_value_127};
            tmp_call_result_64 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_65, call_args);
        }

        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_call_result_65;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_args_element_value_129;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = mod_consts[188];
        tmp_args_element_value_129 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_129 == NULL)) {
            tmp_args_element_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_128, tmp_args_element_value_129};
            tmp_call_result_65 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_66, call_args);
        }

        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_66;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_args_element_value_131;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_130 = mod_consts[189];
        tmp_args_element_value_131 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_args_element_value_131 == NULL)) {
            tmp_args_element_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
        }

        if (tmp_args_element_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_130, tmp_args_element_value_131};
            tmp_call_result_66 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_67, call_args);
        }

        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_call_result_67;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_args_element_value_133;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_132 = mod_consts[190];
        tmp_args_element_value_133 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_args_element_value_133 == NULL)) {
            tmp_args_element_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_args_element_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_132, tmp_args_element_value_133};
            tmp_call_result_67 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_68, call_args);
        }

        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_args_element_value_135;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_134 = mod_consts[191];
        tmp_args_element_value_135 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_135 == NULL)) {
            tmp_args_element_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_134, tmp_args_element_value_135};
            tmp_call_result_68 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_69, call_args);
        }

        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_69;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_args_element_value_137;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = mod_consts[192];
        tmp_args_element_value_137 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_args_element_value_137 == NULL)) {
            tmp_args_element_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        if (tmp_args_element_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137};
            tmp_call_result_69 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_70, call_args);
        }

        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_result_70;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_args_element_value_139;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_138 = mod_consts[193];
        tmp_args_element_value_139 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_139 == NULL)) {
            tmp_args_element_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_138, tmp_args_element_value_139};
            tmp_call_result_70 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_71, call_args);
        }

        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_call_result_71;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_args_element_value_141;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_140 = mod_consts[194];
        tmp_args_element_value_141 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_141 == NULL)) {
            tmp_args_element_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_140, tmp_args_element_value_141};
            tmp_call_result_71 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_72, call_args);
        }

        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_args_element_value_143;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_142 = mod_consts[195];
        tmp_args_element_value_143 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_143 == NULL)) {
            tmp_args_element_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_142, tmp_args_element_value_143};
            tmp_call_result_72 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_73, call_args);
        }

        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_args_element_value_145;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_144 = mod_consts[196];
        tmp_args_element_value_145 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_145 == NULL)) {
            tmp_args_element_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_144, tmp_args_element_value_145};
            tmp_call_result_73 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_74, call_args);
        }

        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_call_result_74;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_args_element_value_147;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_146 = mod_consts[197];
        tmp_args_element_value_147 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_value_147 == NULL)) {
            tmp_args_element_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_146, tmp_args_element_value_147};
            tmp_call_result_74 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_75, call_args);
        }

        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_75;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_args_element_value_149;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = mod_consts[198];
        tmp_args_element_value_149 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_149 == NULL)) {
            tmp_args_element_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149};
            tmp_call_result_75 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_76, call_args);
        }

        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_result_76;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_args_element_value_151;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_150 = mod_consts[199];
        tmp_args_element_value_151 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_args_element_value_151 == NULL)) {
            tmp_args_element_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_args_element_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_value_150, tmp_args_element_value_151};
            tmp_call_result_76 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_77, call_args);
        }

        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_call_result_77;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_args_element_value_153;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_152 = mod_consts[200];
        tmp_args_element_value_153 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_args_element_value_153 == NULL)) {
            tmp_args_element_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        if (tmp_args_element_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_152, tmp_args_element_value_153};
            tmp_call_result_77 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_78, call_args);
        }

        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_call_result_78;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_args_element_value_155;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = mod_consts[201];
        tmp_args_element_value_155 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_args_element_value_155 == NULL)) {
            tmp_args_element_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_args_element_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_154, tmp_args_element_value_155};
            tmp_call_result_78 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_79, call_args);
        }

        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_call_result_79;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_args_element_value_157;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_156 = mod_consts[202];
        tmp_args_element_value_157 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_args_element_value_157 == NULL)) {
            tmp_args_element_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_args_element_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_156, tmp_args_element_value_157};
            tmp_call_result_79 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_80, call_args);
        }

        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_call_result_80;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_args_element_value_159;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_158 = mod_consts[203];
        tmp_args_element_value_159 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_args_element_value_159 == NULL)) {
            tmp_args_element_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_args_element_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_158, tmp_args_element_value_159};
            tmp_call_result_80 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_81, call_args);
        }

        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_58;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[204];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[205];
        tmp_level_value_12 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 221;
        tmp_import_name_from_58 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_58,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[206],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME(tmp_import_name_from_58, mod_consts[206]);
        }

        Py_DECREF(tmp_import_name_from_58);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_81);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_call_result_81;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_args_element_value_161;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_160 = mod_consts[207];
        tmp_args_element_value_161 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_args_element_value_161 == NULL)) {
            tmp_args_element_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        assert(!(tmp_args_element_value_161 == NULL));
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_160, tmp_args_element_value_161};
            tmp_call_result_81 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_82, call_args);
        }

        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[208];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[209];
        tmp_level_value_13 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 226;
        tmp_assign_source_82 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_10__module == NULL);
        tmp_import_from_10__module = tmp_assign_source_82;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_59;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_59 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_59,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[210],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME(tmp_import_name_from_59, mod_consts[210]);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_60;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_60 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_60,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[211],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME(tmp_import_name_from_60, mod_consts[211]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_61 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_61,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[212],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME(tmp_import_name_from_61, mod_consts[212]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_62 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_62,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[213],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME(tmp_import_name_from_62, mod_consts[213]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_63 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_63,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[214],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME(tmp_import_name_from_63, mod_consts[214]);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_64 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_64,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[215],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_88 = IMPORT_NAME(tmp_import_name_from_64, mod_consts[215]);
        }

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_65;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_65 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_65,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[216],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_89 = IMPORT_NAME(tmp_import_name_from_65, mod_consts[216]);
        }

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_66 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_66,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[217],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME(tmp_import_name_from_66, mod_consts[217]);
        }

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_90);
    }
    goto try_end_9;
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

    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_call_result_82;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_args_element_value_163;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_162 = mod_consts[218];
        tmp_args_element_value_163 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_args_element_value_163 == NULL)) {
            tmp_args_element_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[210]);
        }

        if (tmp_args_element_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_value_162, tmp_args_element_value_163};
            tmp_call_result_82 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_83, call_args);
        }

        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_call_result_83;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_args_element_value_165;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_164 = mod_consts[219];
        tmp_args_element_value_165 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_args_element_value_165 == NULL)) {
            tmp_args_element_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[210]);
        }

        if (tmp_args_element_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_164, tmp_args_element_value_165};
            tmp_call_result_83 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_84, call_args);
        }

        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_call_result_84;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_args_element_value_167;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = mod_consts[220];
        tmp_args_element_value_167 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_args_element_value_167 == NULL)) {
            tmp_args_element_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        if (tmp_args_element_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_args_element_value_166, tmp_args_element_value_167};
            tmp_call_result_84 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_85, call_args);
        }

        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_call_result_85;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_args_element_value_169;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_168 = mod_consts[221];
        tmp_args_element_value_169 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_args_element_value_169 == NULL)) {
            tmp_args_element_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_args_element_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_168, tmp_args_element_value_169};
            tmp_call_result_85 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_86, call_args);
        }

        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_86;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_args_element_value_171;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_170 = mod_consts[222];
        tmp_args_element_value_171 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_args_element_value_171 == NULL)) {
            tmp_args_element_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_args_element_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_170, tmp_args_element_value_171};
            tmp_call_result_86 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_87, call_args);
        }

        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_call_result_87;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_args_element_value_173;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_172 = mod_consts[223];
        tmp_args_element_value_173 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_args_element_value_173 == NULL)) {
            tmp_args_element_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[213]);
        }

        if (tmp_args_element_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_172, tmp_args_element_value_173};
            tmp_call_result_87 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_88, call_args);
        }

        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_call_result_88;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_args_element_value_175;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_174 = mod_consts[224];
        tmp_args_element_value_175 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_args_element_value_175 == NULL)) {
            tmp_args_element_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[214]);
        }

        if (tmp_args_element_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_value_174, tmp_args_element_value_175};
            tmp_call_result_88 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_89, call_args);
        }

        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_89;
        PyObject *tmp_args_element_value_176;
        PyObject *tmp_args_element_value_177;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_176 = mod_consts[225];
        tmp_args_element_value_177 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[215]);

        if (unlikely(tmp_args_element_value_177 == NULL)) {
            tmp_args_element_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[215]);
        }

        if (tmp_args_element_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_176, tmp_args_element_value_177};
            tmp_call_result_89 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_90, call_args);
        }

        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_call_result_90;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_args_element_value_179;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = mod_consts[226];
        tmp_args_element_value_179 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_args_element_value_179 == NULL)) {
            tmp_args_element_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        if (tmp_args_element_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = {tmp_args_element_value_178, tmp_args_element_value_179};
            tmp_call_result_90 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_91, call_args);
        }

        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_call_result_91;
        PyObject *tmp_args_element_value_180;
        PyObject *tmp_args_element_value_181;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_180 = mod_consts[227];
        tmp_args_element_value_181 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_args_element_value_181 == NULL)) {
            tmp_args_element_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[217]);
        }

        if (tmp_args_element_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_180, tmp_args_element_value_181};
            tmp_call_result_91 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_92, call_args);
        }

        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[228];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[229];
        tmp_level_value_14 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 249;
        tmp_assign_source_91 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_11__module == NULL);
        tmp_import_from_11__module = tmp_assign_source_91;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_67 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_67,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[230],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME(tmp_import_name_from_67, mod_consts[230]);
        }

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_68 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_68,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[231],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_93 = IMPORT_NAME(tmp_import_name_from_68, mod_consts[231]);
        }

        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_69 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_69,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[232],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_94 = IMPORT_NAME(tmp_import_name_from_69, mod_consts[232]);
        }

        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_70 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_70,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[233],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_95 = IMPORT_NAME(tmp_import_name_from_70, mod_consts[233]);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_import_name_from_71;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_71 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_71,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[234],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_96 = IMPORT_NAME(tmp_import_name_from_71, mod_consts[234]);
        }

        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_72 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_72,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[235],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_97 = IMPORT_NAME(tmp_import_name_from_72, mod_consts[235]);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_73 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_73,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[236],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_98 = IMPORT_NAME(tmp_import_name_from_73, mod_consts[236]);
        }

        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_import_name_from_74;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_74 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_74,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[237],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_99 = IMPORT_NAME(tmp_import_name_from_74, mod_consts[237]);
        }

        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_import_name_from_75;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_75 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_75,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[238],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_100 = IMPORT_NAME(tmp_import_name_from_75, mod_consts[238]);
        }

        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_import_name_from_76;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_76 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_76,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[239],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_101 = IMPORT_NAME(tmp_import_name_from_76, mod_consts[239]);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_77 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_77,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[240],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_102 = IMPORT_NAME(tmp_import_name_from_77, mod_consts[240]);
        }

        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_102);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_92;
        PyObject *tmp_args_element_value_182;
        PyObject *tmp_args_element_value_183;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_182 = mod_consts[241];
        tmp_args_element_value_183 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[230]);

        if (unlikely(tmp_args_element_value_183 == NULL)) {
            tmp_args_element_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[230]);
        }

        if (tmp_args_element_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_182, tmp_args_element_value_183};
            tmp_call_result_92 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_93, call_args);
        }

        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_call_result_93;
        PyObject *tmp_args_element_value_184;
        PyObject *tmp_args_element_value_185;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_184 = mod_consts[242];
        tmp_args_element_value_185 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_args_element_value_185 == NULL)) {
            tmp_args_element_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
        }

        if (tmp_args_element_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = {tmp_args_element_value_184, tmp_args_element_value_185};
            tmp_call_result_93 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_94, call_args);
        }

        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_call_result_94;
        PyObject *tmp_args_element_value_186;
        PyObject *tmp_args_element_value_187;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_186 = mod_consts[243];
        tmp_args_element_value_187 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_args_element_value_187 == NULL)) {
            tmp_args_element_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        if (tmp_args_element_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_186, tmp_args_element_value_187};
            tmp_call_result_94 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_95, call_args);
        }

        if (tmp_call_result_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_call_result_95;
        PyObject *tmp_args_element_value_188;
        PyObject *tmp_args_element_value_189;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_188 = mod_consts[244];
        tmp_args_element_value_189 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_args_element_value_189 == NULL)) {
            tmp_args_element_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[235]);
        }

        if (tmp_args_element_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_188, tmp_args_element_value_189};
            tmp_call_result_95 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_96, call_args);
        }

        if (tmp_call_result_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_value_97;
        PyObject *tmp_call_result_96;
        PyObject *tmp_args_element_value_190;
        PyObject *tmp_args_element_value_191;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_190 = mod_consts[245];
        tmp_args_element_value_191 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_args_element_value_191 == NULL)) {
            tmp_args_element_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_args_element_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_190, tmp_args_element_value_191};
            tmp_call_result_96 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_97, call_args);
        }

        if (tmp_call_result_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_call_result_97;
        PyObject *tmp_args_element_value_192;
        PyObject *tmp_args_element_value_193;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_192 = mod_consts[246];
        tmp_args_element_value_193 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_args_element_value_193 == NULL)) {
            tmp_args_element_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[234]);
        }

        if (tmp_args_element_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 268;
        {
            PyObject *call_args[] = {tmp_args_element_value_192, tmp_args_element_value_193};
            tmp_call_result_97 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_98, call_args);
        }

        if (tmp_call_result_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_99;
        PyObject *tmp_call_result_98;
        PyObject *tmp_args_element_value_194;
        PyObject *tmp_args_element_value_195;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_194 = mod_consts[247];
        tmp_args_element_value_195 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[236]);

        if (unlikely(tmp_args_element_value_195 == NULL)) {
            tmp_args_element_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[236]);
        }

        if (tmp_args_element_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_194, tmp_args_element_value_195};
            tmp_call_result_98 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_99, call_args);
        }

        if (tmp_call_result_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_99;
        PyObject *tmp_args_element_value_196;
        PyObject *tmp_args_element_value_197;
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_196 = mod_consts[248];
        tmp_args_element_value_197 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[237]);

        if (unlikely(tmp_args_element_value_197 == NULL)) {
            tmp_args_element_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[237]);
        }

        if (tmp_args_element_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_value_196, tmp_args_element_value_197};
            tmp_call_result_99 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_100, call_args);
        }

        if (tmp_call_result_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_value_101;
        PyObject *tmp_call_result_100;
        PyObject *tmp_args_element_value_198;
        PyObject *tmp_args_element_value_199;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_198 = mod_consts[249];
        tmp_args_element_value_199 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_args_element_value_199 == NULL)) {
            tmp_args_element_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[238]);
        }

        if (tmp_args_element_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = {tmp_args_element_value_198, tmp_args_element_value_199};
            tmp_call_result_100 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_101, call_args);
        }

        if (tmp_call_result_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_call_result_101;
        PyObject *tmp_args_element_value_200;
        PyObject *tmp_args_element_value_201;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_200 = mod_consts[250];
        tmp_args_element_value_201 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_args_element_value_201 == NULL)) {
            tmp_args_element_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[240]);
        }

        if (tmp_args_element_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_value_200, tmp_args_element_value_201};
            tmp_call_result_101 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_102, call_args);
        }

        if (tmp_call_result_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_call_result_102;
        PyObject *tmp_args_element_value_202;
        PyObject *tmp_args_element_value_203;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_202 = mod_consts[251];
        tmp_args_element_value_203 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_args_element_value_203 == NULL)) {
            tmp_args_element_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[239]);
        }

        if (tmp_args_element_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_202, tmp_args_element_value_203};
            tmp_call_result_102 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_103, call_args);
        }

        if (tmp_call_result_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_import_name_from_78;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[252];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[253];
        tmp_level_value_15 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 276;
        tmp_import_name_from_78 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_78,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[254],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_103 = IMPORT_NAME(tmp_import_name_from_78, mod_consts[254]);
        }

        Py_DECREF(tmp_import_name_from_78);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_103);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_call_result_103;
        PyObject *tmp_args_element_value_204;
        PyObject *tmp_args_element_value_205;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_204 = mod_consts[255];
        tmp_args_element_value_205 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[254]);

        if (unlikely(tmp_args_element_value_205 == NULL)) {
            tmp_args_element_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[254]);
        }

        assert(!(tmp_args_element_value_205 == NULL));
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_204, tmp_args_element_value_205};
            tmp_call_result_103 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_104, call_args);
        }

        if (tmp_call_result_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[256];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[257];
        tmp_level_value_16 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 281;
        tmp_assign_source_104 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_12__module == NULL);
        tmp_import_from_12__module = tmp_assign_source_104;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_79 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_79,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[258],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_105 = IMPORT_NAME(tmp_import_name_from_79, mod_consts[258]);
        }

        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_import_name_from_80;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_80 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_80,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[259],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_106 = IMPORT_NAME(tmp_import_name_from_80, mod_consts[259]);
        }

        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_import_name_from_81;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_81 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_81)) {
            tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_81,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[260],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_107 = IMPORT_NAME(tmp_import_name_from_81, mod_consts[260]);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_import_name_from_82;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_82 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_82)) {
            tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_82,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[261],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_108 = IMPORT_NAME(tmp_import_name_from_82, mod_consts[261]);
        }

        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_import_name_from_83;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_83 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_83)) {
            tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_83,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[262],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_109 = IMPORT_NAME(tmp_import_name_from_83, mod_consts[262]);
        }

        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_import_name_from_84;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_84 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_84)) {
            tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_84,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[263],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_110 = IMPORT_NAME(tmp_import_name_from_84, mod_consts[263]);
        }

        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_110);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_call_result_104;
        PyObject *tmp_args_element_value_206;
        PyObject *tmp_args_element_value_207;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_206 = mod_consts[264];
        tmp_args_element_value_207 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_args_element_value_207 == NULL)) {
            tmp_args_element_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[258]);
        }

        if (tmp_args_element_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = {tmp_args_element_value_206, tmp_args_element_value_207};
            tmp_call_result_104 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_105, call_args);
        }

        if (tmp_call_result_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_call_result_105;
        PyObject *tmp_args_element_value_208;
        PyObject *tmp_args_element_value_209;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_208 = mod_consts[265];
        tmp_args_element_value_209 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[259]);

        if (unlikely(tmp_args_element_value_209 == NULL)) {
            tmp_args_element_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[259]);
        }

        if (tmp_args_element_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_208, tmp_args_element_value_209};
            tmp_call_result_105 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_106, call_args);
        }

        if (tmp_call_result_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_call_result_106;
        PyObject *tmp_args_element_value_210;
        PyObject *tmp_args_element_value_211;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_210 = mod_consts[266];
        tmp_args_element_value_211 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[260]);

        if (unlikely(tmp_args_element_value_211 == NULL)) {
            tmp_args_element_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[260]);
        }

        if (tmp_args_element_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_value_210, tmp_args_element_value_211};
            tmp_call_result_106 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_107, call_args);
        }

        if (tmp_call_result_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_call_result_107;
        PyObject *tmp_args_element_value_212;
        PyObject *tmp_args_element_value_213;
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_212 = mod_consts[267];
        tmp_args_element_value_213 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[262]);

        if (unlikely(tmp_args_element_value_213 == NULL)) {
            tmp_args_element_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[262]);
        }

        if (tmp_args_element_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_args_element_value_212, tmp_args_element_value_213};
            tmp_call_result_107 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_108, call_args);
        }

        if (tmp_call_result_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_call_result_108;
        PyObject *tmp_args_element_value_214;
        PyObject *tmp_args_element_value_215;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_214 = mod_consts[268];
        tmp_args_element_value_215 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[261]);

        if (unlikely(tmp_args_element_value_215 == NULL)) {
            tmp_args_element_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[261]);
        }

        if (tmp_args_element_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_214, tmp_args_element_value_215};
            tmp_call_result_108 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_109, call_args);
        }

        if (tmp_call_result_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_call_result_109;
        PyObject *tmp_args_element_value_216;
        PyObject *tmp_args_element_value_217;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_216 = mod_consts[269];
        tmp_args_element_value_217 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_args_element_value_217 == NULL)) {
            tmp_args_element_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[263]);
        }

        if (tmp_args_element_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = {tmp_args_element_value_216, tmp_args_element_value_217};
            tmp_call_result_109 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_110, call_args);
        }

        if (tmp_call_result_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[270];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[271];
        tmp_level_value_17 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 298;
        tmp_assign_source_111 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_13__module == NULL);
        tmp_import_from_13__module = tmp_assign_source_111;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_import_name_from_85;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_85 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_85)) {
            tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_85,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[272],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_112 = IMPORT_NAME(tmp_import_name_from_85, mod_consts[272]);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_import_name_from_86;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_86 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_86)) {
            tmp_assign_source_113 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_86,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[273],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_113 = IMPORT_NAME(tmp_import_name_from_86, mod_consts[273]);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_import_name_from_87;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_87 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_87)) {
            tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_87,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[274],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_114 = IMPORT_NAME(tmp_import_name_from_87, mod_consts[274]);
        }

        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_import_name_from_88;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_88 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_88)) {
            tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_88,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[275],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_115 = IMPORT_NAME(tmp_import_name_from_88, mod_consts[275]);
        }

        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_import_name_from_89;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_89 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_89)) {
            tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_89,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[276],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_116 = IMPORT_NAME(tmp_import_name_from_89, mod_consts[276]);
        }

        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_import_name_from_90;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_90 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_90)) {
            tmp_assign_source_117 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_90,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[277],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_117 = IMPORT_NAME(tmp_import_name_from_90, mod_consts[277]);
        }

        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_import_name_from_91;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_91 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_91)) {
            tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_91,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[278],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_118 = IMPORT_NAME(tmp_import_name_from_91, mod_consts[278]);
        }

        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_import_name_from_92;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_92 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_92)) {
            tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_92,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[279],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_119 = IMPORT_NAME(tmp_import_name_from_92, mod_consts[279]);
        }

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_import_name_from_93;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_93 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_93)) {
            tmp_assign_source_120 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_93,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[280],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_120 = IMPORT_NAME(tmp_import_name_from_93, mod_consts[280]);
        }

        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_import_name_from_94;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_94 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_94)) {
            tmp_assign_source_121 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_94,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[281],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_121 = IMPORT_NAME(tmp_import_name_from_94, mod_consts[281]);
        }

        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_import_name_from_95;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_95 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_95)) {
            tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_95,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[282],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_122 = IMPORT_NAME(tmp_import_name_from_95, mod_consts[282]);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_import_name_from_96;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_96 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_96)) {
            tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_96,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[283],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_123 = IMPORT_NAME(tmp_import_name_from_96, mod_consts[283]);
        }

        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_import_name_from_97;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_97 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_97)) {
            tmp_assign_source_124 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_97,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[284],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_124 = IMPORT_NAME(tmp_import_name_from_97, mod_consts[284]);
        }

        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_124);
    }
    goto try_end_12;
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

    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    {
        PyObject *tmp_called_value_111;
        PyObject *tmp_call_result_110;
        PyObject *tmp_args_element_value_218;
        PyObject *tmp_args_element_value_219;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_218 = mod_consts[285];
        tmp_args_element_value_219 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[275]);

        if (unlikely(tmp_args_element_value_219 == NULL)) {
            tmp_args_element_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[275]);
        }

        if (tmp_args_element_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = {tmp_args_element_value_218, tmp_args_element_value_219};
            tmp_call_result_110 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_111, call_args);
        }

        if (tmp_call_result_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_call_result_111;
        PyObject *tmp_args_element_value_220;
        PyObject *tmp_args_element_value_221;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_220 = mod_consts[286];
        tmp_args_element_value_221 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[273]);

        if (unlikely(tmp_args_element_value_221 == NULL)) {
            tmp_args_element_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[273]);
        }

        if (tmp_args_element_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = {tmp_args_element_value_220, tmp_args_element_value_221};
            tmp_call_result_111 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_112, call_args);
        }

        if (tmp_call_result_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_call_result_112;
        PyObject *tmp_args_element_value_222;
        PyObject *tmp_args_element_value_223;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_222 = mod_consts[287];
        tmp_args_element_value_223 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[274]);

        if (unlikely(tmp_args_element_value_223 == NULL)) {
            tmp_args_element_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[274]);
        }

        if (tmp_args_element_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = {tmp_args_element_value_222, tmp_args_element_value_223};
            tmp_call_result_112 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_113, call_args);
        }

        if (tmp_call_result_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_call_result_113;
        PyObject *tmp_args_element_value_224;
        PyObject *tmp_args_element_value_225;
        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_114 == NULL)) {
            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_224 = mod_consts[288];
        tmp_args_element_value_225 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[278]);

        if (unlikely(tmp_args_element_value_225 == NULL)) {
            tmp_args_element_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[278]);
        }

        if (tmp_args_element_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = {tmp_args_element_value_224, tmp_args_element_value_225};
            tmp_call_result_113 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_114, call_args);
        }

        if (tmp_call_result_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_call_result_114;
        PyObject *tmp_args_element_value_226;
        PyObject *tmp_args_element_value_227;
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_226 = mod_consts[289];
        tmp_args_element_value_227 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[279]);

        if (unlikely(tmp_args_element_value_227 == NULL)) {
            tmp_args_element_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[279]);
        }

        if (tmp_args_element_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_args_element_value_226, tmp_args_element_value_227};
            tmp_call_result_114 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_115, call_args);
        }

        if (tmp_call_result_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_value_116;
        PyObject *tmp_call_result_115;
        PyObject *tmp_args_element_value_228;
        PyObject *tmp_args_element_value_229;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_228 = mod_consts[290];
        tmp_args_element_value_229 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[281]);

        if (unlikely(tmp_args_element_value_229 == NULL)) {
            tmp_args_element_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[281]);
        }

        if (tmp_args_element_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_228, tmp_args_element_value_229};
            tmp_call_result_115 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_116, call_args);
        }

        if (tmp_call_result_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_call_result_116;
        PyObject *tmp_args_element_value_230;
        PyObject *tmp_args_element_value_231;
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_230 = mod_consts[291];
        tmp_args_element_value_231 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[277]);

        if (unlikely(tmp_args_element_value_231 == NULL)) {
            tmp_args_element_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[277]);
        }

        if (tmp_args_element_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_230, tmp_args_element_value_231};
            tmp_call_result_116 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_117, call_args);
        }

        if (tmp_call_result_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_call_result_117;
        PyObject *tmp_args_element_value_232;
        PyObject *tmp_args_element_value_233;
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_232 = mod_consts[292];
        tmp_args_element_value_233 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[280]);

        if (unlikely(tmp_args_element_value_233 == NULL)) {
            tmp_args_element_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[280]);
        }

        if (tmp_args_element_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 321;
        {
            PyObject *call_args[] = {tmp_args_element_value_232, tmp_args_element_value_233};
            tmp_call_result_117 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_118, call_args);
        }

        if (tmp_call_result_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_call_result_118;
        PyObject *tmp_args_element_value_234;
        PyObject *tmp_args_element_value_235;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_234 = mod_consts[293];
        tmp_args_element_value_235 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[282]);

        if (unlikely(tmp_args_element_value_235 == NULL)) {
            tmp_args_element_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[282]);
        }

        if (tmp_args_element_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = {tmp_args_element_value_234, tmp_args_element_value_235};
            tmp_call_result_118 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_119, call_args);
        }

        if (tmp_call_result_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_call_result_119;
        PyObject *tmp_args_element_value_236;
        PyObject *tmp_args_element_value_237;
        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_120 == NULL)) {
            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_236 = mod_consts[294];
        tmp_args_element_value_237 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[272]);

        if (unlikely(tmp_args_element_value_237 == NULL)) {
            tmp_args_element_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[272]);
        }

        if (tmp_args_element_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = {tmp_args_element_value_236, tmp_args_element_value_237};
            tmp_call_result_119 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_120, call_args);
        }

        if (tmp_call_result_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_call_result_120;
        PyObject *tmp_args_element_value_238;
        PyObject *tmp_args_element_value_239;
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_238 = mod_consts[295];
        tmp_args_element_value_239 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[276]);

        if (unlikely(tmp_args_element_value_239 == NULL)) {
            tmp_args_element_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[276]);
        }

        if (tmp_args_element_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 324;
        {
            PyObject *call_args[] = {tmp_args_element_value_238, tmp_args_element_value_239};
            tmp_call_result_120 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_121, call_args);
        }

        if (tmp_call_result_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_call_result_121;
        PyObject *tmp_args_element_value_240;
        PyObject *tmp_args_element_value_241;
        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_122 == NULL)) {
            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_240 = mod_consts[296];
        tmp_args_element_value_241 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[284]);

        if (unlikely(tmp_args_element_value_241 == NULL)) {
            tmp_args_element_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[284]);
        }

        if (tmp_args_element_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = {tmp_args_element_value_240, tmp_args_element_value_241};
            tmp_call_result_121 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_122, call_args);
        }

        if (tmp_call_result_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_call_result_122;
        PyObject *tmp_args_element_value_242;
        PyObject *tmp_args_element_value_243;
        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_123 == NULL)) {
            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_242 = mod_consts[297];
        tmp_args_element_value_243 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[283]);

        if (unlikely(tmp_args_element_value_243 == NULL)) {
            tmp_args_element_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[283]);
        }

        if (tmp_args_element_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_242, tmp_args_element_value_243};
            tmp_call_result_122 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_123, call_args);
        }

        if (tmp_call_result_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[298];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[299];
        tmp_level_value_18 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 329;
        tmp_assign_source_125 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_14__module == NULL);
        tmp_import_from_14__module = tmp_assign_source_125;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_import_name_from_98;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_98 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_98)) {
            tmp_assign_source_126 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_98,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[300],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_126 = IMPORT_NAME(tmp_import_name_from_98, mod_consts[300]);
        }

        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_import_name_from_99;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_99 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_99)) {
            tmp_assign_source_127 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_99,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[301],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_127 = IMPORT_NAME(tmp_import_name_from_99, mod_consts[301]);
        }

        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_100;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_100 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_100)) {
            tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_100,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[302],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_128 = IMPORT_NAME(tmp_import_name_from_100, mod_consts[302]);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_import_name_from_101;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_101 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_101)) {
            tmp_assign_source_129 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_101,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[303],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_129 = IMPORT_NAME(tmp_import_name_from_101, mod_consts[303]);
        }

        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_129);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_call_result_123;
        PyObject *tmp_args_element_value_244;
        PyObject *tmp_args_element_value_245;
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_244 = mod_consts[304];
        tmp_args_element_value_245 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_args_element_value_245 == NULL)) {
            tmp_args_element_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[300]);
        }

        if (tmp_args_element_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 336;
        {
            PyObject *call_args[] = {tmp_args_element_value_244, tmp_args_element_value_245};
            tmp_call_result_123 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_124, call_args);
        }

        if (tmp_call_result_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_call_result_124;
        PyObject *tmp_args_element_value_246;
        PyObject *tmp_args_element_value_247;
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_246 = mod_consts[305];
        tmp_args_element_value_247 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_args_element_value_247 == NULL)) {
            tmp_args_element_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[300]);
        }

        if (tmp_args_element_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = {tmp_args_element_value_246, tmp_args_element_value_247};
            tmp_call_result_124 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_125, call_args);
        }

        if (tmp_call_result_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_call_result_125;
        PyObject *tmp_args_element_value_248;
        PyObject *tmp_args_element_value_249;
        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_126 == NULL)) {
            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_248 = mod_consts[306];
        tmp_args_element_value_249 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[303]);

        if (unlikely(tmp_args_element_value_249 == NULL)) {
            tmp_args_element_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[303]);
        }

        if (tmp_args_element_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 338;
        {
            PyObject *call_args[] = {tmp_args_element_value_248, tmp_args_element_value_249};
            tmp_call_result_125 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_126, call_args);
        }

        if (tmp_call_result_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_call_result_126;
        PyObject *tmp_args_element_value_250;
        PyObject *tmp_args_element_value_251;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_250 = mod_consts[307];
        tmp_args_element_value_251 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[301]);

        if (unlikely(tmp_args_element_value_251 == NULL)) {
            tmp_args_element_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[301]);
        }

        if (tmp_args_element_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 339;
        {
            PyObject *call_args[] = {tmp_args_element_value_250, tmp_args_element_value_251};
            tmp_call_result_126 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_127, call_args);
        }

        if (tmp_call_result_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_value_128;
        PyObject *tmp_call_result_127;
        PyObject *tmp_args_element_value_252;
        PyObject *tmp_args_element_value_253;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_252 = mod_consts[308];
        tmp_args_element_value_253 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[302]);

        if (unlikely(tmp_args_element_value_253 == NULL)) {
            tmp_args_element_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[302]);
        }

        if (tmp_args_element_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 340;
        {
            PyObject *call_args[] = {tmp_args_element_value_252, tmp_args_element_value_253};
            tmp_call_result_127 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_128, call_args);
        }

        if (tmp_call_result_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[309];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[310];
        tmp_level_value_19 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 343;
        tmp_assign_source_130 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_15__module == NULL);
        tmp_import_from_15__module = tmp_assign_source_130;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_import_name_from_102;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_102 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_102)) {
            tmp_assign_source_131 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_102,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[311],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_131 = IMPORT_NAME(tmp_import_name_from_102, mod_consts[311]);
        }

        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_import_name_from_103;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_103 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_103)) {
            tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_103,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[312],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_132 = IMPORT_NAME(tmp_import_name_from_103, mod_consts[312]);
        }

        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_import_name_from_104;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_104 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_104)) {
            tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_104,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[313],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_133 = IMPORT_NAME(tmp_import_name_from_104, mod_consts[313]);
        }

        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_import_name_from_105;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_105 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_105)) {
            tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_105,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[314],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_134 = IMPORT_NAME(tmp_import_name_from_105, mod_consts[314]);
        }

        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_106;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_106 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_106)) {
            tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_106,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[315],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_135 = IMPORT_NAME(tmp_import_name_from_106, mod_consts[315]);
        }

        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_135);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_call_result_128;
        PyObject *tmp_args_element_value_254;
        PyObject *tmp_args_element_value_255;
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_254 = mod_consts[316];
        tmp_args_element_value_255 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[311]);

        if (unlikely(tmp_args_element_value_255 == NULL)) {
            tmp_args_element_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[311]);
        }

        if (tmp_args_element_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = {tmp_args_element_value_254, tmp_args_element_value_255};
            tmp_call_result_128 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_129, call_args);
        }

        if (tmp_call_result_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_call_result_129;
        PyObject *tmp_args_element_value_256;
        PyObject *tmp_args_element_value_257;
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_256 = mod_consts[317];
        tmp_args_element_value_257 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_args_element_value_257 == NULL)) {
            tmp_args_element_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[312]);
        }

        if (tmp_args_element_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_256, tmp_args_element_value_257};
            tmp_call_result_129 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_130, call_args);
        }

        if (tmp_call_result_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_value_131;
        PyObject *tmp_call_result_130;
        PyObject *tmp_args_element_value_258;
        PyObject *tmp_args_element_value_259;
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_258 = mod_consts[318];
        tmp_args_element_value_259 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[313]);

        if (unlikely(tmp_args_element_value_259 == NULL)) {
            tmp_args_element_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[313]);
        }

        if (tmp_args_element_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = {tmp_args_element_value_258, tmp_args_element_value_259};
            tmp_call_result_130 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_131, call_args);
        }

        if (tmp_call_result_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_call_result_131;
        PyObject *tmp_args_element_value_260;
        PyObject *tmp_args_element_value_261;
        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_132 == NULL)) {
            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_260 = mod_consts[319];
        tmp_args_element_value_261 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[314]);

        if (unlikely(tmp_args_element_value_261 == NULL)) {
            tmp_args_element_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[314]);
        }

        if (tmp_args_element_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_260, tmp_args_element_value_261};
            tmp_call_result_131 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_132, call_args);
        }

        if (tmp_call_result_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_value_133;
        PyObject *tmp_call_result_132;
        PyObject *tmp_args_element_value_262;
        PyObject *tmp_args_element_value_263;
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_262 = mod_consts[320];
        tmp_args_element_value_263 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[315]);

        if (unlikely(tmp_args_element_value_263 == NULL)) {
            tmp_args_element_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[315]);
        }

        if (tmp_args_element_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = {tmp_args_element_value_262, tmp_args_element_value_263};
            tmp_call_result_132 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_133, call_args);
        }

        if (tmp_call_result_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[321];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[322];
        tmp_level_value_20 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 358;
        tmp_assign_source_136 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_16__module == NULL);
        tmp_import_from_16__module = tmp_assign_source_136;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_import_name_from_107;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_107 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_107)) {
            tmp_assign_source_137 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_107,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[323],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_137 = IMPORT_NAME(tmp_import_name_from_107, mod_consts[323]);
        }

        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_import_name_from_108;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_108 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_108)) {
            tmp_assign_source_138 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_108,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[324],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_138 = IMPORT_NAME(tmp_import_name_from_108, mod_consts[324]);
        }

        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_import_name_from_109;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_109 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_109)) {
            tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_109,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[325],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_139 = IMPORT_NAME(tmp_import_name_from_109, mod_consts[325]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_139);
    }
    goto try_end_15;
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

    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_call_result_133;
        PyObject *tmp_args_element_value_264;
        PyObject *tmp_args_element_value_265;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_264 = mod_consts[326];
        tmp_args_element_value_265 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[323]);

        if (unlikely(tmp_args_element_value_265 == NULL)) {
            tmp_args_element_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[323]);
        }

        if (tmp_args_element_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_264, tmp_args_element_value_265};
            tmp_call_result_133 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_134, call_args);
        }

        if (tmp_call_result_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_call_result_134;
        PyObject *tmp_args_element_value_266;
        PyObject *tmp_args_element_value_267;
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_266 = mod_consts[327];
        tmp_args_element_value_267 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_args_element_value_267 == NULL)) {
            tmp_args_element_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[325]);
        }

        if (tmp_args_element_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = {tmp_args_element_value_266, tmp_args_element_value_267};
            tmp_call_result_134 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_135, call_args);
        }

        if (tmp_call_result_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_call_result_135;
        PyObject *tmp_args_element_value_268;
        PyObject *tmp_args_element_value_269;
        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_136 == NULL)) {
            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_268 = mod_consts[328];
        tmp_args_element_value_269 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[324]);

        if (unlikely(tmp_args_element_value_269 == NULL)) {
            tmp_args_element_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[324]);
        }

        if (tmp_args_element_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = {tmp_args_element_value_268, tmp_args_element_value_269};
            tmp_call_result_135 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_136, call_args);
        }

        if (tmp_call_result_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_call_result_136;
        PyObject *tmp_args_element_value_270;
        PyObject *tmp_args_element_value_271;
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_270 = mod_consts[329];
        tmp_args_element_value_271 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[323]);

        if (unlikely(tmp_args_element_value_271 == NULL)) {
            tmp_args_element_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[323]);
        }

        if (tmp_args_element_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = {tmp_args_element_value_270, tmp_args_element_value_271};
            tmp_call_result_136 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_137, call_args);
        }

        if (tmp_call_result_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[330];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[331];
        tmp_level_value_21 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 370;
        tmp_assign_source_140 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_17__module == NULL);
        tmp_import_from_17__module = tmp_assign_source_140;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_import_name_from_110;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_110 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_110)) {
            tmp_assign_source_141 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_110,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[332],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_141 = IMPORT_NAME(tmp_import_name_from_110, mod_consts[332]);
        }

        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_import_name_from_111;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_111 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_111)) {
            tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_111,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[333],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_142 = IMPORT_NAME(tmp_import_name_from_111, mod_consts[333]);
        }

        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_142);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_17__module);
    Py_DECREF(tmp_import_from_17__module);
    tmp_import_from_17__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_import_from_17__module);
    Py_DECREF(tmp_import_from_17__module);
    tmp_import_from_17__module = NULL;
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_call_result_137;
        PyObject *tmp_args_element_value_272;
        PyObject *tmp_args_element_value_273;
        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_138 == NULL)) {
            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_272 = mod_consts[334];
        tmp_args_element_value_273 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_args_element_value_273 == NULL)) {
            tmp_args_element_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
        }

        if (tmp_args_element_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 372;
        {
            PyObject *call_args[] = {tmp_args_element_value_272, tmp_args_element_value_273};
            tmp_call_result_137 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_138, call_args);
        }

        if (tmp_call_result_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_value_139;
        PyObject *tmp_call_result_138;
        PyObject *tmp_args_element_value_274;
        PyObject *tmp_args_element_value_275;
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_274 = mod_consts[335];
        tmp_args_element_value_275 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[333]);

        if (unlikely(tmp_args_element_value_275 == NULL)) {
            tmp_args_element_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[333]);
        }

        if (tmp_args_element_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 373;
        {
            PyObject *call_args[] = {tmp_args_element_value_274, tmp_args_element_value_275};
            tmp_call_result_138 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_139, call_args);
        }

        if (tmp_call_result_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_value_140;
        PyObject *tmp_call_result_139;
        PyObject *tmp_args_element_value_276;
        PyObject *tmp_args_element_value_277;
        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_140 == NULL)) {
            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_276 = mod_consts[336];
        tmp_args_element_value_277 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[332]);

        if (unlikely(tmp_args_element_value_277 == NULL)) {
            tmp_args_element_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[332]);
        }

        if (tmp_args_element_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_value_276, tmp_args_element_value_277};
            tmp_call_result_139 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_140, call_args);
        }

        if (tmp_call_result_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[337];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[338];
        tmp_level_value_22 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 377;
        tmp_assign_source_143 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_18__module == NULL);
        tmp_import_from_18__module = tmp_assign_source_143;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_import_name_from_112;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_112 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_112)) {
            tmp_assign_source_144 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_112,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[339],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_144 = IMPORT_NAME(tmp_import_name_from_112, mod_consts[339]);
        }

        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_import_name_from_113;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_113 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_113)) {
            tmp_assign_source_145 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_113,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[340],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_145 = IMPORT_NAME(tmp_import_name_from_113, mod_consts[340]);
        }

        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_import_name_from_114;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_114 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_114)) {
            tmp_assign_source_146 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_114,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[341],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_146 = IMPORT_NAME(tmp_import_name_from_114, mod_consts[341]);
        }

        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_import_name_from_115;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_115 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_115)) {
            tmp_assign_source_147 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_115,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[342],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_147 = IMPORT_NAME(tmp_import_name_from_115, mod_consts[342]);
        }

        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_import_name_from_116;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_116 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_116)) {
            tmp_assign_source_148 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_116,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[343],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_148 = IMPORT_NAME(tmp_import_name_from_116, mod_consts[343]);
        }

        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_import_name_from_117;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_117 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_117)) {
            tmp_assign_source_149 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_117,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[344],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_149 = IMPORT_NAME(tmp_import_name_from_117, mod_consts[344]);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_import_name_from_118;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_118 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_118)) {
            tmp_assign_source_150 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_118,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[345],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_150 = IMPORT_NAME(tmp_import_name_from_118, mod_consts[345]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_import_name_from_119;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_119 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_119)) {
            tmp_assign_source_151 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_119,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[346],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_151 = IMPORT_NAME(tmp_import_name_from_119, mod_consts[346]);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_151);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_18__module);
    Py_DECREF(tmp_import_from_18__module);
    tmp_import_from_18__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_import_from_18__module);
    Py_DECREF(tmp_import_from_18__module);
    tmp_import_from_18__module = NULL;
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_call_result_140;
        PyObject *tmp_args_element_value_278;
        PyObject *tmp_args_element_value_279;
        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_141 == NULL)) {
            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_278 = mod_consts[347];
        tmp_args_element_value_279 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[344]);

        if (unlikely(tmp_args_element_value_279 == NULL)) {
            tmp_args_element_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[344]);
        }

        if (tmp_args_element_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = {tmp_args_element_value_278, tmp_args_element_value_279};
            tmp_call_result_140 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_141, call_args);
        }

        if (tmp_call_result_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_value_142;
        PyObject *tmp_call_result_141;
        PyObject *tmp_args_element_value_280;
        PyObject *tmp_args_element_value_281;
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_280 = mod_consts[348];
        tmp_args_element_value_281 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_args_element_value_281 == NULL)) {
            tmp_args_element_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[343]);
        }

        if (tmp_args_element_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = {tmp_args_element_value_280, tmp_args_element_value_281};
            tmp_call_result_141 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_142, call_args);
        }

        if (tmp_call_result_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_value_143;
        PyObject *tmp_call_result_142;
        PyObject *tmp_args_element_value_282;
        PyObject *tmp_args_element_value_283;
        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_143 == NULL)) {
            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_282 = mod_consts[349];
        tmp_args_element_value_283 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[344]);

        if (unlikely(tmp_args_element_value_283 == NULL)) {
            tmp_args_element_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[344]);
        }

        if (tmp_args_element_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = {tmp_args_element_value_282, tmp_args_element_value_283};
            tmp_call_result_142 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_143, call_args);
        }

        if (tmp_call_result_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_value_144;
        PyObject *tmp_call_result_143;
        PyObject *tmp_args_element_value_284;
        PyObject *tmp_args_element_value_285;
        tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_144 == NULL)) {
            tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_284 = mod_consts[350];
        tmp_args_element_value_285 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[340]);

        if (unlikely(tmp_args_element_value_285 == NULL)) {
            tmp_args_element_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[340]);
        }

        if (tmp_args_element_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = {tmp_args_element_value_284, tmp_args_element_value_285};
            tmp_call_result_143 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_144, call_args);
        }

        if (tmp_call_result_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_called_value_145;
        PyObject *tmp_call_result_144;
        PyObject *tmp_args_element_value_286;
        PyObject *tmp_args_element_value_287;
        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_145 == NULL)) {
            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_286 = mod_consts[351];
        tmp_args_element_value_287 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_args_element_value_287 == NULL)) {
            tmp_args_element_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[343]);
        }

        if (tmp_args_element_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_286, tmp_args_element_value_287};
            tmp_call_result_144 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_145, call_args);
        }

        if (tmp_call_result_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_value_146;
        PyObject *tmp_call_result_145;
        PyObject *tmp_args_element_value_288;
        PyObject *tmp_args_element_value_289;
        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_146 == NULL)) {
            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_288 = mod_consts[352];
        tmp_args_element_value_289 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[346]);

        if (unlikely(tmp_args_element_value_289 == NULL)) {
            tmp_args_element_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[346]);
        }

        if (tmp_args_element_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_288, tmp_args_element_value_289};
            tmp_call_result_145 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_146, call_args);
        }

        if (tmp_call_result_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_called_value_147;
        PyObject *tmp_call_result_146;
        PyObject *tmp_args_element_value_290;
        PyObject *tmp_args_element_value_291;
        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_147 == NULL)) {
            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_290 = mod_consts[353];
        tmp_args_element_value_291 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[345]);

        if (unlikely(tmp_args_element_value_291 == NULL)) {
            tmp_args_element_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[345]);
        }

        if (tmp_args_element_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = {tmp_args_element_value_290, tmp_args_element_value_291};
            tmp_call_result_146 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_147, call_args);
        }

        if (tmp_call_result_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_called_value_148;
        PyObject *tmp_call_result_147;
        PyObject *tmp_args_element_value_292;
        PyObject *tmp_args_element_value_293;
        tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_148 == NULL)) {
            tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_292 = mod_consts[354];
        tmp_args_element_value_293 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[341]);

        if (unlikely(tmp_args_element_value_293 == NULL)) {
            tmp_args_element_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[341]);
        }

        if (tmp_args_element_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = {tmp_args_element_value_292, tmp_args_element_value_293};
            tmp_call_result_147 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_148, call_args);
        }

        if (tmp_call_result_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_value_149;
        PyObject *tmp_call_result_148;
        PyObject *tmp_args_element_value_294;
        PyObject *tmp_args_element_value_295;
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_294 = mod_consts[355];
        tmp_args_element_value_295 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[339]);

        if (unlikely(tmp_args_element_value_295 == NULL)) {
            tmp_args_element_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[339]);
        }

        if (tmp_args_element_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = {tmp_args_element_value_294, tmp_args_element_value_295};
            tmp_call_result_148 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_149, call_args);
        }

        if (tmp_call_result_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_value_150;
        PyObject *tmp_call_result_149;
        PyObject *tmp_args_element_value_296;
        PyObject *tmp_args_element_value_297;
        tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_150 == NULL)) {
            tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_296 = mod_consts[356];
        tmp_args_element_value_297 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[342]);

        if (unlikely(tmp_args_element_value_297 == NULL)) {
            tmp_args_element_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[342]);
        }

        if (tmp_args_element_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_296, tmp_args_element_value_297};
            tmp_call_result_149 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_150, call_args);
        }

        if (tmp_call_result_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_value_151;
        PyObject *tmp_call_result_150;
        PyObject *tmp_args_element_value_298;
        PyObject *tmp_args_element_value_299;
        tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_151 == NULL)) {
            tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_298 = mod_consts[357];
        tmp_args_element_value_299 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[345]);

        if (unlikely(tmp_args_element_value_299 == NULL)) {
            tmp_args_element_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[345]);
        }

        if (tmp_args_element_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 398;
        {
            PyObject *call_args[] = {tmp_args_element_value_298, tmp_args_element_value_299};
            tmp_call_result_150 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_151, call_args);
        }

        if (tmp_call_result_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_called_value_152;
        PyObject *tmp_call_result_151;
        PyObject *tmp_args_element_value_300;
        PyObject *tmp_args_element_value_301;
        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_152 == NULL)) {
            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_300 = mod_consts[358];
        tmp_args_element_value_301 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[346]);

        if (unlikely(tmp_args_element_value_301 == NULL)) {
            tmp_args_element_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[346]);
        }

        if (tmp_args_element_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = {tmp_args_element_value_300, tmp_args_element_value_301};
            tmp_call_result_151 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_152, call_args);
        }

        if (tmp_call_result_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[359];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[360];
        tmp_level_value_23 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 402;
        tmp_assign_source_152 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_19__module == NULL);
        tmp_import_from_19__module = tmp_assign_source_152;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_import_name_from_120;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_120 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_120)) {
            tmp_assign_source_153 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_120,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[361],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_153 = IMPORT_NAME(tmp_import_name_from_120, mod_consts[361]);
        }

        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_import_name_from_121;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_121 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_121)) {
            tmp_assign_source_154 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_121,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[362],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_154 = IMPORT_NAME(tmp_import_name_from_121, mod_consts[362]);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_import_name_from_122;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_122 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_122)) {
            tmp_assign_source_155 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_122,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[363],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_155 = IMPORT_NAME(tmp_import_name_from_122, mod_consts[363]);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_import_name_from_123;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_123 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_123)) {
            tmp_assign_source_156 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_123,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[364],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_156 = IMPORT_NAME(tmp_import_name_from_123, mod_consts[364]);
        }

        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_124;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_124 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_124)) {
            tmp_assign_source_157 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_124,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[365],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_157 = IMPORT_NAME(tmp_import_name_from_124, mod_consts[365]);
        }

        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_import_name_from_125;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_125 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_125)) {
            tmp_assign_source_158 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_125,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[366],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_158 = IMPORT_NAME(tmp_import_name_from_125, mod_consts[366]);
        }

        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_import_name_from_126;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_126 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_126)) {
            tmp_assign_source_159 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_126,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[367],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_159 = IMPORT_NAME(tmp_import_name_from_126, mod_consts[367]);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_import_name_from_127;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_127 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_127)) {
            tmp_assign_source_160 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_127,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[368],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_160 = IMPORT_NAME(tmp_import_name_from_127, mod_consts[368]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_import_name_from_128;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_128 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_128)) {
            tmp_assign_source_161 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_128,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[369],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_161 = IMPORT_NAME(tmp_import_name_from_128, mod_consts[369]);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_import_name_from_129;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_129 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_129)) {
            tmp_assign_source_162 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_129,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[370],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_162 = IMPORT_NAME(tmp_import_name_from_129, mod_consts[370]);
        }

        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_import_name_from_130;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_130 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_130)) {
            tmp_assign_source_163 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_130,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[371],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_163 = IMPORT_NAME(tmp_import_name_from_130, mod_consts[371]);
        }

        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_import_name_from_131;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_131 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_131)) {
            tmp_assign_source_164 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_131,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[372],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_164 = IMPORT_NAME(tmp_import_name_from_131, mod_consts[372]);
        }

        if (tmp_assign_source_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_import_name_from_132;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_132 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_132)) {
            tmp_assign_source_165 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_132,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[373],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_165 = IMPORT_NAME(tmp_import_name_from_132, mod_consts[373]);
        }

        if (tmp_assign_source_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_165);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_19__module);
    Py_DECREF(tmp_import_from_19__module);
    tmp_import_from_19__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_import_from_19__module);
    Py_DECREF(tmp_import_from_19__module);
    tmp_import_from_19__module = NULL;
    {
        PyObject *tmp_called_value_153;
        PyObject *tmp_call_result_152;
        PyObject *tmp_args_element_value_302;
        PyObject *tmp_args_element_value_303;
        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_153 == NULL)) {
            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_302 = mod_consts[374];
        tmp_args_element_value_303 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[361]);

        if (unlikely(tmp_args_element_value_303 == NULL)) {
            tmp_args_element_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[361]);
        }

        if (tmp_args_element_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = {tmp_args_element_value_302, tmp_args_element_value_303};
            tmp_call_result_152 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_153, call_args);
        }

        if (tmp_call_result_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_value_154;
        PyObject *tmp_call_result_153;
        PyObject *tmp_args_element_value_304;
        PyObject *tmp_args_element_value_305;
        tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_154 == NULL)) {
            tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_304 = mod_consts[375];
        tmp_args_element_value_305 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[362]);

        if (unlikely(tmp_args_element_value_305 == NULL)) {
            tmp_args_element_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[362]);
        }

        if (tmp_args_element_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = {tmp_args_element_value_304, tmp_args_element_value_305};
            tmp_call_result_153 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_154, call_args);
        }

        if (tmp_call_result_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_value_155;
        PyObject *tmp_call_result_154;
        PyObject *tmp_args_element_value_306;
        PyObject *tmp_args_element_value_307;
        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_155 == NULL)) {
            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_306 = mod_consts[376];
        tmp_args_element_value_307 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[372]);

        if (unlikely(tmp_args_element_value_307 == NULL)) {
            tmp_args_element_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[372]);
        }

        if (tmp_args_element_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 420;
        {
            PyObject *call_args[] = {tmp_args_element_value_306, tmp_args_element_value_307};
            tmp_call_result_154 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_155, call_args);
        }

        if (tmp_call_result_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }
    {
        PyObject *tmp_called_value_156;
        PyObject *tmp_call_result_155;
        PyObject *tmp_args_element_value_308;
        PyObject *tmp_args_element_value_309;
        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_156 == NULL)) {
            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_308 = mod_consts[377];
        tmp_args_element_value_309 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[363]);

        if (unlikely(tmp_args_element_value_309 == NULL)) {
            tmp_args_element_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[363]);
        }

        if (tmp_args_element_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = {tmp_args_element_value_308, tmp_args_element_value_309};
            tmp_call_result_155 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_156, call_args);
        }

        if (tmp_call_result_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_155);
    }
    {
        PyObject *tmp_called_value_157;
        PyObject *tmp_call_result_156;
        PyObject *tmp_args_element_value_310;
        PyObject *tmp_args_element_value_311;
        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_157 == NULL)) {
            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_310 = mod_consts[378];
        tmp_args_element_value_311 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[365]);

        if (unlikely(tmp_args_element_value_311 == NULL)) {
            tmp_args_element_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[365]);
        }

        if (tmp_args_element_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = {tmp_args_element_value_310, tmp_args_element_value_311};
            tmp_call_result_156 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_157, call_args);
        }

        if (tmp_call_result_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_156);
    }
    {
        PyObject *tmp_called_value_158;
        PyObject *tmp_call_result_157;
        PyObject *tmp_args_element_value_312;
        PyObject *tmp_args_element_value_313;
        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_158 == NULL)) {
            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_312 = mod_consts[379];
        tmp_args_element_value_313 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[364]);

        if (unlikely(tmp_args_element_value_313 == NULL)) {
            tmp_args_element_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[364]);
        }

        if (tmp_args_element_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = {tmp_args_element_value_312, tmp_args_element_value_313};
            tmp_call_result_157 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_158, call_args);
        }

        if (tmp_call_result_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_157);
    }
    {
        PyObject *tmp_called_value_159;
        PyObject *tmp_call_result_158;
        PyObject *tmp_args_element_value_314;
        PyObject *tmp_args_element_value_315;
        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_159 == NULL)) {
            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_314 = mod_consts[380];
        tmp_args_element_value_315 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[366]);

        if (unlikely(tmp_args_element_value_315 == NULL)) {
            tmp_args_element_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[366]);
        }

        if (tmp_args_element_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = {tmp_args_element_value_314, tmp_args_element_value_315};
            tmp_call_result_158 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_159, call_args);
        }

        if (tmp_call_result_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_158);
    }
    {
        PyObject *tmp_called_value_160;
        PyObject *tmp_call_result_159;
        PyObject *tmp_args_element_value_316;
        PyObject *tmp_args_element_value_317;
        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_160 == NULL)) {
            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_316 = mod_consts[381];
        tmp_args_element_value_317 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[367]);

        if (unlikely(tmp_args_element_value_317 == NULL)) {
            tmp_args_element_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[367]);
        }

        if (tmp_args_element_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_value_316, tmp_args_element_value_317};
            tmp_call_result_159 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_160, call_args);
        }

        if (tmp_call_result_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_159);
    }
    {
        PyObject *tmp_called_value_161;
        PyObject *tmp_call_result_160;
        PyObject *tmp_args_element_value_318;
        PyObject *tmp_args_element_value_319;
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_318 = mod_consts[382];
        tmp_args_element_value_319 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[369]);

        if (unlikely(tmp_args_element_value_319 == NULL)) {
            tmp_args_element_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[369]);
        }

        if (tmp_args_element_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = {tmp_args_element_value_318, tmp_args_element_value_319};
            tmp_call_result_160 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_161, call_args);
        }

        if (tmp_call_result_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_160);
    }
    {
        PyObject *tmp_called_value_162;
        PyObject *tmp_call_result_161;
        PyObject *tmp_args_element_value_320;
        PyObject *tmp_args_element_value_321;
        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_162 == NULL)) {
            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_320 = mod_consts[383];
        tmp_args_element_value_321 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[368]);

        if (unlikely(tmp_args_element_value_321 == NULL)) {
            tmp_args_element_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[368]);
        }

        if (tmp_args_element_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = {tmp_args_element_value_320, tmp_args_element_value_321};
            tmp_call_result_161 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_162, call_args);
        }

        if (tmp_call_result_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_161);
    }
    {
        PyObject *tmp_called_value_163;
        PyObject *tmp_call_result_162;
        PyObject *tmp_args_element_value_322;
        PyObject *tmp_args_element_value_323;
        tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_163 == NULL)) {
            tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_322 = mod_consts[384];
        tmp_args_element_value_323 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[370]);

        if (unlikely(tmp_args_element_value_323 == NULL)) {
            tmp_args_element_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[370]);
        }

        if (tmp_args_element_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = {tmp_args_element_value_322, tmp_args_element_value_323};
            tmp_call_result_162 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_163, call_args);
        }

        if (tmp_call_result_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_162);
    }
    {
        PyObject *tmp_called_value_164;
        PyObject *tmp_call_result_163;
        PyObject *tmp_args_element_value_324;
        PyObject *tmp_args_element_value_325;
        tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_164 == NULL)) {
            tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_324 = mod_consts[385];
        tmp_args_element_value_325 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[371]);

        if (unlikely(tmp_args_element_value_325 == NULL)) {
            tmp_args_element_value_325 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[371]);
        }

        if (tmp_args_element_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = {tmp_args_element_value_324, tmp_args_element_value_325};
            tmp_call_result_163 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_164, call_args);
        }

        if (tmp_call_result_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_163);
    }
    {
        PyObject *tmp_called_value_165;
        PyObject *tmp_call_result_164;
        PyObject *tmp_args_element_value_326;
        PyObject *tmp_args_element_value_327;
        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_165 == NULL)) {
            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_326 = mod_consts[386];
        tmp_args_element_value_327 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[373]);

        if (unlikely(tmp_args_element_value_327 == NULL)) {
            tmp_args_element_value_327 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[373]);
        }

        if (tmp_args_element_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 430;
        {
            PyObject *call_args[] = {tmp_args_element_value_326, tmp_args_element_value_327};
            tmp_call_result_164 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_165, call_args);
        }

        if (tmp_call_result_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_164);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[387];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[388];
        tmp_level_value_24 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 433;
        tmp_assign_source_166 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_20__module == NULL);
        tmp_import_from_20__module = tmp_assign_source_166;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_import_name_from_133;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_133 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_133)) {
            tmp_assign_source_167 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_133,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[389],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_167 = IMPORT_NAME(tmp_import_name_from_133, mod_consts[389]);
        }

        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_import_name_from_134;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_134 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_134)) {
            tmp_assign_source_168 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_134,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[390],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_168 = IMPORT_NAME(tmp_import_name_from_134, mod_consts[390]);
        }

        if (tmp_assign_source_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_import_name_from_135;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_135 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_135)) {
            tmp_assign_source_169 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_135,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[391],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_169 = IMPORT_NAME(tmp_import_name_from_135, mod_consts[391]);
        }

        if (tmp_assign_source_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_import_name_from_136;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_136 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_136)) {
            tmp_assign_source_170 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_136,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[392],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_170 = IMPORT_NAME(tmp_import_name_from_136, mod_consts[392]);
        }

        if (tmp_assign_source_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_import_name_from_137;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_137 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_137)) {
            tmp_assign_source_171 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_137,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[393],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_171 = IMPORT_NAME(tmp_import_name_from_137, mod_consts[393]);
        }

        if (tmp_assign_source_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_import_name_from_138;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_138 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_138)) {
            tmp_assign_source_172 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_138,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[394],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_172 = IMPORT_NAME(tmp_import_name_from_138, mod_consts[394]);
        }

        if (tmp_assign_source_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_import_name_from_139;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_139 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_139)) {
            tmp_assign_source_173 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_139,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[395],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_173 = IMPORT_NAME(tmp_import_name_from_139, mod_consts[395]);
        }

        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_173);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_20__module);
    Py_DECREF(tmp_import_from_20__module);
    tmp_import_from_20__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_import_from_20__module);
    Py_DECREF(tmp_import_from_20__module);
    tmp_import_from_20__module = NULL;
    {
        PyObject *tmp_called_value_166;
        PyObject *tmp_call_result_165;
        PyObject *tmp_args_element_value_328;
        PyObject *tmp_args_element_value_329;
        tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_166 == NULL)) {
            tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_328 = mod_consts[396];
        tmp_args_element_value_329 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[392]);

        if (unlikely(tmp_args_element_value_329 == NULL)) {
            tmp_args_element_value_329 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[392]);
        }

        if (tmp_args_element_value_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = {tmp_args_element_value_328, tmp_args_element_value_329};
            tmp_call_result_165 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_166, call_args);
        }

        if (tmp_call_result_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_165);
    }
    {
        PyObject *tmp_called_value_167;
        PyObject *tmp_call_result_166;
        PyObject *tmp_args_element_value_330;
        PyObject *tmp_args_element_value_331;
        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_167 == NULL)) {
            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_330 = mod_consts[397];
        tmp_args_element_value_331 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[389]);

        if (unlikely(tmp_args_element_value_331 == NULL)) {
            tmp_args_element_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[389]);
        }

        if (tmp_args_element_value_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = {tmp_args_element_value_330, tmp_args_element_value_331};
            tmp_call_result_166 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_167, call_args);
        }

        if (tmp_call_result_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_166);
    }
    {
        PyObject *tmp_called_value_168;
        PyObject *tmp_call_result_167;
        PyObject *tmp_args_element_value_332;
        PyObject *tmp_args_element_value_333;
        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_168 == NULL)) {
            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_332 = mod_consts[398];
        tmp_args_element_value_333 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[393]);

        if (unlikely(tmp_args_element_value_333 == NULL)) {
            tmp_args_element_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[393]);
        }

        if (tmp_args_element_value_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 445;
        {
            PyObject *call_args[] = {tmp_args_element_value_332, tmp_args_element_value_333};
            tmp_call_result_167 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_168, call_args);
        }

        if (tmp_call_result_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_167);
    }
    {
        PyObject *tmp_called_value_169;
        PyObject *tmp_call_result_168;
        PyObject *tmp_args_element_value_334;
        PyObject *tmp_args_element_value_335;
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_334 = mod_consts[399];
        tmp_args_element_value_335 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[394]);

        if (unlikely(tmp_args_element_value_335 == NULL)) {
            tmp_args_element_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[394]);
        }

        if (tmp_args_element_value_335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = {tmp_args_element_value_334, tmp_args_element_value_335};
            tmp_call_result_168 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_169, call_args);
        }

        if (tmp_call_result_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_168);
    }
    {
        PyObject *tmp_called_value_170;
        PyObject *tmp_call_result_169;
        PyObject *tmp_args_element_value_336;
        PyObject *tmp_args_element_value_337;
        tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_170 == NULL)) {
            tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_336 = mod_consts[400];
        tmp_args_element_value_337 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[390]);

        if (unlikely(tmp_args_element_value_337 == NULL)) {
            tmp_args_element_value_337 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[390]);
        }

        if (tmp_args_element_value_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 447;
        {
            PyObject *call_args[] = {tmp_args_element_value_336, tmp_args_element_value_337};
            tmp_call_result_169 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_170, call_args);
        }

        if (tmp_call_result_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_169);
    }
    {
        PyObject *tmp_called_value_171;
        PyObject *tmp_call_result_170;
        PyObject *tmp_args_element_value_338;
        PyObject *tmp_args_element_value_339;
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_338 = mod_consts[401];
        tmp_args_element_value_339 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[391]);

        if (unlikely(tmp_args_element_value_339 == NULL)) {
            tmp_args_element_value_339 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[391]);
        }

        if (tmp_args_element_value_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 448;
        {
            PyObject *call_args[] = {tmp_args_element_value_338, tmp_args_element_value_339};
            tmp_call_result_170 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_171, call_args);
        }

        if (tmp_call_result_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_170);
    }
    {
        PyObject *tmp_called_value_172;
        PyObject *tmp_call_result_171;
        PyObject *tmp_args_element_value_340;
        PyObject *tmp_args_element_value_341;
        tmp_called_value_172 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_172 == NULL)) {
            tmp_called_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_340 = mod_consts[402];
        tmp_args_element_value_341 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[395]);

        if (unlikely(tmp_args_element_value_341 == NULL)) {
            tmp_args_element_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[395]);
        }

        if (tmp_args_element_value_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_340, tmp_args_element_value_341};
            tmp_call_result_171 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_172, call_args);
        }

        if (tmp_call_result_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_171);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[403];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[404];
        tmp_level_value_25 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 452;
        tmp_assign_source_174 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_21__module == NULL);
        tmp_import_from_21__module = tmp_assign_source_174;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_import_name_from_140;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_140 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_140)) {
            tmp_assign_source_175 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_140,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[405],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_175 = IMPORT_NAME(tmp_import_name_from_140, mod_consts[405]);
        }

        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_import_name_from_141;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_141 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_141)) {
            tmp_assign_source_176 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_141,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[406],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_176 = IMPORT_NAME(tmp_import_name_from_141, mod_consts[406]);
        }

        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_import_name_from_142;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_142 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_142)) {
            tmp_assign_source_177 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_142,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[407],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_177 = IMPORT_NAME(tmp_import_name_from_142, mod_consts[407]);
        }

        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_import_name_from_143;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_143 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_143)) {
            tmp_assign_source_178 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_143,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[408],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_178 = IMPORT_NAME(tmp_import_name_from_143, mod_consts[408]);
        }

        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_import_name_from_144;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_144 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_144)) {
            tmp_assign_source_179 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_144,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[409],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_179 = IMPORT_NAME(tmp_import_name_from_144, mod_consts[409]);
        }

        if (tmp_assign_source_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_import_name_from_145;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_145 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_145)) {
            tmp_assign_source_180 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_145,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[410],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_180 = IMPORT_NAME(tmp_import_name_from_145, mod_consts[410]);
        }

        if (tmp_assign_source_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_import_name_from_146;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_146 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_146)) {
            tmp_assign_source_181 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_146,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[411],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_181 = IMPORT_NAME(tmp_import_name_from_146, mod_consts[411]);
        }

        if (tmp_assign_source_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_import_name_from_147;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_147 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_147)) {
            tmp_assign_source_182 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_147,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[412],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_182 = IMPORT_NAME(tmp_import_name_from_147, mod_consts[412]);
        }

        if (tmp_assign_source_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_import_name_from_148;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_148 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_148)) {
            tmp_assign_source_183 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_148,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[413],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_183 = IMPORT_NAME(tmp_import_name_from_148, mod_consts[413]);
        }

        if (tmp_assign_source_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_import_name_from_149;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_149 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_149)) {
            tmp_assign_source_184 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_149,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[414],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_184 = IMPORT_NAME(tmp_import_name_from_149, mod_consts[414]);
        }

        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_import_name_from_150;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_150 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_150)) {
            tmp_assign_source_185 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_150,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[415],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_185 = IMPORT_NAME(tmp_import_name_from_150, mod_consts[415]);
        }

        if (tmp_assign_source_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_import_name_from_151;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_151 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_151)) {
            tmp_assign_source_186 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_151,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[416],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_186 = IMPORT_NAME(tmp_import_name_from_151, mod_consts[416]);
        }

        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_import_name_from_152;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_152 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_152)) {
            tmp_assign_source_187 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_152,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[417],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_187 = IMPORT_NAME(tmp_import_name_from_152, mod_consts[417]);
        }

        if (tmp_assign_source_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_187);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_21__module);
    Py_DECREF(tmp_import_from_21__module);
    tmp_import_from_21__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_import_from_21__module);
    Py_DECREF(tmp_import_from_21__module);
    tmp_import_from_21__module = NULL;
    {
        PyObject *tmp_called_value_173;
        PyObject *tmp_call_result_172;
        PyObject *tmp_args_element_value_342;
        PyObject *tmp_args_element_value_343;
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_342 = mod_consts[418];
        tmp_args_element_value_343 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[407]);

        if (unlikely(tmp_args_element_value_343 == NULL)) {
            tmp_args_element_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[407]);
        }

        if (tmp_args_element_value_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 468;
        {
            PyObject *call_args[] = {tmp_args_element_value_342, tmp_args_element_value_343};
            tmp_call_result_172 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_173, call_args);
        }

        if (tmp_call_result_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_172);
    }
    {
        PyObject *tmp_called_value_174;
        PyObject *tmp_call_result_173;
        PyObject *tmp_args_element_value_344;
        PyObject *tmp_args_element_value_345;
        tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_174 == NULL)) {
            tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_344 = mod_consts[419];
        tmp_args_element_value_345 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[411]);

        if (unlikely(tmp_args_element_value_345 == NULL)) {
            tmp_args_element_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[411]);
        }

        if (tmp_args_element_value_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 469;
        {
            PyObject *call_args[] = {tmp_args_element_value_344, tmp_args_element_value_345};
            tmp_call_result_173 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_174, call_args);
        }

        if (tmp_call_result_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_173);
    }
    {
        PyObject *tmp_called_value_175;
        PyObject *tmp_call_result_174;
        PyObject *tmp_args_element_value_346;
        PyObject *tmp_args_element_value_347;
        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_175 == NULL)) {
            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_346 = mod_consts[420];
        tmp_args_element_value_347 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[408]);

        if (unlikely(tmp_args_element_value_347 == NULL)) {
            tmp_args_element_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[408]);
        }

        if (tmp_args_element_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 470;
        {
            PyObject *call_args[] = {tmp_args_element_value_346, tmp_args_element_value_347};
            tmp_call_result_174 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_175, call_args);
        }

        if (tmp_call_result_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_174);
    }
    {
        PyObject *tmp_called_value_176;
        PyObject *tmp_call_result_175;
        PyObject *tmp_args_element_value_348;
        PyObject *tmp_args_element_value_349;
        tmp_called_value_176 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_176 == NULL)) {
            tmp_called_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_348 = mod_consts[421];
        tmp_args_element_value_349 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[408]);

        if (unlikely(tmp_args_element_value_349 == NULL)) {
            tmp_args_element_value_349 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[408]);
        }

        if (tmp_args_element_value_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = {tmp_args_element_value_348, tmp_args_element_value_349};
            tmp_call_result_175 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_176, call_args);
        }

        if (tmp_call_result_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_175);
    }
    {
        PyObject *tmp_called_value_177;
        PyObject *tmp_call_result_176;
        PyObject *tmp_args_element_value_350;
        PyObject *tmp_args_element_value_351;
        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_177 == NULL)) {
            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_350 = mod_consts[422];
        tmp_args_element_value_351 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[409]);

        if (unlikely(tmp_args_element_value_351 == NULL)) {
            tmp_args_element_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[409]);
        }

        if (tmp_args_element_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 472;
        {
            PyObject *call_args[] = {tmp_args_element_value_350, tmp_args_element_value_351};
            tmp_call_result_176 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_177, call_args);
        }

        if (tmp_call_result_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_176);
    }
    {
        PyObject *tmp_called_value_178;
        PyObject *tmp_call_result_177;
        PyObject *tmp_args_element_value_352;
        PyObject *tmp_args_element_value_353;
        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_178 == NULL)) {
            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_352 = mod_consts[423];
        tmp_args_element_value_353 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[410]);

        if (unlikely(tmp_args_element_value_353 == NULL)) {
            tmp_args_element_value_353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[410]);
        }

        if (tmp_args_element_value_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 473;
        {
            PyObject *call_args[] = {tmp_args_element_value_352, tmp_args_element_value_353};
            tmp_call_result_177 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_178, call_args);
        }

        if (tmp_call_result_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_177);
    }
    {
        PyObject *tmp_called_value_179;
        PyObject *tmp_call_result_178;
        PyObject *tmp_args_element_value_354;
        PyObject *tmp_args_element_value_355;
        tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_179 == NULL)) {
            tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_354 = mod_consts[424];
        tmp_args_element_value_355 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[415]);

        if (unlikely(tmp_args_element_value_355 == NULL)) {
            tmp_args_element_value_355 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[415]);
        }

        if (tmp_args_element_value_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 474;
        {
            PyObject *call_args[] = {tmp_args_element_value_354, tmp_args_element_value_355};
            tmp_call_result_178 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_179, call_args);
        }

        if (tmp_call_result_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_178);
    }
    {
        PyObject *tmp_called_value_180;
        PyObject *tmp_call_result_179;
        PyObject *tmp_args_element_value_356;
        PyObject *tmp_args_element_value_357;
        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_180 == NULL)) {
            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_356 = mod_consts[425];
        tmp_args_element_value_357 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[412]);

        if (unlikely(tmp_args_element_value_357 == NULL)) {
            tmp_args_element_value_357 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[412]);
        }

        if (tmp_args_element_value_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 475;
        {
            PyObject *call_args[] = {tmp_args_element_value_356, tmp_args_element_value_357};
            tmp_call_result_179 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_180, call_args);
        }

        if (tmp_call_result_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_179);
    }
    {
        PyObject *tmp_called_value_181;
        PyObject *tmp_call_result_180;
        PyObject *tmp_args_element_value_358;
        PyObject *tmp_args_element_value_359;
        tmp_called_value_181 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_181 == NULL)) {
            tmp_called_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_358 = mod_consts[426];
        tmp_args_element_value_359 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[405]);

        if (unlikely(tmp_args_element_value_359 == NULL)) {
            tmp_args_element_value_359 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[405]);
        }

        if (tmp_args_element_value_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 476;
        {
            PyObject *call_args[] = {tmp_args_element_value_358, tmp_args_element_value_359};
            tmp_call_result_180 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_181, call_args);
        }

        if (tmp_call_result_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_180);
    }
    {
        PyObject *tmp_called_value_182;
        PyObject *tmp_call_result_181;
        PyObject *tmp_args_element_value_360;
        PyObject *tmp_args_element_value_361;
        tmp_called_value_182 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_182 == NULL)) {
            tmp_called_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_360 = mod_consts[427];
        tmp_args_element_value_361 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[413]);

        if (unlikely(tmp_args_element_value_361 == NULL)) {
            tmp_args_element_value_361 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[413]);
        }

        if (tmp_args_element_value_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 477;
        {
            PyObject *call_args[] = {tmp_args_element_value_360, tmp_args_element_value_361};
            tmp_call_result_181 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_182, call_args);
        }

        if (tmp_call_result_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_181);
    }
    {
        PyObject *tmp_called_value_183;
        PyObject *tmp_call_result_182;
        PyObject *tmp_args_element_value_362;
        PyObject *tmp_args_element_value_363;
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_362 = mod_consts[428];
        tmp_args_element_value_363 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[414]);

        if (unlikely(tmp_args_element_value_363 == NULL)) {
            tmp_args_element_value_363 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[414]);
        }

        if (tmp_args_element_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 478;
        {
            PyObject *call_args[] = {tmp_args_element_value_362, tmp_args_element_value_363};
            tmp_call_result_182 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_183, call_args);
        }

        if (tmp_call_result_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_182);
    }
    {
        PyObject *tmp_called_value_184;
        PyObject *tmp_call_result_183;
        PyObject *tmp_args_element_value_364;
        PyObject *tmp_args_element_value_365;
        tmp_called_value_184 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_184 == NULL)) {
            tmp_called_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_364 = mod_consts[429];
        tmp_args_element_value_365 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[406]);

        if (unlikely(tmp_args_element_value_365 == NULL)) {
            tmp_args_element_value_365 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
        }

        if (tmp_args_element_value_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 479;
        {
            PyObject *call_args[] = {tmp_args_element_value_364, tmp_args_element_value_365};
            tmp_call_result_183 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_184, call_args);
        }

        if (tmp_call_result_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_183);
    }
    {
        PyObject *tmp_called_value_185;
        PyObject *tmp_call_result_184;
        PyObject *tmp_args_element_value_366;
        PyObject *tmp_args_element_value_367;
        tmp_called_value_185 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_185 == NULL)) {
            tmp_called_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_366 = mod_consts[430];
        tmp_args_element_value_367 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[408]);

        if (unlikely(tmp_args_element_value_367 == NULL)) {
            tmp_args_element_value_367 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[408]);
        }

        if (tmp_args_element_value_367 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 480;
        {
            PyObject *call_args[] = {tmp_args_element_value_366, tmp_args_element_value_367};
            tmp_call_result_184 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_185, call_args);
        }

        if (tmp_call_result_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_184);
    }
    {
        PyObject *tmp_called_value_186;
        PyObject *tmp_call_result_185;
        PyObject *tmp_args_element_value_368;
        PyObject *tmp_args_element_value_369;
        tmp_called_value_186 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_186 == NULL)) {
            tmp_called_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_368 = mod_consts[431];
        tmp_args_element_value_369 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[415]);

        if (unlikely(tmp_args_element_value_369 == NULL)) {
            tmp_args_element_value_369 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[415]);
        }

        if (tmp_args_element_value_369 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 481;
        {
            PyObject *call_args[] = {tmp_args_element_value_368, tmp_args_element_value_369};
            tmp_call_result_185 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_186, call_args);
        }

        if (tmp_call_result_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_185);
    }
    {
        PyObject *tmp_called_value_187;
        PyObject *tmp_call_result_186;
        PyObject *tmp_args_element_value_370;
        PyObject *tmp_args_element_value_371;
        tmp_called_value_187 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_187 == NULL)) {
            tmp_called_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_370 = mod_consts[432];
        tmp_args_element_value_371 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[415]);

        if (unlikely(tmp_args_element_value_371 == NULL)) {
            tmp_args_element_value_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[415]);
        }

        if (tmp_args_element_value_371 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 482;
        {
            PyObject *call_args[] = {tmp_args_element_value_370, tmp_args_element_value_371};
            tmp_call_result_186 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_187, call_args);
        }

        if (tmp_call_result_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_186);
    }
    {
        PyObject *tmp_called_value_188;
        PyObject *tmp_call_result_187;
        PyObject *tmp_args_element_value_372;
        PyObject *tmp_args_element_value_373;
        tmp_called_value_188 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_188 == NULL)) {
            tmp_called_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_372 = mod_consts[433];
        tmp_args_element_value_373 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[416]);

        if (unlikely(tmp_args_element_value_373 == NULL)) {
            tmp_args_element_value_373 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[416]);
        }

        if (tmp_args_element_value_373 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 483;
        {
            PyObject *call_args[] = {tmp_args_element_value_372, tmp_args_element_value_373};
            tmp_call_result_187 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_188, call_args);
        }

        if (tmp_call_result_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_187);
    }
    {
        PyObject *tmp_called_value_189;
        PyObject *tmp_call_result_188;
        PyObject *tmp_args_element_value_374;
        PyObject *tmp_args_element_value_375;
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_374 = mod_consts[434];
        tmp_args_element_value_375 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[417]);

        if (unlikely(tmp_args_element_value_375 == NULL)) {
            tmp_args_element_value_375 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[417]);
        }

        if (tmp_args_element_value_375 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = {tmp_args_element_value_374, tmp_args_element_value_375};
            tmp_call_result_188 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_189, call_args);
        }

        if (tmp_call_result_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_188);
    }
    {
        PyObject *tmp_called_value_190;
        PyObject *tmp_call_result_189;
        PyObject *tmp_args_element_value_376;
        PyObject *tmp_args_element_value_377;
        tmp_called_value_190 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_190 == NULL)) {
            tmp_called_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_376 = mod_consts[435];
        tmp_args_element_value_377 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[406]);

        if (unlikely(tmp_args_element_value_377 == NULL)) {
            tmp_args_element_value_377 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
        }

        if (tmp_args_element_value_377 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = {tmp_args_element_value_376, tmp_args_element_value_377};
            tmp_call_result_189 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_190, call_args);
        }

        if (tmp_call_result_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_189);
    }
    {
        PyObject *tmp_called_value_191;
        PyObject *tmp_call_result_190;
        PyObject *tmp_args_element_value_378;
        PyObject *tmp_args_element_value_379;
        tmp_called_value_191 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_191 == NULL)) {
            tmp_called_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_378 = mod_consts[436];
        tmp_args_element_value_379 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[406]);

        if (unlikely(tmp_args_element_value_379 == NULL)) {
            tmp_args_element_value_379 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
        }

        if (tmp_args_element_value_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_value_378, tmp_args_element_value_379};
            tmp_call_result_190 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_191, call_args);
        }

        if (tmp_call_result_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_190);
    }
    {
        PyObject *tmp_called_value_192;
        PyObject *tmp_call_result_191;
        PyObject *tmp_args_element_value_380;
        PyObject *tmp_args_element_value_381;
        tmp_called_value_192 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_192 == NULL)) {
            tmp_called_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_380 = mod_consts[437];
        tmp_args_element_value_381 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[406]);

        if (unlikely(tmp_args_element_value_381 == NULL)) {
            tmp_args_element_value_381 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[406]);
        }

        if (tmp_args_element_value_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = {tmp_args_element_value_380, tmp_args_element_value_381};
            tmp_call_result_191 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_192, call_args);
        }

        if (tmp_call_result_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_191);
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_import_name_from_153;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[438];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_pptx$oxml;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[439];
        tmp_level_value_26 = mod_consts[44];
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 490;
        tmp_import_name_from_153 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_153)) {
            tmp_assign_source_188 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_153,
                (PyObject *)moduledict_pptx$oxml,
                mod_consts[440],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_188 = IMPORT_NAME(tmp_import_name_from_153, mod_consts[440]);
        }

        Py_DECREF(tmp_import_name_from_153);
        if (tmp_assign_source_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_188);
    }
    {
        PyObject *tmp_called_value_193;
        PyObject *tmp_call_result_192;
        PyObject *tmp_args_element_value_382;
        PyObject *tmp_args_element_value_383;
        tmp_called_value_193 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_193 == NULL)) {
            tmp_called_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_382 = mod_consts[441];
        tmp_args_element_value_383 = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)mod_consts[440]);

        if (unlikely(tmp_args_element_value_383 == NULL)) {
            tmp_args_element_value_383 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[440]);
        }

        assert(!(tmp_args_element_value_383 == NULL));
        frame_97b337b9cb573aeed1fd959d23454525->m_frame.f_lineno = 492;
        {
            PyObject *call_args[] = {tmp_args_element_value_382, tmp_args_element_value_383};
            tmp_call_result_192 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_193, call_args);
        }

        if (tmp_call_result_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_192);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97b337b9cb573aeed1fd959d23454525, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97b337b9cb573aeed1fd959d23454525->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97b337b9cb573aeed1fd959d23454525, exception_lineno);
    }



    assertFrameObject(frame_97b337b9cb573aeed1fd959d23454525);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pptx.oxml", false);

    Py_INCREF(module_pptx$oxml);
    return module_pptx$oxml;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pptx$oxml, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pptx$oxml", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
