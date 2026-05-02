#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n <= 0){
        cout << "Invalid Input";
        return 0;
    }

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> freq;

    // count frequency
    for(int x : arr){
        freq[x]++;
    }

    // count duplicates
    int duplicates = 0;
    for(auto it : freq){
        duplicates += (it.second - 1);
    }

    cout << duplicates << endl;

    // max heap {freq, element}
    priority_queue<pair<int,int>> pq;

    for(auto it : freq){
        pq.push({it.second, it.first});
    }

    vector<int> result;

    while(pq.size() > 1){
        auto [f1, x1] = pq.top(); pq.pop();
        auto [f2, x2] = pq.top(); pq.pop();

        result.push_back(x1);
        result.push_back(x2);

        if(--f1 > 0) pq.push({f1, x1});
        if(--f2 > 0) pq.push({f2, x2});
    }

    if(!pq.empty()){
        auto [f, x] = pq.top();
        if(f > 1){
            cout << "Not Possible";
            return 0;
        }
        result.push_back(x);
    }

    // print rearranged array
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n <= 0){
        cout << "Invalid Input";
        return 0;
    }

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int,int> freq;

    // count frequency
    for(int x : arr){
        freq[x]++;
    }

    // count duplicates
    int duplicates = 0;
    for(auto it : freq){
        duplicates += (it.second - 1);
    }

    cout << duplicates << endl;

    // max heap {freq, element}
    priority_queue<pair<int,int>> pq;

    for(auto it : freq){
        pq.push({it.second, it.first});
    }

    vector<int> result;

    while(pq.size() > 1){
        auto [f1, x1] = pq.top(); pq.pop();
        auto [f2, x2] = pq.top(); pq.pop();

        result.push_back(x1);
        result.push_back(x2);

        if(--f1 > 0) pq.push({f1, x1});
        if(--f2 > 0) pq.push({f2, x2});
    }

    if(!pq.empty()){
        auto [f, x] = pq.top();
        if(f > 1){
            cout << "Not Possible";
            return 0;
        }
        result.push_back(x);
    }

    // print rearranged array
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}