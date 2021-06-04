#include <iostream>


using namespace std;

int main(){
    int n, s, sum = 0;
    cout << "+ - * /" << endl;
    for(int i = 0; i < 10000; i++){
        cin >> s >> n;
        if(s == '+'){
            sum = sum + n;
            cout << sum << endl;
        }
    }
    
}