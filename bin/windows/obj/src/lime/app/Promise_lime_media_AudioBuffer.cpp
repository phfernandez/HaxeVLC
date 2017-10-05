// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_media_AudioBuffer
#include <lime/app/Promise_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc587d2dc6aca49f_23_new,"lime.app.Promise_lime_media_AudioBuffer","new",0xd173472d,"lime.app.Promise_lime_media_AudioBuffer.new","lime/app/Promise.hx",23,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_dc587d2dc6aca49f_28_complete,"lime.app.Promise_lime_media_AudioBuffer","complete",0x5205c2cc,"lime.app.Promise_lime_media_AudioBuffer.complete","lime/app/Promise.hx",28,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_dc587d2dc6aca49f_54_completeWith,"lime.app.Promise_lime_media_AudioBuffer","completeWith",0xa49ebaf2,"lime.app.Promise_lime_media_AudioBuffer.completeWith","lime/app/Promise.hx",54,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_dc587d2dc6aca49f_66_error,"lime.app.Promise_lime_media_AudioBuffer","error",0x642e4fd5,"lime.app.Promise_lime_media_AudioBuffer.error","lime/app/Promise.hx",66,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_dc587d2dc6aca49f_92_progress,"lime.app.Promise_lime_media_AudioBuffer","progress",0x5868b9c0,"lime.app.Promise_lime_media_AudioBuffer.progress","lime/app/Promise.hx",92,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_dc587d2dc6aca49f_122_get_isComplete,"lime.app.Promise_lime_media_AudioBuffer","get_isComplete",0x687fad5f,"lime.app.Promise_lime_media_AudioBuffer.get_isComplete","lime/app/Promise.hx",122,0x10ba4f0b)
HX_LOCAL_STACK_FRAME(_hx_pos_dc587d2dc6aca49f_129_get_isError,"lime.app.Promise_lime_media_AudioBuffer","get_isError",0x4f805b62,"lime.app.Promise_lime_media_AudioBuffer.get_isError","lime/app/Promise.hx",129,0x10ba4f0b)
namespace lime{
namespace app{

void Promise_lime_media_AudioBuffer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_dc587d2dc6aca49f_23_new)
HXDLIN(  23)		this->future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
            	}

Dynamic Promise_lime_media_AudioBuffer_obj::__CreateEmpty() { return new Promise_lime_media_AudioBuffer_obj; }

void *Promise_lime_media_AudioBuffer_obj::_hx_vtable = 0;

Dynamic Promise_lime_media_AudioBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Promise_lime_media_AudioBuffer_obj > _hx_result = new Promise_lime_media_AudioBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Promise_lime_media_AudioBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47c2125d;
}

 ::lime::app::Promise_lime_media_AudioBuffer Promise_lime_media_AudioBuffer_obj::complete( ::lime::media::AudioBuffer data){
            	HX_STACKFRAME(&_hx_pos_dc587d2dc6aca49f_28_complete)
HXLINE(  30)		if (!(this->future->isError)) {
HXLINE(  32)			this->future->isComplete = true;
HXLINE(  33)			this->future->value = data;
HXLINE(  35)			if (hx::IsNotNull( this->future->_hx___completeListeners )) {
HXLINE(  37)				{
HXLINE(  37)					int _g = (int)0;
HXDLIN(  37)					::Array< ::Dynamic> _g1 = this->future->_hx___completeListeners;
HXDLIN(  37)					while((_g < _g1->length)){
HXLINE(  37)						 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  37)						_g = (_g + (int)1);
HXLINE(  39)						listener(data);
            					}
            				}
HXLINE(  43)				this->future->_hx___completeListeners = null();
            			}
            		}
HXLINE(  49)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_media_AudioBuffer_obj,complete,return )

 ::lime::app::Promise_lime_media_AudioBuffer Promise_lime_media_AudioBuffer_obj::completeWith( ::lime::app::Future future){
            	HX_STACKFRAME(&_hx_pos_dc587d2dc6aca49f_54_completeWith)
HXLINE(  56)		future->onComplete(this->complete_dyn());
HXLINE(  57)		future->onError(this->error_dyn());
HXLINE(  58)		future->onProgress(this->progress_dyn());
HXLINE(  60)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_media_AudioBuffer_obj,completeWith,return )

 ::lime::app::Promise_lime_media_AudioBuffer Promise_lime_media_AudioBuffer_obj::error( ::Dynamic msg){
            	HX_STACKFRAME(&_hx_pos_dc587d2dc6aca49f_66_error)
HXLINE(  68)		if (!(this->future->isComplete)) {
HXLINE(  70)			this->future->isError = true;
HXLINE(  71)			this->future->error = msg;
HXLINE(  73)			if (hx::IsNotNull( this->future->_hx___errorListeners )) {
HXLINE(  75)				{
HXLINE(  75)					int _g = (int)0;
HXDLIN(  75)					::Array< ::Dynamic> _g1 = this->future->_hx___errorListeners;
HXDLIN(  75)					while((_g < _g1->length)){
HXLINE(  75)						 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  75)						_g = (_g + (int)1);
HXLINE(  77)						listener(msg);
            					}
            				}
HXLINE(  81)				this->future->_hx___errorListeners = null();
            			}
            		}
HXLINE(  87)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_media_AudioBuffer_obj,error,return )

 ::lime::app::Promise_lime_media_AudioBuffer Promise_lime_media_AudioBuffer_obj::progress(int progress,int total){
            	HX_STACKFRAME(&_hx_pos_dc587d2dc6aca49f_92_progress)
HXLINE(  94)		bool _hx_tmp;
HXDLIN(  94)		if (!(this->future->isError)) {
HXLINE(  94)			_hx_tmp = !(this->future->isComplete);
            		}
            		else {
HXLINE(  94)			_hx_tmp = false;
            		}
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  96)			if (hx::IsNotNull( this->future->_hx___progressListeners )) {
HXLINE(  98)				int _g = (int)0;
HXDLIN(  98)				::Array< ::Dynamic> _g1 = this->future->_hx___progressListeners;
HXDLIN(  98)				while((_g < _g1->length)){
HXLINE(  98)					 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  98)					_g = (_g + (int)1);
HXLINE( 100)					listener(progress,total);
            				}
            			}
            		}
HXLINE( 108)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Promise_lime_media_AudioBuffer_obj,progress,return )

bool Promise_lime_media_AudioBuffer_obj::get_isComplete(){
            	HX_STACKFRAME(&_hx_pos_dc587d2dc6aca49f_122_get_isComplete)
HXDLIN( 122)		return this->future->isComplete;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_lime_media_AudioBuffer_obj,get_isComplete,return )

bool Promise_lime_media_AudioBuffer_obj::get_isError(){
            	HX_STACKFRAME(&_hx_pos_dc587d2dc6aca49f_129_get_isError)
HXDLIN( 129)		return this->future->isError;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_lime_media_AudioBuffer_obj,get_isError,return )


hx::ObjectPtr< Promise_lime_media_AudioBuffer_obj > Promise_lime_media_AudioBuffer_obj::__new() {
	hx::ObjectPtr< Promise_lime_media_AudioBuffer_obj > __this = new Promise_lime_media_AudioBuffer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Promise_lime_media_AudioBuffer_obj > Promise_lime_media_AudioBuffer_obj::__alloc(hx::Ctx *_hx_ctx) {
	Promise_lime_media_AudioBuffer_obj *__this = (Promise_lime_media_AudioBuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Promise_lime_media_AudioBuffer_obj), true, "lime.app.Promise_lime_media_AudioBuffer"));
	*(void **)__this = Promise_lime_media_AudioBuffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Promise_lime_media_AudioBuffer_obj::Promise_lime_media_AudioBuffer_obj()
{
}

void Promise_lime_media_AudioBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise_lime_media_AudioBuffer);
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_END_CLASS();
}

void Promise_lime_media_AudioBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
}

hx::Val Promise_lime_media_AudioBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return hx::Val( error_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { return hx::Val( future ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isError() : isError ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete_dyn() ); }
		if (HX_FIELD_EQ(inName,"progress") ) { return hx::Val( progress_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isComplete() : isComplete ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isError") ) { return hx::Val( get_isError_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"completeWith") ) { return hx::Val( completeWith_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isComplete") ) { return hx::Val( get_isComplete_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Promise_lime_media_AudioBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { future=inValue.Cast<  ::lime::app::Future >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_lime_media_AudioBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("future","\x43","\x98","\x4e","\x73"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Promise_lime_media_AudioBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Future*/ ,(int)offsetof(Promise_lime_media_AudioBuffer_obj,future),HX_HCSTRING("future","\x43","\x98","\x4e","\x73")},
	{hx::fsBool,(int)offsetof(Promise_lime_media_AudioBuffer_obj,isComplete),HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa")},
	{hx::fsBool,(int)offsetof(Promise_lime_media_AudioBuffer_obj,isError),HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Promise_lime_media_AudioBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String Promise_lime_media_AudioBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("future","\x43","\x98","\x4e","\x73"),
	HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"),
	HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("completeWith","\x5f","\xf3","\xba","\xc2"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("get_isComplete","\x0c","\x9b","\x6c","\x70"),
	HX_HCSTRING("get_isError","\x95","\xcf","\xa9","\x95"),
	::String(null()) };

static void Promise_lime_media_AudioBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_lime_media_AudioBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Promise_lime_media_AudioBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_lime_media_AudioBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_lime_media_AudioBuffer_obj::__mClass;

void Promise_lime_media_AudioBuffer_obj::__register()
{
	hx::Object *dummy = new Promise_lime_media_AudioBuffer_obj;
	Promise_lime_media_AudioBuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Promise_lime_media_AudioBuffer","\xbb","\x2c","\xc3","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Promise_lime_media_AudioBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Promise_lime_media_AudioBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_lime_media_AudioBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Promise_lime_media_AudioBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promise_lime_media_AudioBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promise_lime_media_AudioBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
