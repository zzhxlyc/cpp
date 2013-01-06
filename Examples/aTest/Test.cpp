#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
 char str[5]="123";
  while(next_permutation(str,str+strlen(str)))
  {
    puts(str);
  }
 return 0;
}