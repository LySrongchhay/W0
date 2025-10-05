#include <iostream>

using namespace std;

void input(int * p_arr, int pos, int val, int &n, int size = 10){
    if(pos < 0){
        cout<<"Error! You cannot input negative index."<<endl;
        return;
    }
    if(pos > n){
        cout << "Error! Index " << n << " has not been filled yet. Please fill it first." << endl;
        return;
    }
    if(pos >= size){
        cout<<"Error! The Array reach it limit."<<endl;
        return;
    }
    
    p_arr[pos] = val;
    n = (pos < n)? n: n+1;
}

void insert(int * p_arr, int pos, int val, int &n, int size = 10){
    if(pos > n){
        cout<<"Error! Out of range to insert."<<endl;
        return;
    }
    if(n == size){
        cout<<"Error! The Array reach it limit."<<endl;
        return;
    }
    
    if(pos < 0){
        cout<<"Error! Cannot insert negative index."<<endl;
        return; 
    }
    for(int i = n ; i> pos; i--){
        
        p_arr[i] = p_arr [i-1];
    }
    p_arr[pos] = val;
    n++;


}

void delete_(int * p_arr, int pos, int &n){
    if(pos >= n || pos < 0){
        cout<<"Error! Deleting an unexisting index."<<endl;
        return;
    }
    for(int i = pos; i < n ; i++){
        p_arr[i] = p_arr[i+1];

    }
    n--;
}

int main(){
    
    int a[10] = {1,2};
    int n = 2;

    input(a, 2, 10, n);
    input(a, 3, 15, n);
    input(a, 1, 25, n);
    input(a, 4, 54, n);
    
    // input(a,-1,22,n);
    // input(a,122,1,n);

    insert(a,1,123,n);

    // insert(a,-4,32,n);
    // insert(a,21,34,n);


    delete_(a,4,n);

    // delete_(a,-1,n);
    
    
    for(int i = 0; i < n; i++){
        cout<<"Value "<<i<<": "<<a[i]<<endl;
    }
    cout<<"n="<<n<<endl;
    cout<<"--------------------------------"<<endl;
    return 0;
}
