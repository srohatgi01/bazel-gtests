#include <string>
class Logs {
    private:
        std::string message;
    public:
        Logs();
        Logs(std::string msg);
        void print();
        ~Logs();
};