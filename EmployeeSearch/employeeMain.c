//compile with: gcc employeeMain.c employeeTable.c employeeOne.c

#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void){
	//defined in employeeOne.c
	PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber);
	PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char *targetName);
	PtrToEmployee searchEmployeeByPhoneNumber(PtrToConstEmployee ptr, int tableSize, char *targetPhoneNumber);
	PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary);

	//defined in EmployeeTable.c
	extern Employee EmployeeTable[];
	extern const int EmployeeTableEntries;

	PtrToEmployee matchPtr;
	matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "213-555-1212");
	if (matchPtr != NULL)
	{
		printf("Phone number 213-555-1212 is in record %d\n", matchPtr - EmployeeTable);
	}
	else
	{
		printf("Phone number is NOT found in the record\n");
	}

	matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "505-503-4455");
	if (matchPtr != NULL)
	{
		printf("Phone number 505-503-4455 is in record %d\n", matchPtr - EmployeeTable);
	}
	else
	{
		printf("Phone number is NOT found in the record\n");
	}

	matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.32);
	if (matchPtr != NULL)
	{
		printf("Salary $8.32 is in record %d\n", matchPtr - EmployeeTable);
	}
	else
	{
		printf("Salary is NOT found in the record\n");
	}

	matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.11);
	if (matchPtr != NULL)
	{
		printf("Salary $7.11 is in record %d\n", matchPtr - EmployeeTable);
	}
	else
	{
		printf("Salary is NOT found in the record\n");
	}
}