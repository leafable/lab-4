#include <iostream>
using namespace std;

bool Student::removeById(int id) {

    if (ids.find(id) != ids.end()) {
        ids.erase(id);
        return true;
    }

    return false;
}

int main(){


    return 0;
}

// discord: leafable
// In case you wanted to contact me since the professor ended the meeting