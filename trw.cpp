#include<bits/stdc++.h>

using namespace std;


// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){
        int cap=0,lm=arr[0],rm=arr[n-1];
        int l=0,r=n-1;
        while(l<r)
        {
            if(lm<arr[l])
            lm=arr[l];
            if(rm<arr[r])
            rm=arr[r];
            if(lm>rm)
            cap+=rm-arr[r--];
            else
            cap+=lm-arr[l++];
        }
        return cap;
}

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  
