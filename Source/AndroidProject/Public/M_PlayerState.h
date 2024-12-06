// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "M_PlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ANDROIDPROJECT_API AM_PlayerState : public APlayerState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	int32 m_PlayerPoint;

public:
	AM_PlayerState()
	{
		m_PlayerPoint = 0;
	}

	UFUNCTION(BlueprintCallable, Category = "M_PlayerState")
	int32 GetPoint() {
		return m_PlayerPoint;
	}

	UFUNCTION(BlueprintCallable, Category = "M_PlayerState")
	void AddPoint(int32 point);
	
	
};
