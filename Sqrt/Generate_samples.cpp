#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void sqrt_samples(ofstream& file){
    for (int i = 0; i < INT_MAX; ) {
        if(i < 0) break;
        file << i << " " << sqrt(i) << endl;
        if(i <= 100) i++;
        else if(i <= 1000) i+=99;
        else i+=49999;
    }
    
    file.close();
}

int main(){
    const char* fileName = "sqrt_samples.txt";
    // Deleting the old file
    remove(fileName);
    
    // Creating a new file
    ofstream outFile(fileName);

    if (outFile.is_open()) {
        // Write numbers and their square roots to the file
        sqrt_samples(outFile);
    }

    else {
        cout << "Error creating file!\n";
    }

    return 0;
}


