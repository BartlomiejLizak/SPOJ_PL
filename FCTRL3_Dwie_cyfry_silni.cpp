#include <iostream>

using namespace std;

int main()
{
unsigned int n, ile;
unsigned long long int  pomoc = 1;
cin >> ile;
for(int i = 0; i < ile; i++)
{
    cin >> n;
    if(n >= 10)
    {
        cout<<0 << " " << 0 << endl;
    }
    else
    {
    for (int i = 1; i <= n; i++)
    {
        pomoc = pomoc * i;
    }
    cout << pomoc / 10 % 10 << " " << pomoc % 10 << endl;
    }
    pomoc = 1;
}
}
