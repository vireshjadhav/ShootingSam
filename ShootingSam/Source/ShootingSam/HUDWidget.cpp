// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDWidget.h"

void UHUDWidget::SetHealthBarPercent(float NewPercent)
{
	if (NewPercent >= 0.0 && NewPercent <= 1.0)
	{
		HealthBar->SetPercent(NewPercent);
	}
}

void UHUDWidget::SetScoreText(int32 Score)
{
	if (TX_ScoreValue)
	{
		TX_ScoreValue->SetText(FText::AsNumber(Score));
	}
}

void UHUDWidget::SetBulletCount(int32 BulletsCount)
{
	if (TX_BulletCount)
	{
		TX_BulletCount->SetText(FText::AsNumber(BulletsCount));
	}
}
