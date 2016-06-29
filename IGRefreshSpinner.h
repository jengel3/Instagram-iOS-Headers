
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CAReplicatorLayer, CALayer, CABasicAnimation;

@interface IGRefreshSpinner : UIView {

	CAReplicatorLayer* r;
	CALayer* dot;
	CABasicAnimation* animation;

}
-(void)spinWithVelocity:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reset;
-(void)setProgress:(float)arg1 ;
-(void)setInstanceCount:(unsigned)arg1 ;
-(void)shrink;
@end

