#include <iostream>
//#include <cmath>
#include <climits>
#include <float.h>

using std::cout;
using std::cin;
using std::endl;

double power(double number1, int number2)								// this part includes declaration and definition of a function
{		
	double result = 1;

	for (int i = 0; i <  number2; i++) 
	{
		result = result * number1;									           // the declaration allways defines the datatype variable. while difinition difines the variable
	}
	return result;
}

void print_pow(double number, int raised_to)								   // this function calls the power function
{
	double omarpower = power( number, raised_to);
	cout << " so " << number << " raised to the power of " << raised_to << " is " << omarpower << endl;
	cout << std::fixed << omarpower << endl;
}
 
void Show_Limits()
{
	cout << ULLONG_MAX << endl;
	cout << ULONG_MAX << endl;
	cout << USHRT_MAX << endl;												    // sizeof is an operator and not a function === it shows in bytes and not bits																																						// 
	cout << UINT_MAX << endl;
	cout << LLONG_MIN << endl;
	cout << sizeof(int) << endl;
}
void Ascii_stuff()
{
	signed char x = 125;													    // so basically, their are numbers thats is asigned to every char that represent a character== max signed 127 and unsigned max is 25something
	unsigned char r = 123;
	char y = 69;
	char o = 178;															    // ascii table == the xtended part is only for unsigned char
	cout << x << endl;
	cout << int(x) << endl;
	cout << y << endl;
	cout << o << endl;
	cout << "to get an error sound, u should put the \" escape sequence \" \a\a\a\a" << endl;

}
int main()																		// this function calles the void funtion
{
	int base;
	int exponant;
	cout << "enter an number ?" << endl;
	cin >> base;
	cout << " what power do u want it to be raised to ?" << endl;
	cin >> exponant;
	print_pow(base, exponant);
	Show_Limits(); 
	Ascii_stuff();
	bool omar_winner = true;
	cout << std::boolalpha << omar_winner << endl;						        //all datatypes have a limited number of data that it could hold (in bytes) and a specific datatype cacity can be defferent from system to system therefore allaways choose the garanteed byte. 
	float a = 10.0 / 3;
	a = a * 50000000;
	cout << a << endl;
	cout << FLT_DIG << endl;
	cout << LDBL_DIG << endl;
	const int K_Omar = 2004;
	enum { u = 94 };																					// just by adding const, to a variable, u have qualified K_Omar with 5 and u cant change it. u cant declare then initialize a const, it should be together .#define K_Omar  can be writen at the top but drawback is, u cant asign a datatype to it. == macros
																			// for example, int is garanteed iin all systems to hold 16 bytes which is the minimum that is could hold, other systems may carry 32					

																			    // u means unsighned so it is the maximum version of number that the datatype could hold so excludes any nigatives
	system("pause");
																		        // u can write min or just keep it empty instead of U to get the sighned virsion with all the nigative side  // htere are three types of flouting point number == float, double, long double. each have a specific limeyed digit that u can trust. after that you cant trust anything that comes after it . u cna find out how many digits it can carry. 
	
																								// escape sequences == allow the user to write stuff that inside of a double quate that gives a meaning== is all stars with a back slash \ == search it up

}																																																											// (Hex codes assume an ASCII-compatible characters)












																																								// (Hex codes assume an ASCII-compatable characters)																																				

																																								// \a = \x07 = alert (bell)
																																								// \b = \x08 = backspace
																																								// \t = \x09 = horizonal tab
																																								// \n = \x0A = newline (or line feed)
																																								// \v = \x0B = vertical tab
																																								// \f = \x0C = form feed
																																								// \r = \x0D = carriage return
																																								// \e = \x1B = escape (non-standard GCC extension)
																																								// Punctuation characters:

																																								// \" = quotation mark (backslash not required for '"')
																																								// \' = apostrophe (backslash not required for "'")
																																								// \? = question mark (used to avoid trigraphs)
																																								// \\ = backslash
																																								// Numeric character references:

																																								// \ + up to 3 octal digits
																																								// \x + any number of hex digits
																																								// \u + 4 hex digits (Unicode BMP, new in C++11)
																																								// \U + 8 hex digits (Unicode astral planes, new in C++11)
																																								// \0 = \00 = \000 = octal ecape for null character	
																				   // any value other than 0 is considered true and represented with 1 when exe.. without using boolalpha
																				   // when using float p numbers,7.7E4 = 77000  