//ibrahim ayyad compsci data structures
//due dec 8th
#include <iostream>
#include <string>
#include <map>

using namespace std;


void map_print_capital(map<string, string> stateDataMap, string state) {
    map<string, string>::iterator it = stateDataMap.find(state);
    if (it == stateDataMap.end()) {
        cout << state << " is not found" << endl;
    } else {
        cout << "The capital of " << state << " is " << it->second << endl;
    }
}
void map_print(map<string, string> stateDataMap) {
    for (map<string, string>::iterator it = stateDataMap.begin(); it != stateDataMap.end(); it++) {
        cout << "State: " << it->first << ", Capital: " << it->second << endl;
    }
}



int main() {
    string state;
    map<string, string> stateDataMap;

    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";

    map_print(stateDataMap);

    stateDataMap["California"] = "Los Angeles";

 
    cout << "Enter a state to see it's capital: " << endl;
    getline(cin, state);
    map_print_capital(stateDataMap, state);
    return 0;
}