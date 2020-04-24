// Copyright 2020 Juan Marcelo Portillo. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FocusableObject.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UFocusableObject : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class RUNTIMETRANSFORMER_API IFocusableObject
{
	GENERATED_BODY()

public:

	//Focus is called right before the Component is added to the list.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Focusable")
	void Focus();

	
	//Unfocus is called right before the Component is removed from the list.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Focusable")
	void Unfocus();

	//Called when there is a Delta Transform in World Space (Local for Scaling) that has been calculated for the Selected Focusable Object.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Focusable")
	void OnNewDeltaTransformation(const FTransform& DeltaTransform);

};
