#ifndef _DECORATOR_COOLDOWN_MAILER_H_
#define _DECORATOR_COOLDOWN_MAILER_H_
#include "mailer_decorator.hpp"

class CooldownMailer : public MailerDecorator {
 public:
  CooldownMailer(const Mailer& mailer);
  void sendMail(const std::string& from, const std::string& to,
                const std::string& subject) const override;
};
#endif
