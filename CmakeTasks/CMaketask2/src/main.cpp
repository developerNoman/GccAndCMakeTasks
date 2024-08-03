#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
using namespace std;

using json = nlohmann::json;

int main() {
    ifstream config_file("/home/noman-shafique/Training/cmake/brandNewTask2/config.json");
    if (!config_file.is_open()) {
        cerr << "Failed to open config.json" << endl;
        return 1;
    }

    json config;
    config_file >> config;

    cout << "Parsed JSON data:" << endl;
    cout << config.dump(4) << endl;

    return 0;
}
