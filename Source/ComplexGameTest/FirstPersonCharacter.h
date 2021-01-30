// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GunParent.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "FirstPersonCharacter.generated.h"

UCLASS()
class COMPLEXGAMETEST_API AFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;//!<Gets the camera

public:
	AFirstPersonCharacter();//!< Sets default values for this character's properties

	UFUNCTION(BlueprintCallable)
		void StartFire();//!<Starts to fire the gun
	UFUNCTION(BlueprintCallable)
		void StopFire();//!<Stops firing the gun
	UFUNCTION(BlueprintCallable)
		void Fire();//!<The Lodgic behind fireing the gun

	
	FTimerHandle TimerHandle_HandleReFire;//!<Gets the timer
protected:
	virtual void BeginPlay() override;//!<Called when the game starts or when spawned

public:	
	virtual void Tick(float DeltaTime) override;//!<Called every frame

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;//!<Called to bind functionality to input

	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }//!<Gets the camera

};
