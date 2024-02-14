#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert 24-hour time to 12-hour format
void convertTime(int hour, int minute) {
    string period;
    
    // Determine AM or PM
    if (hour < 12) {
        period = "AM";
        if (hour == 0) {
            hour = 12; // Midnight (00:00) is represented as 12:00 AM
        }
    } else {
        period = "PM";
        if (hour != 12) {
            hour -= 12; // Convert to 12-hour format (except for 12 PM)
        }
    }
    
    // Output the converted time
    cout << "Converted time: " << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period << endl;
}

int main() {
    int hour, minute;
    
    // Input the 24-hour time
    cout << "Enter the hour (0-23): ";
    cin >> hour;
    
    cout << "Enter the minute (0-59): ";
    cin >> minute;
    
    // Validate input
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        cout << "Invalid input. Please enter valid hour (0-23) and minute (0-59)." << endl;
        return 1;
    }
    
    // Convert and display the time
    convertTime(hour, minute);
    
    return 0;
}

