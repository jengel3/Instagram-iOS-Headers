
@class UIImage, NSData;


@protocol IGQuickCamOutputAsset <NSObject>
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) UIImage * croppedImage; 
@property (assign,nonatomic) char isFromLibrary; 
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
@required
-(void)setDisplayImage:(id)arg1;
-(void)setCroppedImage:(id)arg1;
-(int)devicePosition;
-(UIImage *)croppedImage;
-(char)isFromLibrary;
-(void)setIsFromLibrary:(char)arg1;
-(NSData *)imageData;
-(char)isPhoto;
-(UIImage *)displayImage;

@end

