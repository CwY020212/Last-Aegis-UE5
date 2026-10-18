// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "EBAttributeSet.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class PROJECT_GASLEARNING_API UEBAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:

    UPROPERTY(BlueprintReadOnly, Category = "Attributes")
    FGameplayAttributeData Health;
    ATTRIBUTE_ACCESSORS(UEBAttributeSet, Health)

    UPROPERTY(BlueprintReadOnly, Category = "Attributes")
    FGameplayAttributeData MaxHealth;
    ATTRIBUTE_ACCESSORS(UEBAttributeSet, MaxHealth)

    UPROPERTY(BlueprintReadOnly, Category = "Attributes")
    FGameplayAttributeData Shield;
    ATTRIBUTE_ACCESSORS(UEBAttributeSet, Shield)

    UPROPERTY(BlueprintReadOnly, Category = "Attributes")
    FGameplayAttributeData MaxShield;
    ATTRIBUTE_ACCESSORS(UEBAttributeSet, MaxShield)

    virtual void PreAttributeChange(
            const FGameplayAttribute& Attribute,
            float& NewValue
        ) override;

    virtual void PostGameplayEffectExecute(
        const FGameplayEffectModCallbackData& Data
    ) override;

    UFUNCTION(BlueprintCallable, Category = "Attributes")
    void ClampHealthToMaxHealth();
};
