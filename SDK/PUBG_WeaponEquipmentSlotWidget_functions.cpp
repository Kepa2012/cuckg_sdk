// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeaponEquipmentSlotWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetSlotItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65933);

	UWeaponEquipmentSlotWidget_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65927);

	UWeaponEquipmentSlotWidget_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsClearSkinMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsClearSkinMode               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::IsClearSkinMode(bool* bIsClearSkinMode)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65922);

	UWeaponEquipmentSlotWidget_C_IsClearSkinMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsClearSkinMode != nullptr)
		*bIsClearSkinMode = params.bIsClearSkinMode;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsApplySkinMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsApplySkinMode               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::IsApplySkinMode(bool* bIsApplySkinMode)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65917);

	UWeaponEquipmentSlotWidget_C_IsApplySkinMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsApplySkinMode != nullptr)
		*bIsApplySkinMode = params.bIsApplySkinMode;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SetGamepadSelfPutAttachmentFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFocus                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::SetGamepadSelfPutAttachmentFocus(bool bFocus)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65909);

	UWeaponEquipmentSlotWidget_C_SetGamepadSelfPutAttachmentFocus_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.InputB
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::InputB()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71453);

	UWeaponEquipmentSlotWidget_C_InputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnChildSlotRefreshFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnChildSlotRefreshFocus()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65892);

	UWeaponEquipmentSlotWidget_C_OnChildSlotRefreshFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetFocusingChildWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UWeaponEquipmentSlotWidget_C::GetFocusingChildWidget()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71532);

	UWeaponEquipmentSlotWidget_C_GetFocusingChildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Up
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::Up()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71299);

	UWeaponEquipmentSlotWidget_C_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Right
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::Right()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71401);

	UWeaponEquipmentSlotWidget_C_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Down
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::Down()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71521);

	UWeaponEquipmentSlotWidget_C_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Left
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::Left()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71390);

	UWeaponEquipmentSlotWidget_C_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetChildRightFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             RightWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetChildRightFocusableWidget(class UUserWidget** RightWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65873);

	UWeaponEquipmentSlotWidget_C_GetChildRightFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightWidget != nullptr)
		*RightWidget = params.RightWidget;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetChildLeftFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             LeftWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetChildLeftFocusableWidget(class UUserWidget** LeftWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65854);

	UWeaponEquipmentSlotWidget_C_GetChildLeftFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LeftWidget != nullptr)
		*LeftWidget = params.LeftWidget;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetChildDownFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             DownWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetChildDownFocusableWidget(class UUserWidget** DownWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65837);

	UWeaponEquipmentSlotWidget_C_GetChildDownFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownWidget != nullptr)
		*DownWidget = params.DownWidget;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetChildUpFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             UpWidget                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetChildUpFocusableWidget(class UUserWidget** UpWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65830);

	UWeaponEquipmentSlotWidget_C_GetChildUpFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpWidget != nullptr)
		*UpWidget = params.UpWidget;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsFocusable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::IsFocusable()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71516);

	UWeaponEquipmentSlotWidget_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.FindFirstFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             FocusableWidget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::FindFirstFocusableWidget(class UUserWidget** FocusableWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65820);

	UWeaponEquipmentSlotWidget_C_FindFirstFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::IsFocus()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71388);

	UWeaponEquipmentSlotWidget_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SetFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::SetFocus(bool* NewFocus)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71288);

	UWeaponEquipmentSlotWidget_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_FocusColorBG_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::On_FocusColorBG_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65818);

	UWeaponEquipmentSlotWidget_C_On_FocusColorBG_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.InputA
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::InputA()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71445);

	UWeaponEquipmentSlotWidget_C_InputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnSpawnActorInSceneCaptureWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::OnSpawnActorInSceneCaptureWorld(class AActor* SpawnedActor)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65814);

	UWeaponEquipmentSlotWidget_C_OnSpawnActorInSceneCaptureWorld_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetDragDroppingEquipableItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEquipableItem*          EquipableItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetDragDroppingEquipableItem(class UEquipableItem** EquipableItem)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65810);

	UWeaponEquipmentSlotWidget_C_GetDragDroppingEquipableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipableItem != nullptr)
		*EquipableItem = params.EquipableItem;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.FindEquipableWeaponPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FEquipPosition          WeaponPosition                 (Parm, OutParm)

void UWeaponEquipmentSlotWidget_C::FindEquipableWeaponPosition(struct FEquipPosition* WeaponPosition)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65804);

	UWeaponEquipmentSlotWidget_C_FindEquipableWeaponPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponPosition != nullptr)
		*WeaponPosition = params.WeaponPosition;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.UpdateWeaponGunInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::UpdateWeaponGunInfo(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65794);

	UWeaponEquipmentSlotWidget_C_UpdateWeaponGunInfo_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_AmmoIcon_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::On_AmmoIcon_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65791);

	UWeaponEquipmentSlotWidget_C_On_AmmoIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetAmmoName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ItemName                       (Parm, OutParm)

void UWeaponEquipmentSlotWidget_C::GetAmmoName(struct FText* ItemName)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65782);

	UWeaponEquipmentSlotWidget_C_GetAmmoName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemName != nullptr)
		*ItemName = params.ItemName;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetAmmoIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWeaponEquipmentSlotWidget_C::GetAmmoIcon()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65769);

	UWeaponEquipmentSlotWidget_C_GetAmmoIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetHandOnUnLoadedAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetHandOnUnLoadedAmmoCount(int* Count)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65765);

	UWeaponEquipmentSlotWidget_C_GetHandOnUnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetHandOnLoadedAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetHandOnLoadedAmmoCount(int* Count)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65761);

	UWeaponEquipmentSlotWidget_C_GetHandOnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_AmmoName_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::On_AmmoName_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65758);

	UWeaponEquipmentSlotWidget_C_On_AmmoName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_AmmoInfoLayer_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::On_AmmoInfoLayer_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65748);

	UWeaponEquipmentSlotWidget_C_On_AmmoInfoLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::On_WeaponHandsOnUnloadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65744);

	UWeaponEquipmentSlotWidget_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::On_WeaponHandsOnLoadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65740);

	UWeaponEquipmentSlotWidget_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_WeaponName_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::On_WeaponName_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65738);

	UWeaponEquipmentSlotWidget_C_On_WeaponName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_KeyName_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::On_KeyName_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65727);

	UWeaponEquipmentSlotWidget_C_On_KeyName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnUpdateWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnUpdateWeapon()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65697);

	UWeaponEquipmentSlotWidget_C_OnUpdateWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_WeaponCaptureImage_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::On_WeaponCaptureImage_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65691);

	UWeaponEquipmentSlotWidget_C_On_WeaponCaptureImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetItem_Bp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetItem_Bp(class UItem** Item)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71161);

	UWeaponEquipmentSlotWidget_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsAttachmentSlotMouseOver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           MouseOver                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::IsAttachmentSlotMouseOver(bool* MouseOver)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65682);

	UWeaponEquipmentSlotWidget_C_IsAttachmentSlotMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseOver != nullptr)
		*MouseOver = params.MouseOver;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsSlotMouseOver_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMouseOver                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(71088);

	UWeaponEquipmentSlotWidget_C_IsSlotMouseOver_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsSlotSubOn_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SubOn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70999);

	UWeaponEquipmentSlotWidget_C_IsSlotSubOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubOn != nullptr)
		*SubOn = params.SubOn;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsSlotOn_Bp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::IsSlotOn_Bp(bool* IsOn)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70826);

	UWeaponEquipmentSlotWidget_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65659);

	UWeaponEquipmentSlotWidget_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetWeaponSlotEquipId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EEquipSlotID                   EquipSlotID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::GetWeaponSlotEquipId(EEquipSlotID* EquipSlotID)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65643);

	UWeaponEquipmentSlotWidget_C_GetWeaponSlotEquipId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipSlotID != nullptr)
		*EquipSlotID = params.EquipSlotID;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.MainPrepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::MainPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65623);

	UWeaponEquipmentSlotWidget_C_MainPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.InitializeWeaponEquipSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::InitializeWeaponEquipSlot()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65599);

	UWeaponEquipmentSlotWidget_C_InitializeWeaponEquipSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.RefreshAttachmentSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::RefreshAttachmentSlot()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65598);

	UWeaponEquipmentSlotWidget_C_RefreshAttachmentSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWeaponEquipmentSlotWidget_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65589);

	UWeaponEquipmentSlotWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65575);

	UWeaponEquipmentSlotWidget_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWeaponEquipmentSlotWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65546);

	UWeaponEquipmentSlotWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetSlotVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWeaponEquipmentSlotWidget_C::GetSlotVisibility()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65540);

	UWeaponEquipmentSlotWidget_C_GetSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetWeaponIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWeaponEquipmentSlotWidget_C::GetWeaponIcon()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65528);

	UWeaponEquipmentSlotWidget_C_GetWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetWeaponInfoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWeaponEquipmentSlotWidget_C::GetWeaponInfoText()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65506);

	UWeaponEquipmentSlotWidget_C_GetWeaponInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(76893);

	UWeaponEquipmentSlotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnUpdateEquip
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnUpdateEquip()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65505);

	UWeaponEquipmentSlotWidget_C_OnUpdateEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70752);

	UWeaponEquipmentSlotWidget_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70789);

	UWeaponEquipmentSlotWidget_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragSlotEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::OnDragSlotEnter(int SlotIndex)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65503);

	UWeaponEquipmentSlotWidget_C_OnDragSlotEnter_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragSlotLeave
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnDragSlotLeave()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65502);

	UWeaponEquipmentSlotWidget_C_OnDragSlotLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UWeaponEquipmentSlotWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(76890);

	UWeaponEquipmentSlotWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UWeaponEquipmentSlotWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70750);

	UWeaponEquipmentSlotWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnUpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::OnUpdateItem(class UItem** Item)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70787);

	UWeaponEquipmentSlotWidget_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.UpdateDragDropObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTslItemDragDropOperation_C** DragDropObject                 (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::UpdateDragDropObject(class UTslItemDragDropOperation_C** DragDropObject)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70785);

	UWeaponEquipmentSlotWidget_C_UpdateDragDropObject_Params params;
	params.DragDropObject = DragDropObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SetInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWidget_C**     InventoryWidget                (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::SetInventory(class UInventoryWidget_C** InventoryWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70783);

	UWeaponEquipmentSlotWidget_C_SetInventory_Params params;
	params.InventoryWidget = InventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65501);

	UWeaponEquipmentSlotWidget_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65500);

	UWeaponEquipmentSlotWidget_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65499);

	UWeaponEquipmentSlotWidget_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65498);

	UWeaponEquipmentSlotWidget_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65497);

	UWeaponEquipmentSlotWidget_C_BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WidgetInputBPressed
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::WidgetInputBPressed()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65496);

	UWeaponEquipmentSlotWidget_C_WidgetInputBPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnWidgetInputBReleased
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnWidgetInputBReleased()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65495);

	UWeaponEquipmentSlotWidget_C_OnWidgetInputBReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65492);

	UWeaponEquipmentSlotWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnSlotMoveUp
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnSlotMoveUp()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65491);

	UWeaponEquipmentSlotWidget_C_OnSlotMoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnSlotMoveDown
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnSlotMoveDown()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65490);

	UWeaponEquipmentSlotWidget_C_OnSlotMoveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SlotMoveLeft
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::SlotMoveLeft()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65489);

	UWeaponEquipmentSlotWidget_C_SlotMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnSlotMoveRight
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnSlotMoveRight()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65488);

	UWeaponEquipmentSlotWidget_C_OnSlotMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::CustomEvent_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65487);

	UWeaponEquipmentSlotWidget_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnWidgetInputX
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnWidgetInputX()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70782);

	UWeaponEquipmentSlotWidget_C_OnWidgetInputX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::CustomEvent_2()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65486);

	UWeaponEquipmentSlotWidget_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnInputWidgetInputB
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnInputWidgetInputB()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(70781);

	UWeaponEquipmentSlotWidget_C_OnInputWidgetInputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_12_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__UpperRail_K2Node_ComponentBoundEvent_12_OnLeaveSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65483);

	UWeaponEquipmentSlotWidget_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_12_OnLeaveSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_25_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__Muzzle_K2Node_ComponentBoundEvent_25_OnLeaveSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65480);

	UWeaponEquipmentSlotWidget_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_25_OnLeaveSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_45_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__LowerRail_K2Node_ComponentBoundEvent_45_OnLeaveSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65477);

	UWeaponEquipmentSlotWidget_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_45_OnLeaveSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_65_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__Magazine_K2Node_ComponentBoundEvent_65_OnLeaveSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65474);

	UWeaponEquipmentSlotWidget_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_65_OnLeaveSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Stock_K2Node_ComponentBoundEvent_86_OnLeaveSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__Stock_K2Node_ComponentBoundEvent_86_OnLeaveSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65471);

	UWeaponEquipmentSlotWidget_C_BndEvt__Stock_K2Node_ComponentBoundEvent_86_OnLeaveSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_177_OnEnterSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__UpperRail_K2Node_ComponentBoundEvent_177_OnEnterSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65468);

	UWeaponEquipmentSlotWidget_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_177_OnEnterSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_192_OnEnterSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__Muzzle_K2Node_ComponentBoundEvent_192_OnEnterSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65465);

	UWeaponEquipmentSlotWidget_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_192_OnEnterSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_212_OnEnterSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__LowerRail_K2Node_ComponentBoundEvent_212_OnEnterSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65462);

	UWeaponEquipmentSlotWidget_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_212_OnEnterSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_239_OnEnterSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__Magazine_K2Node_ComponentBoundEvent_239_OnEnterSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65459);

	UWeaponEquipmentSlotWidget_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_239_OnEnterSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Stock_K2Node_ComponentBoundEvent_261_OnEnterSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::BndEvt__Stock_K2Node_ComponentBoundEvent_261_OnEnterSlot__DelegateSignature(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(65456);

	UWeaponEquipmentSlotWidget_C_BndEvt__Stock_K2Node_ComponentBoundEvent_261_OnEnterSlot__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.ExecuteUbergraph_WeaponEquipmentSlotWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::ExecuteUbergraph_WeaponEquipmentSlotWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(61526);

	UWeaponEquipmentSlotWidget_C_ExecuteUbergraph_WeaponEquipmentSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragLeaveWeaponSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::OnDragLeaveWeaponSlot__DelegateSignature(int SlotIndex)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(61524);

	UWeaponEquipmentSlotWidget_C_OnDragLeaveWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragEnterWeaponSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_C::OnDragEnterWeaponSlot__DelegateSignature(int SlotIndex)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(61522);

	UWeaponEquipmentSlotWidget_C_OnDragEnterWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_C::OnReleased__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(61521);

	UWeaponEquipmentSlotWidget_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
