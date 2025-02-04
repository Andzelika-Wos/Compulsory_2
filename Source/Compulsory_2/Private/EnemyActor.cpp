// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyActor.h"

// Sets default values
AEnemyActor::AEnemyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	Mesh->SetSimulatePhysics(true);

	Mesh->SetGenerateOverlapEvents(true);

}

// Called when the game starts or when spawned
void AEnemyActor::BeginPlay()
{
	Super::BeginPlay();
	Mesh->SetEnableGravity(true);
}

// Called every frame
void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetActorLocation().Z < -1000.0f)
	{
		Destroy();
	}
}

void AEnemyActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if(OtherActor->GetName() == "MyCube")
	{
		UE_LOG(LogTemp, Warning, TEXT("Destroy"));

		Destroy();
	}
}


