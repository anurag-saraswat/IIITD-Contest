#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m,x,y;
        cin>>m>>x>>y;

        int range = x*y, arr[m], sol[99];

        for(int j=0;j<m;j++){
            cin>>arr[j];
        }

        for(int j=0;j<100;j++){
            sol[j]=1;
        }

        for(int j=0;j<m;j++){

            if((arr[j]-range < 0) && (arr[j]+range > 100)){
                for(int k=0;k<100;k++){sol[k]=0;}

            }
            else if((arr[j]-range < 0)){
                for(int k=0;k<(arr[j]+range);k++){ sol[k]=0;}
            }

            else if((arr[j]+range > 100)){
                for(int k=arr[j]-range-1;k<100;k++){ sol[k]=0;}
            }
            
            else{
                for(int k=(arr[j]-range-1); k<(arr[j]+range) ;k++){ sol[k]=0;}   
            }


        }
        int count = 0;
        for(int k=0;k<100;k++){
            if(sol[k]==1){
                count++;
            }
            //cout<<sol[k]<<" "<<k<<endl;
        }

        cout<<count<<endl;

    }
    
}