
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKTooltipView.h>

@protocol FBSDKLoginTooltipViewDelegate;
@interface FBSDKLoginTooltipView : FBSDKTooltipView {

	char _forceDisplay;
	id<FBSDKLoginTooltipViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSDKLoginTooltipViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char forceDisplay;                                              //@synthesize forceDisplay=_forceDisplay - In the implementation block
-(void)setForceDisplay:(char)arg1 ;
-(char)forceDisplay;
-(void)presentInView:(id)arg1 withArrowPosition:(CGPoint)arg2 direction:(unsigned)arg3 ;
-(void)setDelegate:(id<FBSDKLoginTooltipViewDelegate>)arg1 ;
-(id)init;
-(id<FBSDKLoginTooltipViewDelegate>)delegate;
@end

