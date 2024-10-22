#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void PrintName(const char* name, int count = 5) {
    // Base case: if count reaches 0, stop the recursion
    if (count <0) {
        return;
    }
    
    // Print the name
    cout << name << endl;
    
    // Recursive call with count decreased by 1
    PrintName(name, count - 1);
}

int main() {
    PrintName("Yogesh");
    return 0;
}