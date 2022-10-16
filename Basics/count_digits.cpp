// code solution

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0;
        int temp = N;
        string num = to_string(temp);
        for(int i=0;i<num.size();i++){
            int digit = num[i]-'0';
            if(num[i]=='0'){
                continue;
            }
            if(N%digit==0){
                count++;
            }
            
        }
        return count;
    }
};

// logic 1

#include <iostream>
using namespace std;

void count_digits(int n){
  int count = 0;
  while(n){
    n = n/10;
    count++;
  }
  cout<<count;
}

int main() 
{
    int n;
    cin>>n;
    count_digits(n);
    return 0;
}

// logic 2

#include <iostream>
using namespace std;

void count_digits(int n){
  string ans = to_string(n);
  cout<<ans.size();
}

int main() 
{
    int n;
    cin>>n;
    count_digits(n);
    return 0;
}

// logic 3

#include <iostream>
#include<math.h>
using namespace std;

void count_digits(int n){
  int digit = floor(log10(n)+1);
  cout<<digit;
}

int main() 
{
    int n;
    cin>>n;
    count_digits(n);
    return 0;
}
