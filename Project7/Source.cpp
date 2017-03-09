#include <iostream>
#include <string>
#include <iomanip>


using namespace std;
//------------------------------------------------------- 
//                    AskEmplType 
//------------------------------------------------------- 
// Given: Employee Type (Hourly or salary)
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------

char AskEmplType()
{
	char type = ' ';
	do {
		cout << "Hourly or Salaried (H/S)?: ";
		cin >> type;
		if (type != 'H' && type != 'h' && type != 's' && type != 'S') {
			cout << "Invalid. Enter H or S. " << endl;
		}
	} while (type != 'H' && type != 'h' && type != 's' && type != 'S');
	return type;
}

//------------------------------------------------------- 
//                   GetHourlyGross
//------------------------------------------------------- 
// Given: Hourly Rate
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
float GetHourlyGross()
{
	float rate = 0;
	float hours = 0;
	float gross = 0;

	cout << "Hourly rate:               ";
	cin >> rate;
	cout << "Hours worked this period:  ";
	cin >> hours;
	if (hours > 40)
	{
		gross = (40 + ((hours - 40) * 1.5)) * rate;
	}
	else
	{
		gross = hours * rate;
	}
}

//------------------------------------------------------- 
//                    AskResident
//------------------------------------------------------- 
// Given: User residence (y/n)
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
char AskResident()
{
	char resident = ' ';
	do {
		cout << "Local Resident (Y/N)?: ";
		cin >> resident;
		if (resident != 'Y' && resident != 'y' && resident != 'n' && resident != 'N') {
			cout << "Invalid. Enter Y or N. " << endl;
		}
	} while (resident != 'Y' && resident != 'y' && resident != 'n' && resident != 'N');
	return resident;
}

//------------------------------------------------------- 
//                    CalcFedTax
//------------------------------------------------------- 
// Given: 
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
void CalcFedTax()
{

}

//------------------------------------------------------- 
//                    CalcStateTax
//------------------------------------------------------- 
// Given: 
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
void CalcStateTax()
{

}

//------------------------------------------------------- 
//                    CalcLocalTax
//------------------------------------------------------- 
// Given: 
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
void CalcLocalTax()
{

}

//------------------------------------------------------- 
//                    PrintStub
//------------------------------------------------------- 
// Given: 
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
void PrintStub()
{

}

//------------------------------------------------------- 
//                    PrintLogo 
//------------------------------------------------------- 
// Given: 
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
void PrintLogo()
{

}

//------------------------------------------------------- 
//                    AskNumEmpl 
//------------------------------------------------------- 
// Given: 
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
void AskNumEmpl()
{
	int num;
	cout << "Enter Number of Employees: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{

	}
}

//------------------------------------------------------- 
//                    ProcessEmpl 
//------------------------------------------------------- 
// Given: 
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
void ProcessEmpl(int employeeNumber)
{
	cout << "Enter Data for Employee " << employeeNumber;
}

//------------------------------------------------------- 
//                    UpdateTotals
//------------------------------------------------------- 
// Given: 
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
void UpdateTotals()
{

}

//------------------------------------------------------- 
//                    PrintReport
//------------------------------------------------------- 
// Given: 
// Returns: 
// xxxDESCRIPTIONxxx 
//-------------------------------------------------------
void PrintReport()
{

}

// main function
void main()
{

}