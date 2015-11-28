
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface IGViewControllerBlockBasedAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	/*^block*/id _animation;
	float _duration;

}

@property (nonatomic,copy,readonly) id animation;                   //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) float duration;                      //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDuration:(float)arg1 animation:(/*^block*/id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(float)duration;
-(id)animation;
@end

