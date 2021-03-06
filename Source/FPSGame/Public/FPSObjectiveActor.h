// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

// Predeclared so we don't have to load the whole header/library right now.
class USphereComponent;

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

  UPROPERTY(VisibleAnywhere, Category = "Components")
  UStaticMeshComponent* MeshComp;

  UPROPERTY(VisibleAnywhere, Category = "Components")
  USphereComponent* SphereComp;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
