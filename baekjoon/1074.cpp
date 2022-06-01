#include<iostream>
using namespace std;
int n, r, c;
int a;
long long position;
void find(int x, int y, int h) {
    if (h == 1) {
        cout << position;
        return;
    }
    long long s = h / 2 * h / 2;
    if (r >= x + h / 2 && c >= y + h / 2) {
        position += s * 3;
        find(x + h / 2, y + h / 2, h / 2);
    }
    else if (r < x + h / 2 && c >= y + h / 2) {
        position += s;
        find(x, y + h / 2, h / 2);
    }
    else if (r >= x + h / 2 && c < y + h / 2) {
        position += s * 2;
        find(x + h / 2, y, h / 2);
    }
    else {
        find(x, y, h / 2);
    }
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> r >> c;
    a = 1 << n;
    find(0, 0, a);
    return 0;
}