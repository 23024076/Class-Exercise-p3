#include <iostream>

using namespace std;

int main()
{
    string gender, interest;

    cout << "Welcome to Partner Matcher!" << endl;



    cout << "What is your gender?: ";
    cin >> gender;


    cout << "What are your interests?( 'movies', 'traveling'): ";
    cin >> interest;
  string partner;

    if (gender == "male") {
        if (interest == "moviess") {
            partner = "perfect match for movie night!";
        } else if (interest == "traveling") {
            partner = "perfect partner for exploring with!";
        }

    } else if (gender == "female") {
        if (interest == "moviess") {
            partner = "perfect match for movie night!";
        }
        } else if (interest == "traveling") {
            partner = "perfectman to exploring with!";
        }
     else {
        partner = "Invalid gender input!";
    }
cout << "This is your perfect match " << partner << endl;

    return 0;
}
