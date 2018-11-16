#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long goal,maxleap,i,j,ans=0;
    cin >> goal >> maxleap;
    string track;
    cin >> track;
    i=maxleap;
    while(i<goal-1){
        for(j=i; j>i-maxleap; j--){
            if (track[j] == '1'){
                    break;
            }
        }
        if (j==i-maxleap) {
                cout << -1;
                return 0;
        }
        i=j+maxleap;
        ans++;
    }
    if (i>=goal-1){
            ans++;
    }
    cout << ans;
    return 0;
}
