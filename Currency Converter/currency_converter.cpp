#include <iostream>

using namespace std;

void convertToPounds(double starting, double conv)
{

    double final;

    float pounds = starting * conv;

    cout << "Currency amount in pounds: £" << pounds << endl;
}

void convertFromPounds(double starting, double conv)
{

    double final;

    float endingCurr = starting * conv;

    cout << "Foreign currency amount: " << endingCurr << endl;
}

int main()
{

    double conversionRate;
    double pounds;
    double foreignCurr;
    int choice;
    string doAgain;

    do
    {

        cout << "Welcome to this currency converter app by @SmashedFrenzy16!" << endl;

        cout << "These are your conversion options:\n\n";
        cout << "1. Convert from pounds sterling" << endl;
        cout << "2. Convert to pounds sterling" << endl;
        cout << "Enter in the choice number: ";
        cin >> choice;

        switch (choice)
        {

        case 1:

            cout << "Enter in the amount of pounds sterling to start with: ";

            cin >> pounds;

            cout << "Enter in conversion rate: ";

            cin >> conversionRate;

            convertFromPounds(pounds, conversionRate);

            break;

        case 2:

            cout << "Enter in the amount of the foreign currency to start with: ";

            cin >> foreignCurr;

            cout << "Enter in conversion rate: ";

            cin >> conversionRate;

            convertToPounds(foreignCurr, conversionRate);

            break;
        }

        cout << "Do you want to do another conversion? (y/n): ";

        cin >> doAgain;

    } while (doAgain == "Y" || doAgain == "y");

    return 0;
}