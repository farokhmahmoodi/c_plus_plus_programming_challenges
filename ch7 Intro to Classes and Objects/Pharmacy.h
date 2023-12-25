#ifndef PHARMACY_H
#define PHARMACY_H

class Pharmacy
{
private:
	double capsuleCharges, liquidCharges,
		tabletCharges, injectionCharges,
		inhalerCharges;
public:
	Pharmacy();
	double getCapsuleCharges();
	double getLiquidCharges();
	double getTabletCharges();
	double getInjectionCharges();
	double getInhalerCharges();
};
#endif
