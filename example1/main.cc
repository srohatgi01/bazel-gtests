#include <iostream>
#include "logs/logs.h"

int main() {
    std::cout << "Bazel is working" << std::endl;

    Logs logger = Logs("Main Logger");
    logger.print();
    return 0;
}