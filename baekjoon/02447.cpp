#include <iostream>
using namespace std;

char pattern[3000][3000];

void init()
{
    for (int i = 0; i < 3000; i++)
        for (int j = 0; j < 3000; j++)
        {
            pattern[i][j] = '*';
        }
}

void recur(int n, int sec1, int sec2)
{
    int a = n / 3;
    //if(((sec1/3)==1)&&((sec2/3)==1)){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            pattern[a + n * sec1 + i][a + n * sec2 + j] = ' ';
        }
    }
    //}
    if (a == 0)
        return;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            recur(a, i + a/3 * sec1+1, j + a/3 * sec2+1);
        }
    }
}

int main()
{
    int input;
    cin >> input;
    init();
    recur(input, 0, 0);
    for (int i = 0; i < 2*input; i++)
    {
        for (int j = 0; j < 2*input; j++)
        {
            cout << pattern[i][j];
        }
        cout << endl;
    }
    return 0;
}