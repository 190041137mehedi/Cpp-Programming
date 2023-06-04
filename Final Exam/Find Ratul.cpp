#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool Ratul(string& S) {
    stringstream ss(S);
    string word;

    while (ss >> word) {
        if (word == "Ratul") {
            return true;
        }
    }

    return false;
}

int main() {
    string S;
    getline(cin, S);

    bool result = Ratul(S);
    cout << (result ? "YES" : "NO") << endl;

    return 0;
}
