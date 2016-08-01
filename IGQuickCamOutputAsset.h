
@class UIImage, NSData;


@protocol IGQuickCamOutputAsset <NSObject>
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) UIImage * croppedImage; 
@property (nonatomic,retain) UIImage * croppedImageWithEdits; 
@property (assign,nonatomic) char isFromLibrary; 
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
@property (assign,nonatomic) int flashMode; 
@required
-(void)setDisplayImage:(id)arg1;
-(void)setCroppedImageWithEdits:(id)arg1;
-(char)isFromLibrary;
-(int)devicePosition;
-(UIImage *)croppedImageWithEdits;
-(UIImage *)croppedImage;
-(void)setCroppedImage:(id)arg1;
-(void)setIsFromLibrary:(char)arg1;
-(NSData *)imageData;
-(char)isPhoto;
-(UIImage *)displayImage;
-(int)flashMode;
-(void)setFlashMode:(int)arg1;

@end

