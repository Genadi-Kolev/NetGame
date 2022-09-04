// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "NETSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class NETGAME_API UNETSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UNETSaveGame();
	void SaveLocalPlayerData(const ACharacter* LocalCharacter);
	void LoadLocalPlayerData(const ACharacter* LocalCharacter);

private:
	UPROPERTY(VisibleAnywhere, Category="Saved Data")
	FString PlayerName;
	UPROPERTY(VisibleAnywhere, Category="Saved Data")
	FString ServerSlotName;
	UPROPERTY(VisibleAnywhere, Category="Saved Data")
	uint32 UserIndex;
	UPROPERTY(VisibleAnywhere, Category="Saved Data")
	FDateTime CreationTime;
	UPROPERTY(VisibleAnywhere, Category="Saved Data")
	FVector PlayerLocation;
};
