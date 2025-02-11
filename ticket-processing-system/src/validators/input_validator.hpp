#ifndef INPUT_VALIDATOR_HPP
#define INPUT_VALIDATOR_HPP

#include <string>

class InputValidator {
public:
    static bool validateTicketID(const std::string& ticketID);
    static bool validateFare(double fare);
    static bool validateDiscount(double discount);
    bool validateRoute(const std::string &route);
    static bool validateInput(const std::string &ticketID, double fare, double discount);
};

#endif // INPUT_VALIDATOR_HPP