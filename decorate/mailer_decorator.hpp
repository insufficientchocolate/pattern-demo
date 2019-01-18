#ifndef _DECORATE_MAILER_DECORATOR_H_
#define _DECORATE_MAILER_DECORATOR_H_
#include "mailer.hpp"

class MailerDecorator : public Mailer {
 public:
  MailerDecorator(const Mailer& mailer);
  virtual ~MailerDecorator() noexcept = default;
  virtual void sendMail(const std::string& from, const std::string& to,
                        const std::string& subject) const = 0;

 protected:
  const Mailer& mailer_;
};
#endif
