#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ViruxTerminalWidget.generated.h"

UCLASS()
class YOURPROJECT_API UViruxTerminalWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    // Constructor
    UViruxTerminalWidget(const FObjectInitializer& ObjectInitializer);

protected:
    virtual void NativeConstruct() override;

private:
    // Tab buttons
    UPROPERTY(meta = (BindWidget))
    class UButton* InfoTab;

    UPROPERTY(meta = (BindWidget))
    class UButton* TicketOpenerTab;

    UPROPERTY(meta = (BindWidget))
    class UButton* ContainerCheckupLogsTab;

    UPROPERTY(meta = (BindWidget))
    class UButton* MorphsTab;

    // Content Panel
    UPROPERTY(meta = (BindWidget))
    class UPanelWidget* ContentPanel;

    // Tab Click Handlers
    UFUNCTION()
    void OnInfoTabClicked();

    UFUNCTION()
    void OnTicketOpenerTabClicked();

    UFUNCTION()
    void OnContainerCheckupLogsTabClicked();

    UFUNCTION()
    void OnMorphsTabClicked();
};
