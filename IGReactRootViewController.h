
#import <Instagram/IGViewController.h>

@class NSString, IGReactPerformanceLoggerSession, RCTRootView;

@interface IGReactRootViewController : IGViewController {

	NSString* _appKey;
	IGReactPerformanceLoggerSession* _perfLoggerSession;
	RCTRootView* _rootView;
	NSString* _analyticsModule;

}

@property (nonatomic,retain) NSString * analyticsModule;                                         //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy) NSString * appKey;                                                    //@synthesize appKey=_appKey - In the implementation block
@property (nonatomic,readonly) IGReactPerformanceLoggerSession * perfLoggerSession;              //@synthesize perfLoggerSession=_perfLoggerSession - In the implementation block
@property (nonatomic,retain) RCTRootView * rootView;                                             //@synthesize rootView=_rootView - In the implementation block
-(NSString *)analyticsModule;
-(char)prefersTabBarHidden;
-(void)onCancelModal;
-(id)initWithRootView:(id)arg1 perfLoggerSession:(id)arg2 title:(id)arg3 analyticsModule:(id)arg4 ;
-(void)setRightAction:(id)arg1 enabled:(char)arg2 ;
-(void)setLeftAction:(id)arg1 enabled:(char)arg2 ;
-(void)onDoneButtonTap;
-(void)onNextButtonTap;
-(void)onReloadButtonTap;
-(void)sendAppEventWithEvent:(id)arg1 body:(id)arg2 ;
-(id)initWithRootView:(id)arg1 perfLoggerSession:(id)arg2 title:(id)arg3 ;
-(NSString *)appKey;
-(void)setAppKey:(NSString *)arg1 ;
-(IGReactPerformanceLoggerSession *)perfLoggerSession;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(RCTRootView *)rootView;
-(void)setRootView:(RCTRootView *)arg1 ;
@end

