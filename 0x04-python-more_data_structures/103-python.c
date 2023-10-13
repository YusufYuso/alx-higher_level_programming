#include <Python.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);

/**
 * print_python_list - Prints basic info about Python lists.
 * @p: A PyObject list object.
 */
void print_python_list(PyObject *p)
{
	// Check if p is a valid PyListObject
	if (!PyList_Check(p))
	{
		fprintf(stderr, "[ERROR] Invalid List Object\n");
		return;
	}

	Py_ssize_t size = PyList_Size(p);
	Py_ssize_t allocated = ((PyListObject *)p)->allocated;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", allocated);

	for (Py_ssize_t i = 0; i < size; i++)
	{
		PyObject *item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
		if (strcmp(Py_TYPE(item)->tp_name, "bytes") == 0)
		{
			print_python_bytes(item);
		}
	}
}

/**
 * print_python_bytes - Prints basic info about Python byte objects.
 * @p: A PyObject byte object.
 */
void print_python_bytes(PyObject *p)
{
	// Check if p is a valid PyBytesObject
	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		fprintf(stderr, "  [ERROR] Invalid Bytes Object\n");
		return;
	}

	Py_ssize_t size = (((PyVarObject *)p)->ob_size);
	PyBytesObject *data = (PyBytesObject *)p;

	printf("  Size: %ld\n", size);
	printf("  trying string: %s\n", data->ob_sval);

	printf("  first %ld bytes: ", (size < 10) ? size + 1 : 10);
	for (Py_ssize_t i = 0; i < 10 && i < size; i++)
	{
		printf("%02hhx", data->ob_sval[i]);
		if (i < 9 && i < size - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
