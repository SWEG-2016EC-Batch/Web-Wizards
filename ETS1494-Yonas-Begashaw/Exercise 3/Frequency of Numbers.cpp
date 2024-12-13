#include <iostream>
#include <vector>  
using namespace std;

int main() {
    int num;
  
    vector<int> frequency(10, 0); 
  
    cout << "Enter an integer: ";
    cin >> num;

    int temp = num;
  
    while (temp != 0) {
        int digit = temp % 10; 
        frequency[digit]++; 
        temp /= 10; 
    }

    
    cout << "Digit\tFrequency" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << i << "\t" << frequency[i] << endl;
    }

    EXIT_SUCCESS;
}
