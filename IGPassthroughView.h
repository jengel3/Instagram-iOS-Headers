
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@interface IGPassthroughView : UIView {

	/*^block*/id _hitTestBlock;

}

@property (nonatomic,copy) id hitTestBlock;              //@synthesize hitTestBlock=_hitTestBlock - In the implementation block
-(void)setHitTestBlock:(id)arg1 ;
-(id)hitTestBlock;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

