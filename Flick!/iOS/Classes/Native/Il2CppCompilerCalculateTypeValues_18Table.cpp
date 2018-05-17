#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4286651560;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t3521020193;
// UnityEngine.TrailRenderer
struct TrailRenderer_t1820797054;
// Sound[]
struct SoundU5BU5D_t3647937991;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_t2743564464;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
#ifndef BASEVERTEXEFFECT_T2675891272_H
#define BASEVERTEXEFFECT_T2675891272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseVertexEffect
struct  BaseVertexEffect_t2675891272  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEVERTEXEFFECT_T2675891272_H
#ifndef U3CPLAYU3EC__ANONSTOREY0_T2108231134_H
#define U3CPLAYU3EC__ANONSTOREY0_T2108231134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager/<Play>c__AnonStorey0
struct  U3CPlayU3Ec__AnonStorey0_t2108231134  : public RuntimeObject
{
public:
	// System.String AudioManager/<Play>c__AnonStorey0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CPlayU3Ec__AnonStorey0_t2108231134, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPLAYU3EC__ANONSTOREY0_T2108231134_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef SOUND_T3007421746_H
#define SOUND_T3007421746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sound
struct  Sound_t3007421746  : public RuntimeObject
{
public:
	// System.String Sound::name
	String_t* ___name_0;
	// UnityEngine.AudioClip Sound::clip
	AudioClip_t3680889665 * ___clip_1;
	// System.Single Sound::volume
	float ___volume_2;
	// System.Boolean Sound::loop
	bool ___loop_3;
	// UnityEngine.AudioSource Sound::source
	AudioSource_t3935305588 * ___source_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Sound_t3007421746, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_clip_1() { return static_cast<int32_t>(offsetof(Sound_t3007421746, ___clip_1)); }
	inline AudioClip_t3680889665 * get_clip_1() const { return ___clip_1; }
	inline AudioClip_t3680889665 ** get_address_of_clip_1() { return &___clip_1; }
	inline void set_clip_1(AudioClip_t3680889665 * value)
	{
		___clip_1 = value;
		Il2CppCodeGenWriteBarrier((&___clip_1), value);
	}

	inline static int32_t get_offset_of_volume_2() { return static_cast<int32_t>(offsetof(Sound_t3007421746, ___volume_2)); }
	inline float get_volume_2() const { return ___volume_2; }
	inline float* get_address_of_volume_2() { return &___volume_2; }
	inline void set_volume_2(float value)
	{
		___volume_2 = value;
	}

	inline static int32_t get_offset_of_loop_3() { return static_cast<int32_t>(offsetof(Sound_t3007421746, ___loop_3)); }
	inline bool get_loop_3() const { return ___loop_3; }
	inline bool* get_address_of_loop_3() { return &___loop_3; }
	inline void set_loop_3(bool value)
	{
		___loop_3 = value;
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(Sound_t3007421746, ___source_4)); }
	inline AudioSource_t3935305588 * get_source_4() const { return ___source_4; }
	inline AudioSource_t3935305588 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(AudioSource_t3935305588 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUND_T3007421746_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef U24ARRAYTYPEU3D12_T2488454196_H
#define U24ARRAYTYPEU3D12_T2488454196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454196 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454196__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454196_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef VERTEXHELPER_T2453304189_H
#define VERTEXHELPER_T2453304189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t2453304189  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t899420910 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t4072576034 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t3628304265 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t3628304265 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t3628304265 * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t3628304265 * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t899420910 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t496136383 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t128053199 * ___m_Indices_8;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Positions_0)); }
	inline List_1_t899420910 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t899420910 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t899420910 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Positions_0), value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Colors_1)); }
	inline List_1_t4072576034 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t4072576034 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t4072576034 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Colors_1), value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv0S_2)); }
	inline List_1_t3628304265 * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t3628304265 ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t3628304265 * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv0S_2), value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv1S_3)); }
	inline List_1_t3628304265 * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t3628304265 ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t3628304265 * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv1S_3), value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv2S_4)); }
	inline List_1_t3628304265 * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t3628304265 ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t3628304265 * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv2S_4), value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv3S_5)); }
	inline List_1_t3628304265 * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t3628304265 ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t3628304265 * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv3S_5), value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Normals_6)); }
	inline List_1_t899420910 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t899420910 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t899420910 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normals_6), value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Tangents_7)); }
	inline List_1_t496136383 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t496136383 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t496136383 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tangents_7), value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Indices_8)); }
	inline List_1_t128053199 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t128053199 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t128053199 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Indices_8), value);
	}
};

struct VertexHelper_t2453304189_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t3722313464  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t3722313464  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t3722313464 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t3722313464  value)
	{
		___s_DefaultNormal_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXHELPER_T2453304189_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46
	U24ArrayTypeU3D12_t2488454196  ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0)); }
	inline U24ArrayTypeU3D12_t2488454196  get_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() const { return ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline U24ArrayTypeU3D12_t2488454196 * get_address_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return &___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline void set_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(U24ArrayTypeU3D12_t2488454196  value)
	{
		___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef RAYCASTALLCALLBACK_T1884415901_H
#define RAYCASTALLCALLBACK_T1884415901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct  RaycastAllCallback_t1884415901  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTALLCALLBACK_T1884415901_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef GETRAYINTERSECTIONALLNONALLOCCALLBACK_T2311174851_H
#define GETRAYINTERSECTIONALLNONALLOCCALLBACK_T2311174851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
struct  GetRayIntersectionAllNonAllocCallback_t2311174851  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYINTERSECTIONALLNONALLOCCALLBACK_T2311174851_H
#ifndef GETRAYINTERSECTIONALLCALLBACK_T3913627115_H
#define GETRAYINTERSECTIONALLCALLBACK_T3913627115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct  GetRayIntersectionAllCallback_t3913627115  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYINTERSECTIONALLCALLBACK_T3913627115_H
#ifndef GETRAYCASTNONALLOCCALLBACK_T3841783507_H
#define GETRAYCASTNONALLOCCALLBACK_T3841783507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
struct  GetRaycastNonAllocCallback_t3841783507  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYCASTNONALLOCCALLBACK_T3841783507_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef AICOLLIDETRIG_T4063317795_H
#define AICOLLIDETRIG_T4063317795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AIcollideTrig
struct  AIcollideTrig_t4063317795  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] AIcollideTrig::players
	GameObjectU5BU5D_t3328599146* ___players_2;
	// UnityEngine.GameObject[] AIcollideTrig::AILine
	GameObjectU5BU5D_t3328599146* ___AILine_3;
	// UnityEngine.GameObject AIcollideTrig::cam
	GameObject_t1113636619 * ___cam_4;
	// UnityEngine.GameObject AIcollideTrig::text
	GameObject_t1113636619 * ___text_5;
	// UnityEngine.Audio.AudioMixer AIcollideTrig::audioMixer
	AudioMixer_t3521020193 * ___audioMixer_6;
	// UnityEngine.GameObject AIcollideTrig::manager
	GameObject_t1113636619 * ___manager_7;

public:
	inline static int32_t get_offset_of_players_2() { return static_cast<int32_t>(offsetof(AIcollideTrig_t4063317795, ___players_2)); }
	inline GameObjectU5BU5D_t3328599146* get_players_2() const { return ___players_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_players_2() { return &___players_2; }
	inline void set_players_2(GameObjectU5BU5D_t3328599146* value)
	{
		___players_2 = value;
		Il2CppCodeGenWriteBarrier((&___players_2), value);
	}

	inline static int32_t get_offset_of_AILine_3() { return static_cast<int32_t>(offsetof(AIcollideTrig_t4063317795, ___AILine_3)); }
	inline GameObjectU5BU5D_t3328599146* get_AILine_3() const { return ___AILine_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_AILine_3() { return &___AILine_3; }
	inline void set_AILine_3(GameObjectU5BU5D_t3328599146* value)
	{
		___AILine_3 = value;
		Il2CppCodeGenWriteBarrier((&___AILine_3), value);
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(AIcollideTrig_t4063317795, ___cam_4)); }
	inline GameObject_t1113636619 * get_cam_4() const { return ___cam_4; }
	inline GameObject_t1113636619 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(GameObject_t1113636619 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((&___cam_4), value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(AIcollideTrig_t4063317795, ___text_5)); }
	inline GameObject_t1113636619 * get_text_5() const { return ___text_5; }
	inline GameObject_t1113636619 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(GameObject_t1113636619 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_audioMixer_6() { return static_cast<int32_t>(offsetof(AIcollideTrig_t4063317795, ___audioMixer_6)); }
	inline AudioMixer_t3521020193 * get_audioMixer_6() const { return ___audioMixer_6; }
	inline AudioMixer_t3521020193 ** get_address_of_audioMixer_6() { return &___audioMixer_6; }
	inline void set_audioMixer_6(AudioMixer_t3521020193 * value)
	{
		___audioMixer_6 = value;
		Il2CppCodeGenWriteBarrier((&___audioMixer_6), value);
	}

	inline static int32_t get_offset_of_manager_7() { return static_cast<int32_t>(offsetof(AIcollideTrig_t4063317795, ___manager_7)); }
	inline GameObject_t1113636619 * get_manager_7() const { return ___manager_7; }
	inline GameObject_t1113636619 ** get_address_of_manager_7() { return &___manager_7; }
	inline void set_manager_7(GameObject_t1113636619 * value)
	{
		___manager_7 = value;
		Il2CppCodeGenWriteBarrier((&___manager_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AICOLLIDETRIG_T4063317795_H
#ifndef AISHOOT_T1513550867_H
#define AISHOOT_T1513550867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AIShoot
struct  AIShoot_t1513550867  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean AIShoot::AITurn
	bool ___AITurn_2;
	// UnityEngine.GameObject AIShoot::Opponent
	GameObject_t1113636619 * ___Opponent_3;
	// UnityEngine.Vector3 AIShoot::startPos
	Vector3_t3722313464  ___startPos_4;
	// UnityEngine.Vector3 AIShoot::p
	Vector3_t3722313464  ___p_5;
	// System.Single AIShoot::force
	float ___force_6;
	// System.Boolean AIShoot::stateStress
	bool ___stateStress_7;
	// UnityEngine.TrailRenderer AIShoot::trail
	TrailRenderer_t1820797054 * ___trail_8;
	// System.Int32 AIShoot::Chance
	int32_t ___Chance_9;
	// UnityEngine.GameObject[] AIShoot::Line
	GameObjectU5BU5D_t3328599146* ___Line_10;
	// UnityEngine.GameObject AIShoot::original
	GameObject_t1113636619 * ___original_11;
	// System.Boolean AIShoot::spawn
	bool ___spawn_12;
	// UnityEngine.GameObject AIShoot::ball
	GameObject_t1113636619 * ___ball_13;
	// System.Boolean AIShoot::printed
	bool ___printed_14;

public:
	inline static int32_t get_offset_of_AITurn_2() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___AITurn_2)); }
	inline bool get_AITurn_2() const { return ___AITurn_2; }
	inline bool* get_address_of_AITurn_2() { return &___AITurn_2; }
	inline void set_AITurn_2(bool value)
	{
		___AITurn_2 = value;
	}

	inline static int32_t get_offset_of_Opponent_3() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___Opponent_3)); }
	inline GameObject_t1113636619 * get_Opponent_3() const { return ___Opponent_3; }
	inline GameObject_t1113636619 ** get_address_of_Opponent_3() { return &___Opponent_3; }
	inline void set_Opponent_3(GameObject_t1113636619 * value)
	{
		___Opponent_3 = value;
		Il2CppCodeGenWriteBarrier((&___Opponent_3), value);
	}

	inline static int32_t get_offset_of_startPos_4() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___startPos_4)); }
	inline Vector3_t3722313464  get_startPos_4() const { return ___startPos_4; }
	inline Vector3_t3722313464 * get_address_of_startPos_4() { return &___startPos_4; }
	inline void set_startPos_4(Vector3_t3722313464  value)
	{
		___startPos_4 = value;
	}

	inline static int32_t get_offset_of_p_5() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___p_5)); }
	inline Vector3_t3722313464  get_p_5() const { return ___p_5; }
	inline Vector3_t3722313464 * get_address_of_p_5() { return &___p_5; }
	inline void set_p_5(Vector3_t3722313464  value)
	{
		___p_5 = value;
	}

	inline static int32_t get_offset_of_force_6() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___force_6)); }
	inline float get_force_6() const { return ___force_6; }
	inline float* get_address_of_force_6() { return &___force_6; }
	inline void set_force_6(float value)
	{
		___force_6 = value;
	}

	inline static int32_t get_offset_of_stateStress_7() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___stateStress_7)); }
	inline bool get_stateStress_7() const { return ___stateStress_7; }
	inline bool* get_address_of_stateStress_7() { return &___stateStress_7; }
	inline void set_stateStress_7(bool value)
	{
		___stateStress_7 = value;
	}

	inline static int32_t get_offset_of_trail_8() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___trail_8)); }
	inline TrailRenderer_t1820797054 * get_trail_8() const { return ___trail_8; }
	inline TrailRenderer_t1820797054 ** get_address_of_trail_8() { return &___trail_8; }
	inline void set_trail_8(TrailRenderer_t1820797054 * value)
	{
		___trail_8 = value;
		Il2CppCodeGenWriteBarrier((&___trail_8), value);
	}

	inline static int32_t get_offset_of_Chance_9() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___Chance_9)); }
	inline int32_t get_Chance_9() const { return ___Chance_9; }
	inline int32_t* get_address_of_Chance_9() { return &___Chance_9; }
	inline void set_Chance_9(int32_t value)
	{
		___Chance_9 = value;
	}

	inline static int32_t get_offset_of_Line_10() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___Line_10)); }
	inline GameObjectU5BU5D_t3328599146* get_Line_10() const { return ___Line_10; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_Line_10() { return &___Line_10; }
	inline void set_Line_10(GameObjectU5BU5D_t3328599146* value)
	{
		___Line_10 = value;
		Il2CppCodeGenWriteBarrier((&___Line_10), value);
	}

	inline static int32_t get_offset_of_original_11() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___original_11)); }
	inline GameObject_t1113636619 * get_original_11() const { return ___original_11; }
	inline GameObject_t1113636619 ** get_address_of_original_11() { return &___original_11; }
	inline void set_original_11(GameObject_t1113636619 * value)
	{
		___original_11 = value;
		Il2CppCodeGenWriteBarrier((&___original_11), value);
	}

	inline static int32_t get_offset_of_spawn_12() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___spawn_12)); }
	inline bool get_spawn_12() const { return ___spawn_12; }
	inline bool* get_address_of_spawn_12() { return &___spawn_12; }
	inline void set_spawn_12(bool value)
	{
		___spawn_12 = value;
	}

	inline static int32_t get_offset_of_ball_13() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___ball_13)); }
	inline GameObject_t1113636619 * get_ball_13() const { return ___ball_13; }
	inline GameObject_t1113636619 ** get_address_of_ball_13() { return &___ball_13; }
	inline void set_ball_13(GameObject_t1113636619 * value)
	{
		___ball_13 = value;
		Il2CppCodeGenWriteBarrier((&___ball_13), value);
	}

	inline static int32_t get_offset_of_printed_14() { return static_cast<int32_t>(offsetof(AIShoot_t1513550867, ___printed_14)); }
	inline bool get_printed_14() const { return ___printed_14; }
	inline bool* get_address_of_printed_14() { return &___printed_14; }
	inline void set_printed_14(bool value)
	{
		___printed_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AISHOOT_T1513550867_H
#ifndef AUDIOMANAGER_T3267510698_H
#define AUDIOMANAGER_T3267510698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t3267510698  : public MonoBehaviour_t3962482529
{
public:
	// Sound[] AudioManager::sounds
	SoundU5BU5D_t3647937991* ___sounds_2;
	// UnityEngine.Audio.AudioMixerGroup AudioManager::volume
	AudioMixerGroup_t2743564464 * ___volume_3;

public:
	inline static int32_t get_offset_of_sounds_2() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___sounds_2)); }
	inline SoundU5BU5D_t3647937991* get_sounds_2() const { return ___sounds_2; }
	inline SoundU5BU5D_t3647937991** get_address_of_sounds_2() { return &___sounds_2; }
	inline void set_sounds_2(SoundU5BU5D_t3647937991* value)
	{
		___sounds_2 = value;
		Il2CppCodeGenWriteBarrier((&___sounds_2), value);
	}

	inline static int32_t get_offset_of_volume_3() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698, ___volume_3)); }
	inline AudioMixerGroup_t2743564464 * get_volume_3() const { return ___volume_3; }
	inline AudioMixerGroup_t2743564464 ** get_address_of_volume_3() { return &___volume_3; }
	inline void set_volume_3(AudioMixerGroup_t2743564464 * value)
	{
		___volume_3 = value;
		Il2CppCodeGenWriteBarrier((&___volume_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMANAGER_T3267510698_H
#ifndef MENU_T2559899777_H
#define MENU_T2559899777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu
struct  Menu_t2559899777  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENU_T2559899777_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef FADING1_T4021487275_H
#define FADING1_T4021487275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fading1
struct  Fading1_t4021487275  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Texture2D Fading1::fadeOutTexture
	Texture2D_t3840446185 * ___fadeOutTexture_2;
	// System.Single Fading1::fadeSpeed
	float ___fadeSpeed_3;
	// UnityEngine.Audio.AudioMixer Fading1::audioMixer
	AudioMixer_t3521020193 * ___audioMixer_4;
	// System.Int32 Fading1::drawDepth
	int32_t ___drawDepth_5;
	// System.Single Fading1::alpha
	float ___alpha_6;
	// System.Int32 Fading1::fadeDir
	int32_t ___fadeDir_7;

public:
	inline static int32_t get_offset_of_fadeOutTexture_2() { return static_cast<int32_t>(offsetof(Fading1_t4021487275, ___fadeOutTexture_2)); }
	inline Texture2D_t3840446185 * get_fadeOutTexture_2() const { return ___fadeOutTexture_2; }
	inline Texture2D_t3840446185 ** get_address_of_fadeOutTexture_2() { return &___fadeOutTexture_2; }
	inline void set_fadeOutTexture_2(Texture2D_t3840446185 * value)
	{
		___fadeOutTexture_2 = value;
		Il2CppCodeGenWriteBarrier((&___fadeOutTexture_2), value);
	}

	inline static int32_t get_offset_of_fadeSpeed_3() { return static_cast<int32_t>(offsetof(Fading1_t4021487275, ___fadeSpeed_3)); }
	inline float get_fadeSpeed_3() const { return ___fadeSpeed_3; }
	inline float* get_address_of_fadeSpeed_3() { return &___fadeSpeed_3; }
	inline void set_fadeSpeed_3(float value)
	{
		___fadeSpeed_3 = value;
	}

	inline static int32_t get_offset_of_audioMixer_4() { return static_cast<int32_t>(offsetof(Fading1_t4021487275, ___audioMixer_4)); }
	inline AudioMixer_t3521020193 * get_audioMixer_4() const { return ___audioMixer_4; }
	inline AudioMixer_t3521020193 ** get_address_of_audioMixer_4() { return &___audioMixer_4; }
	inline void set_audioMixer_4(AudioMixer_t3521020193 * value)
	{
		___audioMixer_4 = value;
		Il2CppCodeGenWriteBarrier((&___audioMixer_4), value);
	}

	inline static int32_t get_offset_of_drawDepth_5() { return static_cast<int32_t>(offsetof(Fading1_t4021487275, ___drawDepth_5)); }
	inline int32_t get_drawDepth_5() const { return ___drawDepth_5; }
	inline int32_t* get_address_of_drawDepth_5() { return &___drawDepth_5; }
	inline void set_drawDepth_5(int32_t value)
	{
		___drawDepth_5 = value;
	}

	inline static int32_t get_offset_of_alpha_6() { return static_cast<int32_t>(offsetof(Fading1_t4021487275, ___alpha_6)); }
	inline float get_alpha_6() const { return ___alpha_6; }
	inline float* get_address_of_alpha_6() { return &___alpha_6; }
	inline void set_alpha_6(float value)
	{
		___alpha_6 = value;
	}

	inline static int32_t get_offset_of_fadeDir_7() { return static_cast<int32_t>(offsetof(Fading1_t4021487275, ___fadeDir_7)); }
	inline int32_t get_fadeDir_7() const { return ___fadeDir_7; }
	inline int32_t* get_address_of_fadeDir_7() { return &___fadeDir_7; }
	inline void set_fadeDir_7(int32_t value)
	{
		___fadeDir_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FADING1_T4021487275_H
#ifndef SHOOT_T2202938192_H
#define SHOOT_T2202938192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shoot
struct  Shoot_t2202938192  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 Shoot::startPos
	Vector3_t3722313464  ___startPos_2;
	// System.Single Shoot::force
	float ___force_3;
	// System.Boolean Shoot::stateStress
	bool ___stateStress_4;
	// System.Boolean Shoot::turnDone
	bool ___turnDone_5;
	// UnityEngine.TrailRenderer Shoot::trail
	TrailRenderer_t1820797054 * ___trail_6;
	// UnityEngine.GameObject Shoot::ball
	GameObject_t1113636619 * ___ball_7;
	// System.Boolean Shoot::printed
	bool ___printed_8;
	// System.Boolean Shoot::spawn
	bool ___spawn_9;
	// UnityEngine.GameObject[] Shoot::Line
	GameObjectU5BU5D_t3328599146* ___Line_10;
	// System.Int32 Shoot::Chance
	int32_t ___Chance_11;
	// UnityEngine.GameObject Shoot::original
	GameObject_t1113636619 * ___original_12;

public:
	inline static int32_t get_offset_of_startPos_2() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___startPos_2)); }
	inline Vector3_t3722313464  get_startPos_2() const { return ___startPos_2; }
	inline Vector3_t3722313464 * get_address_of_startPos_2() { return &___startPos_2; }
	inline void set_startPos_2(Vector3_t3722313464  value)
	{
		___startPos_2 = value;
	}

	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___force_3)); }
	inline float get_force_3() const { return ___force_3; }
	inline float* get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(float value)
	{
		___force_3 = value;
	}

	inline static int32_t get_offset_of_stateStress_4() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___stateStress_4)); }
	inline bool get_stateStress_4() const { return ___stateStress_4; }
	inline bool* get_address_of_stateStress_4() { return &___stateStress_4; }
	inline void set_stateStress_4(bool value)
	{
		___stateStress_4 = value;
	}

	inline static int32_t get_offset_of_turnDone_5() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___turnDone_5)); }
	inline bool get_turnDone_5() const { return ___turnDone_5; }
	inline bool* get_address_of_turnDone_5() { return &___turnDone_5; }
	inline void set_turnDone_5(bool value)
	{
		___turnDone_5 = value;
	}

	inline static int32_t get_offset_of_trail_6() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___trail_6)); }
	inline TrailRenderer_t1820797054 * get_trail_6() const { return ___trail_6; }
	inline TrailRenderer_t1820797054 ** get_address_of_trail_6() { return &___trail_6; }
	inline void set_trail_6(TrailRenderer_t1820797054 * value)
	{
		___trail_6 = value;
		Il2CppCodeGenWriteBarrier((&___trail_6), value);
	}

	inline static int32_t get_offset_of_ball_7() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___ball_7)); }
	inline GameObject_t1113636619 * get_ball_7() const { return ___ball_7; }
	inline GameObject_t1113636619 ** get_address_of_ball_7() { return &___ball_7; }
	inline void set_ball_7(GameObject_t1113636619 * value)
	{
		___ball_7 = value;
		Il2CppCodeGenWriteBarrier((&___ball_7), value);
	}

	inline static int32_t get_offset_of_printed_8() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___printed_8)); }
	inline bool get_printed_8() const { return ___printed_8; }
	inline bool* get_address_of_printed_8() { return &___printed_8; }
	inline void set_printed_8(bool value)
	{
		___printed_8 = value;
	}

	inline static int32_t get_offset_of_spawn_9() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___spawn_9)); }
	inline bool get_spawn_9() const { return ___spawn_9; }
	inline bool* get_address_of_spawn_9() { return &___spawn_9; }
	inline void set_spawn_9(bool value)
	{
		___spawn_9 = value;
	}

	inline static int32_t get_offset_of_Line_10() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___Line_10)); }
	inline GameObjectU5BU5D_t3328599146* get_Line_10() const { return ___Line_10; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_Line_10() { return &___Line_10; }
	inline void set_Line_10(GameObjectU5BU5D_t3328599146* value)
	{
		___Line_10 = value;
		Il2CppCodeGenWriteBarrier((&___Line_10), value);
	}

	inline static int32_t get_offset_of_Chance_11() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___Chance_11)); }
	inline int32_t get_Chance_11() const { return ___Chance_11; }
	inline int32_t* get_address_of_Chance_11() { return &___Chance_11; }
	inline void set_Chance_11(int32_t value)
	{
		___Chance_11 = value;
	}

	inline static int32_t get_offset_of_original_12() { return static_cast<int32_t>(offsetof(Shoot_t2202938192, ___original_12)); }
	inline GameObject_t1113636619 * get_original_12() const { return ___original_12; }
	inline GameObject_t1113636619 ** get_address_of_original_12() { return &___original_12; }
	inline void set_original_12(GameObject_t1113636619 * value)
	{
		___original_12 = value;
		Il2CppCodeGenWriteBarrier((&___original_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOOT_T2202938192_H
#ifndef LOADTIMER_T3769296047_H
#define LOADTIMER_T3769296047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadTimer
struct  LoadTimer_t3769296047  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean LoadTimer::timerActive
	bool ___timerActive_2;
	// System.Single LoadTimer::time
	float ___time_3;
	// System.Single LoadTimer::wait
	float ___wait_4;
	// System.Boolean LoadTimer::done
	bool ___done_5;

public:
	inline static int32_t get_offset_of_timerActive_2() { return static_cast<int32_t>(offsetof(LoadTimer_t3769296047, ___timerActive_2)); }
	inline bool get_timerActive_2() const { return ___timerActive_2; }
	inline bool* get_address_of_timerActive_2() { return &___timerActive_2; }
	inline void set_timerActive_2(bool value)
	{
		___timerActive_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(LoadTimer_t3769296047, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_wait_4() { return static_cast<int32_t>(offsetof(LoadTimer_t3769296047, ___wait_4)); }
	inline float get_wait_4() const { return ___wait_4; }
	inline float* get_address_of_wait_4() { return &___wait_4; }
	inline void set_wait_4(float value)
	{
		___wait_4 = value;
	}

	inline static int32_t get_offset_of_done_5() { return static_cast<int32_t>(offsetof(LoadTimer_t3769296047, ___done_5)); }
	inline bool get_done_5() const { return ___done_5; }
	inline bool* get_address_of_done_5() { return &___done_5; }
	inline void set_done_5(bool value)
	{
		___done_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADTIMER_T3769296047_H
#ifndef SETVOLUME_T403678317_H
#define SETVOLUME_T403678317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetVolume
struct  SetVolume_t403678317  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Audio.AudioMixer SetVolume::audioMixer
	AudioMixer_t3521020193 * ___audioMixer_2;

public:
	inline static int32_t get_offset_of_audioMixer_2() { return static_cast<int32_t>(offsetof(SetVolume_t403678317, ___audioMixer_2)); }
	inline AudioMixer_t3521020193 * get_audioMixer_2() const { return ___audioMixer_2; }
	inline AudioMixer_t3521020193 ** get_address_of_audioMixer_2() { return &___audioMixer_2; }
	inline void set_audioMixer_2(AudioMixer_t3521020193 * value)
	{
		___audioMixer_2 = value;
		Il2CppCodeGenWriteBarrier((&___audioMixer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETVOLUME_T403678317_H
#ifndef MULTIPLETARGETCAM_T447492169_H
#define MULTIPLETARGETCAM_T447492169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultipleTargetCam
struct  MultipleTargetCam_t447492169  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> MultipleTargetCam::targets
	List_1_t777473367 * ___targets_2;
	// UnityEngine.Vector3 MultipleTargetCam::offset
	Vector3_t3722313464  ___offset_3;
	// UnityEngine.Vector3 MultipleTargetCam::velocity
	Vector3_t3722313464  ___velocity_4;
	// System.Single MultipleTargetCam::smoothTime
	float ___smoothTime_5;
	// System.Single MultipleTargetCam::minZoom
	float ___minZoom_6;
	// System.Single MultipleTargetCam::maxZoom
	float ___maxZoom_7;
	// System.Single MultipleTargetCam::zoomLim
	float ___zoomLim_8;
	// UnityEngine.Camera MultipleTargetCam::cam
	Camera_t4157153871 * ___cam_9;

public:
	inline static int32_t get_offset_of_targets_2() { return static_cast<int32_t>(offsetof(MultipleTargetCam_t447492169, ___targets_2)); }
	inline List_1_t777473367 * get_targets_2() const { return ___targets_2; }
	inline List_1_t777473367 ** get_address_of_targets_2() { return &___targets_2; }
	inline void set_targets_2(List_1_t777473367 * value)
	{
		___targets_2 = value;
		Il2CppCodeGenWriteBarrier((&___targets_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(MultipleTargetCam_t447492169, ___offset_3)); }
	inline Vector3_t3722313464  get_offset_3() const { return ___offset_3; }
	inline Vector3_t3722313464 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t3722313464  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_velocity_4() { return static_cast<int32_t>(offsetof(MultipleTargetCam_t447492169, ___velocity_4)); }
	inline Vector3_t3722313464  get_velocity_4() const { return ___velocity_4; }
	inline Vector3_t3722313464 * get_address_of_velocity_4() { return &___velocity_4; }
	inline void set_velocity_4(Vector3_t3722313464  value)
	{
		___velocity_4 = value;
	}

	inline static int32_t get_offset_of_smoothTime_5() { return static_cast<int32_t>(offsetof(MultipleTargetCam_t447492169, ___smoothTime_5)); }
	inline float get_smoothTime_5() const { return ___smoothTime_5; }
	inline float* get_address_of_smoothTime_5() { return &___smoothTime_5; }
	inline void set_smoothTime_5(float value)
	{
		___smoothTime_5 = value;
	}

	inline static int32_t get_offset_of_minZoom_6() { return static_cast<int32_t>(offsetof(MultipleTargetCam_t447492169, ___minZoom_6)); }
	inline float get_minZoom_6() const { return ___minZoom_6; }
	inline float* get_address_of_minZoom_6() { return &___minZoom_6; }
	inline void set_minZoom_6(float value)
	{
		___minZoom_6 = value;
	}

	inline static int32_t get_offset_of_maxZoom_7() { return static_cast<int32_t>(offsetof(MultipleTargetCam_t447492169, ___maxZoom_7)); }
	inline float get_maxZoom_7() const { return ___maxZoom_7; }
	inline float* get_address_of_maxZoom_7() { return &___maxZoom_7; }
	inline void set_maxZoom_7(float value)
	{
		___maxZoom_7 = value;
	}

	inline static int32_t get_offset_of_zoomLim_8() { return static_cast<int32_t>(offsetof(MultipleTargetCam_t447492169, ___zoomLim_8)); }
	inline float get_zoomLim_8() const { return ___zoomLim_8; }
	inline float* get_address_of_zoomLim_8() { return &___zoomLim_8; }
	inline void set_zoomLim_8(float value)
	{
		___zoomLim_8 = value;
	}

	inline static int32_t get_offset_of_cam_9() { return static_cast<int32_t>(offsetof(MultipleTargetCam_t447492169, ___cam_9)); }
	inline Camera_t4157153871 * get_cam_9() const { return ___cam_9; }
	inline Camera_t4157153871 ** get_address_of_cam_9() { return &___cam_9; }
	inline void set_cam_9(Camera_t4157153871 * value)
	{
		___cam_9 = value;
		Il2CppCodeGenWriteBarrier((&___cam_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIPLETARGETCAM_T447492169_H
#ifndef QUALITYSET_T2746323801_H
#define QUALITYSET_T2746323801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QualitySet
struct  QualitySet_t2746323801  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUALITYSET_T2746323801_H
#ifndef CONTINUEMUSIC_T2839108887_H
#define CONTINUEMUSIC_T2839108887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContinueMusic
struct  ContinueMusic_t2839108887  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTINUEMUSIC_T2839108887_H
#ifndef COLLIDETRIG_T292228298_H
#define COLLIDETRIG_T292228298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// collideTrig
struct  collideTrig_t292228298  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] collideTrig::players
	GameObjectU5BU5D_t3328599146* ___players_2;
	// UnityEngine.GameObject[] collideTrig::Line
	GameObjectU5BU5D_t3328599146* ___Line_3;
	// UnityEngine.GameObject collideTrig::cam
	GameObject_t1113636619 * ___cam_4;
	// UnityEngine.GameObject collideTrig::text
	GameObject_t1113636619 * ___text_5;
	// UnityEngine.Audio.AudioMixer collideTrig::audioMixer
	AudioMixer_t3521020193 * ___audioMixer_6;
	// UnityEngine.GameObject collideTrig::manager
	GameObject_t1113636619 * ___manager_7;

public:
	inline static int32_t get_offset_of_players_2() { return static_cast<int32_t>(offsetof(collideTrig_t292228298, ___players_2)); }
	inline GameObjectU5BU5D_t3328599146* get_players_2() const { return ___players_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_players_2() { return &___players_2; }
	inline void set_players_2(GameObjectU5BU5D_t3328599146* value)
	{
		___players_2 = value;
		Il2CppCodeGenWriteBarrier((&___players_2), value);
	}

	inline static int32_t get_offset_of_Line_3() { return static_cast<int32_t>(offsetof(collideTrig_t292228298, ___Line_3)); }
	inline GameObjectU5BU5D_t3328599146* get_Line_3() const { return ___Line_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_Line_3() { return &___Line_3; }
	inline void set_Line_3(GameObjectU5BU5D_t3328599146* value)
	{
		___Line_3 = value;
		Il2CppCodeGenWriteBarrier((&___Line_3), value);
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(collideTrig_t292228298, ___cam_4)); }
	inline GameObject_t1113636619 * get_cam_4() const { return ___cam_4; }
	inline GameObject_t1113636619 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(GameObject_t1113636619 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((&___cam_4), value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(collideTrig_t292228298, ___text_5)); }
	inline GameObject_t1113636619 * get_text_5() const { return ___text_5; }
	inline GameObject_t1113636619 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(GameObject_t1113636619 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((&___text_5), value);
	}

	inline static int32_t get_offset_of_audioMixer_6() { return static_cast<int32_t>(offsetof(collideTrig_t292228298, ___audioMixer_6)); }
	inline AudioMixer_t3521020193 * get_audioMixer_6() const { return ___audioMixer_6; }
	inline AudioMixer_t3521020193 ** get_address_of_audioMixer_6() { return &___audioMixer_6; }
	inline void set_audioMixer_6(AudioMixer_t3521020193 * value)
	{
		___audioMixer_6 = value;
		Il2CppCodeGenWriteBarrier((&___audioMixer_6), value);
	}

	inline static int32_t get_offset_of_manager_7() { return static_cast<int32_t>(offsetof(collideTrig_t292228298, ___manager_7)); }
	inline GameObject_t1113636619 * get_manager_7() const { return ___manager_7; }
	inline GameObject_t1113636619 ** get_address_of_manager_7() { return &___manager_7; }
	inline void set_manager_7(GameObject_t1113636619 * value)
	{
		___manager_7 = value;
		Il2CppCodeGenWriteBarrier((&___manager_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDETRIG_T292228298_H
#ifndef FADING_T4096094162_H
#define FADING_T4096094162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fading
struct  Fading_t4096094162  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Texture2D Fading::fadeOutTexture
	Texture2D_t3840446185 * ___fadeOutTexture_2;
	// System.Single Fading::fadeSpeed
	float ___fadeSpeed_3;
	// System.Int32 Fading::drawDepth
	int32_t ___drawDepth_4;
	// System.Single Fading::alpha
	float ___alpha_5;
	// System.Int32 Fading::fadeDir
	int32_t ___fadeDir_6;

public:
	inline static int32_t get_offset_of_fadeOutTexture_2() { return static_cast<int32_t>(offsetof(Fading_t4096094162, ___fadeOutTexture_2)); }
	inline Texture2D_t3840446185 * get_fadeOutTexture_2() const { return ___fadeOutTexture_2; }
	inline Texture2D_t3840446185 ** get_address_of_fadeOutTexture_2() { return &___fadeOutTexture_2; }
	inline void set_fadeOutTexture_2(Texture2D_t3840446185 * value)
	{
		___fadeOutTexture_2 = value;
		Il2CppCodeGenWriteBarrier((&___fadeOutTexture_2), value);
	}

	inline static int32_t get_offset_of_fadeSpeed_3() { return static_cast<int32_t>(offsetof(Fading_t4096094162, ___fadeSpeed_3)); }
	inline float get_fadeSpeed_3() const { return ___fadeSpeed_3; }
	inline float* get_address_of_fadeSpeed_3() { return &___fadeSpeed_3; }
	inline void set_fadeSpeed_3(float value)
	{
		___fadeSpeed_3 = value;
	}

	inline static int32_t get_offset_of_drawDepth_4() { return static_cast<int32_t>(offsetof(Fading_t4096094162, ___drawDepth_4)); }
	inline int32_t get_drawDepth_4() const { return ___drawDepth_4; }
	inline int32_t* get_address_of_drawDepth_4() { return &___drawDepth_4; }
	inline void set_drawDepth_4(int32_t value)
	{
		___drawDepth_4 = value;
	}

	inline static int32_t get_offset_of_alpha_5() { return static_cast<int32_t>(offsetof(Fading_t4096094162, ___alpha_5)); }
	inline float get_alpha_5() const { return ___alpha_5; }
	inline float* get_address_of_alpha_5() { return &___alpha_5; }
	inline void set_alpha_5(float value)
	{
		___alpha_5 = value;
	}

	inline static int32_t get_offset_of_fadeDir_6() { return static_cast<int32_t>(offsetof(Fading_t4096094162, ___fadeDir_6)); }
	inline int32_t get_fadeDir_6() const { return ___fadeDir_6; }
	inline int32_t* get_address_of_fadeDir_6() { return &___fadeDir_6; }
	inline void set_fadeDir_6(int32_t value)
	{
		___fadeDir_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FADING_T4096094162_H
#ifndef SPEED_T266659554_H
#define SPEED_T266659554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Speed
struct  Speed_t266659554  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Speed::speed
	float ___speed_2;
	// UnityEngine.Vector3 Speed::lastPosition
	Vector3_t3722313464  ___lastPosition_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Speed_t266659554, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_lastPosition_3() { return static_cast<int32_t>(offsetof(Speed_t266659554, ___lastPosition_3)); }
	inline Vector3_t3722313464  get_lastPosition_3() const { return ___lastPosition_3; }
	inline Vector3_t3722313464 * get_address_of_lastPosition_3() { return &___lastPosition_3; }
	inline void set_lastPosition_3(Vector3_t3722313464  value)
	{
		___lastPosition_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEED_T266659554_H
#ifndef FOLLOW_T1013499673_H
#define FOLLOW_T1013499673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// follow
struct  follow_t1013499673  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject follow::target
	GameObject_t1113636619 * ___target_2;
	// UnityEngine.Camera follow::cam
	Camera_t4157153871 * ___cam_3;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(follow_t1013499673, ___target_2)); }
	inline GameObject_t1113636619 * get_target_2() const { return ___target_2; }
	inline GameObject_t1113636619 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t1113636619 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(follow_t1013499673, ___cam_3)); }
	inline Camera_t4157153871 * get_cam_3() const { return ___cam_3; }
	inline Camera_t4157153871 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(Camera_t4157153871 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier((&___cam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOW_T1013499673_H
#ifndef BASEMESHEFFECT_T2440176439_H
#define BASEMESHEFFECT_T2440176439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t2440176439  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t1660335611 * ___m_Graphic_2;

public:
	inline static int32_t get_offset_of_m_Graphic_2() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t2440176439, ___m_Graphic_2)); }
	inline Graphic_t1660335611 * get_m_Graphic_2() const { return ___m_Graphic_2; }
	inline Graphic_t1660335611 ** get_address_of_m_Graphic_2() { return &___m_Graphic_2; }
	inline void set_m_Graphic_2(Graphic_t1660335611 * value)
	{
		___m_Graphic_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMESHEFFECT_T2440176439_H
#ifndef POSITIONASUV1_T3991086357_H
#define POSITIONASUV1_T3991086357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.PositionAsUV1
struct  PositionAsUV1_t3991086357  : public BaseMeshEffect_t2440176439
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASUV1_T3991086357_H
#ifndef SHADOW_T773074319_H
#define SHADOW_T773074319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t773074319  : public BaseMeshEffect_t2440176439
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t2555686324  ___m_EffectColor_3;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t2156229523  ___m_EffectDistance_4;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_5;

public:
	inline static int32_t get_offset_of_m_EffectColor_3() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_EffectColor_3)); }
	inline Color_t2555686324  get_m_EffectColor_3() const { return ___m_EffectColor_3; }
	inline Color_t2555686324 * get_address_of_m_EffectColor_3() { return &___m_EffectColor_3; }
	inline void set_m_EffectColor_3(Color_t2555686324  value)
	{
		___m_EffectColor_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_4() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_EffectDistance_4)); }
	inline Vector2_t2156229523  get_m_EffectDistance_4() const { return ___m_EffectDistance_4; }
	inline Vector2_t2156229523 * get_address_of_m_EffectDistance_4() { return &___m_EffectDistance_4; }
	inline void set_m_EffectDistance_4(Vector2_t2156229523  value)
	{
		___m_EffectDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_5() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_UseGraphicAlpha_5)); }
	inline bool get_m_UseGraphicAlpha_5() const { return ___m_UseGraphicAlpha_5; }
	inline bool* get_address_of_m_UseGraphicAlpha_5() { return &___m_UseGraphicAlpha_5; }
	inline void set_m_UseGraphicAlpha_5(bool value)
	{
		___m_UseGraphicAlpha_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOW_T773074319_H
#ifndef OUTLINE_T2536100125_H
#define OUTLINE_T2536100125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Outline
struct  Outline_t2536100125  : public Shadow_t773074319
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTLINE_T2536100125_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (RaycastAllCallback_t1884415901), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (GetRayIntersectionAllCallback_t3913627115), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (GetRayIntersectionAllNonAllocCallback_t2311174851), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (GetRaycastNonAllocCallback_t3841783507), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (VertexHelper_t2453304189), -1, sizeof(VertexHelper_t2453304189_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1804[11] = 
{
	VertexHelper_t2453304189::get_offset_of_m_Positions_0(),
	VertexHelper_t2453304189::get_offset_of_m_Colors_1(),
	VertexHelper_t2453304189::get_offset_of_m_Uv0S_2(),
	VertexHelper_t2453304189::get_offset_of_m_Uv1S_3(),
	VertexHelper_t2453304189::get_offset_of_m_Uv2S_4(),
	VertexHelper_t2453304189::get_offset_of_m_Uv3S_5(),
	VertexHelper_t2453304189::get_offset_of_m_Normals_6(),
	VertexHelper_t2453304189::get_offset_of_m_Tangents_7(),
	VertexHelper_t2453304189::get_offset_of_m_Indices_8(),
	VertexHelper_t2453304189_StaticFields::get_offset_of_s_DefaultTangent_9(),
	VertexHelper_t2453304189_StaticFields::get_offset_of_s_DefaultNormal_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (BaseVertexEffect_t2675891272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (BaseMeshEffect_t2440176439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1806[1] = 
{
	BaseMeshEffect_t2440176439::get_offset_of_m_Graphic_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (Outline_t2536100125), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (PositionAsUV1_t3991086357), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (Shadow_t773074319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1811[4] = 
{
	Shadow_t773074319::get_offset_of_m_EffectColor_3(),
	Shadow_t773074319::get_offset_of_m_EffectDistance_4(),
	Shadow_t773074319::get_offset_of_m_UseGraphicAlpha_5(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255365), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1812[1] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (U24ArrayTypeU3D12_t2488454196)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t2488454196 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (U3CModuleU3E_t692745546), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (Fading1_t4021487275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1815[6] = 
{
	Fading1_t4021487275::get_offset_of_fadeOutTexture_2(),
	Fading1_t4021487275::get_offset_of_fadeSpeed_3(),
	Fading1_t4021487275::get_offset_of_audioMixer_4(),
	Fading1_t4021487275::get_offset_of_drawDepth_5(),
	Fading1_t4021487275::get_offset_of_alpha_6(),
	Fading1_t4021487275::get_offset_of_fadeDir_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (AIcollideTrig_t4063317795), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[6] = 
{
	AIcollideTrig_t4063317795::get_offset_of_players_2(),
	AIcollideTrig_t4063317795::get_offset_of_AILine_3(),
	AIcollideTrig_t4063317795::get_offset_of_cam_4(),
	AIcollideTrig_t4063317795::get_offset_of_text_5(),
	AIcollideTrig_t4063317795::get_offset_of_audioMixer_6(),
	AIcollideTrig_t4063317795::get_offset_of_manager_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (AIShoot_t1513550867), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1817[13] = 
{
	AIShoot_t1513550867::get_offset_of_AITurn_2(),
	AIShoot_t1513550867::get_offset_of_Opponent_3(),
	AIShoot_t1513550867::get_offset_of_startPos_4(),
	AIShoot_t1513550867::get_offset_of_p_5(),
	AIShoot_t1513550867::get_offset_of_force_6(),
	AIShoot_t1513550867::get_offset_of_stateStress_7(),
	AIShoot_t1513550867::get_offset_of_trail_8(),
	AIShoot_t1513550867::get_offset_of_Chance_9(),
	AIShoot_t1513550867::get_offset_of_Line_10(),
	AIShoot_t1513550867::get_offset_of_original_11(),
	AIShoot_t1513550867::get_offset_of_spawn_12(),
	AIShoot_t1513550867::get_offset_of_ball_13(),
	AIShoot_t1513550867::get_offset_of_printed_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (AudioManager_t3267510698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[2] = 
{
	AudioManager_t3267510698::get_offset_of_sounds_2(),
	AudioManager_t3267510698::get_offset_of_volume_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (U3CPlayU3Ec__AnonStorey0_t2108231134), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1819[1] = 
{
	U3CPlayU3Ec__AnonStorey0_t2108231134::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (collideTrig_t292228298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1820[6] = 
{
	collideTrig_t292228298::get_offset_of_players_2(),
	collideTrig_t292228298::get_offset_of_Line_3(),
	collideTrig_t292228298::get_offset_of_cam_4(),
	collideTrig_t292228298::get_offset_of_text_5(),
	collideTrig_t292228298::get_offset_of_audioMixer_6(),
	collideTrig_t292228298::get_offset_of_manager_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (ContinueMusic_t2839108887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (Fading_t4096094162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[5] = 
{
	Fading_t4096094162::get_offset_of_fadeOutTexture_2(),
	Fading_t4096094162::get_offset_of_fadeSpeed_3(),
	Fading_t4096094162::get_offset_of_drawDepth_4(),
	Fading_t4096094162::get_offset_of_alpha_5(),
	Fading_t4096094162::get_offset_of_fadeDir_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (follow_t1013499673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1823[2] = 
{
	follow_t1013499673::get_offset_of_target_2(),
	follow_t1013499673::get_offset_of_cam_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (LoadTimer_t3769296047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1824[4] = 
{
	LoadTimer_t3769296047::get_offset_of_timerActive_2(),
	LoadTimer_t3769296047::get_offset_of_time_3(),
	LoadTimer_t3769296047::get_offset_of_wait_4(),
	LoadTimer_t3769296047::get_offset_of_done_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (Menu_t2559899777), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (MultipleTargetCam_t447492169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1826[8] = 
{
	MultipleTargetCam_t447492169::get_offset_of_targets_2(),
	MultipleTargetCam_t447492169::get_offset_of_offset_3(),
	MultipleTargetCam_t447492169::get_offset_of_velocity_4(),
	MultipleTargetCam_t447492169::get_offset_of_smoothTime_5(),
	MultipleTargetCam_t447492169::get_offset_of_minZoom_6(),
	MultipleTargetCam_t447492169::get_offset_of_maxZoom_7(),
	MultipleTargetCam_t447492169::get_offset_of_zoomLim_8(),
	MultipleTargetCam_t447492169::get_offset_of_cam_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (QualitySet_t2746323801), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (SetVolume_t403678317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1828[1] = 
{
	SetVolume_t403678317::get_offset_of_audioMixer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (Shoot_t2202938192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1829[11] = 
{
	Shoot_t2202938192::get_offset_of_startPos_2(),
	Shoot_t2202938192::get_offset_of_force_3(),
	Shoot_t2202938192::get_offset_of_stateStress_4(),
	Shoot_t2202938192::get_offset_of_turnDone_5(),
	Shoot_t2202938192::get_offset_of_trail_6(),
	Shoot_t2202938192::get_offset_of_ball_7(),
	Shoot_t2202938192::get_offset_of_printed_8(),
	Shoot_t2202938192::get_offset_of_spawn_9(),
	Shoot_t2202938192::get_offset_of_Line_10(),
	Shoot_t2202938192::get_offset_of_Chance_11(),
	Shoot_t2202938192::get_offset_of_original_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (Sound_t3007421746), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[5] = 
{
	Sound_t3007421746::get_offset_of_name_0(),
	Sound_t3007421746::get_offset_of_clip_1(),
	Sound_t3007421746::get_offset_of_volume_2(),
	Sound_t3007421746::get_offset_of_loop_3(),
	Sound_t3007421746::get_offset_of_source_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (Speed_t266659554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1831[2] = 
{
	Speed_t266659554::get_offset_of_speed_2(),
	Speed_t266659554::get_offset_of_lastPosition_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
