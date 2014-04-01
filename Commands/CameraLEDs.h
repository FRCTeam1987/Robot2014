#ifndef CAMERALEDS_H
#define CAMERALEDS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class CameraLEDs: public CommandBase {
public:
	CameraLEDs();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
