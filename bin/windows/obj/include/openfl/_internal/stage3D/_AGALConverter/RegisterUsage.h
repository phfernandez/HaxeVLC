// Generated by Haxe 3.4.3
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#define INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterUsage)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class RegisterUsage_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef RegisterUsage_obj OBJ_;

	public:
		RegisterUsage_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.stage3D._AGALConverter.RegisterUsage","\x8f","\x93","\xf5","\x03"); }
		::String __ToString() const { return HX_HCSTRING("RegisterUsage.","\xd0","\x3a","\xd9","\xaf") + _hx_tag; }

		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage MATRIX_4_4;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage MATRIX_4_4_dyn() { return MATRIX_4_4; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage SAMPLER_2D;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage SAMPLER_2D_dyn() { return SAMPLER_2D; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage SAMPLER_2D_ALPHA;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage SAMPLER_2D_ALPHA_dyn() { return SAMPLER_2D_ALPHA; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage SAMPLER_CUBE;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage SAMPLER_CUBE_dyn() { return SAMPLER_CUBE; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage UNUSED;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage UNUSED_dyn() { return UNUSED; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage VECTOR_4;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage VECTOR_4_dyn() { return VECTOR_4; }
		static ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage VECTOR_4_ARRAY;
		static inline ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage VECTOR_4_ARRAY_dyn() { return VECTOR_4_ARRAY; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage */ 
