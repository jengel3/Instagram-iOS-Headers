

@class UIViewController, NSMutableDictionary;

@interface IGNavigationEventManager : NSObject {

	UIViewController* _currentTopViewController;
	NSMutableDictionary* _logResultsForLoggable;

}

@property (assign,nonatomic,__weak) UIViewController * currentTopViewController;              //@synthesize currentTopViewController=_currentTopViewController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * logResultsForLoggable;                     //@synthesize logResultsForLoggable=_logResultsForLoggable - In the implementation block
+(id)sharedNavigationEventManager;
+(id)currentModule;
+(id)lastKNavigationEvents:(unsigned)arg1 ;
-(void)associateUIPerfLogResult:(id)arg1 forLoggable:(id)arg2 ;
-(void)handleNavigationViaClickPoint:(id)arg1 ;
-(void)handleViewDidAppear:(id)arg1 ;
-(void)userTapped:(id)arg1 ;
-(void)locationTapped:(id)arg1 ;
-(void)commentButtonTapped:(id)arg1 ;
-(void)moreTapped:(id)arg1 ;
-(void)urlTapped:(id)arg1 ;
-(void)handleAppDidForeground:(id)arg1 ;
-(void)saveNewNavigationEventForAppearingViewController:(id)arg1 ;
-(void)logPerfLogEvent:(unsigned)arg1 withUserInfo:(id)arg2 ;
-(void)handleNavigationViaClickPoint:(id)arg1 extraInfo:(id)arg2 ;
-(void)mergeCurrentNavigationEventWithNavigationInfo:(id)arg1 ;
-(UIViewController *)currentTopViewController;
-(unsigned)navigationDepthForViewController:(id)arg1 ;
-(void)flushCurrentNavigationEventForAppearingViewController:(id)arg1 ;
-(void)logNavigationEvent;
-(void)addNavigationEvent:(id)arg1 ;
-(void)setCurrentTopViewController:(UIViewController *)arg1 ;
-(NSMutableDictionary *)logResultsForLoggable;
-(void)setLogResultsForLoggable:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
@end

