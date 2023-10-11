#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - Print information about a Python list object.
 * @p: A pointer to the Python list object to be printed.
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size = PyList_Size(p);
	Py_ssize_t i;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

	for (i = 0; i < size; i++)
	{
		PyObject *item = PyList_GetItem(p, i);
		const char *typeName = Py_TYPE(item)->tp_name;

		printf("Element %ld: %s\n", i, typeName);
		if (PyBytes_Check(item))
		{
			print_python_bytes(item);
		}
	}
}

/**
 * print_python_bytes - Print information about a Python bytes object.
 * @p: A pointer to the Python bytes object to be printed.
 */
void print_python_bytes(PyObject *p)
{
	if (PyBytes_Check(p))
	{
		Py_ssize_t size = ((PyVarObject *)p)->ob_size;
		char *str = ((PyBytesObject *)p)->ob_sval;

		printf("[.] bytes object info\n");
		printf("  size: %ld\n", size);
		printf("  trying string: %s\n", str);
		printf("  first %ld bytes: ", size < 10 ? size : 10);

		for (Py_ssize_t i = 0; i < size && i < 10; ++i)
		{
			printf("%02hhx", str[i]);
			if (i < 9 && i < size - 1)
				printf(" ");
		}
		printf("\n");
	}
	else
	{
		printf("[ERROR] Invalid Bytes Object\n");
	}
}
