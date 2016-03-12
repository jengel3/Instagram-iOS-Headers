

@protocol IGOverlayNuxControllerDelegate;
#import <Instagram/Instagram-Structs.h>
@class UIView;

@interface IGOverlayNuxController : NSObject {

	id<IGOverlayNuxControllerDelegate> _delegate;
	UIView* _NUXView;

}

@property (assign,nonatomic,__weak) id<IGOverlayNuxControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * NUXView;                                                //@synthesize NUXView=_NUXView - In the implementation block
-(UIView *)NUXView;
-(void)setNUXView:(UIView *)arg1 ;
-(void)hideNUX;
-(void)showOverlayNux:(CGRect)arg1 highlightedElement:(id)arg2 withParent:(id)arg3 withHeader:(id)arg4 withBody:(id)arg5 ;
-(void)setDelegate:(id<IGOverlayNuxControllerDelegate>)arg1 ;
-(id<IGOverlayNuxControllerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

