#ifndef RUNCOMPRESSOR_H
#define RUNCOMPRESSOR_H

#include "../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class RunCompressor: public CommandBase {
public:
	RunCompressor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
