// Generated by Haxe 3.4.3
#ifndef INCLUDED_lime_app_Event
#define INCLUDED_lime_app_Event

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Event)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Event_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Event_obj OBJ_;
		Event_obj();

	public:
		enum { _hx_ClassId = 0x75705c0e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Event")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.app.Event"); }
		static hx::ObjectPtr< Event_obj > __new();
		static hx::ObjectPtr< Event_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Event_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Event","\xfa","\x37","\xf2","\x08"); }

		bool canceled;
		::cpp::VirtualArray _hx___listeners;
		::Array< bool > _hx___repeat;
		::Array< int > _hx___priorities;
		void add( ::Dynamic listener,hx::Null< bool >  once,hx::Null< int >  priority);
		::Dynamic add_dyn();

		void cancel();
		::Dynamic cancel_dyn();

		 ::Dynamic dispatch;
		bool has( ::Dynamic listener);
		::Dynamic has_dyn();

		void remove( ::Dynamic listener);
		::Dynamic remove_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Event */ 
