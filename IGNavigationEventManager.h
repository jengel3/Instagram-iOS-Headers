

@class UIViewController;

@interface IGNavigationEventManager : NSObject {

	UIViewController* _currentTopViewController;

}

@property (assign,nonatomic,__weak) UIViewController * currentTopViewController;              //@synthesize currentTopViewController=_currentTopViewController - In the implementation block
+(id)currentModule;
+(id)lastKNavigationEvents:(unsigned)arg1 ;
-(void)locationTapped:(id)arg1 ;
-(void)handleNavigationViaClickPoint:(id)arg1 ;
-(void)handleViewDidAppear:(id)arg1 ;
-(void)userTapped:(id)arg1 ;
-(void)commentButtonTapped:(id)arg1 ;
-(void)moreTapped:(id)arg1 ;
-(void)urlTapped:(id)arg1 ;
-(void)handleAppDidForeground:(id)arg1 ;
-(void)saveNewNavigationEventForAppearingViewController:(id)arg1 ;
-(void)handleNavigationViaClickPoint:(id)arg1 extraInfo:(id)arg2 ;
-(void)mergeCurrentNavigationEventWithNavigationInfo:(id)arg1 ;
-(UIViewController *)currentTopViewController;
-(unsigned)navigationDepthForViewController:(id)arg1 ;
-(void)flushCurrentNavigationEventForAppearingViewController:(id)arg1 ;
-(void)logNavigationEvent;
-(void)addNavigationEvent:(id)arg1 ;
-(void)setCurrentTopViewController:(UIViewController *)arg1 ;
-(void)dealloc;
-(id)init;
@end

