#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <bitset>
#include <vector>
#include <cstdio>
#include <string>
#include <cassert>
#include <climits>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define PB push_back
#define MP make_pair
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
#define FOREACH(e,x) for(__typeof(x.begin()) e=x.begin();e!=x.end();++e)
typedef long long LL;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        if (n <= 3) return -1;
        int sum = 65535;
        for (int i = 0; i <= n-3; i++) {
            for (int j = i+1; j <= n-2; j++) {
                for (int k = j+1; k <= n-1; k++) {
                    int temp = nums[i] + nums[j] + nums[k];
					cout<<temp<<endl;
                    if (temp == target) return target;
                    if (abs(temp - target) < abs(sum - target))     
                        sum = temp;
                }
            }
        }
        return sum;
    }
};

int main() {
	vector<int> num(3);
	num[0] = 0;
	num[1] = 0;
	num[2] = 0;
	int target = 1;
	Solution s;
	cout<<s.threeSumClosest(num,target)<<endl;
	return 0;
}

