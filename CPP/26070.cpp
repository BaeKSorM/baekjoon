#include <iostream>
using namespace std;

int main()
{
    long A, B, C, X, Y, Z, sum = 0;
    cin >> A >> B >> C >> X >> Y >> Z;
    for (int i = 0; i < 2; ++i)
    {
        if (A > X)
        {
            sum += X;
            A -= X;
            X = 0;
        }
        else
        {
            sum += A;
            X -= A;
            A = 0;
            Y += X / 3;
            X %= 3;
        }
        if (B > Y)
        {
            sum += Y;
            B -= Y;
        }
        else
        {
            sum += B;
            Y -= B;
            B = 0;
            Z += Y / 3;
            Y %= 3;
        }
        if (C > Z)
        {
            sum += C;
            C -= Z;
        }
        else
        {
            sum += C;
            Z -= C;
            C = 0;
            X += Z / 3;
            Z %= 3;
        }
    }
    cout << sum;
}