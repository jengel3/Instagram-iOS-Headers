
@class UIImage, NSData;


@protocol IGQuickCamOutputAsset <NSObject>
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) UIImage * croppedImage; 
@property (assign,nonatomic) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition; 
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
@required
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setCroppedImage:(id)arg1;
-(void)setDisplayImage:(id)arg1;
-(void)setDevicePosition:(int)arg1;
-(UIImage *)croppedImage;
-(void)setIsFromLibrary:(char)arg1;
-(NSData *)imageData;
-(char)isPhoto;
-(UIImage *)displayImage;

@end

