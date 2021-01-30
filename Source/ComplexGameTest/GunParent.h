// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "Components/SphereComponent.h"
//#include "GameFramework/ProjectileMovementComponent.h"
#include "GunParent.generated.h"

UCLASS()
class COMPLEXGAMETEST_API AGunParent : public AActor
{
	GENERATED_BODY()
	
public:	
	AGunParent();//!<Sets default values for this actor's properties

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFiring;//!<Check if the gun is firing or not
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHitScan;//!<Checks if the gun is a raycast
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int AmmoCurrent = 10;//!<Checks how much ammo the user has
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int AmmoMax = 100;//!<how much ammo is in reserves
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ClipSize = 10;//!<How much ammo the gun can hold
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Firerate = .15f;//!<The fire rate of the gun
	float GetFirerate();//!<Gets The Firerate


protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintCallable)
	//void Reload();

	/*UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		USphereComponent* CollisionComponent;
	UPROPERTY(VisibleAnywhere, Category = Movement)
		UProjectileMovementComponent* ProjectileMovementComponent;
	void FireInDirection(const FVector& ShootDirection);*/
};
