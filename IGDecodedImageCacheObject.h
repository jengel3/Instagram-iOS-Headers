

@class UIImage, NSNumber;

@interface IGDecodedImageCacheObject : NSObject {

	UIImage* _image;
	NSNumber* _dataLength;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSNumber * dataLength;              //@synthesize dataLength=_dataLength - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSNumber *)dataLength;
-(void)setDataLength:(NSNumber *)arg1 ;
@end

