#include <iostream>

using namespace std;

int main()
{
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int amount;
    cout << "Enter an amount in cents  ";
    cin >> amount;

    cout << "\n\t\tSolving by using Division Expression" << endl;

    int dollar{}, quarter{}, dime {}, nickel{}, pennies{}, balance{};

    dollar = amount / dollar_value;
    balance = amount - (dollar * dollar_value);

    quarter = balance / quarter_value;
    balance = balance - (quarter * quarter_value);

    dime = balance / dime_value;
    balance -= (dime * dime_value);

    nickel = balance / nickel_value;
    balance -= (nickel * nickel_value);

    pennies = balance;

    cout << "Dollar:  " << dollar
        << "\nQuarter: " << quarter
        << "\nDime:    " << dime
        << "\nNickel:  " << nickel
        << "\nPennies: " << pennies
        << endl;
    return 0;
}
