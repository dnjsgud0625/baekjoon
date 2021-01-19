#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m,n;
    int arr[1000001]={0,};
    
    cin >> m >> n;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        if(arr[i]==0){
            for(int j=2;j*i<=n;j++){
                arr[i*j]=1;
            }
        }
    }
    for(int i=m;i<=n;i++){
        if(arr[i]==0)   cout << i << '\n';
    }
    return 0;
}