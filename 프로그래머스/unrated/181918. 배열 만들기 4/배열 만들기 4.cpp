#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i=0;
    while(i < arr.size()){
        if(stk.size() == 0){
            stk.push_back(arr[i]);
            i = i+1;
        }else{
            if(stk.size()!=0 && stk.back()<arr[i]){
                stk.push_back(arr[i]);
                i = i+1;
            }
            else if(stk.size()!=0 && stk.back()>=arr[i]){
                stk.pop_back();
            }
        }
    }
    return stk;
}