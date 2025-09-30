#include <string>

namespace log_line {
std::string message(std::string line) {
     auto pos = line.find(": ");
    return line.substr(pos + 2);
}

std::string log_level(std::string line) {
    auto inicio = line.find("[") +1;
    auto fim = line.find("]");
    return line.substr(inicio, fim-inicio);
}

std::string reformat(std::string line) {
    return message(line) + " (" + log_level(line) + ")";

    
}
}  
