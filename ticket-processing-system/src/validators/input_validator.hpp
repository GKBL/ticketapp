#ifndef INPUT_VALIDATOR_HPP
#define INPUT_VALIDATOR_HPP

#include <string>

class InputValidator {
public:
    static bool validateTicketID(const std::string& ticketID);
    static bool validateFare(double fare);
    static bool validateDiscount(double discount);
    static bool validateInputData(const std::string& ticketID, double fare, double discount);
};

#endif // INPUT_VALIDATOR_HPP