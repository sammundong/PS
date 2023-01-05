#include <iostream>

#include <string>

#include <algorithm>

using namespace std;
int arr[50] = { 0, };

bool same(int n) {
    for (int a = 1; a < 45; a++) {
        for (int b = a; b < 45; b++) {
            for (int c = a; c < 45; c++) {
                if (arr[a] + arr[b] + arr[c] == n){
                    
                    return true;
                }
            }

        }
    }
    return false;
}
int main(void)

{

    ios_base::sync_with_stdio(0);

    cin.tie(0);
    int sum = 0;
    int n;
    cin >> n;
    
    for (int i = 0; sum <= 1000; i++) {
        sum = sum + i;
        arr[i] = sum;
    }
    int num = 0;
    int l = 0;
    
    for(int i=0; i<n; i++){
        cin >> num;
        
        
        if (same(num)) {
            cout << "1" << '\n';
        }
        else
            cout << "0" << '\n';
    
    }
    return 0;

}
