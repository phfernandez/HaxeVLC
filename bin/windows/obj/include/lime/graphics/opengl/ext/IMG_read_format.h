// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_read_format
#define INCLUDED_lime_graphics_opengl_ext_IMG_read_format

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4bfa4e4fce498d05_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,IMG_read_format)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES IMG_read_format_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef IMG_read_format_obj OBJ_;
		IMG_read_format_obj();

	public:
		enum { _hx_ClassId = 0x5f87aa32 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.IMG_read_format")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.IMG_read_format"); }

		hx::ObjectPtr< IMG_read_format_obj > __new() {
			hx::ObjectPtr< IMG_read_format_obj > __this = new IMG_read_format_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< IMG_read_format_obj > __alloc(hx::Ctx *_hx_ctx) {
			IMG_read_format_obj *__this = (IMG_read_format_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IMG_read_format_obj), false, "lime.graphics.opengl.ext.IMG_read_format"));
			*(void **)__this = IMG_read_format_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4bfa4e4fce498d05_6_new)
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::IMG_read_format)(__this) )->UNSIGNED_SHORT_4_4_4_4_REV_IMG = (int)33637;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::IMG_read_format)(__this) )->BGRA_IMG = (int)32993;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IMG_read_format_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("IMG_read_format","\xa4","\x2a","\xef","\xb9"); }

		int BGRA_IMG;
		int UNSIGNED_SHORT_4_4_4_4_REV_IMG;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_IMG_read_format */ 
