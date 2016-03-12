
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface IGDirectShareViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	char _presenting;

}

@property (assign,nonatomic) char presenting;                       //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)presenting;
-(void)setPresenting:(char)arg1 ;
@end

