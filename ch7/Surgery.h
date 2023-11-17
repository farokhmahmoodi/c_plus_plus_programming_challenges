#ifndef SURGERY_H
#define SURGERY_H

class Surgery
{
private:
	double heartSurgeryCharges, brainSurgeryCharges,
		vascularSurgeryCharges, digestiveSurgeryCharges,
		boneSurgeryCharges;
public:
	Surgery();
	double getHeartSurgeryCharges();
	double getBrainSurgeryCharges();
	double getVascularSurgeryCharges();
	double getDigestiveSurgeryCharges();
	double getBoneSurgeryCharges();
};
#endif
