#ifndef ALLIANCEPATTERN_H
#define ALLIANCEPATTERN_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class AlliancePattern: public CommandBase {
public:
	AlliancePattern();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
