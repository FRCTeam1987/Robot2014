#ifndef DRIVE_H
#define DRIVE_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class Drive: public CommandBase {
public:
	Drive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
};

#endif
