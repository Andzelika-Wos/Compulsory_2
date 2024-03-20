// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyManager.h"

#include "EnemyActor.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AEnemyManager::AEnemyManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TimeToLive = 0.0f;
}

// Called when the game starts or when spawned
void AEnemyManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimeToLive += DeltaTime;
	if(TimeToLive>= 0.1f)
	{
		TimeToLive -= 0.1f;
		float SpawnX = FMath::RandRange(10.0f, 1000.0f);
		float SpawnY = FMath::RandRange(10.0f, 1000.0f);
		float SpawnZ = 10.0f;
		FVector SpawnPosition = FVector(SpawnX, SpawnY, SpawnZ);

		GetWorld()->SpawnActor<AEnemyActor>(EnemyClass, SpawnPosition, FRotator::ZeroRotator);

	}
}

