#include <iostream>
#include <ctime>
#import <string>
using namespace std;
int main()
{

    int dob_y;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int yyy = 1900 + ltm->tm_year;
    cout << "The current Year is:" << yyy << endl;
    cout << "Please enter your dob as Year";
    cin >> dob_y;
    cout << yyy - dob_y << "is your year braith day";


    return 0;
}