
#import <Instagram/IGQuickCamInputAsset.h>
#import <Instagram/IGQuickCamInputPhotoAsset.h>

@class UIImage, NSString;

@interface IGQuickCamInputCameraPhotoAsset : NSObject <IGQuickCamInputAsset, IGQuickCamInputPhotoAsset> {

	int _devicePosition;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition;                    //@synthesize devicePosition=_devicePosition - In the implementation block
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
@end

