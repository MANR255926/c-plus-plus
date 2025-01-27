#include <iostream>
using namespace std;

//user function
int fec(int val1)
{
    int F = 1;
    for (int i = val1; i > 1; i--)
    {
        F = F*i;
    }
    return F;
}

int main()
{
    int n;
    cout <<"enter the number to find factorial : " ;
    cin >> n;
    int fact = fec(n);
    cout <<"answer is = "<< fact << endl;

}