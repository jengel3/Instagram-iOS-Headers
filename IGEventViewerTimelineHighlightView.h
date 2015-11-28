
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, UIView;

@interface IGEventViewerTimelineHighlightView : UIView {

	CALayer* _borderLayer;
	UIView* _fillView;

}

@property (nonatomic,__weak,readonly) CALayer * borderLayer;              //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,__weak,readonly) UIView * fillView;                  //@synthesize fillView=_fillView - In the implementation block
-(CALayer *)borderLayer;
-(UIView *)fillView;
-(void)animateFillWithDuration:(double)arg1 ;
-(void)cancelFillAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setupSubviews;
@end

