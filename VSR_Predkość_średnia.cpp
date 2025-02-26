#include <iostream>
using namespace std;

int main() {

int t , vs;

cin>> t;

int predkosca[t], predkoscb[t];

for(int i = 0; i <t ; i++)
{
    cin >> predkosca[i] >> predkoscb[i];
}

for(int i = 0; i <t; i++)
    {
        vs = (2 * predkosca[i] * predkoscb[i]) / (predkosca[i] + predkoscb[i]);
        cout << vs << endl;
}

	return 0;
}
