/*
 * OperatingDuration.h
 *
 *  Created on: Aug 8, 2020
 *      Author: vma6cob
 */

#ifndef MONITOR_OPERATINGDURATIONMONITOR_H_
#define MONITOR_OPERATINGDURATIONMONITOR_H_

#include "OperatingDurationValidator.h"

class OperatingDurationMonitor
{
	public:
		explicit OperatingDurationMonitor(float);
		OperatingDurationMonitor(const OperatingDurationMonitor&);
		~OperatingDurationMonitor();
		void onOperatingDurationUpdate();
	private:
		IValidator* _validator;
		float _operatingDurationInMins;
		float _thresholdOperatingDurationInMins;
};



#endif /* MONITOR_OPERATINGDURATIONMONITOR_H_ */
