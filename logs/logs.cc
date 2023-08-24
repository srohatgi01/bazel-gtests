#include "logs.h"
#include <iostream>

Logs::Logs() {
    std::cout << "Log Obj Created" << std::endl;
    message = "";
}

Logs::Logs(std::string msg): message(msg) {
    std::cout << "Log Obj Created" << std::endl;
}

void Logs::print() {
    if(message.empty()) std::cout << "[LOG Message] : No Log message found" << std::endl;
    else {
        std::cout << "[LOG Message] : " << message << std::endl;
    } 
}

Logs::~Logs() {
    std::cout << "Logger Destroyed" << std::endl;
}