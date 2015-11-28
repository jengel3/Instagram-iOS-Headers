
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBTooltipView.h>

@protocol FBLoginTooltipViewDelegate;
@interface FBLoginTooltipView : FBTooltipView {

	char _forceDisplay;
	id<FBLoginTooltipViewDelegate> _delegate;

}

@property (assign,nonatomic) id<FBLoginTooltipViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char forceDisplay;                                    //@synthesize forceDisplay=_forceDisplay - In the implementation block
-(char)forceDisplay;
-(void)presentInView:(id)arg1 withArrowPosition:(CGPoint)arg2 direction:(unsigned)arg3 ;
-(void)setForceDisplay:(char)arg1 ;
-(void)setDelegate:(id<FBLoginTooltipViewDelegate>)arg1 ;
-(id)init;
-(id<FBLoginTooltipViewDelegate>)delegate;
@end

