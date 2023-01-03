class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        vector<int> c((m+n),1);
    int i=0,j=0,k=0;
    while( i<m && j<n ){
        if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else{
            c[k++]=a[i++];
        }
    }
    while(i<m){
            c[k++]=a[i++];
        }
    while(j<n){
            c[k++]=b[j++];
        }
    
    a.clear();
    
    for(int h=0; h<c.size(); h++){
        a.push_back(c[h]);
    }
        
    }
};
