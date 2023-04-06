#include <iostream>
#include <vector>
using namespace std;

int Nums(vector<int> dices, int diceCount)
{
    int isNum = diceCount * 2;
    for (auto i : dices)
    {
        if (i == diceCount)
            isNum += diceCount;
    }
    return isNum;
}
int FourOfAKind(vector<int> dices)
{
    if (dices[0] == dices[1])
        return dices[0] * 4;
    if (dices[1] == dices[2])
        return dices[1] * 4;
    if (dices[2] == dices[0])
        return dices[2] * 4;
    return 0;
}
int FullHouse(vector<int> dices)
{
    if (dices[0] == dices[1] && dices[1] == dices[2])
    {
        if (dices[0] != 6)
            return dices[0] * 3 + 12;
        else
            return 28;
    }
    if (dices[0] == dices[1])
    {
        if (dices[0] > dices[2])
            return dices[0] * 3 + dices[2] * 2;
        else
            return dices[2] * 3 + dices[0] * 2;
    }
    if (dices[1] == dices[2])
    {
        if (dices[1] > dices[0])
            return dices[1] * 3 + dices[0] * 2;
        else
            return dices[0] * 3 + dices[1] * 2;
    }
    if (dices[2] == dices[0])
    {
        if (dices[2] > dices[1])
            return dices[2] * 3 + dices[1] * 2;
        else
            return dices[1] * 3 + dices[2] * 2;
    }
    return 0;
}
int Straight(vector<int> dices, char LB)
{
    int S[6] = {};
    if (LB == 'L')
    {
        for (auto i : dices)
        {
            if (++S[i - 1] > 1 || i == 6)
            {
                return 0;
            }
        }
    }
    if (LB == 'B')
    {
        for (auto i : dices)
        {
            if (++S[i - 1] > 1 || i == 1)
            {
                return 0;
            }
        }
    }
    return 30;
}
int Yacht(vector<int> dices)
{
    if (dices[0] == dices[1] && dices[1] == dices[2])
    {
        return 50;
    }
    return 0;
}
int Choice(vector<int> dices)
{
    return dices[0] + dices[1] + dices[2] + 12;
}
int main()
{
    int score = 0;
    string s;
    vector<int> dices(3);
    cin >> s >> dices[0] >> dices[1] >> dices[2];
    for (int i = 0; i < 12; ++i)
    {
        if (i < 6 && s[i] == 'Y')
        {
            score = max(score, Nums(dices, i + 1));
        }
        else if (i == 6 && s[i] == 'Y')
        {
            score = max(score, FourOfAKind(dices));
        }
        else if (i == 7 && s[i] == 'Y')
        {
            score = max(score, FullHouse(dices));
        }
        else if (i == 8 && s[i] == 'Y')
        {
            score = max(score, Straight(dices, 'L'));
        }
        else if (i == 9 && s[i] == 'Y')
        {
            score = max(score, Straight(dices, 'B'));
        }
        else if (i == 10 && s[i] == 'Y')
        {
            score = max(score, Yacht(dices));
        }
        else if (i == 11 && s[i] == 'Y')
        {
            score = max(score, Choice(dices));
        }
    }
    cout << score;
}