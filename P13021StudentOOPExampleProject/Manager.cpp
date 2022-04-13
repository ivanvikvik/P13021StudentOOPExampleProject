#include "Manager.h"

double Manager::calculateAvgMark(Group group) {
	double avg = 0;

	for (int i = 0; i < group.count; i++)
	{
		avg += group.list[i].getMark();
	}

	return avg / group.count;
}


