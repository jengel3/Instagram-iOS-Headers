
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>

@interface IGFadingImageView : IGImageView {

	char _fadeSetImage;

}

@property (assign,getter=shouldFadeSetImage,nonatomic) char fadeSetImage;              //@synthesize fadeSetImage=_fadeSetImage - In the implementation block
-(char)shouldFadeSetImage;
-(void)addFadeAnimationLayer;
-(void)setFadeSetImage:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
@end

