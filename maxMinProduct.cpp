    vector<long long> maxMinProduct(vector<int>& arr) {
        // code here.
        int n = arr.size();
        bool isZero = false;
        int negs = 0;
        int pos = 0;
        long negPro = 1;
        long posPro = 1;
        sort(arr.begin(),arr.end());
        for(int ele : arr){
            if(ele == 0) isZero = true;
            else if(ele < 0) {
            negPro *= ele;
            negs++;
            } else{
                pos++;
                posPro *= ele;
            }
            
        }
        
        if(isZero && pos && !negs) return {posPro,0};
        else if(!isZero && pos && !negs) return {posPro,arr[0]};
        else{
            long maxPro = (negPro/arr[negs-1]) * posPro;

            long minPro = negPro * posPro;
            if(negs && negs%2){
              if(pos ==  0) maxPro = 0;
               return {maxPro,minPro};
            } else if(negs && negs%2==0){
               return {minPro,maxPro};
            }
        }
        return {0,0};
    }
