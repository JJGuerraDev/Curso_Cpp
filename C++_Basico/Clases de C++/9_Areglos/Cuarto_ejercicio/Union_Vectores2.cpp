#include<iostream>
#include<vector>
using namespace std;

int main(void){
    
    //definir Variable
    vector<int> Vector1,Vector2,Vector1_2;
    
    //Bucles
    for (int i = 0; i < 5; i++){
        Vector1.push_back(1+rand()%15);
        Vector2.push_back(15+rand()%26);
    }
    
    for (int i = 0; i < Vector1.size()*2; i++){
        if(i<=Vector1.size()){
            Vector1_2.push_back(Vector1[i]);
        }else{
            Vector1_2.push_back(Vector2[i]);
        }
    }

    for (int N = 0; N <= Vector1_2.size(); N++){
        cout<<Vector1_2[N]<<" ";
    }
    
    

    return 0;
}