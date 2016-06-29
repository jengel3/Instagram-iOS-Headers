
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGQuickCamOutputAsset.h>

@class UIImage, NSData, NSString;

@interface IGQuickCamOutputPhotoAsset : NSObject <IGDirectUploadableProducer, IGQuickCamOutputAsset> {

	char _isFromLibrary;
	UIImage* _displayImage;
	UIImage* _croppedImage;
	int _devicePosition;
	UIImage* _fullSizeImage;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * fullSizeImage;               //@synthesize fullSizeImage=_fullSizeImage - In the implementation block
@property (nonatomic,retain) UIImage * displayImage;                //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) UIImage * croppedImage;                //@synthesize croppedImage=_croppedImage - In the implementation block
@property (assign,nonatomic) char isFromLibrary;                    //@synthesize isFromLibrary=_isFromLibrary - In the implementation block
@property (assign,nonatomic) int devicePosition;                    //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
-(void)setCroppedImage:(UIImage *)arg1 ;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(UIImage *)fullSizeImage;
-(void)setDevicePosition:(int)arg1 ;
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setIsFromLibrary:(char)arg1 ;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(UIImage *)croppedImage;
-(NSData *)imageData;
-(char)isPhoto;
-(UIImage *)displayImage;
-(void)setFullSizeImage:(UIImage *)arg1 ;
@end

