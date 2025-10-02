
#include <iostream>        //includes library for input/output
#include <cstdlib>         // needed for rand() and srand()
#include <ctime>           // needed for time()
using namespace std;       // Allows using cout, cin, etc. without std::
                       
                                                                              


    int findUniqueness(int arr[], int n) { //
        int comparisons = 0;
        
        
        for (int i = 0; i < n - 1; i++) {                                       //picks the first element of the array
            
        
            for (int j = i + 1; j < n; j++) {                                   // picks the second element
                
                comparisons++;                                                 //increments the comparison number by 1
               
                if (arr[i] == arr[j]) {                                        //this means we found a duplicate
                    
                    return comparisons;                                       // found duplicate so we stop
                }
        }
    }

        return comparisons;                                                   // this runs if no duplicates are found
    }

    int main () {
        const int n = 60;
        const int maxIterations = 1000;
for (int maxValueFactor = 1; maxValueFactor <= 10; maxValueFactor++) {        // (intialization; condition; increment)
long long totalComparisons = 0;                                              // "long long" data type makes sure it can hold a very large number // keeps track of the number of comparisons     
    for (int i = 0; i <= maxIterations - 1; i++ ) {                                                        
        int maxArray[n];                                                    // creates a new array
        int m = maxValueFactor * n; 

    for (int j = 0; j < n; j++) {                                            // loops through the array's elements
        maxArray[j] = rand() % m;
        
        int numComparisons = findUniqueness(maxArray, n);
        totalComparisons += numComparisons;
    }

    double average = static_cast<double>(totalComparisons) / maxIterations;  // gives us a decimal for this specific calculation only.
        cout << "Max Value Factor: " << maxValueFactor << "Average comparisons: " << average << endl;

}
}
    }
   
