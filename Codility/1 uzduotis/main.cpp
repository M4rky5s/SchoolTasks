#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
int toBinary(int N);

int main(){

    int N;
    cout << "Write a number from 1 to 647" << endl;
    cin >> N;
    if(N > 647 || N < 1){
        cout << "Your number is out of range, write it again" << endl;
        cin >> N;
    }

    cout << toBinary(N);


	return 0;
}

int toBinary(int N){

    int remainder, BinaryNum = 0, i = 1;
    while(N != 0){

        remainder = N % 2;

        N = N / 2;
        BinaryNum = BinaryNum + remainder * i;
        i = i * 10;
    }
    return BinaryNum;
}

int solution(int N){

    int currentGap, maxGap;

}
