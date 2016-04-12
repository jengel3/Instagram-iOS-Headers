
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTView.h>
#import <Instagram/RCTInvalidating.h>

@class RCTBridge, UIColor, RCTTouchHandler, NSString;

@interface RCTRootContentView : RCTView <RCTInvalidating> {

	RCTBridge* _bridge;
	UIColor* _backgroundColor;
	char _contentHasAppeared;
	RCTTouchHandler* _touchHandler;

}

@property (nonatomic,readonly) char contentHasAppeared;                     //@synthesize contentHasAppeared=_contentHasAppeared - In the implementation block
@property (nonatomic,readonly) RCTTouchHandler * touchHandler;              //@synthesize touchHandler=_touchHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)contentHasAppeared;
-(id)initWithFrame:(CGRect)arg1 bridge:(id)arg2 reactTag:(id)arg3 ;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)setFrame:(CGRect)arg1 ;
-(void)invalidate;
-(RCTTouchHandler *)touchHandler;
@end

