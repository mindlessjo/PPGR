#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

double converted_currency(const string& source_currency, const string& target_currency, double initial_amount) {

    double final_value {};

    // double USD {1.00};
    double EUR {1.08};
    double GBP {1.26};
    double JPY {0.0067};
    double CAD {0.74};
    double AUD {0.65};
    double CHF {1.14};
    double CNY {0.14};
    double INR {0.012};
    double MXN {0.059};


    if (source_currency == "USD" && target_currency != "USD") {
        if (target_currency == "EUR") {
            final_value = initial_amount * EUR;
        }
        else  if (target_currency == "GBP") {
            final_value = initial_amount * GBP;
        }
        else  if (target_currency == "JPY") {
            final_value = initial_amount * JPY;
        }
        else  if (target_currency == "CAD") {
            final_value = initial_amount * CAD;
        }
        else  if (target_currency == "AUD") {
            final_value = initial_amount * AUD;
        }
        else  if (target_currency == "CHF") {
            final_value = initial_amount * CHF;
        }
        else  if (target_currency == "CNY") {
            final_value = initial_amount * CNY;
        }
        else  if (target_currency == "INR") {
            final_value = initial_amount * INR;
        }
        else  if (target_currency == "MXN") {
            final_value = initial_amount * MXN;
        }
    } else if (source_currency != "USD" &&  target_currency == "USD") {
        if (source_currency == "EUR") {
            final_value = initial_amount / EUR;
        }
        else if (source_currency == "GBP") {
            final_value = initial_amount / GBP;
        }
        else if (source_currency == "JPY") {
            final_value = initial_amount / JPY;
        }
        else if (source_currency == "CAD") {
            final_value = initial_amount / CAD;
        }
        else if (source_currency == "AUD") {
            final_value = initial_amount / AUD;
        }
        else if (source_currency == "CHF") {
            final_value = initial_amount / CHF;
        }
        else if (source_currency == "CNY") {
            final_value = initial_amount / CNY;
        }
        else if (source_currency == "INR") {
            final_value = initial_amount / INR;
        }
        else  if (source_currency == "MXN") {
            final_value = initial_amount / MXN;
        }
    }


    return final_value;
}

int main() {
    cout << "USD Currency Converter V1.0\n\n";
    cout << "USD, EUR, GBP, JPY, CAD \nAUD, CHF, CNY, INR, MXN \n\n";

    double initial_amount {};
    cout << "Enter amount to be converted: ";
    cin >> initial_amount;

    string source_currency {};
    cout << "Enter your currency: ";
    cin >>  source_currency;

    string target_currency {};
    if (source_currency != "USD") {
        target_currency = "USD";
    } else if (source_currency == "USD") {
        cout << "Convert it to: ";
        cin >> target_currency;
    }

    cout << "You have: "  << initial_amount << " " <<  source_currency << "\n";
    cout << "You'll have: " << converted_currency(source_currency, target_currency, initial_amount) << " " << target_currency << "\n";

    return 0;
}
