#include "cooldown_mailer.hpp"
#include <iostream>

CooldownMailer::CooldownMailer(const Mailer& mailer)
    : MailerDecorator(mailer) {}

void CooldownMailer::sendMail(const std::string& from, const std::string& to,
                              const std::string& subject) const {
  if (to.find("cool") != std::string::npos) {
    std::cout << to << "is in cooldown" << std::endl;
    return;
  }
  return mailer_.sendMail(from, to, subject);
}
