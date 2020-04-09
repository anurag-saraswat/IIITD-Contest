#include <iostream>
using namespace std;
int main() {
    int n,p,q;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        int arr[p],query[q],sol[p];
        for(int j=0;j<p;j++){
            cin>>arr[j];
        }
        for(int j=0;j<q;j++){
            cin>>query[j];
        }
        int max = arr[0];
        for(int j=0;j<p;j++){
            if(max<arr[j]){
                max = arr[j];
            }
            sol[j] = max;
        }

        for(int j=0;j<q;j++){
           cout<<sol[query[j]-1]<<endl;
        }
    }
}
