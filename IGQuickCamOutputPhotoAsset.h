
#import <Instagram/IGDirectUploadableProducer.h>
#import <Instagram/IGQuickCamOutputAsset.h>

@class UIImage, NSData, NSString;

@interface IGQuickCamOutputPhotoAsset : NSObject <IGDirectUploadableProducer, IGQuickCamOutputAsset> {

	char _isFromLibrary;
	UIImage* _displayImage;
	UIImage* _croppedImage;
	UIImage* _croppedImageWithEdits;
	int _devicePosition;
	int _flashMode;
	UIImage* _fullSizeImage;
	UIImage* _fullSizeImageWithEdits;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * fullSizeImage;                       //@synthesize fullSizeImage=_fullSizeImage - In the implementation block
@property (nonatomic,retain) UIImage * fullSizeImageWithEdits;              //@synthesize fullSizeImageWithEdits=_fullSizeImageWithEdits - In the implementation block
@property (assign,nonatomic) int devicePosition;                            //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,retain) UIImage * displayImage;                        //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) UIImage * croppedImage;                        //@synthesize croppedImage=_croppedImage - In the implementation block
@property (nonatomic,retain) UIImage * croppedImageWithEdits;               //@synthesize croppedImageWithEdits=_croppedImageWithEdits - In the implementation block
@property (assign,nonatomic) char isFromLibrary;                            //@synthesize isFromLibrary=_isFromLibrary - In the implementation block
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
@property (assign,nonatomic) int flashMode;                                 //@synthesize flashMode=_flashMode - In the implementation block
-(UIImage *)fullSizeImage;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(UIImage *)fullSizeImageWithEdits;
-(void)setFullSizeImageWithEdits:(UIImage *)arg1 ;
-(void)setCroppedImageWithEdits:(UIImage *)arg1 ;
-(char)isFromLibrary;
-(int)devicePosition;
-(UIImage *)croppedImageWithEdits;
-(void)setDevicePosition:(int)arg1 ;
-(id)uploadableModelWithParameter:(id)arg1 ;
-(UIImage *)croppedImage;
-(void)setCroppedImage:(UIImage *)arg1 ;
-(void)setIsFromLibrary:(char)arg1 ;
-(NSData *)imageData;
-(char)isPhoto;
-(UIImage *)displayImage;
-(int)flashMode;
-(void)setFlashMode:(int)arg1 ;
-(void)setFullSizeImage:(UIImage *)arg1 ;
@end

