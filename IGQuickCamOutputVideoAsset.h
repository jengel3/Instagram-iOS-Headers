
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGQuickCamOutputAsset.h>

@class UIImage, IGVideoInfo, NSString, IGVideoClip, NSData;

@interface IGQuickCamOutputVideoAsset : NSObject <IGDirectUploadableProducer, IGQuickCamOutputAsset> {

	char _isFromLibrary;
	UIImage* _displayImage;
	UIImage* _croppedImage;
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
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
-(void)setDisplayImage:(UIImage *)arg1 ;
-(IGVideoInfo *)videoInfo;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(void)setCroppedImage:(UIImage *)arg1 ;
-(int)devicePosition;
-(UIImage *)croppedImage;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(char)isFromLibrary;
-(void)setIsFromLibrary:(char)arg1 ;
-(NSData *)imageData;
-(char)isPhoto;
-(NSData *)videoData;
-(IGVideoClip *)clip;
-(UIImage *)displayImage;
@end

