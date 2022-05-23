#include <iostream>
#include <string>

using namespace std;

string S;

string A;
string B;
string C;

int startA, startB, startC;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> S;

    A += S[0];
    B += S[0]; B += S[1];
    C += S[0]; C += S[1]; C += S[2];

    startA = stoi(A);
    startB = stoi(B);
    startC = stoi(C);

    int endA = startA;
    int endB = startB;
    int endC = startC;

    while (1) {
        if (A.size() >= S.size()) break;
        endA++;
        A += to_string(endA);
    }

    while (1) {
        if (B.size() >= S.size()) break;
        endB++;
        B += to_string(endB);
    }

    while (1) {
        if (C.size() >= S.size()) break;
        endC++;
        C += to_string(endC);
    }

    if (!A.compare(S)) {
        cout << startA << ' ' << endA;
    }
    else if (!B.compare(S)) {
        cout << startB << ' ' << endB;
    }
    else if (!C.compare(S)) {
        cout << startC << ' ' << endC;
    }


    return 0;
}