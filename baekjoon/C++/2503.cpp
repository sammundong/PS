#include<iostream>
#include<vector>
#include<string>
#include<cstring>

#define endl "\n"
using namespace std;

typedef struct
{
    int Number;
    int Strike;
    int Ball;
}Game;

int N;
bool Can_Number[1000];
vector<Game> V;

void Initialize()
{
    memset(Can_Number, true, sizeof(Can_Number));
    for (int i = 123; i <= 999; i++)
    {
        string Tmp = to_string(i);
        if (Tmp[0] == Tmp[1] || Tmp[0] == Tmp[2] || Tmp[1] == Tmp[2]) Can_Number[i] = false;
        if (Tmp[0] - '0' == 0 || Tmp[1] - '0' == 0 || Tmp[2] - '0' == 0) Can_Number[i] = false;
    }
}
//반복된숫자랑 0있는지 체크하는 과정
void Input()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        Game G;
        G.Number = a;
        G.Strike = b;
        G.Ball = c;

        V.push_back(G);
    }
}
//숫자랑 스트라이크 볼 판전
void Solution()
{

    for (int i = 0; i < V.size(); i++)
    {
        int Num = V[i].Number;
        int Strike = V[i].Strike;
        int Ball = V[i].Ball;
        string Origin = to_string(Num);

        for (int j = 123; j <= 999; j++)
        {
            int Tmp_Strike = 0;
            int Tmp_Ball = 0;

            if (Can_Number[j] == true)
            {
                string Tmp = to_string(j);
                for (int a = 0; a < 3; a++)
                {
                    for (int b = 0; b < 3; b++)
                    {
                        if (a == b && Origin[a] == Tmp[b]) Tmp_Strike++;
                        if (a != b && Origin[a] == Tmp[b]) Tmp_Ball++;
                    }
                }
                if (Strike != Tmp_Strike || Ball != Tmp_Ball) Can_Number[j] = false;
            }
        }
    }

    int Answer = 0;
    for (int i = 123; i <= 999; i++)
    {
        if (Can_Number[i] == true) Answer++;
    }
    cout << Answer << endl;
}

void Solve()
{
    Initialize();
    Input();
    Solution();
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("Input.txt", "r", stdin);
    Solve();

    return 0;
}

