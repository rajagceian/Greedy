    int minimumCostOfBreaking(vector<int> x, vector<int> y, int M, int N) {
        // Write your code here
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        int m = x.size();
        int n = y.size();
        int i=m-1,j=n-1;
        int verBoard=1,horBoard=1;
        int cost=0;
        while(i>=0 && j>=0){
            if(x[i]>y[j]){
            cost+=x[i--]*verBoard;
            horBoard++;
            } else{
            cost+=y[j--]*horBoard;
            verBoard++;
            }
        }
        while(i>=0){
            cost+=x[i--]*verBoard;
            horBoard++;
        }
        while(j>=0){
            cost+=y[j--]*horBoard;
            verBoard++;
        }
        return cost;
    }
    
