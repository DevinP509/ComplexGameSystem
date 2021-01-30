// Fill out your copyright notice in the Description page of Project Settings.


#include "GunParent.h"
#include "ConstructorHelpers.h"
#include "DrawDebugHelpers.h"

// Sets default values
AGunParent::AGunParent()
{
}

//returns the firerate of the gun
float AGunParent::GetFirerate()
{
	return Firerate;
}

void AGunParent::Reload()
{
}

// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;


	//if (!RootComponent)
	//{
	//	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
	//}
	//if (!CollisionComponent)
	//{
	//	// Use a sphere as a simple collision representation.
	//	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	//	// Set the sphere's collision radius.
	//	CollisionComponent->InitSphereRadius(15.0f);
	//	// Set the root component to be the collision component.
	//	RootComponent = CollisionComponent;
	//}
	//if (!ProjectileMovementComponent)
	//{
	//	// Use this component to drive this projectile's movement.
	//	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	//	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	//	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	//	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	//	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	//	ProjectileMovementComponent->bShouldBounce = true;
	//	ProjectileMovementComponent->Bounciness = 0.3f;
	//	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
	//}


//void AGunParent::Tick(float DeltaTime)
//{
	//Super::Tick(DeltaTime);
//}

//void AGunParent::Fire()
//{
//	if (IsHitScan) {
//		//if (AmmoCurrent = 0) {
//
//			FHitResult OutHit;
//			FVector Start = GetActorLocation();
//
//			Start.Z += 50.f;
//			Start.X += 200.f;
//
//			FVector ForwardVector = GetActorForwardVector();
//			FVector End = ((ForwardVector * 500.f) + Start);
//			//FCollisionQueryParams CollisionParams;
//
//			DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 1, 0, 5);
//			//ActorLineTraceSingle(OutHit, Start, End, ECC_WorldStatic, CollisionParams);
//		//}
//	}
//	if (!IsHitScan) {
//		//if (AmmoCurrent = 0) {
//		
//
//
//		//}
//	}
//}

//void AGunParent::Reload()
//{
//	if (ClipSize - AmmoCurrent <= AmmoMax) {
//		AmmoCurrent = ClipSize;
//		AmmoMax = AmmoMax - (ClipSize - AmmoCurrent);
//	}
//	else{
//		AmmoCurrent = AmmoCurrent + AmmoMax;
//		AmmoMax = 0;
//	}
//
//}

//void AGunParent::FireInDirection(const FVector& ShootDirection)
//{
//	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
//}

