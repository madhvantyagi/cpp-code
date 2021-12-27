#include<iostream>
#include<ctime>
using namespace std;



int main(){

int arr[5][5];
int count[5] = {0, 0, 0, 0, 0};
srand(time(0));

for (int i=0; i<5; i++){
    for(int j=0; j<5; j++){
            int temp = rand()%91+10;
            arr[i][j] = temp;
    }
}

for (int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if (arr[j][i] % 10 == 5)
            count[i]++;
    }
}

for (int i=0; i<5; i++)
    cout << count[i] << " ";
cout << endl;


    return 0;
}