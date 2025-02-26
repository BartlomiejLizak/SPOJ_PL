#include <iostream>
using namespace std;

int main() {

int t , obz, w_pudelku, tczas, czas, ciastek, ip = 0;

cin>> t;

for(int i = 0 ; i < t ; i++)
{
    ciastek = 0;
    ip = 0;
    cin>> obz >> w_pudelku;

    for(int n = 0; n < obz; n++)
    {
            cin>> czas;
            tczas = czas;
        for(int doba = 86400; tczas <= doba;)
        {
            ciastek++;
            tczas+= czas;
        }

        }
    for(;ciastek >= w_pudelku;)
    {

        ip ++;
        ciastek -= w_pudelku;
    }
    if (ciastek != 0)
    {
        ip++;
    }
    cout << ip << endl;
}

	return 0;
}
