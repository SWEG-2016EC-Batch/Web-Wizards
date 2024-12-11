#include <iostream>
#include <vector>  //Use this library for dynamic arrays that can resize automatically when elements are added or removed
using namespace std;

int main() {
    int num;
    vector<int> frequency(10, 0); // Initialize a vector to store frequencies of digits 0-9

    cout << "Enter an integer: ";
    cin >> num;

    int temp = num; // Handle negative numbers

    while (temp != 0) {
        int digit = temp % 10; // Get the last digit
        frequency[digit]++; // Increment the frequency of the digit
        temp /= 10; // Remove the last digit
    }

    // Print the frequencies in table format
    cout << "Digit\tFrequency" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << i << "\t" << frequency[i] << endl;
    }

    EXIT_SUCCESS;
}
