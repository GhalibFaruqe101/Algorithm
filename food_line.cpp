#include<iostream>
using namespace std;
int shortest_line_index(int arr[], int n){
    int shortest = 0;
    for(int j=1; j<n; j++){
        if(arr[j]<arr[shortest]){
            shortest = j;
        }
    }
    return shortest;
}
void solve(int arr[],int n, int m){
    int i,shortest;
    for ( i = 0; i < m; i++)
    {
        shortest = shortest_line_index(arr, n);
        cout<<arr[shortest]<<endl;
        arr[shortest]++;
    }

    

    
}
    #define max_line 100
int main(void){
int arr[max_line];
int n,m;


cin>>n>>m;

for(int i=0; i<n; i++)
    cin>>arr[i];
solve(arr,n,m);

    return 0;
}
