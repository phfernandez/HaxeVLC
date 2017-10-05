// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_EGL_image_external
#define INCLUDED_lime_graphics_opengl_ext_OES_EGL_image_external

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a78482bd5914f663_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_EGL_image_external)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_EGL_image_external_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef OES_EGL_image_external_obj OBJ_;
		OES_EGL_image_external_obj();

	public:
		enum { _hx_ClassId = 0x11a01b18 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_EGL_image_external")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_EGL_image_external"); }

		hx::ObjectPtr< OES_EGL_image_external_obj > __new() {
			hx::ObjectPtr< OES_EGL_image_external_obj > __this = new OES_EGL_image_external_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< OES_EGL_image_external_obj > __alloc(hx::Ctx *_hx_ctx) {
			OES_EGL_image_external_obj *__this = (OES_EGL_image_external_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OES_EGL_image_external_obj), false, "lime.graphics.opengl.ext.OES_EGL_image_external"));
			*(void **)__this = OES_EGL_image_external_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a78482bd5914f663_6_new)
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::OES_EGL_image_external)(__this) )->REQUIRED_TEXTURE_IMAGE_UNITS_OES = (int)36200;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::OES_EGL_image_external)(__this) )->TEXTURE_BINDING_EXTERNAL_OES = (int)36199;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::OES_EGL_image_external)(__this) )->SAMPLER_EXTERNAL_OES = (int)36198;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::OES_EGL_image_external)(__this) )->TEXTURE_EXTERNAL_OES = (int)36197;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OES_EGL_image_external_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("OES_EGL_image_external","\xe6","\x6c","\x9f","\x93"); }

		int TEXTURE_EXTERNAL_OES;
		int SAMPLER_EXTERNAL_OES;
		int TEXTURE_BINDING_EXTERNAL_OES;
		int REQUIRED_TEXTURE_IMAGE_UNITS_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_EGL_image_external */ 
