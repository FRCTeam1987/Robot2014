#ifndef ROTATE_H
#define ROTATE_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class Rotate: public CommandBase {
public:
	Rotate(bool rotateRight, float timeout);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
	bool myDir;
};

#endif
