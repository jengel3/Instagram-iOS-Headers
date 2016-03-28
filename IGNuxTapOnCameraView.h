
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIView, UILabel, UIImageView;

@interface IGNuxTapOnCameraView : UIView {

	char _isAnimating;
	UIImage* _shadowImage;
	UIView* _shadowView;
	UIView* _backgroundView;
	UILabel* _textLabel;
	UIImage* _arrowImage;
	UIImageView* _arrowImageView;

}

@property (assign,nonatomic) char isAnimating;                                 //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                            //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic,__weak) UIView * shadowView;                       //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic,__weak) UIView * backgroundView;                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * textLabel;                       //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImage * arrowImage;                             //@synthesize arrowImage=_arrowImage - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * arrowImageView;              //@synthesize arrowImageView=_arrowImageView - In the implementation block
+(char)shouldShowTapOnCameraNuxForUser:(id)arg1 ;
-(void)setIsAnimating:(char)arg1 ;
-(UIImage *)arrowImage;
-(void)dismissWithCompletion:(/*^block*/id)arg1 animated:(char)arg2 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 animateTranslatationWithCurrentOffset:(/*^block*/id)arg2 animated:(char)arg3 ;
-(void)setArrowImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UILabel *)textLabel;
-(UIView *)backgroundView;
-(char)isAnimating;
-(UIView *)shadowView;
-(void)setShadowView:(UIView *)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(UIImageView *)arrowImageView;
-(void)setArrowImageView:(UIImageView *)arg1 ;
@end

