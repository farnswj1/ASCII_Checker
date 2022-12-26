#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <ctype.h>

// Checks if the string contains only ASCII characters
static PyObject* is_ascii(PyObject* self, PyObject* args) {
    char* string;

    if (!PyArg_ParseTuple(args, "s", &string)) {
        return NULL;
    }

    for (int i = 0, length = strlen(string); i < length; i++) {
        if (!isascii(string[i])) {
            return Py_False;
        }
    }

    return Py_True;
}

// Returns the version of the package
static PyObject* version(PyObject* self) {
    return Py_BuildValue("s", "1.0.0");
}

// Package methods
static PyMethodDef methods[] = {
    {"is_ascii", is_ascii, METH_VARARGS, "Checks if the string contains only ASCII characters."},
    {"version", (PyCFunction)version, METH_NOARGS, "Returns the version."},
    {NULL, NULL, 0, NULL}
};

// Module definition
static struct PyModuleDef ascii_checker = {
    PyModuleDef_HEAD_INIT,
    "ASCII Checker",
    "This module checks if a string contains only ASCII values.",
    -1,
    methods
};

// Initializes the module
PyMODINIT_FUNC PyInit_ascii_checker(void) {
    return PyModule_Create(&ascii_checker);
}
