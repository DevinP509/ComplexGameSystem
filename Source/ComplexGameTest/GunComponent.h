// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "GunComponent.generated.h"
#include "GunParent.h"

UCLASS()
class COMPLEXGAMETEST_API UGunComponent : public UChildActorComponent
{
	GENERATED_BODY()

		AGunParent* GunParent;
};