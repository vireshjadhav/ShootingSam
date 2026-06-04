// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"



#include "HUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGSAM_API UHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Meta = (BindWidgetOptional))
	UProgressBar* HealthBar;

	UPROPERTY(EditAnywhere, Meta = (BindWidgetOptional))
	UTextBlock* TX_BulletCount;

	UPROPERTY(EditAnywhere, Meta = (BindWidgetOptional))
	UTextBlock* TX_ScoreValue;

	void SetHealthBarPercent(float NewPercent);

	void SetScoreText(int32 Score);

	void SetBulletCount(int32 BulletsCount);
};
