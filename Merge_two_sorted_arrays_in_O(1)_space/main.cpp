#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a1,a2;
    int n1,n2,a,b;
    cin>>n1>>n2;

    for (int i = 0; i < n1; i++){
        cin>>a;
        a1.push_back(a);
    }

    for (int i = 0; i < n2; i++){
        cin>>b;
        a2.push_back(b);
    }
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    for(int i = 0; i < n1; i++){
        if(a1[i]>a2[0]){
            swap(a1[i],a2[0]);
            int i;
            for(i=0;i<n2&&a2[0]>a2[i];i++){
                a2[i-1]=a2[i];
            }
            a2[i]=a2[0];
        }
    }
    for (int i = 0; i < n1; i++){
        cout<<a1[i];
    }
    cout<<endl;
    for (int i = 0; i < n2; i++){
        cout<<a2[i];
    }
}
