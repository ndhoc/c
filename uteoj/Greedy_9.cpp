#include <bits/stdc++.h>
using namespace std;

struct job{
	int w, t;
};

bool cmp(job a, job b){
	return (double)a.w / a.t > (double)b.w / b.t;
}

int main(){
	int n; cin >> n;
	vector<job> jobs(n);

	for(int i = 0; i < n; ++i) cin >> jobs[i].w >> jobs[i].t;

	sort(jobs.begin(), jobs.end(), cmp);

	int sumt = 0, ans = 0;

	for(int i = 0; i < n; ++i){
		sumt += jobs[i].t;
		ans += jobs[i].w * sumt;
	}
	cout << ans;


	return 0;
}
