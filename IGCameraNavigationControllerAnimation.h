
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface IGCameraNavigationControllerAnimation : NSObject <UIViewControllerAnimatedTransitioning> {

	char _presenting;

}

@property (assign,nonatomic) char presenting;                       //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)present:(id)arg1 ;
-(id)initPresenting:(char)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)presenting;
-(void)setPresenting:(char)arg1 ;
-(void)dismiss:(id)arg1 ;
@end

