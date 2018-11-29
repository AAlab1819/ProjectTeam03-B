#include <bits/stdc++.h>
#include<omp.h>
using namespace std;

int main()
{
    long long goal,maxleap,i,j,ans=0;
    cin >> goal >> maxleap;
    string track;
    cin >> track;
    double startTime = omp_get_wtime();
    i=maxleap;
    while(i<goal-1){
        for(j=i; j>i-maxleap; j--){
            if (track[j] == '1'){
                    break;
            }
        }
        if (j==i-maxleap) {
                cout << -1 << endl;
                double endTime = omp_get_wtime();
                cout<< fixed << setprecision(5) << "Start time: " << startTime << endl;
                cout<< fixed << setprecision(5) << "End time: " << endTime << endl;
                cout<< fixed << setprecision(5) << "Process time: " << endTime - startTime << endl;
                return 0;
        }
        i=j+maxleap;
        ans++;
    }
    if (i>=goal-1){
            ans++;
    }
    cout << ans << endl;
    double endTime = omp_get_wtime();
    cout<< fixed << setprecision(5) << "Start time: " << startTime << endl;
    cout<< fixed << setprecision(5) << "End time: " << endTime << endl;
    cout<< fixed << setprecision(5) << "Process time: " << endTime - startTime << endl;
    return 0;
}
