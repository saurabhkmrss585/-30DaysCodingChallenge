class Solution {
public:

   int countBeam(string s){
      int c=0;
       for(auto one:s){
        c+=one-'0';
       }
       return c;
     
   }
    int numberOfBeams(vector<string>& bank) {
       vector<int>devices;
       int beams=0;
       for(auto row:bank){
        devices.push_back(countBeam(row));
       }
       for(int i=0;i<devices.size();i++){
        int j=i+1;
        while(j<devices.size()){
            beams+=devices[i]*devices[j];
            if(devices[j]==0){
                j++;
            }
            else{
                break;
            }
        }
       }
       return beams;
        
    }
};