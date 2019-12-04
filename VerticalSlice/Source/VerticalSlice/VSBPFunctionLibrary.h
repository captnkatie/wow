// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VSBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class VERTICALSLICE_API UVSBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "VSBPFunctionLibrary")
		static void MyVectorDirector(FVector DirVector, const float AimAtTargetSpeed, bool& XIsPositive, bool& YIsPositive, bool& ZIsPositive, FVector& AimTargetVector);

	
};
