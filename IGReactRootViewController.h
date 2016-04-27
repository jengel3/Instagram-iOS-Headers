
#import <Instagram/IGViewController.h>

@class NSString, IGReactPerformanceLoggerSession, RCTRootView;

@interface IGReactRootViewController : IGViewController {

	NSString* _appKey;
	IGReactPerformanceLoggerSession* _perfLoggerSession;
	RCTRootView* _rootView;

}

@property (nonatomic,copy) NSString * appKey;                                                    //@synthesize appKey=_appKey - In the implementation block
@property (nonatomic,readonly) IGReactPerformanceLoggerSession * perfLoggerSession;              //@synthesize perfLoggerSession=_perfLoggerSession - In the implementation block
@property (nonatomic,retain) RCTRootView * rootView;                                             //@synthesize rootView=_rootView - In the implementation block
-(char)prefersTabBarHidden;
-(IGReactPerformanceLoggerSession *)perfLoggerSession;
-(id)initWithRootView:(id)arg1 perfLoggerSession:(id)arg2 title:(id)arg3 ;
-(NSString *)appKey;
-(void)setAppKey:(NSString *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(RCTRootView *)rootView;
-(void)setRootView:(RCTRootView *)arg1 ;
@end

