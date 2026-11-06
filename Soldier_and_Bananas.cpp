#include <iostream>
using namespace std;


int main(){
    int fbcost, id, bwant;
    // 3 17 
    int total = 0;
    cin >> fbcost >> id >> bwant;

    for (int i = 1; i <= bwant; i++)
{
    total += i * fbcost;
}    
if (total > id){
    cout << total - id;
} else{
    cout << 0;
}

return 0;


}