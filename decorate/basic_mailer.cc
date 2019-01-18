#include "basic_mailer.hpp"
#include <iostream>

void BasicMailer::sendMail(const std::string& from, const std::string& to,
                           const std::string& subject) const {
  std::cout << "From: " << from << " To: " << to << " Subject: " << subject
            << std::endl;
}
