﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[4] = 
{
	{ 12299, 0,  0 } /*tableIndex: 0 */,
	{ 12298, 0,  1 } /*tableIndex: 1 */,
	{ 12299, 0,  3 } /*tableIndex: 2 */,
	{ 12298, 0,  4 } /*tableIndex: 3 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"callback",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[42] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::add_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::remove_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate) */,
	{ 0, 0 } /* 0x06000003 UnityEngine.XR.OpenXR.Features.Mock.MockRuntime UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::get_Instance() */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ReceiveScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64) */,
	{ 0, 1 } /* 0x06000005 UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::BeforeFunctionCallback(System.String) */,
	{ 1, 1 } /* 0x06000006 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::AfterFunctionCallback(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate) */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate) */,
	{ 2, 1 } /* 0x0600000A UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetBeforeFunctionCallback(System.String) */,
	{ 3, 1 } /* 0x0600000B UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetAfterFunctionCallback(System.String) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ClearFunctionCallbacks() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ResetDefaults() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::OnInstanceDestroy(System.UInt64) */,
	{ 0, 0 } /* 0x0600000F System.IntPtr UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::HookCreateInstance(System.IntPtr) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetKeepFunctionCallbacks(System.Boolean) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetViewPose(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector4) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetViewState(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,UnityEngine.XR.OpenXR.NativeTypes.XrViewStateFlags) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetSpace(UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags) */,
	{ 0, 0 } /* 0x06000014 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetSpace(System.UInt64,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags) */,
	{ 0, 0 } /* 0x06000015 UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_RegisterScriptEventCallback(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate) */,
	{ 0, 0 } /* 0x06000016 System.Boolean UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_TransitionToState(UnityEngine.XR.OpenXR.NativeTypes.XrSessionState,System.Boolean) */,
	{ 0, 0 } /* 0x06000017 UnityEngine.XR.OpenXR.NativeTypes.XrSessionState UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_GetSessionState() */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::RequestExitSession() */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::CauseInstanceLoss() */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetReferenceSpaceBounds(UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType,UnityEngine.Vector2) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetEndFrameStats(System.Int32&,System.Int32&) */,
	{ 0, 0 } /* 0x0600001C System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ActivateSecondaryView(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,System.Boolean) */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::MockRuntime_RegisterFunctionCallbacks(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate) */,
	{ 0, 0 } /* 0x0600001E System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::.ctor() */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000020 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::Invoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64) */,
	{ 0, 0 } /* 0x06000021 System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::BeginInvoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000022 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x06000023 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000024 UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::Invoke(System.String) */,
	{ 0, 0 } /* 0x06000025 System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000026 UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x06000027 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000028 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::Invoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult) */,
	{ 0, 0 } /* 0x06000029 System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::BeginInvoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x0600002A System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::EndInvoke(System.IAsyncResult) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XR_OpenXR_Features_MockRuntime[];
Il2CppSequencePoint g_sequencePointsUnity_XR_OpenXR_Features_MockRuntime[140] = 
{
	{ 31798, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 31798, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 31798, 1, 62, 62, 47, 96, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 31798, 1, 62, 62, 47, 96, 0, kSequencePointKind_StepOut, 0, 3 } /* seqPointIndex: 3 */,
	{ 31798, 1, 62, 62, 47, 96, 5, kSequencePointKind_StepOut, 0, 4 } /* seqPointIndex: 4 */,
	{ 31799, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 31799, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 31799, 1, 65, 65, 81, 114, 0, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 31799, 1, 65, 65, 81, 114, 13, kSequencePointKind_StepOut, 0, 8 } /* seqPointIndex: 8 */,
	{ 31800, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 31800, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 31800, 1, 69, 69, 9, 10, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 31800, 1, 70, 70, 13, 64, 1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 31800, 1, 70, 70, 13, 64, 2, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 31800, 1, 71, 71, 13, 33, 8, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 31800, 1, 71, 71, 0, 0, 13, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 31800, 1, 72, 72, 17, 41, 16, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 31800, 1, 74, 74, 13, 39, 20, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 31800, 1, 74, 74, 13, 39, 22, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 31800, 1, 75, 75, 9, 10, 30, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 31801, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 31801, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 31801, 1, 79, 79, 9, 10, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 31801, 1, 80, 80, 13, 63, 1, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 31801, 1, 80, 80, 13, 63, 2, kSequencePointKind_StepOut, 0, 24 } /* seqPointIndex: 24 */,
	{ 31801, 1, 81, 81, 13, 34, 8, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 31801, 1, 81, 81, 0, 0, 13, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 31801, 1, 82, 82, 17, 24, 16, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 31801, 1, 84, 84, 13, 40, 18, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 31801, 1, 84, 84, 13, 40, 21, kSequencePointKind_StepOut, 0, 29 } /* seqPointIndex: 29 */,
	{ 31801, 1, 85, 85, 9, 10, 27, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 31802, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 31802, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 31802, 1, 100, 100, 9, 10, 0, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 31802, 1, 101, 101, 13, 40, 1, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 31802, 1, 101, 101, 0, 0, 6, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 31802, 1, 102, 102, 13, 14, 9, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 31802, 1, 103, 103, 17, 55, 10, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 31802, 1, 103, 103, 0, 0, 19, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 31802, 1, 104, 104, 21, 98, 22, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 31802, 1, 104, 104, 21, 98, 22, kSequencePointKind_StepOut, 0, 40 } /* seqPointIndex: 40 */,
	{ 31802, 1, 106, 106, 17, 70, 32, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 31802, 1, 106, 106, 17, 70, 39, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 31802, 1, 107, 107, 13, 14, 45, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 31802, 1, 107, 107, 0, 0, 46, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 31802, 1, 108, 108, 18, 56, 48, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 31802, 1, 108, 108, 0, 0, 57, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 31802, 1, 109, 109, 13, 14, 60, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 31802, 1, 110, 110, 17, 60, 61, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 31802, 1, 110, 110, 17, 60, 67, kSequencePointKind_StepOut, 0, 49 } /* seqPointIndex: 49 */,
	{ 31802, 1, 111, 111, 17, 58, 73, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 31802, 1, 111, 111, 17, 58, 78, kSequencePointKind_StepOut, 0, 51 } /* seqPointIndex: 51 */,
	{ 31802, 1, 111, 111, 0, 0, 87, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 31802, 1, 112, 112, 21, 54, 90, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 31802, 1, 113, 113, 13, 14, 96, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 31802, 1, 115, 115, 13, 39, 97, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 31802, 1, 115, 115, 0, 0, 103, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 31802, 1, 116, 116, 13, 14, 107, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 31802, 1, 117, 117, 17, 54, 108, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 31802, 1, 117, 117, 0, 0, 118, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 31802, 1, 118, 118, 21, 96, 122, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 31802, 1, 118, 118, 21, 96, 122, kSequencePointKind_StepOut, 0, 61 } /* seqPointIndex: 61 */,
	{ 31802, 1, 120, 120, 17, 68, 132, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 31802, 1, 120, 120, 17, 68, 139, kSequencePointKind_StepOut, 0, 63 } /* seqPointIndex: 63 */,
	{ 31802, 1, 121, 121, 13, 14, 145, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 31802, 1, 121, 121, 0, 0, 146, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 31802, 1, 122, 122, 18, 55, 148, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 31802, 1, 122, 122, 0, 0, 158, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 31802, 1, 123, 123, 13, 14, 162, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 31802, 1, 124, 124, 17, 59, 163, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 31802, 1, 124, 124, 17, 59, 169, kSequencePointKind_StepOut, 0, 70 } /* seqPointIndex: 70 */,
	{ 31802, 1, 125, 125, 17, 57, 175, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 31802, 1, 125, 125, 17, 57, 180, kSequencePointKind_StepOut, 0, 72 } /* seqPointIndex: 72 */,
	{ 31802, 1, 125, 125, 0, 0, 190, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 31802, 1, 126, 126, 21, 53, 194, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 31802, 1, 127, 127, 13, 14, 200, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 31802, 1, 129, 131, 13, 105, 201, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 31802, 1, 129, 131, 13, 105, 218, kSequencePointKind_StepOut, 0, 77 } /* seqPointIndex: 77 */,
	{ 31802, 1, 129, 131, 13, 105, 240, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 31802, 1, 129, 131, 13, 105, 245, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 31802, 1, 132, 132, 9, 10, 251, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 31803, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 31803, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 31803, 1, 146, 146, 13, 94, 0, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 31803, 1, 146, 146, 13, 94, 3, kSequencePointKind_StepOut, 0, 84 } /* seqPointIndex: 84 */,
	{ 31803, 1, 146, 146, 13, 94, 8, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 31804, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 31804, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 31804, 1, 154, 154, 13, 94, 0, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 31804, 1, 154, 154, 13, 94, 2, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 31804, 1, 154, 154, 13, 94, 8, kSequencePointKind_StepOut, 0, 90 } /* seqPointIndex: 90 */,
	{ 31805, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 31805, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 31805, 1, 162, 162, 9, 10, 0, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 31805, 1, 163, 163, 13, 51, 1, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 31805, 1, 163, 163, 0, 0, 10, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 31805, 1, 164, 164, 17, 29, 13, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 31805, 1, 166, 166, 13, 84, 17, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 31805, 1, 166, 166, 13, 84, 25, kSequencePointKind_StepOut, 0, 98 } /* seqPointIndex: 98 */,
	{ 31805, 1, 166, 166, 0, 0, 34, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 31805, 1, 167, 167, 17, 29, 37, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 31805, 1, 169, 169, 13, 29, 41, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 31805, 1, 170, 170, 9, 10, 45, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 31806, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 31806, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 31806, 1, 178, 178, 9, 10, 0, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 31806, 1, 179, 179, 13, 50, 1, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 31806, 1, 179, 179, 0, 0, 10, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 31806, 1, 180, 180, 17, 29, 13, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 31806, 1, 182, 182, 13, 83, 17, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 31806, 1, 182, 182, 13, 83, 25, kSequencePointKind_StepOut, 0, 110 } /* seqPointIndex: 110 */,
	{ 31806, 1, 182, 182, 0, 0, 34, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 31806, 1, 183, 183, 17, 29, 37, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 31806, 1, 185, 185, 13, 29, 41, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 31806, 1, 186, 186, 9, 10, 45, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 31807, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 31807, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 31807, 1, 192, 192, 9, 10, 0, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 31807, 1, 193, 193, 13, 46, 1, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 31807, 1, 194, 194, 13, 45, 7, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 31807, 1, 195, 195, 13, 63, 13, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 31807, 1, 195, 195, 13, 63, 15, kSequencePointKind_StepOut, 0, 121 } /* seqPointIndex: 121 */,
	{ 31807, 1, 196, 196, 9, 10, 21, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 31808, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 31808, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 31808, 1, 202, 202, 9, 10, 0, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 31808, 1, 208, 208, 13, 34, 1, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 31808, 1, 210, 210, 13, 38, 7, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 31808, 1, 210, 210, 13, 38, 7, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 31808, 1, 211, 211, 9, 10, 13, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 31809, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 31809, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 31809, 1, 214, 214, 9, 10, 0, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 31809, 1, 224, 224, 17, 42, 1, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 31809, 1, 224, 224, 17, 42, 1, kSequencePointKind_StepOut, 0, 134 } /* seqPointIndex: 134 */,
	{ 31809, 1, 228, 228, 9, 10, 7, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 31825, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 31825, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 31825, 1, 57, 57, 9, 52, 0, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 31825, 1, 57, 57, 9, 52, 8, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_XR_OpenXR_Features_MockRuntime[];
Il2CppSequencePoint g_sequencePointsUnity_XR_OpenXR_Features_MockRuntime[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\Users\\pseit\\OneDrive\\Documents\\Unity Games\\Ar test\\Library\\PackageCache\\com.unity.xr.openxr@1.5.3\\MockRuntime\\MockRuntime.cs", { 78, 93, 254, 99, 251, 18, 111, 70, 73, 24, 97, 55, 241, 94, 239, 145} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 4569, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[5] = 
{
	{ 0, 32 },
	{ 0, 28 },
	{ 0, 252 },
	{ 0, 47 },
	{ 0, 47 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[42] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::add_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::remove_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate) */,
	{ 0, 0, 0 } /* UnityEngine.XR.OpenXR.Features.Mock.MockRuntime UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::get_Instance() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ReceiveScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64) */,
	{ 32, 0, 1 } /* UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::BeforeFunctionCallback(System.String) */,
	{ 28, 1, 1 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::AfterFunctionCallback(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult) */,
	{ 252, 2, 1 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetFunctionCallback(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate) */,
	{ 47, 3, 1 } /* UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetBeforeFunctionCallback(System.String) */,
	{ 47, 4, 1 } /* UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetAfterFunctionCallback(System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ClearFunctionCallbacks() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ResetDefaults() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::OnInstanceDestroy(System.UInt64) */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::HookCreateInstance(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetKeepFunctionCallbacks(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetViewPose(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector4) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetViewState(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,UnityEngine.XR.OpenXR.NativeTypes.XrViewStateFlags) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetSpace(UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetSpace(System.UInt64,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags) */,
	{ 0, 0, 0 } /* UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_RegisterScriptEventCallback(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_TransitionToState(UnityEngine.XR.OpenXR.NativeTypes.XrSessionState,System.Boolean) */,
	{ 0, 0, 0 } /* UnityEngine.XR.OpenXR.NativeTypes.XrSessionState UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::Internal_GetSessionState() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::RequestExitSession() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::CauseInstanceLoss() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::SetReferenceSpaceBounds(UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType,UnityEngine.Vector2) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::GetEndFrameStats(System.Int32&,System.Int32&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ActivateSecondaryView(UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::MockRuntime_RegisterFunctionCallbacks(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate,UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::Invoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::BeginInvoke(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent,System.UInt64,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::Invoke(System.String) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* UnityEngine.XR.OpenXR.NativeTypes.XrResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::Invoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::BeginInvoke(System.String,UnityEngine.XR.OpenXR.NativeTypes.XrResult,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate::EndInvoke(System.IAsyncResult) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_XR_OpenXR_Features_MockRuntime;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_XR_OpenXR_Features_MockRuntime = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	140,
	(Il2CppSequencePoint*)g_sequencePointsUnity_XR_OpenXR_Features_MockRuntime,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
