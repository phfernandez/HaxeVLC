// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a59bd2e504ea207a_1166_new,"lime._backend.native._NativeApplication.WindowEventInfo","new",0xd11afd2d,"lime._backend.native._NativeApplication.WindowEventInfo.new","lime/_backend/native/NativeApplication.hx",1166,0xb13849fd)
HX_LOCAL_STACK_FRAME(_hx_pos_a59bd2e504ea207a_1180_clone,"lime._backend.native._NativeApplication.WindowEventInfo","clone",0x3ae8cd6a,"lime._backend.native._NativeApplication.WindowEventInfo.clone","lime/_backend/native/NativeApplication.hx",1180,0xb13849fd)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

void WindowEventInfo_obj::__construct( ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int windowID = __o_windowID.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_a59bd2e504ea207a_1166_new)
HXLINE(1168)		this->type = type;
HXLINE(1169)		this->windowID = windowID;
HXLINE(1170)		this->width = width;
HXLINE(1171)		this->height = height;
HXLINE(1172)		this->x = x;
HXLINE(1173)		this->y = y;
            	}

Dynamic WindowEventInfo_obj::__CreateEmpty() { return new WindowEventInfo_obj; }

void *WindowEventInfo_obj::_hx_vtable = 0;

Dynamic WindowEventInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WindowEventInfo_obj > _hx_result = new WindowEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool WindowEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15251bed;
}

 ::lime::_backend::native::_NativeApplication::WindowEventInfo WindowEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a59bd2e504ea207a_1180_clone)
HXDLIN(1180)		return  ::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__alloc( HX_CTX ,this->type,this->windowID,this->width,this->height,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WindowEventInfo_obj,clone,return )


WindowEventInfo_obj::WindowEventInfo_obj()
{
}

hx::Val WindowEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { return hx::Val( windowID ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val WindowEventInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo WindowEventInfo_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,windowID),HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(WindowEventInfo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *WindowEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String WindowEventInfo_obj_sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void WindowEventInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindowEventInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class WindowEventInfo_obj::__mClass;

void WindowEventInfo_obj::__register()
{
	hx::Object *dummy = new WindowEventInfo_obj;
	WindowEventInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.WindowEventInfo","\xbb","\xe2","\xd7","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WindowEventInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WindowEventInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WindowEventInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowEventInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
