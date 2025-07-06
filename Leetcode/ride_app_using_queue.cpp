/*a riding app collects mnames of paseengaers waitung in a queue only 4 
apassengers can share one drive write a program to divide the queue into groups of 
four and dispaly the batches of passengers ready to go remove each group from the queue after display*/

#include <iostream>
#include <queue>
#include<string>
#include<stack>
#include <vector>
using namespace std;

int main() {
    queue<string> passengers;
    string name;
    int total;
stack<string>st;
    cout << "Enter number of passengers in queue: ";
    cin >> total;
    cin.ignore(); // To clear the newline after number input

    // Input passenger names
    for (int i = 1; i <= total; ++i) {
        cout << "Enter name of passenger " << i << ": ";
        getline(cin, name);
        passengers.push(name);
    }

}
		
		int batchnum=1;
		
  while (!passengers.empty() && count < 4) {
            group.push_back(passengers.front());
            passengers.pop();
            count++;
        }
	
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

