#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    // Check if the correct number of command line arguments is provided
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <source filename> <destination filename>" << endl;
        return 1; // Exit with error
    }

    // Open the source file for reading
    ifstream sourceFile(argv[1]);
    if (!sourceFile) {
        cerr << "Error: Unable to open source file." << endl;
        return 1; // Exit with error
    }

    // Open the destination file for writing
    ofstream destFile(argv[2]);
    if (!destFile) {
        cerr << "Error: Unable to open destination file." << endl;
        return 1; // Exit with error
    }

    // Copy contents from source file to destination file
    string line;
    while (getline(sourceFile, line)) {
        destFile << line << endl;
    }

    // Close the files
    sourceFile.close();
    destFile.close();

    cout << "File copied successfully." << endl;

    return 0;
}
