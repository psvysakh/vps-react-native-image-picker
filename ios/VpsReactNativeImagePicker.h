
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNVpsReactNativeImagePickerSpec.h"

@interface VpsReactNativeImagePicker : NSObject <NativeVpsReactNativeImagePickerSpec>
#else
#import <React/RCTBridgeModule.h>

@interface VpsReactNativeImagePicker : NSObject <RCTBridgeModule>
#endif

@end
