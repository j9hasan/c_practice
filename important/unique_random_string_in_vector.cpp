#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

string generateRandomString() {
    const char charset[] = "azAB012";
    const int charsetSize = sizeof(charset) - 1;
    const int stringLength = 2;

    string randomString;

    for (int i = 0; i < stringLength; ++i) {
        randomString += charset[rand() % charsetSize];
    }

    return randomString;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    vector<string> randomStrings;

    for (int i = 0; i < 10; ++i) {
        string randomString = generateRandomString();

        if (find(randomStrings.begin(), randomStrings.end(), randomString) != randomStrings.end()) {
            cout << "Generated String \"" << randomString << "\" already exists in the vector. Skipping." << endl;
        } else {
            randomStrings.push_back(randomString);
        }
    }

    cout << "Generated Random Strings in Vector: ";
    for (const string& str : randomStrings) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
