#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24;
// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB;
// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C;
// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A;
// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA;
// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry>
struct List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs>
struct EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs>
struct EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2;
// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs>
struct EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs>
struct EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Pathfinding.Ionic.Crc.CRC32
struct CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.UInt32 Pathfinding.Ionic.Crc.CRC32::dwPolynomial
	uint32_t ___dwPolynomial_0;
	// System.Int64 Pathfinding.Ionic.Crc.CRC32::_TotalBytesRead
	int64_t ____TotalBytesRead_1;
	// System.Boolean Pathfinding.Ionic.Crc.CRC32::reverseBits
	bool ___reverseBits_2;
	// System.UInt32[] Pathfinding.Ionic.Crc.CRC32::crc32Table
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___crc32Table_3;
	// System.UInt32 Pathfinding.Ionic.Crc.CRC32::_register
	uint32_t ____register_4;

public:
	inline static int32_t get_offset_of_dwPolynomial_0() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ___dwPolynomial_0)); }
	inline uint32_t get_dwPolynomial_0() const { return ___dwPolynomial_0; }
	inline uint32_t* get_address_of_dwPolynomial_0() { return &___dwPolynomial_0; }
	inline void set_dwPolynomial_0(uint32_t value)
	{
		___dwPolynomial_0 = value;
	}

	inline static int32_t get_offset_of__TotalBytesRead_1() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ____TotalBytesRead_1)); }
	inline int64_t get__TotalBytesRead_1() const { return ____TotalBytesRead_1; }
	inline int64_t* get_address_of__TotalBytesRead_1() { return &____TotalBytesRead_1; }
	inline void set__TotalBytesRead_1(int64_t value)
	{
		____TotalBytesRead_1 = value;
	}

	inline static int32_t get_offset_of_reverseBits_2() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ___reverseBits_2)); }
	inline bool get_reverseBits_2() const { return ___reverseBits_2; }
	inline bool* get_address_of_reverseBits_2() { return &___reverseBits_2; }
	inline void set_reverseBits_2(bool value)
	{
		___reverseBits_2 = value;
	}

	inline static int32_t get_offset_of_crc32Table_3() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ___crc32Table_3)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_crc32Table_3() const { return ___crc32Table_3; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_crc32Table_3() { return &___crc32Table_3; }
	inline void set_crc32Table_3(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___crc32Table_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crc32Table_3), (void*)value);
	}

	inline static int32_t get_offset_of__register_4() { return static_cast<int32_t>(offsetof(CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC, ____register_4)); }
	inline uint32_t get__register_4() const { return ____register_4; }
	inline uint32_t* get_address_of__register_4() { return &____register_4; }
	inline void set__register_4(uint32_t value)
	{
		____register_4 = value;
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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
struct IntPtr_t 
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


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Pathfinding.Ionic.Zip.CompressionMethod
struct CompressionMethod_tA38FC0C6538818F72A1DE9503F5593FDE6D6B6A0 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.CompressionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethod_tA38FC0C6538818F72A1DE9503F5593FDE6D6B6A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.EncryptionAlgorithm
struct EncryptionAlgorithm_tCEC6C56C2B40F022AC8D84E25B2BC6706C30D1D8 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.EncryptionAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionAlgorithm_tCEC6C56C2B40F022AC8D84E25B2BC6706C30D1D8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.ExtractExistingFileAction
struct ExtractExistingFileAction_tBA1807BC0AFDA9B7EDCA52FE83F2977228587087 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ExtractExistingFileAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtractExistingFileAction_tBA1807BC0AFDA9B7EDCA52FE83F2977228587087, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.Zip64Option
struct Zip64Option_t0DC36C0C2607F562C37D343AEA14E927944B938A 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.Zip64Option::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Zip64Option_t0DC36C0C2607F562C37D343AEA14E927944B938A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipEntrySource
struct ZipEntrySource_tE50CA77CBC25CC51C4321502C001493B3328C155 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntrySource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipEntrySource_tE50CA77CBC25CC51C4321502C001493B3328C155, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipEntryTimestamp
struct ZipEntryTimestamp_t4B4E3AE3188C5CA59FC6EE704E01DF6BF805D98B 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntryTimestamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipEntryTimestamp_t4B4E3AE3188C5CA59FC6EE704E01DF6BF805D98B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipErrorAction
struct ZipErrorAction_tC1320E1BEE7C1B7013409A71E9EC78DCD4648337 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipErrorAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipErrorAction_tC1320E1BEE7C1B7013409A71E9EC78DCD4648337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipOption
struct ZipOption_t680F7ADBADDB2C3419D73325971503A6682F1369 
{
public:
	// System.Int32 Pathfinding.Ionic.Zip.ZipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipOption_t680F7ADBADDB2C3419D73325971503A6682F1369, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.CompressionLevel
struct CompressionLevel_t932772149F7AFFE8600C877518B10853790F1A5D 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_t932772149F7AFFE8600C877518B10853790F1A5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Ionic.Zlib.CompressionStrategy
struct CompressionStrategy_tD99C8041B4EC6D101933025A8CE49F042FF57137 
{
public:
	// System.Int32 Pathfinding.Ionic.Zlib.CompressionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionStrategy_tD99C8041B4EC6D101933025A8CE49F042FF57137, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionMadeBy
	int16_t ____VersionMadeBy_0;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_InternalFileAttrs
	int16_t ____InternalFileAttrs_1;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_ExternalFileAttrs
	int32_t ____ExternalFileAttrs_2;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_filenameLength
	int16_t ____filenameLength_3;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_extraFieldLength
	int16_t ____extraFieldLength_4;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_commentLength
	int16_t ____commentLength_5;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_inputDecryptorStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____inputDecryptorStream_6;
	// System.Object Pathfinding.Ionic.Zip.ZipEntry::_outputLock
	RuntimeObject * ____outputLock_7;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forExtract
	ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * ____zipCrypto_forExtract_8;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forWrite
	ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * ____zipCrypto_forWrite_9;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_LastModified
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____LastModified_10;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Mtime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____Mtime_11;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Atime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____Atime_12;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Ctime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____Ctime_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ntfsTimesAreSet
	bool ____ntfsTimesAreSet_14;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitNtfsTimes
	bool ____emitNtfsTimes_15;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitUnixTimes
	bool ____emitUnixTimes_16;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_TrimVolumeFromFullyQualifiedPaths
	bool ____TrimVolumeFromFullyQualifiedPaths_17;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_LocalFileName
	String_t* ____LocalFileName_18;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_FileNameInArchive
	String_t* ____FileNameInArchive_19;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionNeeded
	int16_t ____VersionNeeded_20;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_BitField
	int16_t ____BitField_21;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod
	int16_t ____CompressionMethod_22;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod_FromZipFile
	int16_t ____CompressionMethod_FromZipFile_23;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipEntry::_CompressionLevel
	int32_t ____CompressionLevel_24;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Comment
	String_t* ____Comment_25;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsDirectory
	bool ____IsDirectory_26;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_CommentBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____CommentBytes_27;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedSize
	int64_t ____CompressedSize_28;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedFileDataSize
	int64_t ____CompressedFileDataSize_29;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_UncompressedSize
	int64_t ____UncompressedSize_30;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_TimeBlob
	int32_t ____TimeBlob_31;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_crcCalculated
	bool ____crcCalculated_32;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_Crc32
	int32_t ____Crc32_33;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_Extra
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____Extra_34;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_metadataChanged
	bool ____metadataChanged_35;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_restreamRequiredOnSave
	bool ____restreamRequiredOnSave_36;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_sourceIsEncrypted
	bool ____sourceIsEncrypted_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_skippedDuringSave
	bool ____skippedDuringSave_38;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_diskNumber
	uint32_t ____diskNumber_39;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::_actualEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____actualEncoding_41;
	// Pathfinding.Ionic.Zip.ZipContainer Pathfinding.Ionic.Zip.ZipEntry::_container
	ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198 * ____container_42;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::__FileDataPosition
	int64_t _____FileDataPosition_43;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_EntryHeader
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____EntryHeader_44;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_RelativeOffsetOfLocalHeader
	int64_t ____RelativeOffsetOfLocalHeader_45;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_future_ROLH
	int64_t ____future_ROLH_46;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_TotalEntrySize
	int64_t ____TotalEntrySize_47;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfHeader
	int32_t ____LengthOfHeader_48;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfTrailer
	int32_t ____LengthOfTrailer_49;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_InputUsesZip64
	bool ____InputUsesZip64_50;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_UnsupportedAlgorithmId
	uint32_t ____UnsupportedAlgorithmId_51;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Password
	String_t* ____Password_52;
	// Pathfinding.Ionic.Zip.ZipEntrySource Pathfinding.Ionic.Zip.ZipEntry::_Source
	int32_t ____Source_53;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption
	int32_t ____Encryption_54;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption_FromZipFile
	int32_t ____Encryption_FromZipFile_55;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_WeakEncryptionHeader
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____WeakEncryptionHeader_56;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_archiveStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____archiveStream_57;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_sourceStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____sourceStream_58;
	// System.Nullable`1<System.Int64> Pathfinding.Ionic.Zip.ZipEntry::_sourceStreamOriginalPosition
	Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5  ____sourceStreamOriginalPosition_59;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ioOperationCanceled
	bool ____ioOperationCanceled_60;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_presumeZip64
	bool ____presumeZip64_61;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_entryRequiresZip64
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____entryRequiresZip64_62;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_OutputUsesZip64
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____OutputUsesZip64_63;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsText
	bool ____IsText_64;
	// Pathfinding.Ionic.Zip.ZipEntryTimestamp Pathfinding.Ionic.Zip.ZipEntry::_timestamp
	int32_t ____timestamp_65;
	// Pathfinding.Ionic.Zip.WriteDelegate Pathfinding.Ionic.Zip.ZipEntry::_WriteDelegate
	WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B * ____WriteDelegate_69;
	// Pathfinding.Ionic.Zip.OpenDelegate Pathfinding.Ionic.Zip.ZipEntry::_OpenDelegate
	OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1 * ____OpenDelegate_70;
	// Pathfinding.Ionic.Zip.CloseDelegate Pathfinding.Ionic.Zip.ZipEntry::_CloseDelegate
	CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24 * ____CloseDelegate_71;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipEntry::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_72;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipEntry::<ZipErrorAction>k__BackingField
	int32_t ___U3CZipErrorActionU3Ek__BackingField_73;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipEntry::<SetCompression>k__BackingField
	SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * ___U3CSetCompressionU3Ek__BackingField_74;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncoding>k__BackingField
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___U3CAlternateEncodingU3Ek__BackingField_75;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncodingUsage>k__BackingField
	int32_t ___U3CAlternateEncodingUsageU3Ek__BackingField_76;

public:
	inline static int32_t get_offset_of__VersionMadeBy_0() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____VersionMadeBy_0)); }
	inline int16_t get__VersionMadeBy_0() const { return ____VersionMadeBy_0; }
	inline int16_t* get_address_of__VersionMadeBy_0() { return &____VersionMadeBy_0; }
	inline void set__VersionMadeBy_0(int16_t value)
	{
		____VersionMadeBy_0 = value;
	}

	inline static int32_t get_offset_of__InternalFileAttrs_1() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____InternalFileAttrs_1)); }
	inline int16_t get__InternalFileAttrs_1() const { return ____InternalFileAttrs_1; }
	inline int16_t* get_address_of__InternalFileAttrs_1() { return &____InternalFileAttrs_1; }
	inline void set__InternalFileAttrs_1(int16_t value)
	{
		____InternalFileAttrs_1 = value;
	}

	inline static int32_t get_offset_of__ExternalFileAttrs_2() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____ExternalFileAttrs_2)); }
	inline int32_t get__ExternalFileAttrs_2() const { return ____ExternalFileAttrs_2; }
	inline int32_t* get_address_of__ExternalFileAttrs_2() { return &____ExternalFileAttrs_2; }
	inline void set__ExternalFileAttrs_2(int32_t value)
	{
		____ExternalFileAttrs_2 = value;
	}

	inline static int32_t get_offset_of__filenameLength_3() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____filenameLength_3)); }
	inline int16_t get__filenameLength_3() const { return ____filenameLength_3; }
	inline int16_t* get_address_of__filenameLength_3() { return &____filenameLength_3; }
	inline void set__filenameLength_3(int16_t value)
	{
		____filenameLength_3 = value;
	}

	inline static int32_t get_offset_of__extraFieldLength_4() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____extraFieldLength_4)); }
	inline int16_t get__extraFieldLength_4() const { return ____extraFieldLength_4; }
	inline int16_t* get_address_of__extraFieldLength_4() { return &____extraFieldLength_4; }
	inline void set__extraFieldLength_4(int16_t value)
	{
		____extraFieldLength_4 = value;
	}

	inline static int32_t get_offset_of__commentLength_5() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____commentLength_5)); }
	inline int16_t get__commentLength_5() const { return ____commentLength_5; }
	inline int16_t* get_address_of__commentLength_5() { return &____commentLength_5; }
	inline void set__commentLength_5(int16_t value)
	{
		____commentLength_5 = value;
	}

	inline static int32_t get_offset_of__inputDecryptorStream_6() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____inputDecryptorStream_6)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__inputDecryptorStream_6() const { return ____inputDecryptorStream_6; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__inputDecryptorStream_6() { return &____inputDecryptorStream_6; }
	inline void set__inputDecryptorStream_6(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____inputDecryptorStream_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputDecryptorStream_6), (void*)value);
	}

	inline static int32_t get_offset_of__outputLock_7() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____outputLock_7)); }
	inline RuntimeObject * get__outputLock_7() const { return ____outputLock_7; }
	inline RuntimeObject ** get_address_of__outputLock_7() { return &____outputLock_7; }
	inline void set__outputLock_7(RuntimeObject * value)
	{
		____outputLock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outputLock_7), (void*)value);
	}

	inline static int32_t get_offset_of__zipCrypto_forExtract_8() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____zipCrypto_forExtract_8)); }
	inline ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * get__zipCrypto_forExtract_8() const { return ____zipCrypto_forExtract_8; }
	inline ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C ** get_address_of__zipCrypto_forExtract_8() { return &____zipCrypto_forExtract_8; }
	inline void set__zipCrypto_forExtract_8(ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * value)
	{
		____zipCrypto_forExtract_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zipCrypto_forExtract_8), (void*)value);
	}

	inline static int32_t get_offset_of__zipCrypto_forWrite_9() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____zipCrypto_forWrite_9)); }
	inline ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * get__zipCrypto_forWrite_9() const { return ____zipCrypto_forWrite_9; }
	inline ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C ** get_address_of__zipCrypto_forWrite_9() { return &____zipCrypto_forWrite_9; }
	inline void set__zipCrypto_forWrite_9(ZipCrypto_t5B21675C6338483505DEC2E5D93A810D137E759C * value)
	{
		____zipCrypto_forWrite_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zipCrypto_forWrite_9), (void*)value);
	}

	inline static int32_t get_offset_of__LastModified_10() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____LastModified_10)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__LastModified_10() const { return ____LastModified_10; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__LastModified_10() { return &____LastModified_10; }
	inline void set__LastModified_10(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____LastModified_10 = value;
	}

	inline static int32_t get_offset_of__Mtime_11() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Mtime_11)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__Mtime_11() const { return ____Mtime_11; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__Mtime_11() { return &____Mtime_11; }
	inline void set__Mtime_11(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____Mtime_11 = value;
	}

	inline static int32_t get_offset_of__Atime_12() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Atime_12)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__Atime_12() const { return ____Atime_12; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__Atime_12() { return &____Atime_12; }
	inline void set__Atime_12(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____Atime_12 = value;
	}

	inline static int32_t get_offset_of__Ctime_13() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Ctime_13)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__Ctime_13() const { return ____Ctime_13; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__Ctime_13() { return &____Ctime_13; }
	inline void set__Ctime_13(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____Ctime_13 = value;
	}

	inline static int32_t get_offset_of__ntfsTimesAreSet_14() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____ntfsTimesAreSet_14)); }
	inline bool get__ntfsTimesAreSet_14() const { return ____ntfsTimesAreSet_14; }
	inline bool* get_address_of__ntfsTimesAreSet_14() { return &____ntfsTimesAreSet_14; }
	inline void set__ntfsTimesAreSet_14(bool value)
	{
		____ntfsTimesAreSet_14 = value;
	}

	inline static int32_t get_offset_of__emitNtfsTimes_15() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____emitNtfsTimes_15)); }
	inline bool get__emitNtfsTimes_15() const { return ____emitNtfsTimes_15; }
	inline bool* get_address_of__emitNtfsTimes_15() { return &____emitNtfsTimes_15; }
	inline void set__emitNtfsTimes_15(bool value)
	{
		____emitNtfsTimes_15 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_16() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____emitUnixTimes_16)); }
	inline bool get__emitUnixTimes_16() const { return ____emitUnixTimes_16; }
	inline bool* get_address_of__emitUnixTimes_16() { return &____emitUnixTimes_16; }
	inline void set__emitUnixTimes_16(bool value)
	{
		____emitUnixTimes_16 = value;
	}

	inline static int32_t get_offset_of__TrimVolumeFromFullyQualifiedPaths_17() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____TrimVolumeFromFullyQualifiedPaths_17)); }
	inline bool get__TrimVolumeFromFullyQualifiedPaths_17() const { return ____TrimVolumeFromFullyQualifiedPaths_17; }
	inline bool* get_address_of__TrimVolumeFromFullyQualifiedPaths_17() { return &____TrimVolumeFromFullyQualifiedPaths_17; }
	inline void set__TrimVolumeFromFullyQualifiedPaths_17(bool value)
	{
		____TrimVolumeFromFullyQualifiedPaths_17 = value;
	}

	inline static int32_t get_offset_of__LocalFileName_18() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____LocalFileName_18)); }
	inline String_t* get__LocalFileName_18() const { return ____LocalFileName_18; }
	inline String_t** get_address_of__LocalFileName_18() { return &____LocalFileName_18; }
	inline void set__LocalFileName_18(String_t* value)
	{
		____LocalFileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____LocalFileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__FileNameInArchive_19() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____FileNameInArchive_19)); }
	inline String_t* get__FileNameInArchive_19() const { return ____FileNameInArchive_19; }
	inline String_t** get_address_of__FileNameInArchive_19() { return &____FileNameInArchive_19; }
	inline void set__FileNameInArchive_19(String_t* value)
	{
		____FileNameInArchive_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FileNameInArchive_19), (void*)value);
	}

	inline static int32_t get_offset_of__VersionNeeded_20() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____VersionNeeded_20)); }
	inline int16_t get__VersionNeeded_20() const { return ____VersionNeeded_20; }
	inline int16_t* get_address_of__VersionNeeded_20() { return &____VersionNeeded_20; }
	inline void set__VersionNeeded_20(int16_t value)
	{
		____VersionNeeded_20 = value;
	}

	inline static int32_t get_offset_of__BitField_21() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____BitField_21)); }
	inline int16_t get__BitField_21() const { return ____BitField_21; }
	inline int16_t* get_address_of__BitField_21() { return &____BitField_21; }
	inline void set__BitField_21(int16_t value)
	{
		____BitField_21 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_22() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressionMethod_22)); }
	inline int16_t get__CompressionMethod_22() const { return ____CompressionMethod_22; }
	inline int16_t* get_address_of__CompressionMethod_22() { return &____CompressionMethod_22; }
	inline void set__CompressionMethod_22(int16_t value)
	{
		____CompressionMethod_22 = value;
	}

	inline static int32_t get_offset_of__CompressionMethod_FromZipFile_23() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressionMethod_FromZipFile_23)); }
	inline int16_t get__CompressionMethod_FromZipFile_23() const { return ____CompressionMethod_FromZipFile_23; }
	inline int16_t* get_address_of__CompressionMethod_FromZipFile_23() { return &____CompressionMethod_FromZipFile_23; }
	inline void set__CompressionMethod_FromZipFile_23(int16_t value)
	{
		____CompressionMethod_FromZipFile_23 = value;
	}

	inline static int32_t get_offset_of__CompressionLevel_24() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressionLevel_24)); }
	inline int32_t get__CompressionLevel_24() const { return ____CompressionLevel_24; }
	inline int32_t* get_address_of__CompressionLevel_24() { return &____CompressionLevel_24; }
	inline void set__CompressionLevel_24(int32_t value)
	{
		____CompressionLevel_24 = value;
	}

	inline static int32_t get_offset_of__Comment_25() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Comment_25)); }
	inline String_t* get__Comment_25() const { return ____Comment_25; }
	inline String_t** get_address_of__Comment_25() { return &____Comment_25; }
	inline void set__Comment_25(String_t* value)
	{
		____Comment_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Comment_25), (void*)value);
	}

	inline static int32_t get_offset_of__IsDirectory_26() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____IsDirectory_26)); }
	inline bool get__IsDirectory_26() const { return ____IsDirectory_26; }
	inline bool* get_address_of__IsDirectory_26() { return &____IsDirectory_26; }
	inline void set__IsDirectory_26(bool value)
	{
		____IsDirectory_26 = value;
	}

	inline static int32_t get_offset_of__CommentBytes_27() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CommentBytes_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__CommentBytes_27() const { return ____CommentBytes_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__CommentBytes_27() { return &____CommentBytes_27; }
	inline void set__CommentBytes_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____CommentBytes_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____CommentBytes_27), (void*)value);
	}

	inline static int32_t get_offset_of__CompressedSize_28() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressedSize_28)); }
	inline int64_t get__CompressedSize_28() const { return ____CompressedSize_28; }
	inline int64_t* get_address_of__CompressedSize_28() { return &____CompressedSize_28; }
	inline void set__CompressedSize_28(int64_t value)
	{
		____CompressedSize_28 = value;
	}

	inline static int32_t get_offset_of__CompressedFileDataSize_29() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CompressedFileDataSize_29)); }
	inline int64_t get__CompressedFileDataSize_29() const { return ____CompressedFileDataSize_29; }
	inline int64_t* get_address_of__CompressedFileDataSize_29() { return &____CompressedFileDataSize_29; }
	inline void set__CompressedFileDataSize_29(int64_t value)
	{
		____CompressedFileDataSize_29 = value;
	}

	inline static int32_t get_offset_of__UncompressedSize_30() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____UncompressedSize_30)); }
	inline int64_t get__UncompressedSize_30() const { return ____UncompressedSize_30; }
	inline int64_t* get_address_of__UncompressedSize_30() { return &____UncompressedSize_30; }
	inline void set__UncompressedSize_30(int64_t value)
	{
		____UncompressedSize_30 = value;
	}

	inline static int32_t get_offset_of__TimeBlob_31() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____TimeBlob_31)); }
	inline int32_t get__TimeBlob_31() const { return ____TimeBlob_31; }
	inline int32_t* get_address_of__TimeBlob_31() { return &____TimeBlob_31; }
	inline void set__TimeBlob_31(int32_t value)
	{
		____TimeBlob_31 = value;
	}

	inline static int32_t get_offset_of__crcCalculated_32() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____crcCalculated_32)); }
	inline bool get__crcCalculated_32() const { return ____crcCalculated_32; }
	inline bool* get_address_of__crcCalculated_32() { return &____crcCalculated_32; }
	inline void set__crcCalculated_32(bool value)
	{
		____crcCalculated_32 = value;
	}

	inline static int32_t get_offset_of__Crc32_33() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Crc32_33)); }
	inline int32_t get__Crc32_33() const { return ____Crc32_33; }
	inline int32_t* get_address_of__Crc32_33() { return &____Crc32_33; }
	inline void set__Crc32_33(int32_t value)
	{
		____Crc32_33 = value;
	}

	inline static int32_t get_offset_of__Extra_34() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Extra_34)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__Extra_34() const { return ____Extra_34; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__Extra_34() { return &____Extra_34; }
	inline void set__Extra_34(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____Extra_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Extra_34), (void*)value);
	}

	inline static int32_t get_offset_of__metadataChanged_35() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____metadataChanged_35)); }
	inline bool get__metadataChanged_35() const { return ____metadataChanged_35; }
	inline bool* get_address_of__metadataChanged_35() { return &____metadataChanged_35; }
	inline void set__metadataChanged_35(bool value)
	{
		____metadataChanged_35 = value;
	}

	inline static int32_t get_offset_of__restreamRequiredOnSave_36() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____restreamRequiredOnSave_36)); }
	inline bool get__restreamRequiredOnSave_36() const { return ____restreamRequiredOnSave_36; }
	inline bool* get_address_of__restreamRequiredOnSave_36() { return &____restreamRequiredOnSave_36; }
	inline void set__restreamRequiredOnSave_36(bool value)
	{
		____restreamRequiredOnSave_36 = value;
	}

	inline static int32_t get_offset_of__sourceIsEncrypted_37() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____sourceIsEncrypted_37)); }
	inline bool get__sourceIsEncrypted_37() const { return ____sourceIsEncrypted_37; }
	inline bool* get_address_of__sourceIsEncrypted_37() { return &____sourceIsEncrypted_37; }
	inline void set__sourceIsEncrypted_37(bool value)
	{
		____sourceIsEncrypted_37 = value;
	}

	inline static int32_t get_offset_of__skippedDuringSave_38() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____skippedDuringSave_38)); }
	inline bool get__skippedDuringSave_38() const { return ____skippedDuringSave_38; }
	inline bool* get_address_of__skippedDuringSave_38() { return &____skippedDuringSave_38; }
	inline void set__skippedDuringSave_38(bool value)
	{
		____skippedDuringSave_38 = value;
	}

	inline static int32_t get_offset_of__diskNumber_39() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____diskNumber_39)); }
	inline uint32_t get__diskNumber_39() const { return ____diskNumber_39; }
	inline uint32_t* get_address_of__diskNumber_39() { return &____diskNumber_39; }
	inline void set__diskNumber_39(uint32_t value)
	{
		____diskNumber_39 = value;
	}

	inline static int32_t get_offset_of__actualEncoding_41() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____actualEncoding_41)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__actualEncoding_41() const { return ____actualEncoding_41; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__actualEncoding_41() { return &____actualEncoding_41; }
	inline void set__actualEncoding_41(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____actualEncoding_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____actualEncoding_41), (void*)value);
	}

	inline static int32_t get_offset_of__container_42() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____container_42)); }
	inline ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198 * get__container_42() const { return ____container_42; }
	inline ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198 ** get_address_of__container_42() { return &____container_42; }
	inline void set__container_42(ZipContainer_tE5B21C69BCD96B4928DCB86E9897EE0DE6EC0198 * value)
	{
		____container_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____container_42), (void*)value);
	}

	inline static int32_t get_offset_of___FileDataPosition_43() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, _____FileDataPosition_43)); }
	inline int64_t get___FileDataPosition_43() const { return _____FileDataPosition_43; }
	inline int64_t* get_address_of___FileDataPosition_43() { return &_____FileDataPosition_43; }
	inline void set___FileDataPosition_43(int64_t value)
	{
		_____FileDataPosition_43 = value;
	}

	inline static int32_t get_offset_of__EntryHeader_44() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____EntryHeader_44)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__EntryHeader_44() const { return ____EntryHeader_44; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__EntryHeader_44() { return &____EntryHeader_44; }
	inline void set__EntryHeader_44(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____EntryHeader_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____EntryHeader_44), (void*)value);
	}

	inline static int32_t get_offset_of__RelativeOffsetOfLocalHeader_45() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____RelativeOffsetOfLocalHeader_45)); }
	inline int64_t get__RelativeOffsetOfLocalHeader_45() const { return ____RelativeOffsetOfLocalHeader_45; }
	inline int64_t* get_address_of__RelativeOffsetOfLocalHeader_45() { return &____RelativeOffsetOfLocalHeader_45; }
	inline void set__RelativeOffsetOfLocalHeader_45(int64_t value)
	{
		____RelativeOffsetOfLocalHeader_45 = value;
	}

	inline static int32_t get_offset_of__future_ROLH_46() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____future_ROLH_46)); }
	inline int64_t get__future_ROLH_46() const { return ____future_ROLH_46; }
	inline int64_t* get_address_of__future_ROLH_46() { return &____future_ROLH_46; }
	inline void set__future_ROLH_46(int64_t value)
	{
		____future_ROLH_46 = value;
	}

	inline static int32_t get_offset_of__TotalEntrySize_47() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____TotalEntrySize_47)); }
	inline int64_t get__TotalEntrySize_47() const { return ____TotalEntrySize_47; }
	inline int64_t* get_address_of__TotalEntrySize_47() { return &____TotalEntrySize_47; }
	inline void set__TotalEntrySize_47(int64_t value)
	{
		____TotalEntrySize_47 = value;
	}

	inline static int32_t get_offset_of__LengthOfHeader_48() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____LengthOfHeader_48)); }
	inline int32_t get__LengthOfHeader_48() const { return ____LengthOfHeader_48; }
	inline int32_t* get_address_of__LengthOfHeader_48() { return &____LengthOfHeader_48; }
	inline void set__LengthOfHeader_48(int32_t value)
	{
		____LengthOfHeader_48 = value;
	}

	inline static int32_t get_offset_of__LengthOfTrailer_49() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____LengthOfTrailer_49)); }
	inline int32_t get__LengthOfTrailer_49() const { return ____LengthOfTrailer_49; }
	inline int32_t* get_address_of__LengthOfTrailer_49() { return &____LengthOfTrailer_49; }
	inline void set__LengthOfTrailer_49(int32_t value)
	{
		____LengthOfTrailer_49 = value;
	}

	inline static int32_t get_offset_of__InputUsesZip64_50() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____InputUsesZip64_50)); }
	inline bool get__InputUsesZip64_50() const { return ____InputUsesZip64_50; }
	inline bool* get_address_of__InputUsesZip64_50() { return &____InputUsesZip64_50; }
	inline void set__InputUsesZip64_50(bool value)
	{
		____InputUsesZip64_50 = value;
	}

	inline static int32_t get_offset_of__UnsupportedAlgorithmId_51() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____UnsupportedAlgorithmId_51)); }
	inline uint32_t get__UnsupportedAlgorithmId_51() const { return ____UnsupportedAlgorithmId_51; }
	inline uint32_t* get_address_of__UnsupportedAlgorithmId_51() { return &____UnsupportedAlgorithmId_51; }
	inline void set__UnsupportedAlgorithmId_51(uint32_t value)
	{
		____UnsupportedAlgorithmId_51 = value;
	}

	inline static int32_t get_offset_of__Password_52() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Password_52)); }
	inline String_t* get__Password_52() const { return ____Password_52; }
	inline String_t** get_address_of__Password_52() { return &____Password_52; }
	inline void set__Password_52(String_t* value)
	{
		____Password_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Password_52), (void*)value);
	}

	inline static int32_t get_offset_of__Source_53() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Source_53)); }
	inline int32_t get__Source_53() const { return ____Source_53; }
	inline int32_t* get_address_of__Source_53() { return &____Source_53; }
	inline void set__Source_53(int32_t value)
	{
		____Source_53 = value;
	}

	inline static int32_t get_offset_of__Encryption_54() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Encryption_54)); }
	inline int32_t get__Encryption_54() const { return ____Encryption_54; }
	inline int32_t* get_address_of__Encryption_54() { return &____Encryption_54; }
	inline void set__Encryption_54(int32_t value)
	{
		____Encryption_54 = value;
	}

	inline static int32_t get_offset_of__Encryption_FromZipFile_55() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____Encryption_FromZipFile_55)); }
	inline int32_t get__Encryption_FromZipFile_55() const { return ____Encryption_FromZipFile_55; }
	inline int32_t* get_address_of__Encryption_FromZipFile_55() { return &____Encryption_FromZipFile_55; }
	inline void set__Encryption_FromZipFile_55(int32_t value)
	{
		____Encryption_FromZipFile_55 = value;
	}

	inline static int32_t get_offset_of__WeakEncryptionHeader_56() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____WeakEncryptionHeader_56)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__WeakEncryptionHeader_56() const { return ____WeakEncryptionHeader_56; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__WeakEncryptionHeader_56() { return &____WeakEncryptionHeader_56; }
	inline void set__WeakEncryptionHeader_56(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____WeakEncryptionHeader_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WeakEncryptionHeader_56), (void*)value);
	}

	inline static int32_t get_offset_of__archiveStream_57() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____archiveStream_57)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__archiveStream_57() const { return ____archiveStream_57; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__archiveStream_57() { return &____archiveStream_57; }
	inline void set__archiveStream_57(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____archiveStream_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveStream_57), (void*)value);
	}

	inline static int32_t get_offset_of__sourceStream_58() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____sourceStream_58)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__sourceStream_58() const { return ____sourceStream_58; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__sourceStream_58() { return &____sourceStream_58; }
	inline void set__sourceStream_58(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____sourceStream_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sourceStream_58), (void*)value);
	}

	inline static int32_t get_offset_of__sourceStreamOriginalPosition_59() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____sourceStreamOriginalPosition_59)); }
	inline Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5  get__sourceStreamOriginalPosition_59() const { return ____sourceStreamOriginalPosition_59; }
	inline Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5 * get_address_of__sourceStreamOriginalPosition_59() { return &____sourceStreamOriginalPosition_59; }
	inline void set__sourceStreamOriginalPosition_59(Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5  value)
	{
		____sourceStreamOriginalPosition_59 = value;
	}

	inline static int32_t get_offset_of__ioOperationCanceled_60() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____ioOperationCanceled_60)); }
	inline bool get__ioOperationCanceled_60() const { return ____ioOperationCanceled_60; }
	inline bool* get_address_of__ioOperationCanceled_60() { return &____ioOperationCanceled_60; }
	inline void set__ioOperationCanceled_60(bool value)
	{
		____ioOperationCanceled_60 = value;
	}

	inline static int32_t get_offset_of__presumeZip64_61() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____presumeZip64_61)); }
	inline bool get__presumeZip64_61() const { return ____presumeZip64_61; }
	inline bool* get_address_of__presumeZip64_61() { return &____presumeZip64_61; }
	inline void set__presumeZip64_61(bool value)
	{
		____presumeZip64_61 = value;
	}

	inline static int32_t get_offset_of__entryRequiresZip64_62() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____entryRequiresZip64_62)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__entryRequiresZip64_62() const { return ____entryRequiresZip64_62; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__entryRequiresZip64_62() { return &____entryRequiresZip64_62; }
	inline void set__entryRequiresZip64_62(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____entryRequiresZip64_62 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_63() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____OutputUsesZip64_63)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__OutputUsesZip64_63() const { return ____OutputUsesZip64_63; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__OutputUsesZip64_63() { return &____OutputUsesZip64_63; }
	inline void set__OutputUsesZip64_63(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____OutputUsesZip64_63 = value;
	}

	inline static int32_t get_offset_of__IsText_64() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____IsText_64)); }
	inline bool get__IsText_64() const { return ____IsText_64; }
	inline bool* get_address_of__IsText_64() { return &____IsText_64; }
	inline void set__IsText_64(bool value)
	{
		____IsText_64 = value;
	}

	inline static int32_t get_offset_of__timestamp_65() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____timestamp_65)); }
	inline int32_t get__timestamp_65() const { return ____timestamp_65; }
	inline int32_t* get_address_of__timestamp_65() { return &____timestamp_65; }
	inline void set__timestamp_65(int32_t value)
	{
		____timestamp_65 = value;
	}

	inline static int32_t get_offset_of__WriteDelegate_69() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____WriteDelegate_69)); }
	inline WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B * get__WriteDelegate_69() const { return ____WriteDelegate_69; }
	inline WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B ** get_address_of__WriteDelegate_69() { return &____WriteDelegate_69; }
	inline void set__WriteDelegate_69(WriteDelegate_tC041616ED308814D665BF5EB3EA6F07EEB34AE3B * value)
	{
		____WriteDelegate_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteDelegate_69), (void*)value);
	}

	inline static int32_t get_offset_of__OpenDelegate_70() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____OpenDelegate_70)); }
	inline OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1 * get__OpenDelegate_70() const { return ____OpenDelegate_70; }
	inline OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1 ** get_address_of__OpenDelegate_70() { return &____OpenDelegate_70; }
	inline void set__OpenDelegate_70(OpenDelegate_t5CF9868D06CB2801FDFA0195E85E5E389B7E87C1 * value)
	{
		____OpenDelegate_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____OpenDelegate_70), (void*)value);
	}

	inline static int32_t get_offset_of__CloseDelegate_71() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ____CloseDelegate_71)); }
	inline CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24 * get__CloseDelegate_71() const { return ____CloseDelegate_71; }
	inline CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24 ** get_address_of__CloseDelegate_71() { return &____CloseDelegate_71; }
	inline void set__CloseDelegate_71(CloseDelegate_t34C0FA130D8D88306DAD5A42DAF6E468C1FDBF24 * value)
	{
		____CloseDelegate_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____CloseDelegate_71), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CExtractExistingFileU3Ek__BackingField_72)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_72() const { return ___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_72() { return &___U3CExtractExistingFileU3Ek__BackingField_72; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_72(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_72 = value;
	}

	inline static int32_t get_offset_of_U3CZipErrorActionU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CZipErrorActionU3Ek__BackingField_73)); }
	inline int32_t get_U3CZipErrorActionU3Ek__BackingField_73() const { return ___U3CZipErrorActionU3Ek__BackingField_73; }
	inline int32_t* get_address_of_U3CZipErrorActionU3Ek__BackingField_73() { return &___U3CZipErrorActionU3Ek__BackingField_73; }
	inline void set_U3CZipErrorActionU3Ek__BackingField_73(int32_t value)
	{
		___U3CZipErrorActionU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CSetCompressionU3Ek__BackingField_74)); }
	inline SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * get_U3CSetCompressionU3Ek__BackingField_74() const { return ___U3CSetCompressionU3Ek__BackingField_74; }
	inline SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB ** get_address_of_U3CSetCompressionU3Ek__BackingField_74() { return &___U3CSetCompressionU3Ek__BackingField_74; }
	inline void set_U3CSetCompressionU3Ek__BackingField_74(SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * value)
	{
		___U3CSetCompressionU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetCompressionU3Ek__BackingField_74), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingU3Ek__BackingField_75() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CAlternateEncodingU3Ek__BackingField_75)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_U3CAlternateEncodingU3Ek__BackingField_75() const { return ___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_U3CAlternateEncodingU3Ek__BackingField_75() { return &___U3CAlternateEncodingU3Ek__BackingField_75; }
	inline void set_U3CAlternateEncodingU3Ek__BackingField_75(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___U3CAlternateEncodingU3Ek__BackingField_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAlternateEncodingU3Ek__BackingField_75), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C, ___U3CAlternateEncodingUsageU3Ek__BackingField_76)); }
	inline int32_t get_U3CAlternateEncodingUsageU3Ek__BackingField_76() const { return ___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline int32_t* get_address_of_U3CAlternateEncodingUsageU3Ek__BackingField_76() { return &___U3CAlternateEncodingUsageU3Ek__BackingField_76; }
	inline void set_U3CAlternateEncodingUsageU3Ek__BackingField_76(int32_t value)
	{
		___U3CAlternateEncodingUsageU3Ek__BackingField_76 = value;
	}
};

struct ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::ibm437
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___ibm437_40;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_unixEpoch
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____unixEpoch_66;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_win32Epoch
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____win32Epoch_67;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_zeroHour
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ____zeroHour_68;

public:
	inline static int32_t get_offset_of_ibm437_40() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields, ___ibm437_40)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_ibm437_40() const { return ___ibm437_40; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_ibm437_40() { return &___ibm437_40; }
	inline void set_ibm437_40(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___ibm437_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ibm437_40), (void*)value);
	}

	inline static int32_t get_offset_of__unixEpoch_66() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields, ____unixEpoch_66)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__unixEpoch_66() const { return ____unixEpoch_66; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__unixEpoch_66() { return &____unixEpoch_66; }
	inline void set__unixEpoch_66(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____unixEpoch_66 = value;
	}

	inline static int32_t get_offset_of__win32Epoch_67() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields, ____win32Epoch_67)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__win32Epoch_67() const { return ____win32Epoch_67; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__win32Epoch_67() { return &____win32Epoch_67; }
	inline void set__win32Epoch_67(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____win32Epoch_67 = value;
	}

	inline static int32_t get_offset_of__zeroHour_68() { return static_cast<int32_t>(offsetof(ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_StaticFields, ____zeroHour_68)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get__zeroHour_68() const { return ____zeroHour_68; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of__zeroHour_68() { return &____zeroHour_68; }
	inline void set__zeroHour_68(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		____zeroHour_68 = value;
	}
};


// Pathfinding.Ionic.Zip.ZipException
struct ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_lengthOfReadStream
	int64_t ____lengthOfReadStream_0;
	// System.IO.TextWriter Pathfinding.Ionic.Zip.ZipFile::_StatusMessageTextWriter
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ____StatusMessageTextWriter_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_CaseSensitiveRetrieval
	bool ____CaseSensitiveRetrieval_2;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_readstream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____readstream_3;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_writestream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____writestream_4;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionMadeBy
	uint16_t ____versionMadeBy_5;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionNeededToExtract
	uint16_t ____versionNeededToExtract_6;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_diskNumberWithCd
	uint32_t ____diskNumberWithCd_7;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxOutputSegmentSize
	int32_t ____maxOutputSegmentSize_8;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_numberOfSegmentsForMostRecentSave
	uint32_t ____numberOfSegmentsForMostRecentSave_9;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipFile::_zipErrorAction
	int32_t ____zipErrorAction_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_disposed
	bool ____disposed_11;
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_entries
	Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA * ____entries_12;
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_zipEntriesAsList
	List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E * ____zipEntriesAsList_13;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_name
	String_t* ____name_14;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_readName
	String_t* ____readName_15;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Comment
	String_t* ____Comment_16;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Password
	String_t* ____Password_17;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitNtfsTimes
	bool ____emitNtfsTimes_18;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitUnixTimes
	bool ____emitUnixTimes_19;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipFile::_Strategy
	int32_t ____Strategy_20;
	// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipFile::_compressionMethod
	int32_t ____compressionMethod_21;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_fileAlreadyExists
	bool ____fileAlreadyExists_22;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_temporaryFileName
	String_t* ____temporaryFileName_23;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_contentsChanged
	bool ____contentsChanged_24;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_hasBeenSaved
	bool ____hasBeenSaved_25;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_TempFileFolder
	String_t* ____TempFileFolder_26;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_ReadStreamIsOurs
	bool ____ReadStreamIsOurs_27;
	// System.Object Pathfinding.Ionic.Zip.ZipFile::LOCK
	RuntimeObject * ___LOCK_28;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_saveOperationCanceled
	bool ____saveOperationCanceled_29;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_extractOperationCanceled
	bool ____extractOperationCanceled_30;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_addOperationCanceled
	bool ____addOperationCanceled_31;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipFile::_Encryption
	int32_t ____Encryption_32;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_JustSaved
	bool ____JustSaved_33;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_locEndOfCDS
	int64_t ____locEndOfCDS_34;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory
	uint32_t ____OffsetOfCentralDirectory_35;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory64
	int64_t ____OffsetOfCentralDirectory64_36;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipFile::_OutputUsesZip64
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ____OutputUsesZip64_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_inExtractAll
	bool ____inExtractAll_38;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_alternateEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____alternateEncoding_40;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipFile::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_41;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_BufferSize
	int32_t ____BufferSize_42;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipFile::ParallelDeflater
	ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4 * ___ParallelDeflater_43;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_44;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxBufferPairs
	int32_t ____maxBufferPairs_45;
	// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipFile::_zip64
	int32_t ____zip64_46;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_SavingSfx
	bool ____SavingSfx_47;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::SaveProgress
	EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C * ___SaveProgress_49;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ReadProgress
	EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2 * ___ReadProgress_50;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ExtractProgress
	EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB * ___ExtractProgress_51;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::AddProgress
	EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115 * ___AddProgress_52;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs> Pathfinding.Ionic.Zip.ZipFile::ZipError
	EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E * ___ZipError_53;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FullScan>k__BackingField
	bool ___U3CFullScanU3Ek__BackingField_54;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<SortEntriesBeforeSaving>k__BackingField
	bool ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<AddDirectoryWillTraverseReparsePoints>k__BackingField
	bool ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_57;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FlattenFoldersOnExtract>k__BackingField
	bool ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipFile::<CompressionLevel>k__BackingField
	int32_t ___U3CCompressionLevelU3Ek__BackingField_59;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipFile::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_60;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipFile::<SetCompression>k__BackingField
	SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * ___U3CSetCompressionU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of__lengthOfReadStream_0() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____lengthOfReadStream_0)); }
	inline int64_t get__lengthOfReadStream_0() const { return ____lengthOfReadStream_0; }
	inline int64_t* get_address_of__lengthOfReadStream_0() { return &____lengthOfReadStream_0; }
	inline void set__lengthOfReadStream_0(int64_t value)
	{
		____lengthOfReadStream_0 = value;
	}

	inline static int32_t get_offset_of__StatusMessageTextWriter_1() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____StatusMessageTextWriter_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get__StatusMessageTextWriter_1() const { return ____StatusMessageTextWriter_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of__StatusMessageTextWriter_1() { return &____StatusMessageTextWriter_1; }
	inline void set__StatusMessageTextWriter_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		____StatusMessageTextWriter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____StatusMessageTextWriter_1), (void*)value);
	}

	inline static int32_t get_offset_of__CaseSensitiveRetrieval_2() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____CaseSensitiveRetrieval_2)); }
	inline bool get__CaseSensitiveRetrieval_2() const { return ____CaseSensitiveRetrieval_2; }
	inline bool* get_address_of__CaseSensitiveRetrieval_2() { return &____CaseSensitiveRetrieval_2; }
	inline void set__CaseSensitiveRetrieval_2(bool value)
	{
		____CaseSensitiveRetrieval_2 = value;
	}

	inline static int32_t get_offset_of__readstream_3() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____readstream_3)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__readstream_3() const { return ____readstream_3; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__readstream_3() { return &____readstream_3; }
	inline void set__readstream_3(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____readstream_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____readstream_3), (void*)value);
	}

	inline static int32_t get_offset_of__writestream_4() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____writestream_4)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__writestream_4() const { return ____writestream_4; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__writestream_4() { return &____writestream_4; }
	inline void set__writestream_4(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____writestream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writestream_4), (void*)value);
	}

	inline static int32_t get_offset_of__versionMadeBy_5() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____versionMadeBy_5)); }
	inline uint16_t get__versionMadeBy_5() const { return ____versionMadeBy_5; }
	inline uint16_t* get_address_of__versionMadeBy_5() { return &____versionMadeBy_5; }
	inline void set__versionMadeBy_5(uint16_t value)
	{
		____versionMadeBy_5 = value;
	}

	inline static int32_t get_offset_of__versionNeededToExtract_6() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____versionNeededToExtract_6)); }
	inline uint16_t get__versionNeededToExtract_6() const { return ____versionNeededToExtract_6; }
	inline uint16_t* get_address_of__versionNeededToExtract_6() { return &____versionNeededToExtract_6; }
	inline void set__versionNeededToExtract_6(uint16_t value)
	{
		____versionNeededToExtract_6 = value;
	}

	inline static int32_t get_offset_of__diskNumberWithCd_7() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____diskNumberWithCd_7)); }
	inline uint32_t get__diskNumberWithCd_7() const { return ____diskNumberWithCd_7; }
	inline uint32_t* get_address_of__diskNumberWithCd_7() { return &____diskNumberWithCd_7; }
	inline void set__diskNumberWithCd_7(uint32_t value)
	{
		____diskNumberWithCd_7 = value;
	}

	inline static int32_t get_offset_of__maxOutputSegmentSize_8() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____maxOutputSegmentSize_8)); }
	inline int32_t get__maxOutputSegmentSize_8() const { return ____maxOutputSegmentSize_8; }
	inline int32_t* get_address_of__maxOutputSegmentSize_8() { return &____maxOutputSegmentSize_8; }
	inline void set__maxOutputSegmentSize_8(int32_t value)
	{
		____maxOutputSegmentSize_8 = value;
	}

	inline static int32_t get_offset_of__numberOfSegmentsForMostRecentSave_9() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____numberOfSegmentsForMostRecentSave_9)); }
	inline uint32_t get__numberOfSegmentsForMostRecentSave_9() const { return ____numberOfSegmentsForMostRecentSave_9; }
	inline uint32_t* get_address_of__numberOfSegmentsForMostRecentSave_9() { return &____numberOfSegmentsForMostRecentSave_9; }
	inline void set__numberOfSegmentsForMostRecentSave_9(uint32_t value)
	{
		____numberOfSegmentsForMostRecentSave_9 = value;
	}

	inline static int32_t get_offset_of__zipErrorAction_10() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____zipErrorAction_10)); }
	inline int32_t get__zipErrorAction_10() const { return ____zipErrorAction_10; }
	inline int32_t* get_address_of__zipErrorAction_10() { return &____zipErrorAction_10; }
	inline void set__zipErrorAction_10(int32_t value)
	{
		____zipErrorAction_10 = value;
	}

	inline static int32_t get_offset_of__disposed_11() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____disposed_11)); }
	inline bool get__disposed_11() const { return ____disposed_11; }
	inline bool* get_address_of__disposed_11() { return &____disposed_11; }
	inline void set__disposed_11(bool value)
	{
		____disposed_11 = value;
	}

	inline static int32_t get_offset_of__entries_12() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____entries_12)); }
	inline Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA * get__entries_12() const { return ____entries_12; }
	inline Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA ** get_address_of__entries_12() { return &____entries_12; }
	inline void set__entries_12(Dictionary_2_t34C54FE7FCDEA40E10D75990AA333E98448466FA * value)
	{
		____entries_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entries_12), (void*)value);
	}

	inline static int32_t get_offset_of__zipEntriesAsList_13() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____zipEntriesAsList_13)); }
	inline List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E * get__zipEntriesAsList_13() const { return ____zipEntriesAsList_13; }
	inline List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E ** get_address_of__zipEntriesAsList_13() { return &____zipEntriesAsList_13; }
	inline void set__zipEntriesAsList_13(List_1_t6C6E2340881AF593159FBCB0F0508D96A6CE463E * value)
	{
		____zipEntriesAsList_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zipEntriesAsList_13), (void*)value);
	}

	inline static int32_t get_offset_of__name_14() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____name_14)); }
	inline String_t* get__name_14() const { return ____name_14; }
	inline String_t** get_address_of__name_14() { return &____name_14; }
	inline void set__name_14(String_t* value)
	{
		____name_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_14), (void*)value);
	}

	inline static int32_t get_offset_of__readName_15() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____readName_15)); }
	inline String_t* get__readName_15() const { return ____readName_15; }
	inline String_t** get_address_of__readName_15() { return &____readName_15; }
	inline void set__readName_15(String_t* value)
	{
		____readName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____readName_15), (void*)value);
	}

	inline static int32_t get_offset_of__Comment_16() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____Comment_16)); }
	inline String_t* get__Comment_16() const { return ____Comment_16; }
	inline String_t** get_address_of__Comment_16() { return &____Comment_16; }
	inline void set__Comment_16(String_t* value)
	{
		____Comment_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Comment_16), (void*)value);
	}

	inline static int32_t get_offset_of__Password_17() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____Password_17)); }
	inline String_t* get__Password_17() const { return ____Password_17; }
	inline String_t** get_address_of__Password_17() { return &____Password_17; }
	inline void set__Password_17(String_t* value)
	{
		____Password_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Password_17), (void*)value);
	}

	inline static int32_t get_offset_of__emitNtfsTimes_18() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____emitNtfsTimes_18)); }
	inline bool get__emitNtfsTimes_18() const { return ____emitNtfsTimes_18; }
	inline bool* get_address_of__emitNtfsTimes_18() { return &____emitNtfsTimes_18; }
	inline void set__emitNtfsTimes_18(bool value)
	{
		____emitNtfsTimes_18 = value;
	}

	inline static int32_t get_offset_of__emitUnixTimes_19() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____emitUnixTimes_19)); }
	inline bool get__emitUnixTimes_19() const { return ____emitUnixTimes_19; }
	inline bool* get_address_of__emitUnixTimes_19() { return &____emitUnixTimes_19; }
	inline void set__emitUnixTimes_19(bool value)
	{
		____emitUnixTimes_19 = value;
	}

	inline static int32_t get_offset_of__Strategy_20() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____Strategy_20)); }
	inline int32_t get__Strategy_20() const { return ____Strategy_20; }
	inline int32_t* get_address_of__Strategy_20() { return &____Strategy_20; }
	inline void set__Strategy_20(int32_t value)
	{
		____Strategy_20 = value;
	}

	inline static int32_t get_offset_of__compressionMethod_21() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____compressionMethod_21)); }
	inline int32_t get__compressionMethod_21() const { return ____compressionMethod_21; }
	inline int32_t* get_address_of__compressionMethod_21() { return &____compressionMethod_21; }
	inline void set__compressionMethod_21(int32_t value)
	{
		____compressionMethod_21 = value;
	}

	inline static int32_t get_offset_of__fileAlreadyExists_22() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____fileAlreadyExists_22)); }
	inline bool get__fileAlreadyExists_22() const { return ____fileAlreadyExists_22; }
	inline bool* get_address_of__fileAlreadyExists_22() { return &____fileAlreadyExists_22; }
	inline void set__fileAlreadyExists_22(bool value)
	{
		____fileAlreadyExists_22 = value;
	}

	inline static int32_t get_offset_of__temporaryFileName_23() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____temporaryFileName_23)); }
	inline String_t* get__temporaryFileName_23() const { return ____temporaryFileName_23; }
	inline String_t** get_address_of__temporaryFileName_23() { return &____temporaryFileName_23; }
	inline void set__temporaryFileName_23(String_t* value)
	{
		____temporaryFileName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____temporaryFileName_23), (void*)value);
	}

	inline static int32_t get_offset_of__contentsChanged_24() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____contentsChanged_24)); }
	inline bool get__contentsChanged_24() const { return ____contentsChanged_24; }
	inline bool* get_address_of__contentsChanged_24() { return &____contentsChanged_24; }
	inline void set__contentsChanged_24(bool value)
	{
		____contentsChanged_24 = value;
	}

	inline static int32_t get_offset_of__hasBeenSaved_25() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____hasBeenSaved_25)); }
	inline bool get__hasBeenSaved_25() const { return ____hasBeenSaved_25; }
	inline bool* get_address_of__hasBeenSaved_25() { return &____hasBeenSaved_25; }
	inline void set__hasBeenSaved_25(bool value)
	{
		____hasBeenSaved_25 = value;
	}

	inline static int32_t get_offset_of__TempFileFolder_26() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____TempFileFolder_26)); }
	inline String_t* get__TempFileFolder_26() const { return ____TempFileFolder_26; }
	inline String_t** get_address_of__TempFileFolder_26() { return &____TempFileFolder_26; }
	inline void set__TempFileFolder_26(String_t* value)
	{
		____TempFileFolder_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____TempFileFolder_26), (void*)value);
	}

	inline static int32_t get_offset_of__ReadStreamIsOurs_27() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____ReadStreamIsOurs_27)); }
	inline bool get__ReadStreamIsOurs_27() const { return ____ReadStreamIsOurs_27; }
	inline bool* get_address_of__ReadStreamIsOurs_27() { return &____ReadStreamIsOurs_27; }
	inline void set__ReadStreamIsOurs_27(bool value)
	{
		____ReadStreamIsOurs_27 = value;
	}

	inline static int32_t get_offset_of_LOCK_28() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___LOCK_28)); }
	inline RuntimeObject * get_LOCK_28() const { return ___LOCK_28; }
	inline RuntimeObject ** get_address_of_LOCK_28() { return &___LOCK_28; }
	inline void set_LOCK_28(RuntimeObject * value)
	{
		___LOCK_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LOCK_28), (void*)value);
	}

	inline static int32_t get_offset_of__saveOperationCanceled_29() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____saveOperationCanceled_29)); }
	inline bool get__saveOperationCanceled_29() const { return ____saveOperationCanceled_29; }
	inline bool* get_address_of__saveOperationCanceled_29() { return &____saveOperationCanceled_29; }
	inline void set__saveOperationCanceled_29(bool value)
	{
		____saveOperationCanceled_29 = value;
	}

	inline static int32_t get_offset_of__extractOperationCanceled_30() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____extractOperationCanceled_30)); }
	inline bool get__extractOperationCanceled_30() const { return ____extractOperationCanceled_30; }
	inline bool* get_address_of__extractOperationCanceled_30() { return &____extractOperationCanceled_30; }
	inline void set__extractOperationCanceled_30(bool value)
	{
		____extractOperationCanceled_30 = value;
	}

	inline static int32_t get_offset_of__addOperationCanceled_31() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____addOperationCanceled_31)); }
	inline bool get__addOperationCanceled_31() const { return ____addOperationCanceled_31; }
	inline bool* get_address_of__addOperationCanceled_31() { return &____addOperationCanceled_31; }
	inline void set__addOperationCanceled_31(bool value)
	{
		____addOperationCanceled_31 = value;
	}

	inline static int32_t get_offset_of__Encryption_32() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____Encryption_32)); }
	inline int32_t get__Encryption_32() const { return ____Encryption_32; }
	inline int32_t* get_address_of__Encryption_32() { return &____Encryption_32; }
	inline void set__Encryption_32(int32_t value)
	{
		____Encryption_32 = value;
	}

	inline static int32_t get_offset_of__JustSaved_33() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____JustSaved_33)); }
	inline bool get__JustSaved_33() const { return ____JustSaved_33; }
	inline bool* get_address_of__JustSaved_33() { return &____JustSaved_33; }
	inline void set__JustSaved_33(bool value)
	{
		____JustSaved_33 = value;
	}

	inline static int32_t get_offset_of__locEndOfCDS_34() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____locEndOfCDS_34)); }
	inline int64_t get__locEndOfCDS_34() const { return ____locEndOfCDS_34; }
	inline int64_t* get_address_of__locEndOfCDS_34() { return &____locEndOfCDS_34; }
	inline void set__locEndOfCDS_34(int64_t value)
	{
		____locEndOfCDS_34 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory_35() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____OffsetOfCentralDirectory_35)); }
	inline uint32_t get__OffsetOfCentralDirectory_35() const { return ____OffsetOfCentralDirectory_35; }
	inline uint32_t* get_address_of__OffsetOfCentralDirectory_35() { return &____OffsetOfCentralDirectory_35; }
	inline void set__OffsetOfCentralDirectory_35(uint32_t value)
	{
		____OffsetOfCentralDirectory_35 = value;
	}

	inline static int32_t get_offset_of__OffsetOfCentralDirectory64_36() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____OffsetOfCentralDirectory64_36)); }
	inline int64_t get__OffsetOfCentralDirectory64_36() const { return ____OffsetOfCentralDirectory64_36; }
	inline int64_t* get_address_of__OffsetOfCentralDirectory64_36() { return &____OffsetOfCentralDirectory64_36; }
	inline void set__OffsetOfCentralDirectory64_36(int64_t value)
	{
		____OffsetOfCentralDirectory64_36 = value;
	}

	inline static int32_t get_offset_of__OutputUsesZip64_37() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____OutputUsesZip64_37)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get__OutputUsesZip64_37() const { return ____OutputUsesZip64_37; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of__OutputUsesZip64_37() { return &____OutputUsesZip64_37; }
	inline void set__OutputUsesZip64_37(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		____OutputUsesZip64_37 = value;
	}

	inline static int32_t get_offset_of__inExtractAll_38() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____inExtractAll_38)); }
	inline bool get__inExtractAll_38() const { return ____inExtractAll_38; }
	inline bool* get_address_of__inExtractAll_38() { return &____inExtractAll_38; }
	inline void set__inExtractAll_38(bool value)
	{
		____inExtractAll_38 = value;
	}

	inline static int32_t get_offset_of__alternateEncoding_40() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____alternateEncoding_40)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__alternateEncoding_40() const { return ____alternateEncoding_40; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__alternateEncoding_40() { return &____alternateEncoding_40; }
	inline void set__alternateEncoding_40(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____alternateEncoding_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____alternateEncoding_40), (void*)value);
	}

	inline static int32_t get_offset_of__alternateEncodingUsage_41() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____alternateEncodingUsage_41)); }
	inline int32_t get__alternateEncodingUsage_41() const { return ____alternateEncodingUsage_41; }
	inline int32_t* get_address_of__alternateEncodingUsage_41() { return &____alternateEncodingUsage_41; }
	inline void set__alternateEncodingUsage_41(int32_t value)
	{
		____alternateEncodingUsage_41 = value;
	}

	inline static int32_t get_offset_of__BufferSize_42() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____BufferSize_42)); }
	inline int32_t get__BufferSize_42() const { return ____BufferSize_42; }
	inline int32_t* get_address_of__BufferSize_42() { return &____BufferSize_42; }
	inline void set__BufferSize_42(int32_t value)
	{
		____BufferSize_42 = value;
	}

	inline static int32_t get_offset_of_ParallelDeflater_43() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___ParallelDeflater_43)); }
	inline ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4 * get_ParallelDeflater_43() const { return ___ParallelDeflater_43; }
	inline ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4 ** get_address_of_ParallelDeflater_43() { return &___ParallelDeflater_43; }
	inline void set_ParallelDeflater_43(ParallelDeflateOutputStream_tF3E1CC38CABEE6A529248D5530F6A51CBA6931D4 * value)
	{
		___ParallelDeflater_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParallelDeflater_43), (void*)value);
	}

	inline static int32_t get_offset_of__ParallelDeflateThreshold_44() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____ParallelDeflateThreshold_44)); }
	inline int64_t get__ParallelDeflateThreshold_44() const { return ____ParallelDeflateThreshold_44; }
	inline int64_t* get_address_of__ParallelDeflateThreshold_44() { return &____ParallelDeflateThreshold_44; }
	inline void set__ParallelDeflateThreshold_44(int64_t value)
	{
		____ParallelDeflateThreshold_44 = value;
	}

	inline static int32_t get_offset_of__maxBufferPairs_45() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____maxBufferPairs_45)); }
	inline int32_t get__maxBufferPairs_45() const { return ____maxBufferPairs_45; }
	inline int32_t* get_address_of__maxBufferPairs_45() { return &____maxBufferPairs_45; }
	inline void set__maxBufferPairs_45(int32_t value)
	{
		____maxBufferPairs_45 = value;
	}

	inline static int32_t get_offset_of__zip64_46() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____zip64_46)); }
	inline int32_t get__zip64_46() const { return ____zip64_46; }
	inline int32_t* get_address_of__zip64_46() { return &____zip64_46; }
	inline void set__zip64_46(int32_t value)
	{
		____zip64_46 = value;
	}

	inline static int32_t get_offset_of__SavingSfx_47() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ____SavingSfx_47)); }
	inline bool get__SavingSfx_47() const { return ____SavingSfx_47; }
	inline bool* get_address_of__SavingSfx_47() { return &____SavingSfx_47; }
	inline void set__SavingSfx_47(bool value)
	{
		____SavingSfx_47 = value;
	}

	inline static int32_t get_offset_of_SaveProgress_49() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___SaveProgress_49)); }
	inline EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C * get_SaveProgress_49() const { return ___SaveProgress_49; }
	inline EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C ** get_address_of_SaveProgress_49() { return &___SaveProgress_49; }
	inline void set_SaveProgress_49(EventHandler_1_tE7574FB8A80F9E44E34EC77DD0296DFADE78E39C * value)
	{
		___SaveProgress_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SaveProgress_49), (void*)value);
	}

	inline static int32_t get_offset_of_ReadProgress_50() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___ReadProgress_50)); }
	inline EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2 * get_ReadProgress_50() const { return ___ReadProgress_50; }
	inline EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2 ** get_address_of_ReadProgress_50() { return &___ReadProgress_50; }
	inline void set_ReadProgress_50(EventHandler_1_t1930B892F35B49F4C34EF92C5B39F2CA48807FD2 * value)
	{
		___ReadProgress_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadProgress_50), (void*)value);
	}

	inline static int32_t get_offset_of_ExtractProgress_51() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___ExtractProgress_51)); }
	inline EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB * get_ExtractProgress_51() const { return ___ExtractProgress_51; }
	inline EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB ** get_address_of_ExtractProgress_51() { return &___ExtractProgress_51; }
	inline void set_ExtractProgress_51(EventHandler_1_tAC596669321521262FB69708029F247AED1D79DB * value)
	{
		___ExtractProgress_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtractProgress_51), (void*)value);
	}

	inline static int32_t get_offset_of_AddProgress_52() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___AddProgress_52)); }
	inline EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115 * get_AddProgress_52() const { return ___AddProgress_52; }
	inline EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115 ** get_address_of_AddProgress_52() { return &___AddProgress_52; }
	inline void set_AddProgress_52(EventHandler_1_t2DBD48ADDC30CE0DE95D2D7CD3278AF24D4C3115 * value)
	{
		___AddProgress_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddProgress_52), (void*)value);
	}

	inline static int32_t get_offset_of_ZipError_53() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___ZipError_53)); }
	inline EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E * get_ZipError_53() const { return ___ZipError_53; }
	inline EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E ** get_address_of_ZipError_53() { return &___ZipError_53; }
	inline void set_ZipError_53(EventHandler_1_tAA6757A28FFEEBF14C46EF8EE072B074367FE35E * value)
	{
		___ZipError_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZipError_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFullScanU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CFullScanU3Ek__BackingField_54)); }
	inline bool get_U3CFullScanU3Ek__BackingField_54() const { return ___U3CFullScanU3Ek__BackingField_54; }
	inline bool* get_address_of_U3CFullScanU3Ek__BackingField_54() { return &___U3CFullScanU3Ek__BackingField_54; }
	inline void set_U3CFullScanU3Ek__BackingField_54(bool value)
	{
		___U3CFullScanU3Ek__BackingField_54 = value;
	}

	inline static int32_t get_offset_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55)); }
	inline bool get_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() const { return ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline bool* get_address_of_U3CSortEntriesBeforeSavingU3Ek__BackingField_55() { return &___U3CSortEntriesBeforeSavingU3Ek__BackingField_55; }
	inline void set_U3CSortEntriesBeforeSavingU3Ek__BackingField_55(bool value)
	{
		___U3CSortEntriesBeforeSavingU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56)); }
	inline bool get_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() const { return ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline bool* get_address_of_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56() { return &___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56; }
	inline void set_U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56(bool value)
	{
		___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CCodecBufferSizeU3Ek__BackingField_57)); }
	inline int32_t get_U3CCodecBufferSizeU3Ek__BackingField_57() const { return ___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline int32_t* get_address_of_U3CCodecBufferSizeU3Ek__BackingField_57() { return &___U3CCodecBufferSizeU3Ek__BackingField_57; }
	inline void set_U3CCodecBufferSizeU3Ek__BackingField_57(int32_t value)
	{
		___U3CCodecBufferSizeU3Ek__BackingField_57 = value;
	}

	inline static int32_t get_offset_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58)); }
	inline bool get_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() const { return ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline bool* get_address_of_U3CFlattenFoldersOnExtractU3Ek__BackingField_58() { return &___U3CFlattenFoldersOnExtractU3Ek__BackingField_58; }
	inline void set_U3CFlattenFoldersOnExtractU3Ek__BackingField_58(bool value)
	{
		___U3CFlattenFoldersOnExtractU3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CCompressionLevelU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CCompressionLevelU3Ek__BackingField_59)); }
	inline int32_t get_U3CCompressionLevelU3Ek__BackingField_59() const { return ___U3CCompressionLevelU3Ek__BackingField_59; }
	inline int32_t* get_address_of_U3CCompressionLevelU3Ek__BackingField_59() { return &___U3CCompressionLevelU3Ek__BackingField_59; }
	inline void set_U3CCompressionLevelU3Ek__BackingField_59(int32_t value)
	{
		___U3CCompressionLevelU3Ek__BackingField_59 = value;
	}

	inline static int32_t get_offset_of_U3CExtractExistingFileU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CExtractExistingFileU3Ek__BackingField_60)); }
	inline int32_t get_U3CExtractExistingFileU3Ek__BackingField_60() const { return ___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CExtractExistingFileU3Ek__BackingField_60() { return &___U3CExtractExistingFileU3Ek__BackingField_60; }
	inline void set_U3CExtractExistingFileU3Ek__BackingField_60(int32_t value)
	{
		___U3CExtractExistingFileU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CSetCompressionU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E, ___U3CSetCompressionU3Ek__BackingField_61)); }
	inline SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * get_U3CSetCompressionU3Ek__BackingField_61() const { return ___U3CSetCompressionU3Ek__BackingField_61; }
	inline SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB ** get_address_of_U3CSetCompressionU3Ek__BackingField_61() { return &___U3CSetCompressionU3Ek__BackingField_61; }
	inline void set_U3CSetCompressionU3Ek__BackingField_61(SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB * value)
	{
		___U3CSetCompressionU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetCompressionU3Ek__BackingField_61), (void*)value);
	}
};

struct ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_StaticFields
{
public:
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____defaultEncoding_39;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::BufferSizeDefault
	int32_t ___BufferSizeDefault_48;

public:
	inline static int32_t get_offset_of__defaultEncoding_39() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_StaticFields, ____defaultEncoding_39)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__defaultEncoding_39() const { return ____defaultEncoding_39; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__defaultEncoding_39() { return &____defaultEncoding_39; }
	inline void set__defaultEncoding_39(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____defaultEncoding_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultEncoding_39), (void*)value);
	}

	inline static int32_t get_offset_of_BufferSizeDefault_48() { return static_cast<int32_t>(offsetof(ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_StaticFields, ___BufferSizeDefault_48)); }
	inline int32_t get_BufferSizeDefault_48() const { return ___BufferSizeDefault_48; }
	inline int32_t* get_address_of_BufferSizeDefault_48() { return &___BufferSizeDefault_48; }
	inline void set_BufferSizeDefault_48(int32_t value)
	{
		___BufferSizeDefault_48 = value;
	}
};


// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637  : public RuntimeObject
{
public:
	static const Il2CppGuid CLSID;

public:
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___InputBuffer_0;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___OutputBuffer_4;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Pathfinding.Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Pathfinding.Ionic.Zlib.DeflateManager Pathfinding.Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A * ___dstate_9;
	// Pathfinding.Ionic.Zlib.InflateManager Pathfinding.Ionic.Zlib.ZlibCodec::istate
	InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17 * ___istate_10;
	// System.UInt32 Pathfinding.Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___InputBuffer_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___OutputBuffer_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputBuffer_4), (void*)value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_8), (void*)value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___dstate_9)); }
	inline DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t662CEBEB6EF33529F667845D05789CC9D00CE36A * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dstate_9), (void*)value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___istate_10)); }
	inline InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17 * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t304AB424D2A4C7298B7FD313A56751401635FF17 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___istate_10), (void*)value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};


// Pathfinding.Ionic.Zlib.ZlibException
struct ZlibException_t26829E8B8777593A4F1A5F2A65F2C07EDF80F36E  : public Exception_t
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.BadCrcException
struct BadCrcException_t46822B11AE7535521BCADEEADDDB0784AC9AA14F  : public ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.BadPasswordException
struct BadPasswordException_tA4CBA542E14033E5720FD702035ADD86B9C6A6F6  : public ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.BadReadException
struct BadReadException_t1049D8FCC0C3763C69E3916DBFA4EA2600135F7A  : public ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};


// Pathfinding.Ionic.Zip.BadStateException
struct BadStateException_t37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405  : public ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513
{
public:
	static const Il2CppGuid CLSID;

public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_0_0_0;
IL2CPP_EXTERN_C void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Action_t591D2A86165F896B4B800BB5C25CE18672A55579();
IL2CPP_EXTERN_C_CONST RuntimeType Action_t591D2A86165F896B4B800BB5C25CE18672A55579_0_0_0;
IL2CPP_EXTERN_C void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_0_0_0;
IL2CPP_EXTERN_C void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_0_0_0;
IL2CPP_EXTERN_C void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_0_0_0;
IL2CPP_EXTERN_C void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_0_0_0;
IL2CPP_EXTERN_C void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_0_0_0;
IL2CPP_EXTERN_C void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A();
IL2CPP_EXTERN_C_CONST RuntimeType InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51();
IL2CPP_EXTERN_C_CONST RuntimeType WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51_0_0_0;
IL2CPP_EXTERN_C void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_0_0_0;
IL2CPP_EXTERN_C void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_0_0_0;
IL2CPP_EXTERN_C void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_0_0_0;
IL2CPP_EXTERN_C void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_0_0_0;
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Delegate_t_0_0_0;
IL2CPP_EXTERN_C void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_0_0_0;
IL2CPP_EXTERN_C void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_0_0_0;
IL2CPP_EXTERN_C void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_0_0_0;
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Exception_t_0_0_0;
IL2CPP_EXTERN_C void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_0_0_0;
IL2CPP_EXTERN_C void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_0_0_0;
IL2CPP_EXTERN_C void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_0_0_0;
IL2CPP_EXTERN_C void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_0_0_0;
IL2CPP_EXTERN_C void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_0_0_0;
IL2CPP_EXTERN_C void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_0_0_0;
IL2CPP_EXTERN_C void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_0_0_0;
IL2CPP_EXTERN_C void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_0_0_0;
IL2CPP_EXTERN_C void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_0_0_0;
IL2CPP_EXTERN_C void TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_0_0_0;
IL2CPP_EXTERN_C void TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_0_0_0;
IL2CPP_EXTERN_C void TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_0_0_0;
IL2CPP_EXTERN_C void TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_0_0_0;
IL2CPP_EXTERN_C void DateMapping_t42528A0D8F22A69F8BE862712ADFC7B391F7CC7D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateMapping_t42528A0D8F22A69F8BE862712ADFC7B391F7CC7D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateMapping_t42528A0D8F22A69F8BE862712ADFC7B391F7CC7D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateMapping_t42528A0D8F22A69F8BE862712ADFC7B391F7CC7D_0_0_0;
IL2CPP_EXTERN_C void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C_0_0_0;
IL2CPP_EXTERN_C void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_0_0_0;
IL2CPP_EXTERN_C void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_0_0_0;
IL2CPP_EXTERN_C void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_0_0_0;
IL2CPP_EXTERN_C void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_0_0_0;
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MulticastDelegate_t_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_0_0_0;
IL2CPP_EXTERN_C void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_0_0_0;
IL2CPP_EXTERN_C void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_0_0_0;
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Assembly_t_0_0_0;
IL2CPP_EXTERN_C void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_0_0_0;
IL2CPP_EXTERN_C void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_0_0_0;
IL2CPP_EXTERN_C void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_0_0_0;
IL2CPP_EXTERN_C void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_0_0_0;
IL2CPP_EXTERN_C void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MethodBody_t900C79A470F33FA739168B232092420240DC11F2_0_0_0;
IL2CPP_EXTERN_C void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_0_0_0;
IL2CPP_EXTERN_C void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_0_0_0;
IL2CPP_EXTERN_C void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_0_0_0;
IL2CPP_EXTERN_C void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_0_0_0;
IL2CPP_EXTERN_C void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_0_0_0;
IL2CPP_EXTERN_C void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_0_0_0;
IL2CPP_EXTERN_C void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_0_0_0;
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_0_0_0;
IL2CPP_EXTERN_C void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_0_0_0;
IL2CPP_EXTERN_C void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_0_0_0;
IL2CPP_EXTERN_C void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_0_0_0;
IL2CPP_EXTERN_C void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Context_tE86AB6B3D9759C8E715184808579EFE761683724_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F();
IL2CPP_EXTERN_C_CONST RuntimeType CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F_0_0_0;
IL2CPP_EXTERN_C void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_0_0_0;
IL2CPP_EXTERN_C void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_0_0_0;
IL2CPP_EXTERN_C void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_0_0_0;
IL2CPP_EXTERN_C void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_0_0_0;
IL2CPP_EXTERN_C void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_0_0_0;
IL2CPP_EXTERN_C void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A();
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A_0_0_0;
IL2CPP_EXTERN_C void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_0_0_0;
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_0_0_0;
IL2CPP_EXTERN_C void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_0_0_0;
IL2CPP_EXTERN_C void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_0_0_0;
IL2CPP_EXTERN_C void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_0_0_0;
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InvocationEntryDelegate_t30A130DE7AE7AE681112D6036577446D1CC18F1B();
IL2CPP_EXTERN_C_CONST RuntimeType InvocationEntryDelegate_t30A130DE7AE7AE681112D6036577446D1CC18F1B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF();
IL2CPP_EXTERN_C_CONST RuntimeType ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_0_0_0;
IL2CPP_EXTERN_C void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_0_0_0;
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_0_0_0;
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_0_0_0;
IL2CPP_EXTERN_C void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_0_0_0;
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_0_0_0;
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_0_0_0;
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_0_0_0;
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_0_0_0;
IL2CPP_EXTERN_C void AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_0_0_0;
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_0_0_0;
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_0_0_0;
IL2CPP_EXTERN_C void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_0_0_0;
IL2CPP_EXTERN_C void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_0_0_0;
IL2CPP_EXTERN_C void IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_0_0_0;
IL2CPP_EXTERN_C void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_0_0_0;
IL2CPP_EXTERN_C void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778();
IL2CPP_EXTERN_C_CONST RuntimeType LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00();
IL2CPP_EXTERN_C_CONST RuntimeType LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_0_0_0;
IL2CPP_EXTERN_C void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_0_0_0;
IL2CPP_EXTERN_C void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_0_0_0;
IL2CPP_EXTERN_C void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_0_0_0;
IL2CPP_EXTERN_C void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161();
IL2CPP_EXTERN_C_CONST RuntimeType StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90();
IL2CPP_EXTERN_C_CONST RuntimeType DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4();
IL2CPP_EXTERN_C_CONST RuntimeType UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_0_0_0;
IL2CPP_EXTERN_C void DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_0_0_0;
IL2CPP_EXTERN_C void DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_0_0_0;
IL2CPP_EXTERN_C void PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_0_0_0;
IL2CPP_EXTERN_C void RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_0_0_0;
IL2CPP_EXTERN_C void SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_0_0_0;
IL2CPP_EXTERN_C void SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_0_0_0;
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_0_0_0;
IL2CPP_EXTERN_C void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_0_0_0;
IL2CPP_EXTERN_C void LightProbes_t90D0BADB8CC1158A3387FE116066F1F316FBE5C5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightProbes_t90D0BADB8CC1158A3387FE116066F1F316FBE5C5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightProbes_t90D0BADB8CC1158A3387FE116066F1F316FBE5C5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightProbes_t90D0BADB8CC1158A3387FE116066F1F316FBE5C5_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E();
IL2CPP_EXTERN_C_CONST RuntimeType UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_0_0_0;
IL2CPP_EXTERN_C void MeshContainer_t2A23DBC2102A36B5EEB2BE0C87E56D95F1FC4B38_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshContainer_t2A23DBC2102A36B5EEB2BE0C87E56D95F1FC4B38_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshContainer_t2A23DBC2102A36B5EEB2BE0C87E56D95F1FC4B38_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshContainer_t2A23DBC2102A36B5EEB2BE0C87E56D95F1FC4B38_0_0_0;
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0;
IL2CPP_EXTERN_C void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3();
IL2CPP_EXTERN_C_CONST RuntimeType CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_0_0_0;
IL2CPP_EXTERN_C void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_0_0_0;
IL2CPP_EXTERN_C void BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnPerformCulling_tBB83FA521CA4901C7E851518814C5EC4AD4F810B();
IL2CPP_EXTERN_C_CONST RuntimeType OnPerformCulling_tBB83FA521CA4901C7E851518814C5EC4AD4F810B_0_0_0;
IL2CPP_EXTERN_C void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_0_0_0;
IL2CPP_EXTERN_C void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0;
IL2CPP_EXTERN_C void MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_0_0_0;
IL2CPP_EXTERN_C void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_0_0_0;
IL2CPP_EXTERN_C void SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_0_0_0;
IL2CPP_EXTERN_C void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_0_0_0;
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_0_0_0;
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C();
IL2CPP_EXTERN_C_CONST RuntimeType FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C_0_0_0;
IL2CPP_EXTERN_C void TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_0_0_0;
IL2CPP_EXTERN_C void TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_0_0_0;
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E();
IL2CPP_EXTERN_C_CONST RuntimeType OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E_0_0_0;
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_0_0_0;
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_0_0_0;
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_0_0_0;
IL2CPP_EXTERN_C void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100();
IL2CPP_EXTERN_C_CONST RuntimeType WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_0_0_0;
IL2CPP_EXTERN_C void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8();
IL2CPP_EXTERN_C_CONST RuntimeType SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_0_0_0;
IL2CPP_EXTERN_C void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyle_t671F175A201A19166385EE3392292A5F50070572_0_0_0;
IL2CPP_EXTERN_C void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_0_0_0;
IL2CPP_EXTERN_C void HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_0_0_0;
IL2CPP_EXTERN_C void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_0_0_0;
IL2CPP_EXTERN_C void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_0_0_0;
IL2CPP_EXTERN_C void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_0_0_0;
IL2CPP_EXTERN_C void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE();
IL2CPP_EXTERN_C_CONST RuntimeType WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB();
IL2CPP_EXTERN_C_CONST RuntimeType SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CompressFunc_t24BC9DA90C080834EF54BDDD9C258A985999DBF6();
IL2CPP_EXTERN_C_CONST RuntimeType CompressFunc_t24BC9DA90C080834EF54BDDD9C258A985999DBF6_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType BadCrcException_t46822B11AE7535521BCADEEADDDB0784AC9AA14F_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType BadPasswordException_tA4CBA542E14033E5720FD702035ADD86B9C6A6F6_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType BadReadException_t1049D8FCC0C3763C69E3916DBFA4EA2600135F7A_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType BadStateException_t37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637_0_0_0;
IL2CPP_EXTERN_C_CONST RuntimeType ZlibException_t26829E8B8777593A4F1A5F2A65F2C07EDF80F36E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB();
IL2CPP_EXTERN_C_CONST RuntimeType PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801();
IL2CPP_EXTERN_C_CONST RuntimeType PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926();
IL2CPP_EXTERN_C_CONST RuntimeType AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926_0_0_0;
IL2CPP_EXTERN_C void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EmitParams_t03557E552852EC6B71876CD05C4098733702A219_0_0_0;
IL2CPP_EXTERN_C void FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_0_0_0;
IL2CPP_EXTERN_C void Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_0_0_0;
IL2CPP_EXTERN_C void RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_0_0_0;
IL2CPP_EXTERN_C void FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_0_0_0;
IL2CPP_EXTERN_C void Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0_0_0_0;
IL2CPP_EXTERN_C void Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D();
IL2CPP_EXTERN_C_CONST RuntimeType GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE();
IL2CPP_EXTERN_C_CONST RuntimeType RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE_0_0_0;
IL2CPP_EXTERN_C void SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_0_0_0;
IL2CPP_EXTERN_C void GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_0_0_0;
IL2CPP_EXTERN_C void PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_0_0_0;
IL2CPP_EXTERN_C void AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_0_0_0;
IL2CPP_EXTERN_C void Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_0_0_0;
IL2CPP_EXTERN_C void Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_0_0_0;
IL2CPP_EXTERN_C void FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_0_0_0;
IL2CPP_EXTERN_C void PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_0_0_0;
IL2CPP_EXTERN_C void GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_0_0_0;
IL2CPP_EXTERN_C void GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_0_0_0;
IL2CPP_EXTERN_C void NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_0_0_0;
IL2CPP_EXTERN_C void NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_0_0_0;
IL2CPP_EXTERN_C void meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnScanStatus_t174820BB1856D7D80BC4E7EBA18B9A266076110D();
IL2CPP_EXTERN_C_CONST RuntimeType OnScanStatus_t174820BB1856D7D80BC4E7EBA18B9A266076110D_0_0_0;
IL2CPP_EXTERN_C void GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_0_0_0;
IL2CPP_EXTERN_C void Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_0_0_0;
IL2CPP_EXTERN_C void Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_0_0_0;
IL2CPP_EXTERN_C void Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_0_0_0;
IL2CPP_EXTERN_C void MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_0_0_0;
IL2CPP_EXTERN_C void FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_0_0_0;
IL2CPP_EXTERN_C void MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_0_0_0;
IL2CPP_EXTERN_C void Frame_tDCBD17C1EAD7A9C8C39B66C8E7A3CEE5A01294B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Frame_tDCBD17C1EAD7A9C8C39B66C8E7A3CEE5A01294B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Frame_tDCBD17C1EAD7A9C8C39B66C8E7A3CEE5A01294B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Frame_tDCBD17C1EAD7A9C8C39B66C8E7A3CEE5A01294B4_0_0_0;
IL2CPP_EXTERN_C void Meta_t58F0E46B3B60F24853EFF9ACA4427F395320698E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Meta_t58F0E46B3B60F24853EFF9ACA4427F395320698E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Meta_t58F0E46B3B60F24853EFF9ACA4427F395320698E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Meta_t58F0E46B3B60F24853EFF9ACA4427F395320698E_0_0_0;
IL2CPP_EXTERN_C void TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_0_0_0;
IL2CPP_EXTERN_C void Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_0_0_0;
IL2CPP_EXTERN_C void TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863_0_0_0;
IL2CPP_EXTERN_C void TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_0_0_0;
IL2CPP_EXTERN_C void TMP_MaterialReference_t1D5B0573CDAE361726CB60E528AF8EF43E5E3B60_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_MaterialReference_t1D5B0573CDAE361726CB60E528AF8EF43E5E3B60_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_MaterialReference_t1D5B0573CDAE361726CB60E528AF8EF43E5E3B60_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_MaterialReference_t1D5B0573CDAE361726CB60E528AF8EF43E5E3B60_0_0_0;
IL2CPP_EXTERN_C void TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_0_0_0;
IL2CPP_EXTERN_C void SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_0_0_0;
IL2CPP_EXTERN_C void TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_0_0_0;
IL2CPP_EXTERN_C void TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_0_0_0;
IL2CPP_EXTERN_C void WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_0_0_0;
IL2CPP_EXTERN_C void MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_0_0_0;
IL2CPP_EXTERN_C void NotificationEntry_tC8EA7F3972A3BDFE6F010CB6D8982CC97CAD963A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NotificationEntry_tC8EA7F3972A3BDFE6F010CB6D8982CC97CAD963A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NotificationEntry_tC8EA7F3972A3BDFE6F010CB6D8982CC97CAD963A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NotificationEntry_tC8EA7F3972A3BDFE6F010CB6D8982CC97CAD963A_0_0_0;
IL2CPP_EXTERN_C void TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_0_0_0;
IL2CPP_EXTERN_C void TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_0_0_0;
IL2CPP_EXTERN_C void TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_0_0_0;
IL2CPP_EXTERN_C void AxisBase_tA20C8C584C38319A9A8C0FE49567F4805725CE3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AxisBase_tA20C8C584C38319A9A8C0FE49567F4805725CE3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AxisBase_tA20C8C584C38319A9A8C0FE49567F4805725CE3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AxisBase_tA20C8C584C38319A9A8C0FE49567F4805725CE3C_0_0_0;
IL2CPP_EXTERN_C void AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_0_0_0;
IL2CPP_EXTERN_C void Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_0_0_0;
IL2CPP_EXTERN_C void CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_0_0_0;
IL2CPP_EXTERN_C void Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_0_0_0;
IL2CPP_EXTERN_C void CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE();
IL2CPP_EXTERN_C_CONST RuntimeType AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_0_0_0;
IL2CPP_EXTERN_C void EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_0_0_0;
IL2CPP_EXTERN_C void CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_0_0_0;
IL2CPP_EXTERN_C void Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_0_0_0;
IL2CPP_EXTERN_C void Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_0_0_0;
IL2CPP_EXTERN_C void AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_0_0_0;
IL2CPP_EXTERN_C void ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_0_0_0;
IL2CPP_EXTERN_C void TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_0_0_0;
IL2CPP_EXTERN_C void LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_0_0_0;
IL2CPP_EXTERN_C void NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_0_0_0;
IL2CPP_EXTERN_C void TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72();
IL2CPP_EXTERN_C_CONST RuntimeType OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72_0_0_0;
IL2CPP_EXTERN_C void ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_0_0_0;
extern Il2CppInteropData g_Il2CppInteropData[];
Il2CppInteropData g_Il2CppInteropData[244] = 
{
	{ NULL, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_back, Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_marshal_pinvoke_cleanup, NULL, NULL, &Escape_t7D205DCBE40F7D5FE25F443E2DBF79A63870C5C6_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_back, SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_tD41B530333F2C9F500BD6FEC91735D16F06C9A6F_0_0_0 } /* Mono.SafeStringMarshal */,
	{ DelegatePInvokeWrapper_Action_t591D2A86165F896B4B800BB5C25CE18672A55579, NULL, NULL, NULL, NULL, NULL, &Action_t591D2A86165F896B4B800BB5C25CE18672A55579_0_0_0 } /* System.Action */,
	{ NULL, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_back, AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_0_0_0 } /* System.AppDomain */,
	{ NULL, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_back, AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_t80DF2915BB100D4BD515920B49C959E9FA451306_0_0_0 } /* System.AppDomainSetup */,
	{ NULL, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_back, SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t4742EBDD434279DCC671369AB18AD4DC64587891_0_0_0 } /* System.Array/SorterGenericArray */,
	{ NULL, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_back, SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_tFBBE2F63F86573B28BE7E3BE0BFF9C614F12BDB4_0_0_0 } /* System.Array/SorterObjectArray */,
	{ NULL, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_back, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_back, bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t1C848488DF65838689F7773D46F9E7E8C881B083_0_0_0 } /* System.Collections.Hashtable/bucket */,
	{ DelegatePInvokeWrapper_InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A, NULL, NULL, NULL, NULL, NULL, &InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A_0_0_0 } /* System.Console/InternalCancelHandler */,
	{ DelegatePInvokeWrapper_WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_t1D05BCFB512603DCF87A126FE9969F1D876B9B51_0_0_0 } /* System.Console/WindowsConsole/WindowsCancelHandler */,
	{ NULL, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_back, ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t5BE3CE05E8258CDB5404256E96AF7C22BC5DE768_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_back, DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_marshal_pinvoke_cleanup, NULL, NULL, &DTSubString_t0B5F9998AD0833CCE29248DE20EFEBFE9EBFB93D_0_0_0 } /* System.DTSubString */,
	{ NULL, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_back, DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_t9FCF0836569E074269DCA1D04061D8E3720D451E_0_0_0 } /* System.DateTimeRawInfo */,
	{ NULL, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_back, DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_tF71BA2895BFBF33241086E9BDF836567EBD2F6AB_0_0_0 } /* System.DateTimeResult */,
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 } /* System.Delegate */,
	{ NULL, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_back, StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_tD06959DD2B585E9BEB73C60AB5C110DE69F23A00_0_0_0 } /* System.Diagnostics.StackFrame */,
	{ NULL, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_back, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_0_0_0 } /* System.Enum */,
	{ NULL, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_back, EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_t35D8EE76FAC6638FD89A5338957F377BF893566C_0_0_0 } /* System.Enum/EnumResult */,
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 } /* System.Exception */,
	{ NULL, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_back, CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t1D4C55E2ECDDE4EB7B69C75D0E28AA0AF9952B3E_0_0_0 } /* System.Globalization.CalendarData */,
	{ NULL, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_back, CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_0_0_0 } /* System.Globalization.CultureData */,
	{ NULL, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_back, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_0_0_0 } /* System.Globalization.CultureInfo */,
	{ NULL, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_back, Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_marshal_pinvoke_cleanup, NULL, NULL, &Data_t25CAFAACB31D34B4A9385638281C56D4D250BA2F_0_0_0 } /* System.Globalization.CultureInfo/Data */,
	{ NULL, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_back, InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t34EE39DE4A481B875348BB9BC6751E2A109AD0D4_0_0_0 } /* System.Globalization.InternalCodePageDataItem */,
	{ NULL, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_back, InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t34BEF550D56496035752E8E0607127CD43378211_0_0_0 } /* System.Globalization.InternalEncodingDataItem */,
	{ NULL, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_back, RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_tC410DA2D1030267AF1E8F6AD7026990EE9A9F0C1_0_0_0 } /* System.Globalization.RegionInfo */,
	{ NULL, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_back, SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tD5C96B638D8C6D0C4C2F49F27387D51202D78FD9_0_0_0 } /* System.Globalization.SortKey */,
	{ NULL, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_back, FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_tE93C12450F24FECD414C8FC2B3F3EE606F807223_0_0_0 } /* System.Globalization.TimeSpanFormat/FormatLiterals */,
	{ NULL, TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke, TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_back, TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanRawInfo_t41C41424D2A6BC45542E49CB1843F08221F844FB_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanRawInfo */,
	{ NULL, TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke, TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_back, TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanResult_t7C77BD9AF32E298E8818A8C884A2428C92283963_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanResult */,
	{ NULL, TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke, TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_back, TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanToken_tAD6BBF1FE7922C2D3281576FD816F33901C87492_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanToken */,
	{ NULL, TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke, TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_back, TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanTokenizer_t7A2B1F99E6478C1B3D12EB1F7765D3C6E545B000_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanTokenizer */,
	{ NULL, DateMapping_t42528A0D8F22A69F8BE862712ADFC7B391F7CC7D_marshal_pinvoke, DateMapping_t42528A0D8F22A69F8BE862712ADFC7B391F7CC7D_marshal_pinvoke_back, DateMapping_t42528A0D8F22A69F8BE862712ADFC7B391F7CC7D_marshal_pinvoke_cleanup, NULL, NULL, &DateMapping_t42528A0D8F22A69F8BE862712ADFC7B391F7CC7D_0_0_0 } /* System.Globalization.UmAlQuraCalendar/DateMapping */,
	{ NULL, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_back, GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t8E78929A7A732656B7BAF6A5482FD037F81DB3F3_0_0_0 } /* System.Guid/GuidResult */,
	{ DelegatePInvokeWrapper_ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tC33791FF7613756CDEEC3ADFE91B2EE59A24FB48_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_t905F47C2C01F98FB87E2E19894AB9BAC6F02838C_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_back, InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_tAB007C739F339BE208F3C4796B53E9044ADF0A78_0_0_0 } /* System.InputRecord */,
	{ NULL, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_back, MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_0_0_0 } /* System.MarshalByRefObject */,
	{ NULL, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_back, MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t5D4F895C7FEF7A36A60AFD3C64078A86BAF681FD_0_0_0 } /* System.MonoAsyncCall */,
	{ NULL, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_back, MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_t9A65BA5324D14FDFEB7644EEE6E1BDF74B8A393D_0_0_0 } /* System.MonoTypeInfo */,
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 } /* System.MulticastDelegate */,
	{ NULL, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_back, NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_tBD2266C521F098915F124D7A62AFF8DB05918075_0_0_0 } /* System.Number/NumberBuffer */,
	{ NULL, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_back, FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_0_0_0 } /* System.ParameterizedStrings/FormatParam */,
	{ NULL, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_back, ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t2DD480A5C806C0920DC218523EF3673332A68023_0_0_0 } /* System.ParamsArray */,
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 } /* System.Reflection.Assembly */,
	{ NULL, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_back, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_0_0_0 } /* System.Reflection.AssemblyName */,
	{ NULL, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_back, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_back, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_back, LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_t7A455571119EA1514A1158BBB78890FF7AB6A469_0_0_0 } /* System.Reflection.Emit.LocalBuilder */,
	{ NULL, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_back, ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t112046BB7ECF503629487282AC37B55A6C2FEDC8_0_0_0 } /* System.Reflection.ExceptionHandlingClause */,
	{ NULL, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_back, LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_t9DBEDBE3F55EEEA102C20A450433E3ECB255858C_0_0_0 } /* System.Reflection.LocalVariableInfo */,
	{ NULL, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_back, MethodBody_t900C79A470F33FA739168B232092420240DC11F2_marshal_pinvoke_cleanup, NULL, NULL, &MethodBody_t900C79A470F33FA739168B232092420240DC11F2_0_0_0 } /* System.Reflection.MethodBody */,
	{ NULL, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_back, Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_marshal_pinvoke_cleanup, NULL, NULL, &Module_t882FB0C491B9CD194BE7CD1AC62FEFB31EEBE5D7_0_0_0 } /* System.Reflection.Module */,
	{ NULL, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_back, MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_t4DD903D7D2A55C62BF50165523ADC010115A4DAB_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_back, MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t846D423B6DB28262B9AC22C1D07EC38D23DF7D5D_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_back, MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_tC5EFF918A3DCFB6A5DBAFB9B7DE3DEB56C72885F_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_back, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_0_0_0 } /* System.Reflection.ParameterInfo */,
	{ NULL, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_back, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_back, ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_0_0_0 } /* System.Resources.ResourceLocator */,
	{ NULL, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_back, AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_0_0_0 } /* System.Runtime.CompilerServices.AsyncMethodBuilderCore */,
	{ NULL, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_back, Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_0_0_0 } /* System.Runtime.CompilerServices.Ephemeron */,
	{ NULL, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_back, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_0_0_0 } /* System.Runtime.CompilerServices.TaskAwaiter */,
	{ NULL, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_back, ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t17F028A89C1685A6BE96D7B59DD490E4CB859957_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ NULL, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_back, Context_tE86AB6B3D9759C8E715184808579EFE761683724_marshal_pinvoke_cleanup, NULL, NULL, &Context_tE86AB6B3D9759C8E715184808579EFE761683724_0_0_0 } /* System.Runtime.Remoting.Contexts.Context */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_tB042FB42C495873AAE7558740B190D857C74CD9F_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ NULL, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_back, AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_tCCDC69FF29D3DE32F7BD57870BBC329EFF8E58E2_0_0_0 } /* System.Runtime.Remoting.Messaging.AsyncResult */,
	{ NULL, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_back, Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t8A0F3818A710941785287CE8D7184C05480C2EA6_0_0_0 } /* System.Runtime.Remoting.Messaging.LogicalCallContext/Reader */,
	{ NULL, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_back, MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0846334ADE91F66FECE638BEF57256CFF6EEA234_0_0_0 } /* System.Runtime.Remoting.Messaging.MonoMethodMessage */,
	{ NULL, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_back, RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t4B0A745F7C99373132CC67FE86D13421411361EF_0_0_0 } /* System.Runtime.Remoting.Proxies.RealProxy */,
	{ NULL, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_back, TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t86DE1FBB00F5A5B8859BB8E8375ED2F5C42D8000_0_0_0 } /* System.Runtime.Remoting.Proxies.TransparentProxy */,
	{ NULL, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_back, SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_tA4CE7B0176B45BD820A7802C84479174F5EBE5EA_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ DelegatePInvokeWrapper_SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t89AF9E752DCE27CE604337BD1FFE644B37D5CB6A_0_0_0 } /* System.Runtime.Serialization.SerializationEventHandler */,
	{ NULL, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_back, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t6290788CA17D8028FC4BC98AE2EDD437396675DB_0_0_0 } /* System.Threading.CancellationCallbackCoreWorkArguments */,
	{ NULL, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_back, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_0_0_0 } /* System.Threading.CancellationToken */,
	{ NULL, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_back, CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_0_0_0 } /* System.Threading.CancellationTokenRegistration */,
	{ NULL, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_back, Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t5766DE258B6B590281150D8DB517B651F9F4F33B_0_0_0 } /* System.Threading.ExecutionContext/Reader */,
	{ NULL, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_back, ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_t739C861A327D724A4E59DE865463B32097395159_0_0_0 } /* System.Threading.ExecutionContextSwitcher */,
	{ DelegatePInvokeWrapper_InvocationEntryDelegate_t30A130DE7AE7AE681112D6036577446D1CC18F1B, NULL, NULL, NULL, NULL, NULL, &InvocationEntryDelegate_t30A130DE7AE7AE681112D6036577446D1CC18F1B_0_0_0 } /* System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate */,
	{ DelegatePInvokeWrapper_ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_back, WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_0_0_0 } /* System.Threading.WaitHandle */,
	{ NULL, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_back, DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_marshal_pinvoke_cleanup, NULL, NULL, &DYNAMIC_TIME_ZONE_INFORMATION_tE2A7A07ADC8726A5FC7954EA9CDE9168756C9B1F_0_0_0 } /* System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION */,
	{ NULL, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_back, TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_marshal_pinvoke_cleanup, NULL, NULL, &TIME_ZONE_INFORMATION_tE8C6F24D5D50D01E03E52B00DDF74849F3DE9811_0_0_0 } /* System.TimeZoneInfo/TIME_ZONE_INFORMATION */,
	{ NULL, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_back, TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_t9958178434A0688FD45EF028B1AE9EA665C3E116_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_back, UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_marshal_pinvoke_cleanup, NULL, NULL, &UnSafeCharBuffer_t99F0962CE65E71C4BA612D5434276C51AC33AF0C_0_0_0 } /* System.UnSafeCharBuffer */,
	{ NULL, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_back, ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_0_0_0 } /* System.ValueType */,
	{ NULL, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_back, VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_marshal_pinvoke_cleanup, NULL, NULL, &VersionResult_tA97F3FDF3CF3FF5D0E43768C08D1C4D4568E88CE_0_0_0 } /* System.Version/VersionResult */,
	{ NULL, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_back, __DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t6E7DE2A99E4F15F384EC29CC6CD5185F46818DD9_0_0_0 } /* System.__DTString */,
	{ NULL, AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke, AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_back, AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_marshal_pinvoke_cleanup, NULL, NULL, &AttributeEntry_t03E9BFE6BF6BE56EA2568359ACD774FE8C8661DD_0_0_0 } /* System.ComponentModel.AttributeCollection/AttributeEntry */,
	{ NULL, DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke, DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_back, DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_marshal_pinvoke_cleanup, NULL, NULL, &DefaultExtendedTypeDescriptor_t89890252F6A685D141ECBB0C2878C6E913883ECE_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor */,
	{ NULL, DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke, DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_back, DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_marshal_pinvoke_cleanup, NULL, NULL, &DefaultTypeDescriptor_t45C7CF272F02817B0F1C69470B4E786E746996F4_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor */,
	{ NULL, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_back, IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_tB02ABC485035B18A731F1B61FB27EE17F4B792AD_0_0_0 } /* System.IOAsyncResult */,
	{ NULL, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_back, IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t2B03604D19B81660C4C1C06590C76BC8630DDE99_0_0_0 } /* System.IOSelectorJob */,
	{ NULL, IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke, IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke_back, IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_marshal_pinvoke_cleanup, NULL, NULL, &IPv6AddressFormatter_t451290B1C6FD64B6C59F95D99EDB4A9CC703BA90_0_0_0 } /* System.Net.IPv6AddressFormatter */,
	{ NULL, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_back, LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t3F087D71A4D7A309FD5492CE33501FD4F4709D7B_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping */,
	{ NULL, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_back, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ DelegatePInvokeWrapper_LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778, NULL, NULL, NULL, NULL, NULL, &LogCallback_t73139DDD22E0DAFAB5F0E39D4D9B1522682C4778_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_t3862486677D10CD16ECDA703CFB75039A4B3AE00_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_back, AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_back, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ NULL, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_back, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_0_0_0 } /* UnityEngine.Coroutine */,
	{ NULL, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_back, CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t7F71E48F69794B87C5A7F3F27AD1F1517B2FBF1F_0_0_0 } /* UnityEngine.CullingGroup */,
	{ DelegatePInvokeWrapper_StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161, NULL, NULL, NULL, NULL, NULL, &StateChanged_t6B81A48F3E917979B3F56CE50FEEB8E4DE46F161_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t2FAF995B47D691BD7C5BBC17D533DD8B19BE9A90_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ DelegatePInvokeWrapper_UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4, NULL, NULL, NULL, NULL, NULL, &UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke, DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke_back, DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_marshal_pinvoke_cleanup, NULL, NULL, &DirectionalLight_t9A6F6DB3F62F43963D7FB0B0F9DC6AE3470577CE_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DirectionalLight */,
	{ NULL, DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke, DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke_back, DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_marshal_pinvoke_cleanup, NULL, NULL, &DiscLight_tE10937E856D764434DEE6FAC456955EECF6D16DF_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DiscLight */,
	{ NULL, PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke, PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke_back, PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_marshal_pinvoke_cleanup, NULL, NULL, &PointLight_t13AFF86FA0F9FF4CA9F816D78C5EFB8D6092803D_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.PointLight */,
	{ NULL, RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke, RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke_back, RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_marshal_pinvoke_cleanup, NULL, NULL, &RectangleLight_tA8F8FE31870726D3994C3D212AA46CDD65FC381F_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.RectangleLight */,
	{ NULL, SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke, SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke_back, SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_marshal_pinvoke_cleanup, NULL, NULL, &SpotLight_t3F4C3626D514DC9796C2D2B0A1CDAD767C57AB3C_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.SpotLight */,
	{ NULL, SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke, SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke_back, SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_marshal_pinvoke_cleanup, NULL, NULL, &SpriteRendererGroup_tABC3FAF0B21D50BE6B2EF8204E76BCED4478A537_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteRendererGroup */,
	{ NULL, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_back, FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_tB9D2DBB36BA1E86F2A7392AF112B455206E8E83B_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_back, Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, LightProbes_t90D0BADB8CC1158A3387FE116066F1F316FBE5C5_marshal_pinvoke, LightProbes_t90D0BADB8CC1158A3387FE116066F1F316FBE5C5_marshal_pinvoke_back, LightProbes_t90D0BADB8CC1158A3387FE116066F1F316FBE5C5_marshal_pinvoke_cleanup, NULL, NULL, &LightProbes_t90D0BADB8CC1158A3387FE116066F1F316FBE5C5_0_0_0 } /* UnityEngine.LightProbes */,
	{ NULL, PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke, PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke_back, PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem */,
	{ DelegatePInvokeWrapper_UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke, PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke_back, PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_t6E3849A3DDFCA51558543FA4314CB03C9A2AABBE_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, MeshContainer_t2A23DBC2102A36B5EEB2BE0C87E56D95F1FC4B38_marshal_pinvoke, MeshContainer_t2A23DBC2102A36B5EEB2BE0C87E56D95F1FC4B38_marshal_pinvoke_back, MeshContainer_t2A23DBC2102A36B5EEB2BE0C87E56D95F1FC4B38_marshal_pinvoke_cleanup, NULL, NULL, &MeshContainer_t2A23DBC2102A36B5EEB2BE0C87E56D95F1FC4B38_0_0_0 } /* UnityEngine.MeshSubsetCombineUtility/MeshContainer */,
	{ NULL, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup, NULL, NULL, &Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_0_0_0 } /* UnityEngine.Object */,
	{ NULL, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_back, PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ NULL, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_back, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke, BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke_back, BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_marshal_pinvoke_cleanup, NULL, NULL, &BatchRendererGroup_t26EB53BB0E5946B7615284C6701D82C64B77425F_0_0_0 } /* UnityEngine.Rendering.BatchRendererGroup */,
	{ DelegatePInvokeWrapper_OnPerformCulling_tBB83FA521CA4901C7E851518814C5EC4AD4F810B, NULL, NULL, NULL, NULL, NULL, &OnPerformCulling_tBB83FA521CA4901C7E851518814C5EC4AD4F810B_0_0_0 } /* UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling */,
	{ NULL, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_back, ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_t22744D420D4DEF7C924A01EB117C0FEC6B07D486_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_back, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke, MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke_back, MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_marshal_pinvoke_cleanup, NULL, NULL, &MovedFromAttributeData_t1B4341E8C679B6DEF83A6978D8B162DE7CDDB82F_0_0_0 } /* UnityEngine.Scripting.APIUpdating.MovedFromAttributeData */,
	{ NULL, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_back, TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_0_0_0 } /* UnityEngine.TrackedReference */,
	{ NULL, SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke, SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke_back, SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t73F6E7AB58AA1FB6285673B8A06D7281B8DEA1FE_0_0_0 } /* UnityEngine.U2D.SpriteBone */,
	{ NULL, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_back, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ NULL, TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke, TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_back, TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke, TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_back, TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ NULL, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_back, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshal_pinvoke_cleanup, NULL, NULL, &Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_0_0_0 } /* UnityEngine.Event */,
	{ DelegatePInvokeWrapper_WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_back, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_0_0_0 } /* UnityEngine.GUIContent */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_back, GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t671F175A201A19166385EE3392292A5F50070572_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_back, GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke, HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke_back, HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_back, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_back, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_back, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshal_pinvoke_cleanup, NULL, NULL, &Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_back, ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_tB009AA7F769B4A3E988DEF71F4C5A29AB6A38968_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ DelegatePInvokeWrapper_SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB, NULL, NULL, NULL, NULL, NULL, &SetCompressionCallback_t47FC913F725789E6603F485B639340F0F9ACEEBB_0_0_0 } /* Pathfinding.Ionic.Zip.SetCompressionCallback */,
	{ DelegatePInvokeWrapper_CompressFunc_t24BC9DA90C080834EF54BDDD9C258A985999DBF6, NULL, NULL, NULL, NULL, NULL, &CompressFunc_t24BC9DA90C080834EF54BDDD9C258A985999DBF6_0_0_0 } /* Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc */,
	{ NULL, NULL, NULL, NULL, NULL, &CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC::CLSID, &CRC32_tFF0A758546E2E3AAC1C1070B54BE797CDC1758CC_0_0_0 } /* Pathfinding.Ionic.Crc.CRC32 */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C::CLSID, &ZipEntry_t2BE20F723574F9CE6BE830F299AE6E430F85F27C_0_0_0 } /* Pathfinding.Ionic.Zip.ZipEntry */,
	{ NULL, NULL, NULL, NULL, NULL, &BadCrcException_t46822B11AE7535521BCADEEADDDB0784AC9AA14F::CLSID, &BadCrcException_t46822B11AE7535521BCADEEADDDB0784AC9AA14F_0_0_0 } /* Pathfinding.Ionic.Zip.BadCrcException */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513::CLSID, &ZipException_t9852FF702F5E1ED258E5E72E1FB8E1343953E513_0_0_0 } /* Pathfinding.Ionic.Zip.ZipException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadPasswordException_tA4CBA542E14033E5720FD702035ADD86B9C6A6F6::CLSID, &BadPasswordException_tA4CBA542E14033E5720FD702035ADD86B9C6A6F6_0_0_0 } /* Pathfinding.Ionic.Zip.BadPasswordException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadReadException_t1049D8FCC0C3763C69E3916DBFA4EA2600135F7A::CLSID, &BadReadException_t1049D8FCC0C3763C69E3916DBFA4EA2600135F7A_0_0_0 } /* Pathfinding.Ionic.Zip.BadReadException */,
	{ NULL, NULL, NULL, NULL, NULL, &BadStateException_t37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405::CLSID, &BadStateException_t37C32A1648FDB7D50BBA1BE9A8A39875BDE0C405_0_0_0 } /* Pathfinding.Ionic.Zip.BadStateException */,
	{ NULL, NULL, NULL, NULL, NULL, &ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E::CLSID, &ZipFile_tEC0563C983AE35B2CB1DC8D9CD9DCB4A077BFF7E_0_0_0 } /* Pathfinding.Ionic.Zip.ZipFile */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637::CLSID, &ZlibCodec_tD45F22AE4F4168629AF2ABC4816D14E7BBC06637_0_0_0 } /* Pathfinding.Ionic.Zlib.ZlibCodec */,
	{ NULL, NULL, NULL, NULL, NULL, &ZlibException_t26829E8B8777593A4F1A5F2A65F2C07EDF80F36E::CLSID, &ZlibException_t26829E8B8777593A4F1A5F2A65F2C07EDF80F36E_0_0_0 } /* Pathfinding.Ionic.Zlib.ZlibException */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_t8E0E05D0198D95B5412DC716F87D97020EF54926_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ NULL, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_back, EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_t03557E552852EC6B71876CD05C4098733702A219_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ NULL, FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke, FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke_back, FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_marshal_pinvoke_cleanup, NULL, NULL, &FaceInfo_t32155CB9E0D125155E829A3D23119FB323F382A8_0_0_0 } /* UnityEngine.TextCore.FaceInfo */,
	{ NULL, Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke, Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke_back, Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_marshal_pinvoke_cleanup, NULL, NULL, &Glyph_t64B599C17F15D84707C46FE272E98B347E1283B4_0_0_0 } /* UnityEngine.TextCore.Glyph */,
	{ NULL, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_back, RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_back, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_back, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke, Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_back, Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t0D3248037D186E6B8BB5CF2BD1EB021CF3E6DEE4_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_back, Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t68C2581CCF05E868297EBD3F3361274954845095_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_tAD7508D45DB6679B6394983579AD18D967CC2AD4_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_tC13D9767CFF00EAB26E9FCC4BDD505F0721A2B4D_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_tE99ABF9ABC3A380677949E8C05A3E477889B82BE_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t83483916473C9710AEDB316A65CBE62C58935C5F_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t751407A44270E02FAA43D0846A58EE6A8C4AE1CE_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_back, SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke, GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke_back, GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_marshal_pinvoke_cleanup, NULL, NULL, &GraphPoint_tFAAC3073A22EA93D2D36626FA0BDB82DA2F2DB2B_0_0_0 } /* Pathfinding.AstarDebugger/GraphPoint */,
	{ NULL, PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke, PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke_back, PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_marshal_pinvoke_cleanup, NULL, NULL, &PathTypeDebug_t54701EDE235C9999A01D572CE8882E22BC2C9585_0_0_0 } /* Pathfinding.AstarDebugger/PathTypeDebug */,
	{ NULL, AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke, AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke_back, AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_marshal_pinvoke_cleanup, NULL, NULL, &AstarWorkItem_tE74EA5687DF3E926715692B0D23A88C519D8921B_0_0_0 } /* Pathfinding.AstarWorkItem */,
	{ NULL, Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke, Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke_back, Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_marshal_pinvoke_cleanup, NULL, NULL, &Tuple_tBDFE63517329510442F119E386B3C26F5832D41C_0_0_0 } /* Pathfinding.BinaryHeap/Tuple */,
	{ NULL, Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke, Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke_back, Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_marshal_pinvoke_cleanup, NULL, NULL, &Connection_t33DB6C9EBA87CDE8956B691108AFD4164C732F7B_0_0_0 } /* Pathfinding.Connection */,
	{ NULL, FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke, FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke_back, FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_marshal_pinvoke_cleanup, NULL, NULL, &FunnelPortals_tE83B57B9D552F033977F8A68875F9EDA3B7C157B_0_0_0 } /* Pathfinding.Funnel/FunnelPortals */,
	{ NULL, PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke, PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke_back, PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_marshal_pinvoke_cleanup, NULL, NULL, &PathPart_tA482195EFDE9446FD99623E216F769BD41B073EA_0_0_0 } /* Pathfinding.Funnel/PathPart */,
	{ NULL, GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke, GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke_back, GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_marshal_pinvoke_cleanup, NULL, NULL, &GraphHitInfo_tE38F75BE2DF36C0878028346726E683C2ECFCA11_0_0_0 } /* Pathfinding.GraphHitInfo */,
	{ NULL, GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke, GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke_back, GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_marshal_pinvoke_cleanup, NULL, NULL, &GUOSingle_t0A7A7B7DA7F30236F264E0CD633C9873D31082E9_0_0_0 } /* Pathfinding.GraphUpdateProcessor/GUOSingle */,
	{ NULL, NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke, NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke_back, NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_marshal_pinvoke_cleanup, NULL, NULL, &NNInfo_tEBD66ECD0D5CA96F5D027C157C81EA07522C438E_0_0_0 } /* Pathfinding.NNInfo */,
	{ NULL, NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke, NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke_back, NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_marshal_pinvoke_cleanup, NULL, NULL, &NNInfoInternal_t2C8DCFA83FE19107A37ACFBB5BE6BF080A400B48_0_0_0 } /* Pathfinding.NNInfoInternal */,
	{ NULL, meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke, meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke_back, meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_marshal_pinvoke_cleanup, NULL, NULL, &meshStruct_t4613E7819CC367D8C31890745AC76039B412682B_0_0_0 } /* Pathfinding.ObjImporter/meshStruct */,
	{ DelegatePInvokeWrapper_OnScanStatus_t174820BB1856D7D80BC4E7EBA18B9A266076110D, NULL, NULL, NULL, NULL, NULL, &OnScanStatus_t174820BB1856D7D80BC4E7EBA18B9A266076110D_0_0_0 } /* Pathfinding.OnScanStatus */,
	{ NULL, GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke, GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke_back, GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_marshal_pinvoke_cleanup, NULL, NULL, &GraphUpdateLock_t68451049F7FCEAF3BD5C77804599805226C2685B_0_0_0 } /* Pathfinding.PathProcessor/GraphUpdateLock */,
	{ NULL, Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke, Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke_back, Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_marshal_pinvoke_cleanup, NULL, NULL, &Node_tA22C341460F1C08573E566871CD4CBFE33D9D603_0_0_0 } /* Pathfinding.PointKDTree/Node */,
	{ NULL, Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke, Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke_back, Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_marshal_pinvoke_cleanup, NULL, NULL, &Progress_t2B95C1FD82E3B40476619845CF9A4FC9F3DBECF5_0_0_0 } /* Pathfinding.Progress */,
	{ NULL, Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke, Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke_back, Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_marshal_pinvoke_cleanup, NULL, NULL, &Hasher_tD8DD91728B329635521292FA88ED97F2EF8CC6F5_0_0_0 } /* Pathfinding.Util.RetainedGizmos/Hasher */,
	{ NULL, MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke, MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke_back, MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_marshal_pinvoke_cleanup, NULL, NULL, &MeshWithHash_t0B699D1F3E5AE65FB5C310453E5D37B2EB4A9115_0_0_0 } /* Pathfinding.Util.RetainedGizmos/MeshWithHash */,
	{ NULL, ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke, ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke_back, ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t60F356714C7D61B6F660900D4017054A166402D2_0_0_0 } /* TMPro.ColorTween */,
	{ NULL, FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke, FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke_back, FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t30EDF8EAF9FCED8611482B6BED98A0360C0CD5DA_0_0_0 } /* TMPro.FloatTween */,
	{ NULL, FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke, FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke_back, FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationSettings_tC32D679F14894DDCE48E4C61ACC1D0FA1443E0A4_0_0_0 } /* TMPro.FontAssetCreationSettings */,
	{ NULL, MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke, MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke_back, MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_0_0_0 } /* TMPro.MaterialReference */,
	{ NULL, Frame_tDCBD17C1EAD7A9C8C39B66C8E7A3CEE5A01294B4_marshal_pinvoke, Frame_tDCBD17C1EAD7A9C8C39B66C8E7A3CEE5A01294B4_marshal_pinvoke_back, Frame_tDCBD17C1EAD7A9C8C39B66C8E7A3CEE5A01294B4_marshal_pinvoke_cleanup, NULL, NULL, &Frame_tDCBD17C1EAD7A9C8C39B66C8E7A3CEE5A01294B4_0_0_0 } /* TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame */,
	{ NULL, Meta_t58F0E46B3B60F24853EFF9ACA4427F395320698E_marshal_pinvoke, Meta_t58F0E46B3B60F24853EFF9ACA4427F395320698E_marshal_pinvoke_back, Meta_t58F0E46B3B60F24853EFF9ACA4427F395320698E_marshal_pinvoke_cleanup, NULL, NULL, &Meta_t58F0E46B3B60F24853EFF9ACA4427F395320698E_0_0_0 } /* TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Meta */,
	{ NULL, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke_back, TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_marshal_pinvoke_cleanup, NULL, NULL, &TMP_CharacterInfo_t15C146F0B08EE44A63EC777AC32151D061AFFAF1_0_0_0 } /* TMPro.TMP_CharacterInfo */,
	{ NULL, Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke, Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke_back, Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_marshal_pinvoke_cleanup, NULL, NULL, &Resources_tF3A587C467A42DF3D3936FE57902525DA1160B41_0_0_0 } /* TMPro.TMP_DefaultControls/Resources */,
	{ NULL, TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke, TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke_back, TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_marshal_pinvoke_cleanup, NULL, NULL, &TMP_FontWeightPair_t14BB1EA6F16060838C5465F6BBB20C92ED79AEE3_0_0_0 } /* TMPro.TMP_FontWeightPair */,
	{ DelegatePInvokeWrapper_OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t47FA5831345A245F5C6FD9C0E4F5CE43430C1863_0_0_0 } /* TMPro.TMP_InputField/OnValidateInput */,
	{ NULL, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke_back, TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_marshal_pinvoke_cleanup, NULL, NULL, &TMP_LinkInfo_t7F4B699290A975144DF7094667825BCD52594468_0_0_0 } /* TMPro.TMP_LinkInfo */,
	{ NULL, TMP_MaterialReference_t1D5B0573CDAE361726CB60E528AF8EF43E5E3B60_marshal_pinvoke, TMP_MaterialReference_t1D5B0573CDAE361726CB60E528AF8EF43E5E3B60_marshal_pinvoke_back, TMP_MaterialReference_t1D5B0573CDAE361726CB60E528AF8EF43E5E3B60_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MaterialReference_t1D5B0573CDAE361726CB60E528AF8EF43E5E3B60_0_0_0 } /* TMPro.TMP_MaterialReference */,
	{ NULL, TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke, TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke_back, TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_marshal_pinvoke_cleanup, NULL, NULL, &TMP_MeshInfo_t0140B4A33090360DC5CFB47CD8419369BBE3AD2E_0_0_0 } /* TMPro.TMP_MeshInfo */,
	{ NULL, SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshal_pinvoke, SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshal_pinvoke_back, SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshal_pinvoke_cleanup, NULL, NULL, &SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_0_0_0 } /* TMPro.TMP_Text/SpecialCharacter */,
	{ NULL, TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshal_pinvoke, TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshal_pinvoke_back, TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshal_pinvoke_cleanup, NULL, NULL, &TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_0_0_0 } /* TMPro.TMP_Text/TextBackingContainer */,
	{ NULL, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke_back, TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_marshal_pinvoke_cleanup, NULL, NULL, &TMP_WordInfo_t856E4994B49881E370B28E1D0C35EEDA56120D90_0_0_0 } /* TMPro.TMP_WordInfo */,
	{ NULL, WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke, WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke_back, WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_0_0_0 } /* TMPro.WordWrapState */,
	{ NULL, MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshal_pinvoke, MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshal_pinvoke_back, MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshal_pinvoke_cleanup, NULL, NULL, &MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_0_0_0 } /* UnityEngine.Timeline.MarkerList */,
	{ NULL, NotificationEntry_tC8EA7F3972A3BDFE6F010CB6D8982CC97CAD963A_marshal_pinvoke, NotificationEntry_tC8EA7F3972A3BDFE6F010CB6D8982CC97CAD963A_marshal_pinvoke_back, NotificationEntry_tC8EA7F3972A3BDFE6F010CB6D8982CC97CAD963A_marshal_pinvoke_cleanup, NULL, NULL, &NotificationEntry_tC8EA7F3972A3BDFE6F010CB6D8982CC97CAD963A_0_0_0 } /* UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry */,
	{ NULL, TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshal_pinvoke, TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshal_pinvoke_back, TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshal_pinvoke_cleanup, NULL, NULL, &TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_0_0_0 } /* UnityEngine.Timeline.TrackAsset/TransientBuildData */,
	{ NULL, TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke, TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_back, TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshal_pinvoke_cleanup, NULL, NULL, &TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_0_0_0 } /* UnityEngine.Tilemaps.TileAnimationData */,
	{ NULL, TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke, TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_back, TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshal_pinvoke_cleanup, NULL, NULL, &TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_0_0_0 } /* UnityEngine.Tilemaps.TileData */,
	{ NULL, AxisBase_tA20C8C584C38319A9A8C0FE49567F4805725CE3C_marshal_pinvoke, AxisBase_tA20C8C584C38319A9A8C0FE49567F4805725CE3C_marshal_pinvoke_back, AxisBase_tA20C8C584C38319A9A8C0FE49567F4805725CE3C_marshal_pinvoke_cleanup, NULL, NULL, &AxisBase_tA20C8C584C38319A9A8C0FE49567F4805725CE3C_0_0_0 } /* Cinemachine.AxisBase */,
	{ NULL, AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke, AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke_back, AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_marshal_pinvoke_cleanup, NULL, NULL, &AxisState_tF3A1DFDC83DE8E3EE38D0D44B05C3EFAF6FA952B_0_0_0 } /* Cinemachine.AxisState */,
	{ NULL, Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke, Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke_back, Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_marshal_pinvoke_cleanup, NULL, NULL, &Recentering_tC0B9A295A525E6CAB60ACF4E75AD40A59A56D12A_0_0_0 } /* Cinemachine.AxisState/Recentering */,
	{ NULL, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke_back, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshal_pinvoke_cleanup, NULL, NULL, &CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_0_0_0 } /* Cinemachine.CameraState */,
	{ NULL, Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke, Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke_back, Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_marshal_pinvoke_cleanup, NULL, NULL, &Instruction_t0375CFD483BB1444F3399C1BF3CCA3EE24F451DA_0_0_0 } /* Cinemachine.CinemachineBlendListCamera/Instruction */,
	{ NULL, CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke, CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke_back, CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_marshal_pinvoke_cleanup, NULL, NULL, &CustomBlend_t2799C4C29CDD4102E20D8F459593669C8B981BFB_0_0_0 } /* Cinemachine.CinemachineBlenderSettings/CustomBlend */,
	{ DelegatePInvokeWrapper_AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE, NULL, NULL, NULL, NULL, NULL, &AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_0_0_0 } /* Cinemachine.CinemachineCore/AxisInputDelegate */,
	{ NULL, EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke, EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke_back, EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_marshal_pinvoke_cleanup, NULL, NULL, &EnvelopeDefinition_t7C1D4ACDAD754B6A430786BEDA402AACE97CEA2E_0_0_0 } /* Cinemachine.CinemachineImpulseManager/EnvelopeDefinition */,
	{ NULL, CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke, CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke_back, CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_marshal_pinvoke_cleanup, NULL, NULL, &CinemachineInputAxisDriver_tDF04696A64A1F2B09200DAB59C49F8AD493A0E83_0_0_0 } /* Cinemachine.CinemachineInputAxisDriver */,
	{ NULL, Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke, Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke_back, Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_marshal_pinvoke_cleanup, NULL, NULL, &Instruction_t64861D5CA50D2ACD95F231CD8DA0C7DFD42098B3_0_0_0 } /* Cinemachine.CinemachineStateDrivenCamera/Instruction */,
	{ NULL, Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke, Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke_back, Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_marshal_pinvoke_cleanup, NULL, NULL, &Target_tD2DCFE37C47C7499DAD815CF9CB0E35612E0FA80_0_0_0 } /* Cinemachine.CinemachineTargetGroup/Target */,
	{ NULL, AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke, AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke_back, AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_marshal_pinvoke_cleanup, NULL, NULL, &AutoDolly_t7770948FD0563ACCB264844151EB366EC3C7F57F_0_0_0 } /* Cinemachine.CinemachineTrackedDolly/AutoDolly */,
	{ NULL, ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke, ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke_back, ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_marshal_pinvoke_cleanup, NULL, NULL, &ActionSettings_t377E5679242CD69C57DF2F99E3919F8B9B2065E2_0_0_0 } /* Cinemachine.CinemachineTriggerAction/ActionSettings */,
	{ NULL, TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke, TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke_back, TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_marshal_pinvoke_cleanup, NULL, NULL, &TransitionParams_t0D13B0B638EA59591102682563B16676247E7AE8_0_0_0 } /* Cinemachine.CinemachineVirtualCameraBase/TransitionParams */,
	{ NULL, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke_back, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshal_pinvoke_cleanup, NULL, NULL, &LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_0_0_0 } /* Cinemachine.LensSettings */,
	{ NULL, NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke, NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke_back, NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_marshal_pinvoke_cleanup, NULL, NULL, &NoiseParams_t81EA0C016CA17F39EE25A9A7EEC333974CCC5229_0_0_0 } /* Cinemachine.NoiseSettings/NoiseParams */,
	{ NULL, TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke, TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke_back, TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_marshal_pinvoke_cleanup, NULL, NULL, &TransformNoiseParams_t426C9F41209D45543A8DCACA9C6194ECE590C27D_0_0_0 } /* Cinemachine.NoiseSettings/TransformNoiseParams */,
	{ DelegatePInvokeWrapper_OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72, NULL, NULL, NULL, NULL, NULL, &OnGUIDelegate_tF9317001AB4E703C8439EFD7987552E90C476F72_0_0_0 } /* Cinemachine.Utility.CinemachineDebug/OnGUIDelegate */,
	{ NULL, ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_pinvoke, ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_pinvoke_back, ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_marshal_pinvoke_cleanup, NULL, NULL, &ClipInfo_t47E49AC627D3757530C740225AB205DB00D71288_0_0_0 } /* CinemachineMixer/ClipInfo */,
	NULL,
};
