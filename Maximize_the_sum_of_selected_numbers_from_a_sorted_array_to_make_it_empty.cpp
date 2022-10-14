// 14th October, 2022

    int maximizeSum(int a[], int n) {
        map<int, int, greater<int>> omap;
        for(int i = 0; i < n; i++) omap[a[i]]++;
        int sum = 0;
        for(auto i:omap) { 
            if (i.second > 0) {
                sum += i.first*i.second;
                omap[i.first-1] -= i.second;
            }
        }
        return sum;
    }
