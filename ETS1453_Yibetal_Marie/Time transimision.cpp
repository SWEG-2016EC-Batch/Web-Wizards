#include <iostream>
using namespace std;

int main(){
    int file_size, transmission_time, days, hours, minutes, seconds;
    const int transmission_rate = 960;

    cout << "Enter the file size (in MegaBytes): ";
    cin >> file_size;

    //assuming user entered a valid input

    // change file to Bytes
    file_size *= 1048576;
    transmission_time = file_size / transmission_rate;

    days = transmission_time / 86400;
    transmission_time %= 86400;
    hours = transmission_time / 3600;
    transmission_time %= 3600;
    minutes = transmission_time / 60;
    transmission_time %= 60;
    seconds = transmission_time;


    cout << "Days: " << days << endl;
    cout << "hours: " << hours << endl;
    cout << "minutes: " << minutes << endl;
    cout << "seconds: " << seconds << endl;

    return 0;
}