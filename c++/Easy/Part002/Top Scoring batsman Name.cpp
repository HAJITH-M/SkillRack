#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits>

struct Batsman {
    std::string name;
    int runs;
};

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the newline character after n

    std::vector<Batsman> batsmen(n);

    for (int i = 0; i < n; ++i) {
        std::string input;
        std::getline(std::cin, input);

        std::stringstream ss(input);
        std::string name;
        std::string runs_str;

        std::getline(ss, name, ',');
        std::getline(ss, runs_str);

        int runs = std::stoi(runs_str);

        batsmen[i] = {name, runs};
    }

    Batsman topScorer = batsmen[0];
    for (int i = 1; i < n; ++i) {
        if (batsmen[i].runs > topScorer.runs) {
            topScorer = batsmen[i];
        }
    }

    std::cout << topScorer.name << std::endl;

    return 0;
}
