
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGBlurredImageView, CALayer, UIImageView;

@interface IGMediaThumbnailHiddenCell : UICollectionViewCell {

	IGBlurredImageView* _blurredImageView;
	CALayer* _touchDownLayer;
	UIImageView* _hiddenIcon;

}

@property (nonatomic,readonly) IGBlurredImageView * blurredImageView;              //@synthesize blurredImageView=_blurredImageView - In the implementation block
@property (nonatomic,readonly) CALayer * touchDownLayer;                           //@synthesize touchDownLayer=_touchDownLayer - In the implementation block
@property (nonatomic,readonly) UIImageView * hiddenIcon;                           //@synthesize hiddenIcon=_hiddenIcon - In the implementation block
-(IGBlurredImageView *)blurredImageView;
-(void)configureCellWithPost:(id)arg1 ;
-(CALayer *)touchDownLayer;
-(UIImageView *)hiddenIcon;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)setupSubviews;
@end

