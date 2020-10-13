#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    int max_element=INT_MIN;
    for(int i=0; i<n; i++){
        cin>>v[i];
        /*if(max_element<v[i]){
            max_element=v[i];
        }*/
        max_element=max(max_element,v[i]);
	
    }
/* we can also use
	int res=*max_element(v,v+n);
*/
    cout<<max_element;
}
