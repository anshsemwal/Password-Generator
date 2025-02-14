#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

string generatePassword(int length) {
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    string password = "";
    
    srand(time(0));
    for (int i = 0; i < length; i++) {
        password += chars[rand() % chars.length()];
    }
    return password;
}

int main() {
    int length;
    cout << "Enter password length: ";
    cin >> length;

    if (length < 4) {
        cout << "Password length too short!\n";
        return 1;
    }

    cout << "Generated Password: " << generatePassword(length) << endl;
    return 0;
}
