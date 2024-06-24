#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits>

struct Student {
    std::string name;
    int maths;
    int physics;
    int chemistry;
};

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the newline character after n

    std::vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        std::string input;
        std::getline(std::cin, input);

        std::stringstream ss(input);
        std::string name;
        std::string maths_str, physics_str, chemistry_str;

        std::getline(ss, name, ':');
        std::getline(ss, maths_str, ':');
        std::getline(ss, physics_str, ':');
        std::getline(ss, chemistry_str);

        int maths = std::stoi(maths_str);
        int physics = std::stoi(physics_str);
        int chemistry = std::stoi(chemistry_str);

        students[i] = {name, maths, physics, chemistry};
    }

    Student topScorer = students[0];
    int topScore = topScorer.maths + topScorer.physics + topScorer.chemistry;
    for (int i = 1; i < n; ++i) {
        int totalMarks = students[i].maths + students[i].physics + students[i].chemistry;
        if (totalMarks > topScore) {
            topScorer = students[i];
            topScore = totalMarks;
        }
    }

    std::cout << topScorer.name << std::endl;

    return 0;
}
