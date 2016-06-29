
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGQuickCamOutputAsset.h>

@class UIImage, IGVideoInfo, NSString, IGVideoClip, NSData;

@interface IGQuickCamOutputVideoAsset : NSObject <IGDirectUploadableProducer, IGQuickCamOutputAsset> {

	char _isFromLibrary;
	UIImage* _displayImage;
	UIImage* _croppedImage;
	int _devicePosition;
	IGVideoInfo* _videoInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGVideoInfo * videoInfo;               //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,readonly) IGVideoClip * clip; 
@property (nonatomic,readonly) NSData * videoData; 
@property (nonatomic,retain) UIImage * displayImage;                //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) UIImage * croppedImage;                //@synthesize croppedImage=_croppedImage - In the implementation block
@property (assign,nonatomic) char isFromLibrary;                    //@synthesize isFromLibrary=_isFromLibrary - In the implementation block
@property (assign,nonatomic) int devicePosition;                    //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
-(void)setCroppedImage:(UIImage *)arg1 ;
-(IGVideoInfo *)videoInfo;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)setDevicePosition:(int)arg1 ;
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setIsFromLibrary:(char)arg1 ;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(UIImage *)croppedImage;
-(NSData *)imageData;
-(char)isPhoto;
-(NSData *)videoData;
-(IGVideoClip *)clip;
-(UIImage *)displayImage;
@end

