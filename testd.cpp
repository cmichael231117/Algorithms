#include <iostream>
using namespace std;

void blackjack(int num, int max, int *cards)
{
    int combination = 0;
    int sum = 0;
    for (int i = 0; i < num - 2; i++)
    {
        for (int j = i + 1; j < num - 1; j++)
        {
            for (int k = j + 1; k < num; k++)
            {
                sum = cards[i] + cards[j] + cards[k];
                if ((sum <= max) && (sum > combination))
                {
                    combination = sum;
                }
            }
        }
    }
    cout << combination;
}

int main()
{
    int num, max;
    cin >> num >> max;

    int cards[num];
    for (int i = 0; i < num; i++)
    {
        cin >> cards[i];
    }
    blackjack(num, max, cards);
    return 0;
}