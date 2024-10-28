#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary += (decimal % 2 == 0 ? "0" : "1");
        decimal /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

string toHexadecimal(int number) {
    if (number == 0) return "0";
    string hex = "";
    char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while (number > 0) {
        hex = hexChars[number % 16] + hex;
        number /= 16;
    }
    return hex;
}
 
int main() {
    int decimal;
    cout << "Podaj liczbę dziesiętną: ";
    cin >> decimal;
 
    string binary = decimalToBinary(decimal);
    cout << "Liczba binarna: " << binary << endl;
 
    string hexadecimal = toHexadecimal(decimal);
    cout << "Liczba szesnastkowa: " << hexadecimal << endl;
 
    return 0;
}