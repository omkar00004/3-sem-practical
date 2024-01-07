#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file("my_data.txt", ios::in | ios::out);  // Open for both input and output

    // Read the first line
    string line;
    getline(file, line);
    cout << "First line: " << line << endl;

    // Add a new line to the end
    file << "\nNew line added!";

    file.close();  // Close the file
    return 0;
}
