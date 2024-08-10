#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    vector<int> v;

    v.push_back(10);
    v.push_back(20);

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v.size()<<endl;
    
    v.pop_back();
    
    cout<<v.size()<<endl;

    cout<<v[0]<<endl;

    cout<<v.size()<<endl;

    return 0;
}