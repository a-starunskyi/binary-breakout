
#include <iostream> //
#include <ctime>

int timeYear();
int cinYouAge();

int main()
{
    int Age;

    std::cout << "Karpenko Mark" << std::endl;
    Age = timeYear() - cinYouAge();
    std::cout << Age << std::endl;


}

int timeYear()
{
    int Year;
    int YearCur;

    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    asctime(timeinfo);
    Year = timeinfo->tm_year;
    YearCur = 1900 + Year;

    return YearCur;
}

int cinYouAge()
{
    int AgeOfBorn;

    std::cout << "Enter your date of birth:";
    std::cin >> AgeOfBorn;

    return AgeOfBorn;
}