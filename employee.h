#include "person.h"

typedef struct _Employee Employee;

typedef void	(*fptrPrintHello)();

//Note: interface for this class is in the base class object since all functions are virtual.
//If there are any additional functions in Employee add interface for those functions in this class 
typedef struct _Employee
{
	Person* pBaseObj;
	char* pDepartment;
	char* pCompany;
	int salary;
	//If there is any employee specific functions; add interface here.
	fptrPrintHello Hello;
}Employee;

Person* new_Employee(const char* pFName, const char* pLName, const char* pDepartment, const char* pCompany, int salary);	//constructor
void delete_Employee(Person* const pPersonObj);	//destructor

void Employee_DisplayInfo(Person* const pPersonObj);
void Employee_WriteToFile(Person* const pPersonObj, const char* pFileName);
void Employee_fptrPrintHello();
