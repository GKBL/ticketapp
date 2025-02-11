#include "report_generator.hpp"
#include <iostream>
#include <vector>

void ReportGenerator::generateTicketReport(const std::vector<Ticket>& tickets) {
    std::cout << "Ticket Report:\n";
    for (const auto& ticket : tickets) {
        std::cout << "Ticket ID: " << ticket.getTicketID() 
                  << ", Fare: " << ticket.getFare() << "\n";
    }
}

void ReportGenerator::generateErrorReport(const std::vector<std::string>& errorMessages) {
    std::cout << "Error Report:\n";
    for (const auto& error : errorMessages) {
        std::cout << "Error: " << error << "\n";
    }
}

void ReportGenerator::generateValidationReport(const std::vector<std::string>& validationStatuses) {
    std::cout << "Validation Report:\n";
    for (const auto& status : validationStatuses) {
        std::cout << "Validation Status: " << status << "\n";
    }
}