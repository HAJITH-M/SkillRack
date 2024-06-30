#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

// Function to convert time in hh:mm format to minutes since midnight
int timeToMinutes(string timeStr) {
    int hours, minutes;
    sscanf(timeStr.c_str(), "%d:%d", &hours, &minutes);
    return hours * 60 + minutes;
}

int main() {
    int N, M;
    cin >> N >> M;

    string classStartTime;
    cin >> classStartTime;

    vector<string> arrivalTimes(N);
    getline(cin, arrivalTimes[0]); // Consume the newline after classStartTime

    // Read arrival times
    string inputLine;
    getline(cin, inputLine);
    stringstream ss(inputLine);
    for (int i = 0; i < N; ++i) {
        ss >> arrivalTimes[i];
    }

    // Convert class start time to minutes since midnight
    int startTimeInMinutes = timeToMinutes(classStartTime);

    // Count students who arrived on time
    int onTimeCount = 0;
    for (const string& arrivalTime : arrivalTimes) {
        int arrivalTimeInMinutes = timeToMinutes(arrivalTime);
        if (arrivalTimeInMinutes <= startTimeInMinutes) {
            onTimeCount++;
        }
    }

    // Determine if class is cancelled
    if (onTimeCount < M) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

