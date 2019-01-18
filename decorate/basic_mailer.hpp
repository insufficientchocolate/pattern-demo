#ifndef _DECORATE_BASIC_MAILER_H_
#define _DECORATE_BASIC_MAILER_H_
#include "mailer.hpp"
class BasicMailer : public Mailer {
 public:
  virtual ~BasicMailer() = default;
  virtual void sendMail(const std::string& from, const std::string& to,
                        const std::string& subject) const override;
};
#endif
