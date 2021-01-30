// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"


// Sets default values
AFirstPersonCharacter::AFirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFirstPersonCharacter::StartFire()
{
	Fire();
	GetWorldTimerManager().SetTimer(TimerHandle_HandleReFire, this, &AFirstPersonCharacter::Fire, 0.15f, true);
}

void AFirstPersonCharacter::StopFire()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_HandleReFire);
}

void AFirstPersonCharacter::Fire()
{
	FHitResult Hit;
	const float WeaponRange = 20000.f;
	const FVector StartTrace = FirstPersonCameraComponent->GetComponentLocation();
	const FVector EndTrace = (FirstPersonCameraComponent->GetForwardVector() * WeaponRange) + StartTrace;

	FCollisionQueryParams TraceParams(FName(TEXT("InteractTrace")), true, NULL);
	TraceParams.bTraceComplex = true;
	TraceParams.bReturnPhysicalMaterial = true;

	FHitResult HitDetails = FHitResult(ForceInit);

	FCollisionQueryParams QueryParams = FCollisionQueryParams(SCENE_QUERY_STAT(WeaponTrace), false, this);

	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_GameTraceChannel3, QueryParams);
	

	
}

// Called every frame
void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFirstPersonCharacter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AFirstPersonCharacter::StopFire);

}

