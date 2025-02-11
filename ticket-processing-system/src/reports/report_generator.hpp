#ifndef REPORT_GENERATOR_HPP
#define REPORT_GENERATOR_HPP

#include <vector>
#include "ticket.hpp"

class ReportGenerator {
public:
    ReportGenerator();
    void generateTicketReport(const std::vector<Ticket>& tickets);
    void generateErrorReport(const std::vector<std::string> &errorMessages);
    void generateValidationReport(const std::vector<std::string> &validationStatuses);
    void generateSummaryReport(const std::vector<Ticket> &tickets);
};

#endif // REPORT_GENERATOR_HPP