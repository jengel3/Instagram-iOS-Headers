
#import <Instagram/IGQuickCamInputAsset.h>
#import <Instagram/IGQuickCamInputVideoAsset.h>

@class IGVideoInfo, NSString;

@interface IGQuickCamInputCameraVideoAsset : NSObject <IGQuickCamInputAsset, IGQuickCamInputVideoAsset> {

	int _devicePosition;
	IGVideoInfo* _videoInfo;
	int _flashMode;

}

@property (nonatomic,readonly) IGVideoInfo * videoInfo;              //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,readonly) int flashMode;                        //@synthesize flashMode=_flashMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isFromLibrary; 
@property (nonatomic,readonly) int devicePosition;                   //@synthesize devicePosition=_devicePosition - In the implementation block
-(IGVideoInfo *)videoInfo;
-(id)initWithVideoInfo:(id)arg1 devicePosition:(int)arg2 flashMode:(int)arg3 ;
-(char)isFromLibrary;
-(int)devicePosition;
-(int)flashMode;
@end

