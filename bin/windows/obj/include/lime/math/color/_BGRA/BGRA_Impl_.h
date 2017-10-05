// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_math_color__BGRA_BGRA_Impl_
#define INCLUDED_lime_math_color__BGRA_BGRA_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,math,color,_BGRA,BGRA_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace math{
namespace color{
namespace _BGRA{


class HXCPP_CLASS_ATTRIBUTES BGRA_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BGRA_Impl__obj OBJ_;
		BGRA_Impl__obj();

	public:
		enum { _hx_ClassId = 0x01fd9309 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math.color._BGRA.BGRA_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.math.color._BGRA.BGRA_Impl_"); }

		hx::ObjectPtr< BGRA_Impl__obj > __new() {
			hx::ObjectPtr< BGRA_Impl__obj > __this = new BGRA_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BGRA_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			BGRA_Impl__obj *__this = (BGRA_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BGRA_Impl__obj), false, "lime.math.color._BGRA.BGRA_Impl_"));
			*(void **)__this = BGRA_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BGRA_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BGRA_Impl_","\x54","\xf8","\xcb","\x41"); }

		static int a16;
		static Float unmult;
		static int _new(hx::Null< int >  bgra);
		static ::Dynamic _new_dyn();

		static int create(int b,int g,int r,int a);
		static ::Dynamic create_dyn();

		static void multiplyAlpha(int this1);
		static ::Dynamic multiplyAlpha_dyn();

		static void readUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  format,hx::Null< bool >  premultiplied);
		static ::Dynamic readUInt8_dyn();

		static void set(int this1,int b,int g,int r,int a);
		static ::Dynamic set_dyn();

		static void unmultiplyAlpha(int this1);
		static ::Dynamic unmultiplyAlpha_dyn();

		static void writeUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  format,hx::Null< bool >  premultiplied);
		static ::Dynamic writeUInt8_dyn();

		static int _hx___fromARGB(int argb);
		static ::Dynamic _hx___fromARGB_dyn();

		static int _hx___fromRGBA(int rgba);
		static ::Dynamic _hx___fromRGBA_dyn();

		static int get_a(int this1);
		static ::Dynamic get_a_dyn();

		static int set_a(int this1,int value);
		static ::Dynamic set_a_dyn();

		static int get_b(int this1);
		static ::Dynamic get_b_dyn();

		static int set_b(int this1,int value);
		static ::Dynamic set_b_dyn();

		static int get_g(int this1);
		static ::Dynamic get_g_dyn();

		static int set_g(int this1,int value);
		static ::Dynamic set_g_dyn();

		static int get_r(int this1);
		static ::Dynamic get_r_dyn();

		static int set_r(int this1,int value);
		static ::Dynamic set_r_dyn();

};

} // end namespace lime
} // end namespace math
} // end namespace color
} // end namespace _BGRA

#endif /* INCLUDED_lime_math_color__BGRA_BGRA_Impl_ */ 
