
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>

@class UIImage;

@interface IGAppIconImageView : IGImageView {

	unsigned _imageRenderTicker;
	UIImage* _originalImage;

}

@property (assign,nonatomic) unsigned imageRenderTicker;              //@synthesize imageRenderTicker=_imageRenderTicker - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                 //@synthesize originalImage=_originalImage - In the implementation block
-(void)reloadClippedImageWithImage:(id)arg1 ;
-(unsigned)imageRenderTicker;
-(void)setImageRenderTicker:(unsigned)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(UIImage *)originalImage;
@end

