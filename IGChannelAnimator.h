
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface IGChannelAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	char _isPresented;
	UIView* _presentingViewSnapshot;
	CGRect _channelFrame;

}

@property (assign,nonatomic) char isPresented;                               //@synthesize isPresented=_isPresented - In the implementation block
@property (nonatomic,readonly) UIView * presentingViewSnapshot;              //@synthesize presentingViewSnapshot=_presentingViewSnapshot - In the implementation block
@property (nonatomic,readonly) CGRect channelFrame;                          //@synthesize channelFrame=_channelFrame - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animatePresentingTransition:(id)arg1 ;
-(UIView *)presentingViewSnapshot;
-(CGRect)channelFrame;
-(id)initWithPresentingViewSnapshot:(id)arg1 channelFrame:(CGRect)arg2 ;
-(void)setIsPresented:(char)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)isPresented;
@end

