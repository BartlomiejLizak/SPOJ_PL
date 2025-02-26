#include <iostream>

using namespace std;

int main()
{
long long int p, w;
int ile;

cin >> ile;
for(int i = 1; i <= ile; i++)
{
    cin >> p >> w;
    switch(p % 10)
    {
    case 1:
    case 5:
    case 6:
    case 0:
    {
        cout << p % 10 << endl;
        break;
    }
    case 2:
        {
            if(w % 4 == 0)
            {
                cout << 6 << endl;
            }
            else if(w % 4 == 1)
            {
                cout << 2 << endl;
            }
            else if(w % 4 == 2)
            {
                cout << 4 << endl;
            }
            else if(w % 4 == 3)
            {
                cout << 8 << endl;
            }
        break;
        }
        case 3:
        {
            if(w % 4 == 0)
            {
                cout << 1 << endl;
            }
            else if(w % 4 == 1)
            {
                cout << 3 << endl;
            }
            else if(w % 4 == 2)
            {
                cout << 9 << endl;
            }
            else if(w % 4 == 3)
            {
                cout << 7 << endl;
            }
        break;
        }
        case 7:
        {
            if(w % 4 == 0)
            {
                cout << 1 << endl;
            }
            else if(w % 4 == 1)
            {
                cout << 7 << endl;
            }
            else if(w % 4 == 2)
            {
                cout << 9 << endl;
            }
            else if(w % 4 == 3)
            {
                cout << 3 << endl;
            }
        break;
        }
        case 8:
        {
            if(w % 4 == 0)
            {
                cout << 6 << endl;
            }
            else if(w % 4 == 1)
            {
                cout << 8 << endl;
            }
            else if(w % 4 == 2)
            {
                cout << 4 << endl;
            }
            else if(w % 4 == 3)
            {
                cout << 2 << endl;
            }
        break;
        }
    case 4:
        {
            if(w % 2 == 0)
            {
                cout << 6 << endl;
            }
            else
            {
                cout << 4 << endl;
            }
            break;
        }
    case 9:
        {
            if(w % 2 != 0)
            {
                cout << 9 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
            break;
        }
        break;
    }
}
}

