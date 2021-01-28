// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunParent.generated.h"

UCLASS()
class COMPLEXGAMETEST_API AGunParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunParent();
	UPROPERTY()
	bool IsFiring;
	UPROPERTY()
	bool IsHitScan;
	UPROPERTY()
	int AmmoCurrent;
	UPROPERTY()
	int AmmoMax;
	UPROPERTY()
	int ClipSize;
	UPROPERTY()
	float FireRate;
	UPROPERTY()
	FTransform CharacterTransform;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
