#include <iostream>
#include <string>
using namespace std;

bool isDangerous(string &str ){

    int state1 = 0;
    int state0 = 0;

    bool dang = false;


    for(auto b = str.begin(); b != str.end(); b++){

        if(*b == '1'){
            state1++;
            state0 = 0;
            if(state1 == 7){
              dang = true;
            }
        } else{
            state1 = 0;
            state0 ++;

            if(state0 == 7){
                dang = true;
            }

        }

    }
    return dang;
}


int main() {
    string str;
    cin >> str;

    if(isDangerous(str)){

        cout << "YES";

    }else{
        cout << "NO";
    }


    return 0;
}
