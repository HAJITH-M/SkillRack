#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string line;
    vector<int> input1(2), input2(2), input3(2), input4(2);

    getline(cin, line);
    stringstream ss1(line);
    ss1 >> input1[0] >> input1[1];

    getline(cin, line);
    stringstream ss2(line);
    ss2 >> input2[0] >> input2[1];

    getline(cin, line);
    stringstream ss3(line);
    ss3 >> input3[0] >> input3[1];

    getline(cin, line);
    stringstream ss4(line);
    ss4 >> input4[0] >> input4[1];

    int ax = input1[0];
    int ay = input1[1];
    int bx = input2[0];
    int by = input2[1];
    int cx = input3[0];
    int cy = input3[1];
    int dx = input4[0];
    int dy = input4[1];

    int flag = 0;
    int flag1 = 0;

    if ((((bx <= ax && by <= cx) || (bx >= cx && bx >= ax)) && ((by <= ay && by <= cy) || (by >= ay && by >= cy))) &&
        (((dx <= ax && dx <= cx) || (dx >= cx && dx >= ax)) && ((dy <= ay && dy <= cy) || (dy >= ay && dy >= cy)))) {
        flag = 1;
    }

    if ((((ax <= bx && ax <= dx) || (ax >= bx && ax >= dx)) && ((ay <= by && ay <= dy) || (ay >= by && ay >= dy))) &&
        (((cx <= bx && cx <= dx) || (cx >= bx && cx >= dx)) && ((cy <= by && by <= dy) || (cy >= by && cy >= dy)))) {
        flag1 = 1;
    }

    if (flag == 1 && flag1 == 1) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }

    return 0;
}
