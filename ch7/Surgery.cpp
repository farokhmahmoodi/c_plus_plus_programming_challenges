#include "Surgery.h"

Surgery::Surgery()
{
	heartSurgeryCharges = 20050.45, brainSurgeryCharges = 25784.76,
		vascularSurgeryCharges = 1234.54, digestiveSurgeryCharges = 2345.67,
		boneSurgeryCharges = 7844.45;
}

double Surgery::getBoneSurgeryCharges()
{
	return boneSurgeryCharges;
}

double Surgery::getBrainSurgeryCharges()
{
	return brainSurgeryCharges;
}

double Surgery::getDigestiveSurgeryCharges()
{
	return digestiveSurgeryCharges;
}

double Surgery::getHeartSurgeryCharges()
{
	return heartSurgeryCharges;
}

double Surgery::getVascularSurgeryCharges()
{
	return vascularSurgeryCharges;
}