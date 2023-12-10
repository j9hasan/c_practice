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

bool isStringInVector(const string& str, const vector<string>& vec) {
    return find(vec.begin(), vec.end(), str) != vec.end();
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    const int n = 5; // Always generate 5 random strings

    vector<string> randomStrings;

    while (randomStrings.size() < n) {
        string randomString = generateRandomString();

        if (isStringInVector(randomString, randomStrings)) {
            cout << "Generated String \"" << randomString << "\" already exists in the vector. Generating a new one." << endl;
        } else {
            randomStrings.push_back(randomString);
        }
    }

    cout << "Generated Random Strings: ";
    for (const string& str : randomStrings) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
