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

	Py_ssize_t list_size = PyList_Size(p);
	PyObject *list_item;

	printf("[*] Size of the Python List = %ld\n", list_size);
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);
	for (Py_ssize_t i = 0; i < list_size; ++i)
	{
		list_item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(list_item)->tp_name);
	}
}
