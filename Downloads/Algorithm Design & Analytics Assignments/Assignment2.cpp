#include <iostream>                                                       // includes library for console input/output
#include <fstream> // allows to read (read data) and write (create/add data) to files

// bubble sort declaration
void bubbleSort(std::string names[], int ids[], int scores[], int size, int& comparisonCount);

int main() {       
std::ifstream inputfile("participants.txt");                             // creates an input file stream object and opens the file "participants.txt"
int participationCount = 0;                                             // initializes a counter variable to keep track of the number of participants
int bubbleComparison = 0;


std::string templine ;                                                 // We need a string variable to temporarily hold each line
while (std::getline(inputfile, templine)) {                           // keep looping and reading lines of data until it reaches the end of the file
participationCount++;

}
// Makes a list to hold all the participant data.
std::string* names = new std::string [participationCount];            // Declares pointer and allocates (reserves) the memory for the names array and assigns it to the pointer
int* ids = new int [participationCount];   
int* scores = new int[participationCount]; 

std::ifstream dataFile("participants.txt");                           // opens the file again for the second pass
int index = 0;
while (dataFile >> names[index] >> ids[index] >> scores[index]) {     // reads new names, ids, and scores in the data file and icrements to iterate through the index's
index++;
}

for (int index = 0; index < participationCount; index++) {            // loops and increments index to print each name to make sure they were read correctly.
    std::cout << names[index] << std::endl;                          // prints names from specfic index
}




bubbleSort (names,ids,scores, participationCount, bubbleComparison);
 
return 0;                                                           // indicates that the program has ran successfully
 
}

 // Bubble Sort function 
void bubbleSort(std::string names[], int ids[], int scores[], int size, int& comparisonCount) {
for (int i = 0; i < size - 1; i++) {
for ( int j = 0; j < size - i - 1; j++) {
comparisonCount++;                            // tracks comparisons

    // swaps ids
    if ( ids[j] > ids[j + 1]) {              // checks if swap is needed (increasing order by ID)
    int temp_id = ids[j];
        ids[j] = ids[j + 1];
    ids[j + 1] = temp_id;

    // swaps scores
    int temp_score = scores[j];
    scores[j] = scores [ j + 1 ];
    scores[j + 1] = temp_score;
 
    // swaps Names
    std::string temp_name = names[j];
    names[j] = names[j + 1];
    names[j + 1] = temp_name; 
 

         }
      }

    }
    
}
