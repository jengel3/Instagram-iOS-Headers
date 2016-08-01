
#import <UIKit/UIView.h>

@class NSString;

@interface IGReactPerformanceLoggerFlag : UIView {

	char _didAppearInWindow;
	char _bridgeDidFinishTransaction;
	char _loggedContentDidAppear;
	NSString* _eventName;

}

@property (nonatomic,copy) NSString * eventName;                           //@synthesize eventName=_eventName - In the implementation block
@property (assign,nonatomic) char didAppearInWindow;                       //@synthesize didAppearInWindow=_didAppearInWindow - In the implementation block
@property (assign,nonatomic) char bridgeDidFinishTransaction;              //@synthesize bridgeDidFinishTransaction=_bridgeDidFinishTransaction - In the implementation block
@property (assign,nonatomic) char loggedContentDidAppear;                  //@synthesize loggedContentDidAppear=_loggedContentDidAppear - In the implementation block
-(void)contentDidAppear;
-(void)logContentDidAppear;
-(void)reactBridgeDidFinishTransaction;
-(char)didAppearInWindow;
-(void)setDidAppearInWindow:(char)arg1 ;
-(char)bridgeDidFinishTransaction;
-(void)setBridgeDidFinishTransaction:(char)arg1 ;
-(char)loggedContentDidAppear;
-(void)setLoggedContentDidAppear:(char)arg1 ;
-(void)didMoveToWindow;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
@end

