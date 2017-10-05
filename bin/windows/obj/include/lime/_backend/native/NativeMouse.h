// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime__backend_native_NativeMouse
#define INCLUDED_lime__backend_native_NativeMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeMouse)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeMouse_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeMouse_obj OBJ_;
		NativeMouse_obj();

	public:
		enum { _hx_ClassId = 0x24a3dda9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._backend.native.NativeMouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._backend.native.NativeMouse"); }

		hx::ObjectPtr< NativeMouse_obj > __new() {
			hx::ObjectPtr< NativeMouse_obj > __this = new NativeMouse_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< NativeMouse_obj > __alloc(hx::Ctx *_hx_ctx) {
			NativeMouse_obj *__this = (NativeMouse_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NativeMouse_obj), false, "lime._backend.native.NativeMouse"));
			*(void **)__this = NativeMouse_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeMouse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NativeMouse","\xee","\x30","\x93","\x57"); }

		static  ::lime::ui::MouseCursor _hx___cursor;
		static bool _hx___hidden;
		static bool _hx___lock;
		static void hide();
		static ::Dynamic hide_dyn();

		static void show();
		static ::Dynamic show_dyn();

		static void warp(int x,int y, ::lime::ui::Window window);
		static ::Dynamic warp_dyn();

		static  ::lime::ui::MouseCursor get_cursor();
		static ::Dynamic get_cursor_dyn();

		static  ::lime::ui::MouseCursor set_cursor( ::lime::ui::MouseCursor value);
		static ::Dynamic set_cursor_dyn();

		static bool get_lock();
		static ::Dynamic get_lock_dyn();

		static bool set_lock(bool value);
		static ::Dynamic set_lock_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeMouse */ 
