
#import <Instagram/IGQuickCamInputAsset.h>
#import <Instagram/IGQuickCamInputPhotoAsset.h>

@class UIImage, NSString;

@interface IGQuickCamInputCameraPhotoAsset : NSObject <IGQuickCamInputAsset, IGQuickCamInputPhotoAsset> {

	int _devicePosition;
	UIImage* _image;
	int _flashMode;

}

@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) int flashMode;                       //@synthesize flashMode=_flashMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isFromLibrary; 
@property (nonatomic,readonly) int devicePosition;                  //@synthesize devicePosition=_devicePosition - In the implementation block
-(id)initWithImage:(id)arg1 devicePosition:(int)arg2 flashMode:(int)arg3 ;
-(char)isFromLibrary;
-(int)devicePosition;
-(UIImage *)image;
-(int)flashMode;
@end

