
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/RCTInvalidating.h>

@class RCTBridge, RCTModalHostViewController, RCTTouchHandler, UIView, NSString;

@interface RCTModalHostView : UIView <RCTInvalidating> {

	RCTBridge* _bridge;
	char _isPresented;
	RCTModalHostViewController* _modalViewController;
	RCTTouchHandler* _touchHandler;
	UIView* _reactSubview;
	NSString* _animationType;
	/*^block*/id _onShow;

}

@property (nonatomic,copy) NSString * animationType;                             //@synthesize animationType=_animationType - In the implementation block
@property (assign,getter=isTransparent,nonatomic) char transparent; 
@property (nonatomic,copy) id onShow;                                            //@synthesize onShow=_onShow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBridge:(id)arg1 ;
-(void)notifyForBoundsChange:(CGRect)arg1 ;
-(char)hasAnimationType;
-(void)dismissModalViewController;
-(id)onShow;
-(void)setOnShow:(id)arg1 ;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(id)reactSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)didMoveToSuperview;
-(void)setAnimationType:(NSString *)arg1 ;
-(char)isTransparent;
-(NSString *)animationType;
-(void)setTransparent:(char)arg1 ;
@end

