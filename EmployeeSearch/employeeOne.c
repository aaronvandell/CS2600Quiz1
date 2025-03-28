#include <string.h>
#include "employee.h"
PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber)
{
	const PtrToConstEmployee endPtr = ptr + tableSize;
	for (; ptr < endPtr; ptr++)
	{
		if (ptr->number == targetNumber)
		{
			return (PtrToEmployee) ptr;
		}
	}
	return NULL;
}

PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char *targetName)
{
	const PtrToConstEmployee endPtr = ptr + tableSize;
	for (; ptr < endPtr; ptr++)
	{
		if (strcmp(ptr->name, targetName))
		{
			return (PtrToEmployee) ptr;
		}
	}
	return NULL;
}

PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char *targetPhoneNumber)
{
	const PtrToConstEmployee endPtr = ptr + tableSize;
	for (; ptr < endPtr; ptr++)
	{
		if (strcmp(ptr->name, targetPhoneNumber))
		{
			return (PtrToEmployee) ptr;
		}
	}
	return NULL;
}