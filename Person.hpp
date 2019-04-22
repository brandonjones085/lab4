
#include <string>

class Person : public University
{
  protected:
    std::string personName;
    int personAge;

  public:
    void doWork();
};