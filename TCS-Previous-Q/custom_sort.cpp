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

    int key;
    cin >> key;

    unordered_map<int, int> freq;
    unordered_map<int, int> first;

    // store frequency and first occurrence
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
        if(first.find(arr[i]) == first.end()){
            first[arr[i]] = i;
        }
    }

    // sort based on freq and first occurrence
    sort(arr.begin(), arr.end(), [&](int a, int b){
        if(freq[a] != freq[b]){
            return freq[a] < freq[b]; // smaller freq first
        }
        return first[a] < first[b]; // earlier occurrence first
    });

    // print sorted array
    for(int x : arr){
        cout << x << " ";
    }
    cout << endl;

    // find index of key in original array
    int index = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            index = i;
            break;
        }
    }

    cout << index;

    return 0;
}