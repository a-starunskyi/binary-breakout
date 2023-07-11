#define _CRT_SECURE_NO_WARNINGS //Required for the <ctime> library to function properly in Visual Studio
#include <iostream> //Connecting libraries
#include <ctime>


int cinYouAge();//Initialising functions
int timeYear();

int main()//Main functions
{
    int Age;//Variable for age

    std::cout << "Karpenko Mark" << std::endl;//Displaying the first and last name
    Age = timeYear() - cinYouAge();//Function call and mathematical operation of subtraction(Current year minus year of birth) to get the current age
    std::cout << Age << std::endl;//Displaying age

}

int timeYear()//Function for obtaining the current year
{
    int Year;//Variables for current year

    time_t sec = std::time(NULL);//Getting the time and writing it to a variable
    tm* T = std::localtime(&sec);
    Year = T->tm_year + 1900;//Obtaining only a year out of the entire time format. We add 1900 because the computer only counts down from 1900. So now the computer gives 123 years.

    return Year;//Return a variable with the current year already written to it
}

int cinYouAge()//Function for requesting user's age
{
    int AgeOfBorn;//Variables for user age

    std::cout << "Enter your date of birth:";//Displaying a request to the user
    std::cin >> AgeOfBorn;//Request to enter your date of birth

    return AgeOfBorn;//Return date of birth
}