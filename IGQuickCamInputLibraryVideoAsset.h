
#import <Instagram/IGQuickCamInputLibraryAsset.h>
#import <Instagram/IGQuickCamInputVideoAsset.h>

@class PHAsset, ALAsset, NSString;

@interface IGQuickCamInputLibraryVideoAsset : NSObject <IGQuickCamInputLibraryAsset, IGQuickCamInputVideoAsset> {

	PHAsset* _phAsset;
	ALAsset* _alAsset;
	int _devicePosition;
	int _flashMode;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isFromLibrary; 
@property (nonatomic,readonly) int devicePosition;                  //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,readonly) int flashMode;                       //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) PHAsset * phAsset;                   //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,readonly) ALAsset * alAsset;                   //@synthesize alAsset=_alAsset - In the implementation block
-(char)isFromLibrary;
-(int)devicePosition;
-(id)initWithPHAsset:(id)arg1 ALAsset:(id)arg2 devicePosition:(int)arg3 flashMode:(int)arg4 ;
-(PHAsset *)phAsset;
-(ALAsset *)alAsset;
-(int)flashMode;
@end

