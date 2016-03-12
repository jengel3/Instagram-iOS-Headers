
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
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(IGVideoInfo *)videoInfo;
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1 ;
@end

