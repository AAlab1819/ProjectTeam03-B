#include<bits/stdc++.h>
#include<omp.h>
using namespace std;

typedef long long int ll;

int main()
{
	ll goal,maxleap;
	cin>>goal>>maxleap;
	string track;
	cin>>track;
	double startTime = omp_get_wtime();
	int dp[101];
	for (int i = 0; i<101; i++)
	{
		dp[i] = 10000000;
	}
	dp[0] = 0;
	for (int i = 0; i<goal; i++){
		for (int j = 1; j<=maxleap; j++){
			if (i+j<goal){
				if (track[i+j]=='1'){
					dp[i+j] = min(dp[i+j],1+dp[i]);
				}
			}
		}
	}
	if (dp[goal-1] != 10000000){
        cout<<dp[goal-1]<<endl;

	}
	else{
        cout<<-1<<endl;
	}
    double endTime = omp_get_wtime();
    cout<< fixed << setprecision(5) << "Start time: " << startTime << endl;
    cout<< fixed << setprecision(5) << "End time: " << endTime << endl;
    cout<< fixed << setprecision(5) << "Process time: " << endTime - startTime << endl;
	return 0;
}
