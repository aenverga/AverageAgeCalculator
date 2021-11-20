#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int age;
    int totalAge = 0;
    int numofPeople = 0;

    cout << "Enter the first person's age or -1 to exit: " << endl;
    cin >> age;
    system("cls");

negativeAge:

    while (age < 0 && age != -1) {
        age = 0;
        cout << "Incorrect age. Please enter a valid age or -1 to calculate: ";
        cin >> age;
        system("cls");
    }

    while (age != -1) {
        totalAge = totalAge + age;
        numofPeople++;

        cout << "Enter the next person's age or -1 to calculate: " << endl;
        cin >> age;
        system("cls");
        if (age < 0 && age != -1) {
            goto negativeAge;
        }
    }

    if (numofPeople == 0) {
        exit(1);
    }

    cout << "Results!\n  Number of people: " << numofPeople << endl;
    cout << "  Average age: " << totalAge / numofPeople << endl;
    cout << "  Total age of everyone: " << totalAge << endl;

    return 0;
}
