// Generated by Haxe 3.4.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0f2950a35915406f_28_decodeBytes,"lime.graphics.format.JPEG","decodeBytes",0x9c51a384,"lime.graphics.format.JPEG.decodeBytes","lime/graphics/format/JPEG.hx",28,0x0d45bec8)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2950a35915406f_53_decodeFile,"lime.graphics.format.JPEG","decodeFile",0xcb0bd983,"lime.graphics.format.JPEG.decodeFile","lime/graphics/format/JPEG.hx",53,0x0d45bec8)
HX_LOCAL_STACK_FRAME(_hx_pos_0f2950a35915406f_78_encode,"lime.graphics.format.JPEG","encode",0xce6c344f,"lime.graphics.format.JPEG.encode","lime/graphics/format/JPEG.hx",78,0x0d45bec8)
namespace lime{
namespace graphics{
namespace format{

void JPEG_obj::__construct() { }

Dynamic JPEG_obj::__CreateEmpty() { return new JPEG_obj; }

void *JPEG_obj::_hx_vtable = 0;

Dynamic JPEG_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JPEG_obj > _hx_result = new JPEG_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JPEG_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x754ec97f;
}

 ::lime::graphics::Image JPEG_obj::decodeBytes( ::haxe::io::Bytes bytes,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_0f2950a35915406f_28_decodeBytes)
HXLINE(  33)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  33)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  33)		if (hx::IsNotNull( buffer )) {
HXLINE(  33)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN(  33)			int in_byteOffset = (int)0;
HXDLIN(  33)			if ((in_byteOffset < (int)0)) {
HXLINE(  33)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  33)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE(  33)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  33)			int bufferByteLength = buffer->length;
HXDLIN(  33)			int elementSize = _this->bytesPerElement;
HXDLIN(  33)			int newByteLength = bufferByteLength;
HXDLIN(  33)			{
HXLINE(  33)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  33)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  33)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  33)				if ((newByteLength < (int)0)) {
HXLINE(  33)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  33)			_this->buffer = buffer;
HXDLIN(  33)			_this->byteOffset = in_byteOffset;
HXDLIN(  33)			_this->byteLength = newByteLength;
HXDLIN(  33)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN(  33)			this1 = _this;
            		}
            		else {
HXLINE(  33)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN(  33)		 ::Dynamic buffer1 =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,null(),null(),null(),null());
HXDLIN(  33)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jpeg_decode_bytes(hx::DynamicPtr(bytes),decodeData,hx::DynamicPtr(buffer1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeBytes,return )

 ::lime::graphics::Image JPEG_obj::decodeFile(::String path,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_0f2950a35915406f_53_decodeFile)
HXLINE(  58)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  58)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  58)		if (hx::IsNotNull( buffer )) {
HXLINE(  58)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN(  58)			int in_byteOffset = (int)0;
HXDLIN(  58)			if ((in_byteOffset < (int)0)) {
HXLINE(  58)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  58)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE(  58)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  58)			int bufferByteLength = buffer->length;
HXDLIN(  58)			int elementSize = _this->bytesPerElement;
HXDLIN(  58)			int newByteLength = bufferByteLength;
HXDLIN(  58)			{
HXLINE(  58)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  58)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  58)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  58)				if ((newByteLength < (int)0)) {
HXLINE(  58)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  58)			_this->buffer = buffer;
HXDLIN(  58)			_this->byteOffset = in_byteOffset;
HXDLIN(  58)			_this->byteLength = newByteLength;
HXDLIN(  58)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN(  58)			this1 = _this;
            		}
            		else {
HXLINE(  58)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN(  58)		 ::Dynamic buffer1 =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,null(),null(),null(),null());
HXDLIN(  58)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_jpeg_decode_file(path,decodeData,hx::DynamicPtr(buffer1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeFile,return )

 ::haxe::io::Bytes JPEG_obj::encode( ::lime::graphics::Image image,int quality){
            	HX_STACKFRAME(&_hx_pos_0f2950a35915406f_78_encode)
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (!(image->get_premultiplied())) {
HXLINE(  80)			_hx_tmp = (image->get_format() != (int)0);
            		}
            		else {
HXLINE(  80)			_hx_tmp = true;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  84)			image = image->clone();
HXLINE(  85)			image->set_premultiplied(false);
HXLINE(  86)			image->set_format((int)0);
            		}
HXLINE(  95)		 ::Dynamic data = image->buffer;
HXDLIN(  95)		 ::Dynamic bytes = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  95)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_image_encode(hx::DynamicPtr(data),(int)1,quality,hx::DynamicPtr(bytes))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,encode,return )


JPEG_obj::JPEG_obj()
{
}

bool JPEG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decodeFile") ) { outValue = decodeFile_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { outValue = decodeBytes_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *JPEG_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *JPEG_obj_sStaticStorageInfo = 0;
#endif

static void JPEG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JPEG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
};

#endif

hx::Class JPEG_obj::__mClass;

static ::String JPEG_obj_sStaticFields[] = {
	HX_HCSTRING("decodeBytes","\x5d","\x94","\xb1","\x85"),
	HX_HCSTRING("decodeFile","\xca","\x86","\x63","\xce"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	::String(null())
};

void JPEG_obj::__register()
{
	hx::Object *dummy = new JPEG_obj;
	JPEG_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.JPEG","\x15","\x91","\x5a","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JPEG_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JPEG_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(JPEG_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JPEG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JPEG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JPEG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JPEG_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
