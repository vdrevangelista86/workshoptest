#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> createVector(int size) 
{
    return make_shared<vector<int>>(size);
}

void fillVector(shared_ptr<vector<int>> vec) 
{
    cout << "Enter " << vec->size() << " integers:\n";
    for (size_t i = 0; i < vec->size(); i++) 
    {
        cin >> (*vec)[i];
    }
}

void printVector(shared_ptr<vector<int>> vec) 
{
    cout << "Vector contents:\n";
    for (size_t i = 0; i < vec->size(); i++) 
    {
        cout << (*vec)[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int size;

    cout << "Enter size of vector: ";
    cin >> size;

    // Create vector using shared_ptr
    shared_ptr<vector<int>> myVector = createVector(size);

    // Fill vector
    fillVector(myVector);

    // Print vector
    printVector(myVector);

    return 0;
}