class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
        int n=fruits.size();
       // vector<bool> used(n,false);// space reduce to o(1);

        int unplaced=0;

        for(int i=0;i<n;i++){
           // bool placed =false;

            for(int j=0;j<n;j++){
                if( baskets[j]>=fruits[i]){
                   baskets[j]=-1;
                    unplaced++;
                    break;


                }
            }
           /* if(!placed){
                    unplaced++;
            }*/
        }
        unplaced=n-unplaced;

return unplaced;
    }
};
