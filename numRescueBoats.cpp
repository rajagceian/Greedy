    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int requiredBoat = 0;
        int i = 0,j=n-1;
        while (i <= j) {
            if ((people[i] + people[j]) <= limit) {
                i++;
                // j--;
            } 
            // else {
            //     j--;
            // }
            j--;
            requiredBoat++;
        }
        return requiredBoat;
    }
