// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FightingGameCharacter.generated.h"

UCLASS(config=Game)
class AFightingGameCharacter : public ACharacter
{
    
   
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
    
    void StartAttack1();
    void StartAttack2();
    void StartAttack3();
    void StartAttack4();
    void TakeDamage2();
    
    int testInt;
    
    
    
    
    

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

    UFUNCTION(BlueprintCallable)
    void TakeDamage2(float damageAmount);
    // player used basic attack
    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Attacks");
    bool wasFirstAttackUsed;
    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Attacks");
    bool wasSecondAttackUsed;
    // player health
    UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Health");
    float playerHealth;

public:
	AFightingGameCharacter();
    
   

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
