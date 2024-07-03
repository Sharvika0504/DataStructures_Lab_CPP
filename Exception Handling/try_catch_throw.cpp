#include <iostream>
#include <stdexcept>  
#include <string>     
using namespace std;

// Function to check the ages and potentially throw an exception
void checkAges(int motherAge, int sonAge) {
    if (motherAge < sonAge) {
        throw std::runtime_error("Error: Mother's age cannot be less than her son's age.");
    }
}

int main() {
    try {
        int motherAge = 39;
        int sonAge = 41;
    }
    catch (const std::runtime_error& e) {  // Catch exceptions of type std::runtime_error
        cout << "Caught an exception: " << e.what() << endl;  
    }
    return 0;
}
