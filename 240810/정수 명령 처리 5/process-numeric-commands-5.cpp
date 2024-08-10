#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    string order;
    int index, item;

    vector<int> v;

    for(int i=0;i<n;i++)
    {
        cin>>order;

        if(order=="push_back")
        {
            cin>>item;
            v.push_back(item);
        }
        else if(order=="get")
        {
            cin>>index;
            cout<<v[index-1]<<endl;
        }

        else if(order=="size")
        {
            cout<<v.size()<<endl;
        }
        else
        {
            v.pop_back();
        }
    }

    return 0;
}