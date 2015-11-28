
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UILabel;

@interface IGMediaActionView : UICollectionReusableView {

	float _animationProgress;
	UIImageView* _imageView;
	UILabel* _label;

}

@property (assign,nonatomic) float animationProgress;              //@synthesize animationProgress=_animationProgress - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
+(float)width;
-(void)setAnimationProgress:(float)arg1 ;
-(float)animationProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end

