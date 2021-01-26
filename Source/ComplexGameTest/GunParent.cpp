// Fill out your copyright notice in the Description page of Project Settings.


#include "GunParent.h"

// Sets default values
AGunParent::AGunParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGunParent::BeginPlay()
{
	Super::BeginPlay();
	if (IsHitScan) {
		
		
	}
	
}

// Called every frame
void AGunParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

