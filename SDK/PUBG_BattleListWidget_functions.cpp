// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BattleListWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleListWidget.BattleListWidget_C.SetBattleListSubTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SubTitle                       (Parm)

void UBattleListWidget_C::SetBattleListSubTitle(int Index, const struct FText& SubTitle)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170597);

	UBattleListWidget_C_SetBattleListSubTitle_Params params;
	params.Index = Index;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.ClearBattleList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::ClearBattleList()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170596);

	UBattleListWidget_C_ClearBattleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.CollapseAllPlayerInfos
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::CollapseAllPlayerInfos()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170583);

	UBattleListWidget_C_CollapseAllPlayerInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.SetPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerInfoWidget_C*     PlayerInfo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::SetPlayerInfo(class ATslCharacter* TslCharacter, class UPlayerInfoWidget_C** PlayerInfo)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170574);

	UBattleListWidget_C_SetPlayerInfo_Params params;
	params.TslCharacter = TslCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function BattleListWidget.BattleListWidget_C.DestructPlayerInfoPool
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::DestructPlayerInfoPool()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170573);

	UBattleListWidget_C_DestructPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.ConstructPlayerInfoPool
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::ConstructPlayerInfoPool()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170562);

	UBattleListWidget_C_ConstructPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.FindCharacterByShortcutNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ShortcutNum                    (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::FindCharacterByShortcutNum(int ShortcutNum, class ATslCharacter** Character)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170548);

	UBattleListWidget_C_FindCharacterByShortcutNum_Params params;
	params.ShortcutNum = ShortcutNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BattleListWidget.BattleListWidget_C.AddSubTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SubTitle                       (Parm, ZeroConstructor)

void UBattleListWidget_C::AddSubTitle(const struct FString& SubTitle)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170544);

	UBattleListWidget_C_AddSubTitle_Params params;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.IsSameTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character1                     (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character2                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170537);

	UBattleListWidget_C_IsSameTeam_Params params;
	params.Character1 = Character1;
	params.Character2 = Character2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function BattleListWidget.BattleListWidget_C.SetNearbyPlayerIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::SetNearbyPlayerIndex(int Index)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170529);

	UBattleListWidget_C_SetNearbyPlayerIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter10
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter10()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170528);

	UBattleListWidget_C_BattleListSetCharacter10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter9
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter9()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170527);

	UBattleListWidget_C_BattleListSetCharacter9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter8
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter8()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170526);

	UBattleListWidget_C_BattleListSetCharacter8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter7
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter7()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170525);

	UBattleListWidget_C_BattleListSetCharacter7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter6
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter6()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170524);

	UBattleListWidget_C_BattleListSetCharacter6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter5
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter5()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170523);

	UBattleListWidget_C_BattleListSetCharacter5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter4
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter4()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170522);

	UBattleListWidget_C_BattleListSetCharacter4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter3
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter3()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170521);

	UBattleListWidget_C_BattleListSetCharacter3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter2
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter2()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170520);

	UBattleListWidget_C_BattleListSetCharacter2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter1
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170513);

	UBattleListWidget_C_BattleListSetCharacter1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BindKeyBattleList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::BindKeyBattleList()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170492);

	UBattleListWidget_C_BindKeyBattleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.UpdateEngagedEnemiesList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::UpdateEngagedEnemiesList()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170482);

	UBattleListWidget_C_UpdateEngagedEnemiesList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.FindSpectateOrFollowCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(170430);

	UBattleListWidget_C_FindSpectateOrFollowCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslCharacter != nullptr)
		*TslCharacter = params.TslCharacter;
}


// Function BattleListWidget.BattleListWidget_C.UpdateNearbyPlayersList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::UpdateNearbyPlayersList()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(169311);

	UBattleListWidget_C_UpdateNearbyPlayersList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.FindCharacterByPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// class ATslCharacter*           Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::FindCharacterByPlayerState(class APlayerState* PlayerState, class ATslCharacter** Character)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(169298);

	UBattleListWidget_C_FindCharacterByPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BattleListWidget.BattleListWidget_C.UpdateOtherEngagementsList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::UpdateOtherEngagementsList()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(169285);

	UBattleListWidget_C_UpdateOtherEngagementsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.RefreshPlayerList
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::RefreshPlayerList()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(169282);

	UBattleListWidget_C_RefreshPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleListWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(169281);

	UBattleListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.CustomTick
// (BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::CustomTick()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(169280);

	UBattleListWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.TimerCheckUpdateList
// (BlueprintCallable, BlueprintEvent)

void UBattleListWidget_C::TimerCheckUpdateList()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(169279);

	UBattleListWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleListWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(169278);

	UBattleListWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.ExecuteUbergraph_BattleListWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBattleListWidget_C::ExecuteUbergraph_BattleListWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(169270);

	UBattleListWidget_C_ExecuteUbergraph_BattleListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
