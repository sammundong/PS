#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <array>
using namespace std;

char bit;
int a, b;
int arr[6];
int arr1[6] = { 1,1,2,2,2,8 };
int main() {

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 6; i++) {
        cout << arr1[i] - arr[i]<<" ";
    }

}
