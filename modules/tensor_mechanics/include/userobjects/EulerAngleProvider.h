#ifndef EULERANGLEPROVIDER_H
#define EULERANGLEPROVIDER_H

#include "EulerAngles.h"
#include "GeneralUserObject.h"

/**
 * Abstract base class for user objects that implement the Euler Angle provider
 * interface.
 */
class EulerAngleProvider : public GeneralUserObject
{
public:
  EulerAngleProvider(const InputParameters & parameters) : GeneralUserObject(parameters) {}
  EulerAngleProvider(const std::string & deprecated_name, InputParameters parameters) : GeneralUserObject(deprecated_name, parameters) {}; // DEPRECATED CONSTRUCTOR

  virtual const EulerAngles & getEulerAngles(unsigned int) const = 0;
  virtual unsigned int getGrainNum() const = 0;
};

#endif //EULERANGLEPROVIDER_H
