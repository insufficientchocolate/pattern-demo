#include "basic_mailer.hpp"
#include "cooldown_mailer.hpp"

int main() {
  BasicMailer mailer;
  CooldownMailer cooldownMailer(mailer);

  mailer.sendMail("from@example.com", "to@example.com", "subject");
  cooldownMailer.sendMail("from@example.com", "cool@example.com", "subject");
  cooldownMailer.sendMail("from@example.com", "notcol@example.com", "subject");
  return 0;
}
