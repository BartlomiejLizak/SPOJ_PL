#include <iostream>

using namespace std;

bool lp(int a)
{
for(int i = 2; i < a; i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
int n, ile;
cin >> ile;
for(int i = 1; i <= ile ; i++)
{
    cin >> n;
    if(n > 1){
    if(lp(n) == true)
    {
        cout << "TAK" << endl;
    }
    else
    {
        cout << "NIE" << endl;
    }
    }
    else
    {
        cout << "NIE" << endl;
    }
}
}
