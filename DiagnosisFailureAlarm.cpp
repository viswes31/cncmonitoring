/*
 * DiagnosisFailureAlarm.cpp
 *
 *  Created on: Aug 16, 2020
 *      Author: vma6cob
 */


#include "DiagnosisFailureAlarm.h"
#include "ErrorCodesDefine.h"
#include <iostream>

DiagnosisFailureAlarm::DiagnosisFailureAlarm()
{
	_mediator = 0;
}

void DiagnosisFailureAlarm::setMediator(IMediator* mediator)
{
	_mediator = mediator;
}

void DiagnosisFailureAlarm::raiseAlarm(enValidationResultType validationResult)
{
	if(validationResult == en_VALIDATION_FAILED)
	{
	   std::cout << "Self-Diagnosis Failure!\n";
	   std::cout << errorTextHash[(int)_mediator->getMonitorType()][(int)validationResult] << selfDiagError[(int)_mediator->getCurrentParamValue()];
	}
}

