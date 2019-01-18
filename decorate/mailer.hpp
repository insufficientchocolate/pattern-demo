#ifndef _DECORATE_MAILER_H_
#define _DECORATE_MAILER_H_
#include <string>
class Mailer {
 public:
  virtual ~Mailer() = default;
  virtual void sendMail(const std::string& from, const std::string& to,
                        const std::string& subject) const = 0;
};
#endif
