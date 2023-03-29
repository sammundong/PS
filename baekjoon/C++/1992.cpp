#include <iostream>
#include <vector>
using namespace std;

string s;
int N;
vector <string> video;
bool same(int x, int y, int mx, int my) {
    char a = video[x][y];
    for (int i = 0; i < mx; i++) {
        for (int j = 0; j < my; j++) {
            if (a != video[i][j]) {
                return false;
            }
        }
    }
    return true;
}
void qurdtree(int x, int y, int size) {
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (video[i][j] != video[x][y]) {
                cout << "(";
                qurdtree(x, y, size / 2);
                qurdtree(x, y+size/2, size / 2);
                qurdtree(x+size/2, y, size / 2);
                qurdtree(x+size/2, y+size/2, size / 2);
                cout << ")";
                return;
            }
        }
    }
    cout << video[x][y];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    string str;
    for (int i = 0; i < N; i++) {
        cin >> str;
        video.push_back(str);
    }
    qurdtree(0, 0, N);
    return 0;
}