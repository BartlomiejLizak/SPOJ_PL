#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int ile, p = 1, r = 0;
string w, wy[199], po;
char l, pop, k, a;
void pu(char a){ wy[r] = a; r = r +1;}
int main()
{
cin >> ile;
for (int i = 1; i <= ile; i++)
{
cin >> w;
for(int i = 0; i < w.length(); i++)
{
pop = l;
l = w[i];
k = w[i+ 1];
if(l == k)
{
p+= 1;
pu(l);
}
if(l != k)
{
if (p >= 3)
{
for(int i = p - 1; i > 1; i--)
{
{
wy[r] = "";
r = r -1;
}
}
    do
                    {
                        po += '0' + (p % 10);
                        p /= 10;
                    }while (p > 0);

                    reverse(po.begin(),po.end());
                    for(int i = 0; i < po.length(); i++)
                    {
                        a = po[i];
                        pu(a);
                    }
                    po = "";
                    p = 1;
                }
                else
                {
                    p = 1;
                    pu(l);
                }
            }
        }
        w = "";
        for(int x = 0; x < r; x++)
        {
            w += wy[r];
        }
        cout << w << endl;
        for(int i = r; i > 0; i--)
        {
            wy[r] ="";
            r --;
        }
    }
}

