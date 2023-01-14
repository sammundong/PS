#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool compare(string a, string b) {
    if (a.size() == b.size()){
        return a < b;
    }
    else {
        return a.size() < b.size();
    }
}
int main()
{
    vector <string> a;
    string temp;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        a.push_back(word);
    }
    sort(a.begin(), a.end(), compare);
    for (int i = 0; i < N; i++) {
        if (temp == a[i])continue;
        cout << a[i] << '\n';
        temp = a[i];
    }
    return 0;
}
////////////////////////////////////////////////////
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

struct Person {
    int age;
    string name;
    int join;
};

bool cmp(Person u, Person v) {
    if (u.age < v.age)
        return true;
    else if (u.age == v.age)
        return u.join < v.join;
    else
        return false;
}

int main()
{
    int T;
    cin >> T;

    vector<Person> vec(T);

    for (int i = 0; i < T; i++) {
        cin >> vec[i].age >> vec[i].name;
        vec[i].join = i;
    }

    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < T; i++)
        cout << vec[i].age << " " << vec[i].name << "\n";
}
*/