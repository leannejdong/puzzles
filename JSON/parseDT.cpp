#include <iostream>
#include <string>
#include <json.hpp>
#include <fstream>
#include <iomanip>
using std::cerr;
using std::string;

int main()
{
    using nlohmann::json;

    // read a JSON file
    std::ifstream i("m2.json");
    json j;
    i >> j;

    // write to another file
    std::ofstream o("m22.json");
    o << std::setw(4) << j << "\n";
}
