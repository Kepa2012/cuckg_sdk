// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NewSystemMessageWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewSystemMessageWidget.NewSystemMessageWidget_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UNewSystemMessageWidget_C::PlayFadeIn()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152582);

	UNewSystemMessageWidget_C_PlayFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UNewSystemMessageWidget_C::StartFadeIn(class UWidgetAnimation* Animation, float Time)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152572);

	UNewSystemMessageWidget_C_StartFadeIn_Params params;
	params.Animation = Animation;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeOutAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewSystemMessageWidget_C::GetFadeOutAnimation(class UWidgetAnimation** Animation)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152570);

	UNewSystemMessageWidget_C_GetFadeOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.GetFadeInAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewSystemMessageWidget_C::GetFadeInAnimation(class UWidgetAnimation** Animation)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152568);

	UNewSystemMessageWidget_C_GetFadeInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.SetTextSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              TextBlock                      (Parm, ZeroConstructor, IsPlainOldData)

void UNewSystemMessageWidget_C::SetTextSize(class UTextBlock* TextBlock)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152565);

	UNewSystemMessageWidget_C_SetTextSize_Params params;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.StartFadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UNewSystemMessageWidget_C::StartFadeOut()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152561);

	UNewSystemMessageWidget_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeOutFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UNewSystemMessageWidget_C::OnFadeOutFinished()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152560);

	UNewSystemMessageWidget_C_OnFadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.OnFadeInFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewSystemMessageWidget_C::OnFadeInFinished()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152558);

	UNewSystemMessageWidget_C_OnFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.InitializeMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewSystemMessageWidget_C::InitializeMessage()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152549);

	UNewSystemMessageWidget_C_InitializeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewSystemMessageWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152548);

	UNewSystemMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.ExecuteUbergraph_NewSystemMessageWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewSystemMessageWidget_C::ExecuteUbergraph_NewSystemMessageWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152546);

	UNewSystemMessageWidget_C_ExecuteUbergraph_NewSystemMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewSystemMessageWidget.NewSystemMessageWidget_C.EndMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNewSystemMessageWidget_C* SystemMessage                  (Parm, ZeroConstructor, IsPlainOldData)

void UNewSystemMessageWidget_C::EndMessage__DelegateSignature(class UNewSystemMessageWidget_C* SystemMessage)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152544);

	UNewSystemMessageWidget_C_EndMessage__DelegateSignature_Params params;
	params.SystemMessage = SystemMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
