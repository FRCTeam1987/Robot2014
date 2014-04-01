#ifndef AUTODRIVE_H
#define AUTODRIVE_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class AutoDrive: public CommandBase {
public:
	AutoDrive(float dist);  // desired distance in feet (fractions okay)
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	float desiredDistance;  // desired distance in feet (fractions okay)
	static const float KP = 0.03;
};

#endif
