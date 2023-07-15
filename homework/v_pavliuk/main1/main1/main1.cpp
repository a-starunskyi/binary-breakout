#define _CRT_SECURE_NO_WARNINGS // This is for the compiler to offer safe versions of library functions.
#include <iostream> 
#include <ctime> 

int timeYear(); 
int cinYourAge();

int main()
{
    int Age; 

    std::cout << "Vladyslav Pavliuk" << std::endl; 
    Age = timeYear() - cinYourAge(); 
    std::cout << Age << std::endl; 
}

int timeYear()
{
    int Year;
    int yearCurrent;

    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    asctime(timeinfo);
    Year = timeinfo->tm_year;
    yearCurrent = 1900 + Year;

    return yearCurrent;
}

int cinYourAge()
{
    int ageOfBorn;

    std::cout << "Enter your date of birth: ";
    std::cin >> ageOfBorn;

    return ageOfBorn;
}