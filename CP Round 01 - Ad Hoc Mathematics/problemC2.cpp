#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout << "PERFECTION OUTPUT" << '\n';
    while(cin >> n && n!=0){
        int tmp = n,sum = 0;
        for(int i = 1; i <= n/2;i++){
            if(tmp%i == 0)sum+=i;
        }
        if(n == sum)printf("%5d  PERFECT\n",n);
        if(sum > n)printf("%5d  ABUNDANT\n",n);
        if(sum < n)printf("%5d  DEFICIENT\n",n);
    }
    cout << "END OF OUTPUT" << '\n';
    return 0;
}
