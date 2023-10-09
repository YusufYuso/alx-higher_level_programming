#include <Python.h>

/**
 * print_python_list_info - Prints information about a Python list.
 * @p: A pointer to a PyObject (Python list).
 */
void print_python_list_info(PyObject *p)
{
	if (!PyList_Check(p))
	{
		printf("[ERROR] Invalid argument: Not a Python list.\n");
		return;
	}

	Py_ssize_t l_size = PyList_Size(p);
	PyObject *l_item;

	printf("[*] Size of the Python List = %ld\n", l_size);
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);
	for (Py_ssize_t i = 0; i < l_size; ++i)
	{
		l_item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(l_item)->tp_name);
	}
}
