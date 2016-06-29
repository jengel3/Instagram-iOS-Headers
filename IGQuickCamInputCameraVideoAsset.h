
#import <Instagram/IGQuickCamInputAsset.h>
#import <Instagram/IGQuickCamInputVideoAsset.h>

@class IGVideoInfo, NSString;

@interface IGQuickCamInputCameraVideoAsset : NSObject <IGQuickCamInputAsset, IGQuickCamInputVideoAsset> {

	int _devicePosition;
	IGVideoInfo* _videoInfo;

}

@property (nonatomic,retain) IGVideoInfo * videoInfo;               //@synthesize videoInfo=_videoInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition;                    //@synthesize devicePosition=_devicePosition - In the implementation block
-(IGVideoInfo *)videoInfo;
-(void)setDevicePosition:(int)arg1 ;
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
@end

