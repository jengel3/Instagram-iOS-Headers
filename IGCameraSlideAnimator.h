
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface IGCameraSlideAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	int _direction;

}

@property (assign,nonatomic) int direction;                         //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newPresentationAnimator;
+(id)newDismissAnimator;
-(id)fromViewFromContext:(id)arg1 ;
-(id)toViewFromContext:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
@end

