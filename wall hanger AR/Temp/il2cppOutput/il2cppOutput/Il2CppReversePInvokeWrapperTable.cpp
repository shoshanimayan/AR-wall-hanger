#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

struct EVENT_FILTER_DESCRIPTOR_t24FD3DB96806FFE8C96FFDB38B1B8331EA0D72BB ;
struct Guid_t ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatus
struct  ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m32987ABF4E909DC5476F09C034714951CB4A8048(Guid_t * ___sourceId0, int32_t ___controlCode1, uint8_t ___setLevel2, int64_t ___anyKeyword3, int64_t ___allKeyword4, EVENT_FILTER_DESCRIPTOR_t24FD3DB96806FFE8C96FFDB38B1B8331EA0D72BB * ___filterData5, void* ___callbackContext6);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508(int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2);


extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[3] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m32987ABF4E909DC5476F09C034714951CB4A8048),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARKitSessionSubsystem_OnAsyncConversionComplete_mAF81D4ED67F8334B95C4376905DB2418863E3508),
};
