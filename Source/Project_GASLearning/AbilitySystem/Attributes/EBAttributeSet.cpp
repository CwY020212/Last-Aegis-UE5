// Fill out your copyright notice in the Description page of Project Settings.



#include "AbilitySystem/Attributes/EBAttributeSet.h"
#include "Character/EBCharacterBase.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectExtension.h"

void UEBAttributeSet::PreAttributeChange(
    const FGameplayAttribute& Attribute,
    float& NewValue)
{
    Super::PreAttributeChange(Attribute, NewValue);

  if (Attribute == GetMaxHealthAttribute())
    {
        NewValue = FMath::Max(NewValue, 0.0f);
    }
   
    else if (Attribute == GetMaxShieldAttribute())
    {
        NewValue = FMath::Max(NewValue, 0.0f);
    }
}

void UEBAttributeSet::PostGameplayEffectExecute(
    const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data);

    if (Data.EvaluatedData.Attribute == GetHealthAttribute())
    {
        SetHealth(FMath::Clamp(
            GetHealth(),
            0.0f,
            GetMaxHealth()
        ));

        if (AEBCharacterBase* Character =
            Cast<AEBCharacterBase>(GetOwningActor()))
        {
            Character->OnHealthChanged(
                GetHealth(),
                GetMaxHealth()
            );
        }
    }
    else if (Data.EvaluatedData.Attribute == GetMaxHealthAttribute())
    {
        SetMaxHealth(FMath::Max(
            GetMaxHealth(),
            0.0f
        ));

        SetHealth(FMath::Clamp(
            GetHealth(),
            0.0f,
            GetMaxHealth()
        ));

        if (AEBCharacterBase* Character =
            Cast<AEBCharacterBase>(GetOwningActor()))
        {
            Character->OnHealthChanged(
                GetHealth(),
                GetMaxHealth()
            );
        }
    }
}

void UEBAttributeSet::ClampHealthToMaxHealth()
{
    SetHealth(FMath::Clamp(
        GetHealth(),
        0.0f,
        GetMaxHealth()
    ));
}

