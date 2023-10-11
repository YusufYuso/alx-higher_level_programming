#include <Python.h>

/**
 * print_python_bytes - Print information about a Python bytes object.
 * @p: A pointer to the Python bytes object to be printed.
 */
void print_python_bytes(PyObject *p) {
    if (PyBytes_Check(p)) {
        Py_ssize_t size = PyBytes_Size(p);

        printf("[.] bytes object info\n");
        printf("  size: %ld\n", size);
        printf("  trying string: %s\n", PyBytes_AsString(p));
        if (size < 10)
            printf("  first %ld bytes: %s\n", size + 1, PyBytes_AsString(p));
        else
            printf("  first 10 bytes: %s\n", PyBytes_AsString(p));
    } else {
        printf("[ERROR] Invalid Bytes Object\n");
    }
}
