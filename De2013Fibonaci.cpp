#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
    vector<int> tra;
    int a=0,b=0;
    for(int i =0; i<n-2;i++){
        if(arr[i] + arr[i+1] == arr[i+2]){
            if(a == 0){
                a = 3;
            }
            else
            a++;
        }
        else{
            tra.push_back(a);
            a = 0;
        }
    }
    if(a!=0){
        tra.push_back(a);
    }
    int length = tra.size();
    int max = tra[0];
    for(int i =0; i<length;i++){
        if(tra[i] > max)
        max = tra[i];
    }
    cout << max;
   
    return 0;
} 