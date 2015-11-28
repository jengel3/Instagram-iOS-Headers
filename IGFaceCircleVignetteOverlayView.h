
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@interface IGFaceCircleVignetteOverlayView : UIView {

	float _radius;
	CGPoint _radiusCenter;

}

@property (assign,nonatomic) float radius;                      //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGPoint radiusCenter;              //@synthesize radiusCenter=_radiusCenter - In the implementation block
-(void)setRadiusCenter:(CGPoint)arg1 ;
-(CGPoint)radiusCenter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setRadius:(float)arg1 ;
-(float)radius;
@end

