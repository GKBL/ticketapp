#ifndef ID_GENERATOR_HPP
#define ID_GENERATOR_HPP

#include <string>
#include <atomic>

class IDGenerator {
public:
    IDGenerator() : currentID(0) {}

    std::string generateID() {
        return "TICKET-" + std::to_string(currentID++);
    }

private:
    std::atomic<int> currentID;
};

#endif // ID_GENERATOR_HPP