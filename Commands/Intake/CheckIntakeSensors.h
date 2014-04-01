#ifndef CHECKINTAKESENSORS_H
#define CHECKINTAKESENSORS_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class CheckIntakeSensors: public CommandBase {
public:
	CheckIntakeSensors();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
