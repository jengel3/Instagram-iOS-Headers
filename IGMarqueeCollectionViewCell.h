
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGImageView, CALayer;

@interface IGMarqueeCollectionViewCell : UICollectionViewCell {

	IGImageView* _imageView;
	CALayer* _touchDownLayer;

}

@property (nonatomic,__weak,readonly) IGImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,__weak,readonly) CALayer * touchDownLayer;              //@synthesize touchDownLayer=_touchDownLayer - In the implementation block
+(id)cellIdentifier;
-(void)configureWithMarqueeItem:(id)arg1 ;
-(CALayer *)touchDownLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(IGImageView *)imageView;
@end

