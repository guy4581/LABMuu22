#include<iostream>

using namespace std;

int main(int avgc , const char* avgv[]){

    int N = avgc - 1;
    int sum = 0;

    if(avgc < 1){
        cout << "Please input numbers to find average."<<endl;
    }else{

        for(int i =0 ; i < N; i++){
            sum += atoi(avgv[i+1]);
        }
        cout << "---------------------------------" << endl;
        cout << "Average of " << N << " numbers = "<< sum/N << endl;
        cout << "---------------------------------" ;
    }

}
