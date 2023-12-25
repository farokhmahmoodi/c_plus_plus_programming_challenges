#include "Pharmacy.h"

Pharmacy::Pharmacy()
{
	capsuleCharges = 10.05, liquidCharges = 15.45,
	tabletCharges = 20.87, injectionCharges = 35.36,
	inhalerCharges = 25.23;
}

double Pharmacy::getCapsuleCharges()
{
	return capsuleCharges;
}

double Pharmacy::getInhalerCharges()
{
	return inhalerCharges;
}

double Pharmacy::getInjectionCharges()
{
	return injectionCharges;
}

double Pharmacy::getLiquidCharges()
{
	return liquidCharges;
}

double Pharmacy::getTabletCharges()
{
	return tabletCharges;
}