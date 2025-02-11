#include "input_validator.hpp"
#include <regex>
#include <stdexcept>

bool InputValidator::validateTicketID(const std::string& ticketID) {
    std::regex idPattern("^[A-Z0-9]{5,10}$");
    return std::regex_match(ticketID, idPattern);
}

bool InputValidator::validateFare(double fare) {
    return fare >= 0.0;
}

bool InputValidator::validateDiscount(double discount) {
    return discount >= 0.0 && discount <= 100.0;
}
bool InputValidator::validateRoute(const std::string& route) {
    if (route.empty()) {
        throw std::invalid_argument("Route needed.");
    }
    return true;
}
bool InputValidator::validateInput(const std::string& ticketID, double fare, double discount) {
    if (!InputValidator::validateTicketID(ticketID)) {
        throw std::invalid_argument("Invalid Ticket ID format.");
    }
    if (!validateFare(fare)) {
        throw std::invalid_argument("Fare must be a non-negative value.");
    }
    if (!validateDiscount(discount)) {
        throw std::invalid_argument("Discount must be between 0 and 100.");
    }
    return true;
}