#include <iostream>

using namespace std;

unsigned height[10001];
int main()
{
  unsigned l,h,r,i=0,min=0,max=0;
  while (cin>>l>>h>>r) {
    if (max < r)
      max = r;
    if (!min)
      min = l;
    for (i=l; i<r; i++)
      if (height[i]<h)
        height[i] = h;
  }

  for(i=min; i<max; i++)
    if (height[i] != height[i-1])
      cout<<i<<' '<<height[i]<<' ';
  cout<<max<<' '<<'0'<<endl;
  return 0;
}
