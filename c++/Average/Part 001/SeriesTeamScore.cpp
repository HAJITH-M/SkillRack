#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string inputA, inputB;
    getline(cin, inputA);
    getline(cin, inputB);

    // Split input strings into arrays
    stringstream ssA(inputA), ssB(inputB);
    vector<string> gtA, gtB;
    string temp;

    while (ssA >> temp) {
        gtA.push_back(temp);
    }

    while (ssB >> temp) {
        gtB.push_back(temp);
    }

    // Initialize scores
    int scoreA = 0, scoreB = 0;

    // Calculate scores based on goals
    for (size_t i = 0; i < gtA.size(); i++) {
        int gA = stoi(gtA[i]);
        int gB = stoi(gtB[i]);

        if (gA > gB) {
            scoreA += 3;
        } else if (gA < gB) {
            scoreB += 3;
        } else {
            scoreA++;
            scoreB++;
        }
    }

    // Output the scores
    cout << scoreA << " " << scoreB << endl;

    return 0;
}
