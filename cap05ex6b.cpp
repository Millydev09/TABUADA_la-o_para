#include <iostream>
using namespace std;
int i,n,r;
int main (void)
{
  i=1;
  cout << "entre um valor para tabuada:" << endl;
  cin >> n;
  cin.ignore (80,'\n');
  for (i=1;i<=10;++i)
  {
    r= n*i;
    cout << n << "x" << i << "=" << r << endl;
  }
  return 0;
}
