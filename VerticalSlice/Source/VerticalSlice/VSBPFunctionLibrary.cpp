// Fill out your copyright notice in the Description page of Project Settings.


#include "VSBPFunctionLibrary.h"

void UVSBPFunctionLibrary::MyVectorDirector(FVector DirVector, const float AimAtTargetSpeed, bool& XIsPositive, bool& YIsPositive, bool& ZIsPositive, FVector& AimTargetVector)
{



	bool swordIsActive = false;
	bool hammerIsActive = false;
	bool bowIsActive = false;
	int activeWeapons = 0;

	/*
	//Check For Active Weapon
	if (WeaponArray[0] != NULL)
	{
		swordIsActive = true;
		activeWeapons++;
	}
	if (WeaponArray[1] != NULL)
	{
		hammerIsActive = true;
		activeWeapons++;
	}
	if (WeaponArray[2] != NULL)
	{
		bowIsActive = true;
		activeWeapons++;
	}
	if (activeWeapons > 1)
	{
		TooManyWeapons = true;
	}
	else
	{
		TooManyWeapons = false;
	}
	



	
	*/


	//Default To Negative
	XIsPositive = false;
	YIsPositive = false;
	ZIsPositive = false;


	//DirVector = Difference Between Missile And Target
	if (DirVector.X > 0.0)
	{
		XIsPositive = true;
	}
	if (DirVector.Y > 0.0)
	{
		YIsPositive = true;
	}
	if (DirVector.Y > 0.0)
	{
		ZIsPositive = true;
	}

	switch (XIsPositive)
	{
	case true:
		AimTargetVector.X = AimAtTargetSpeed;
		break;

	default:
		AimTargetVector.X = (-1 * AimAtTargetSpeed);
		break;
	}

	switch (YIsPositive)
	{
	case true:
		AimTargetVector.Y = AimAtTargetSpeed;
		break;

	default:
		AimTargetVector.Y = (-1 * AimAtTargetSpeed);
		break;
	}

	switch (ZIsPositive)
	{
	case true:
		AimTargetVector.Z = AimAtTargetSpeed;
		break;

	default:
		AimTargetVector.Z = (-1 * AimAtTargetSpeed);
		break;
	}





}