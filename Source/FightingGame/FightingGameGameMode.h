// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FightingGameCharacter.h"
#include "FightingGameGameMode.generated.h"

UCLASS(minimalapi)
class AFightingGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFightingGameGameMode();
    
    // references to the player character
    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Player References")
    AFightingGameCharacter* player1;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Player References")
    AFightingGameCharacter* player2;
    
    
    
    
};



