
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class IGDynamics1D, NSString;

@interface IGDirectShareViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	char _presenting;
	IGDynamics1D* _spring;

}

@property (assign,nonatomic) char presenting;                       //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,retain) IGDynamics1D * spring;                 //@synthesize spring=_spring - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpring:(IGDynamics1D *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)presenting;
-(void)setPresenting:(char)arg1 ;
-(IGDynamics1D *)spring;
@end

