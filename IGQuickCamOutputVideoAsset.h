
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGQuickCamOutputAsset.h>

@class UIImage, IGVideoInfo, NSString, IGVideoClip, NSData;

@interface IGQuickCamOutputVideoAsset : NSObject <IGDirectUploadableProducer, IGQuickCamOutputAsset> {

	char _isFromLibrary;
	UIImage* _displayImage;
	UIImage* _croppedImage;
	UIImage* _croppedImageWithEdits;
	int _flashMode;
	IGVideoInfo* _videoInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGVideoInfo * videoInfo;                      //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,readonly) IGVideoClip * clip; 
@property (nonatomic,readonly) NSData * videoData; 
@property (nonatomic,retain) UIImage * displayImage;                       //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) UIImage * croppedImage;                       //@synthesize croppedImage=_croppedImage - In the implementation block
@property (nonatomic,retain) UIImage * croppedImageWithEdits;              //@synthesize croppedImageWithEdits=_croppedImageWithEdits - In the implementation block
@property (assign,nonatomic) char isFromLibrary;                           //@synthesize isFromLibrary=_isFromLibrary - In the implementation block
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
@property (assign,nonatomic) int flashMode;                                //@synthesize flashMode=_flashMode - In the implementation block
-(void)setDisplayImage:(UIImage *)arg1 ;
-(IGVideoInfo *)videoInfo;
-(void)setCroppedImageWithEdits:(UIImage *)arg1 ;
-(char)isFromLibrary;
-(int)devicePosition;
-(UIImage *)croppedImageWithEdits;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(UIImage *)croppedImage;
-(void)setCroppedImage:(UIImage *)arg1 ;
-(void)setIsFromLibrary:(char)arg1 ;
-(NSData *)imageData;
-(char)isPhoto;
-(NSData *)videoData;
-(IGVideoClip *)clip;
-(UIImage *)displayImage;
-(int)flashMode;
-(void)setFlashMode:(int)arg1 ;
@end

