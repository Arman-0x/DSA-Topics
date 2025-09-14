#include <iostream>
#include <cmath>   // for sqrt and cbrt
using namespace std;

int main() {
	
	
	 int n;
    cin >> n;

    // Largest perfect square <= n
    int sqrtVal = (int) sqrt(n);        
    int largestSquare = sqrtVal * sqrtVal;

    // safety: ensure square is not > n
   

    // Largest perfect cube <= n
    int cbrtVal = (int) cbrt(n);        
    int largestCube = cbrtVal * cbrtVal * cbrtVal;

    // safety: ensure cube is not > n
   
    // Sum of both
    int result = largestSquare + largestCube;

    cout << "Largest Perfect Square: " << largestSquare << " (root = " << sqrtVal << ")" << endl;
    cout << "Largest Perfect Cube: " << largestCube << " (root = " << cbrtVal << ")" << endl;
    cout << "Sum = " << result << endl;

    return 0;
}
