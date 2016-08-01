
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer, CAReplicatorLayer;

@interface IGAlbumGradientRingView : UIView {

	CAGradientLayer* _gradientLayer;
	CAShapeLayer* _ringLayer;
	CAReplicatorLayer* _replicatorLayer;
	float _lineWidth;
	char _isAnimating;
	unsigned _style;
	unsigned _animationStyle;

}

@property (assign,nonatomic) unsigned style;                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned animationStyle;              //@synthesize animationStyle=_animationStyle - In the implementation block
-(void)updateReplicatorWithSegmentCount:(int)arg1 ;
-(id)ringStrokeStartAnimationWithDuration:(float)arg1 values:(id)arg2 ;
-(id)ringStrokeEndAnimationWithDuration:(float)arg1 values:(id)arg2 ;
-(void)animateGradientRotationWithDuration:(float)arg1 ;
-(void)animateReplicatorsWithDuration:(float)arg1 rotation:(id)arg2 repeatCount:(float)arg3 ;
-(void)animateRingLayerWithAnimations:(id)arg1 duration:(float)arg2 repeatCount:(float)arg3 timingFunction:(id)arg4 ;
-(void)handleAnimationDidStop;
-(void)startAnimationWithStyle:(unsigned)arg1 ;
-(void)endAnimating;
-(void)configureShadowLayer;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned)style;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)setStyle:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned)arg2 ;
-(char)isAnimating;
-(unsigned)animationStyle;
-(void)setAnimationStyle:(unsigned)arg1 ;
@end

