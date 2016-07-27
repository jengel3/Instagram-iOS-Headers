
#import <Instagram/IGViewController.h>
#import <Instagram/IGEventViewerViewControllerDelegate.h>
#import <Instagram/IGEventServiceNetworkDelegate.h>
#import <Instagram/IGMediaPreloaderCompletionDelegate.h>
#import <Instagram/IGSoundStateListenerDelegate.h>
#import <Instagram/IGTimerProxyObjectType.h>

@class IGMediaPreloader, UIView, IGEventViewerLoadingView, IGEventViewerSoundBadge, IGEventService, NSArray, IGEventViewerViewController, IGChannelFocusCoordinator, IGSoundStateListener, NSTimer, IGTimerProxy, IGEventViewerAnalyticsLogger, NSString;

@interface IGEventViewerPresenterViewController : IGViewController <IGEventViewerViewControllerDelegate, IGEventServiceNetworkDelegate, IGMediaPreloaderCompletionDelegate, IGSoundStateListenerDelegate, IGTimerProxyObjectType> {

	char _shouldHideStatusBar;
	IGMediaPreloader* _mediaPreloader;
	UIView* _fromViewSnapshot;
	UIView* _dimmedView;
	IGEventViewerLoadingView* _loadingView;
	IGEventViewerSoundBadge* _soundBadge;
	IGEventService* _eventService;
	NSArray* _initialPosts;
	IGEventViewerViewController* _eventViewerController;
	IGChannelFocusCoordinator* _focusCoordinator;
	IGSoundStateListener* _soundStateListener;
	NSTimer* _timer;
	IGTimerProxy* _timerProxy;
	IGEventViewerAnalyticsLogger* _logger;

}

@property (nonatomic,readonly) UIView * fromViewSnapshot;                                      //@synthesize fromViewSnapshot=_fromViewSnapshot - In the implementation block
@property (nonatomic,__weak,readonly) UIView * dimmedView;                                     //@synthesize dimmedView=_dimmedView - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerLoadingView * loadingView;                  //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerSoundBadge * soundBadge;                    //@synthesize soundBadge=_soundBadge - In the implementation block
@property (nonatomic,readonly) IGEventService * eventService;                                  //@synthesize eventService=_eventService - In the implementation block
@property (nonatomic,readonly) IGMediaPreloader * mediaPreloader;                              //@synthesize mediaPreloader=_mediaPreloader - In the implementation block
@property (nonatomic,copy) NSArray * initialPosts;                                             //@synthesize initialPosts=_initialPosts - In the implementation block
@property (nonatomic,retain) IGEventViewerViewController * eventViewerController;              //@synthesize eventViewerController=_eventViewerController - In the implementation block
@property (nonatomic,retain) IGChannelFocusCoordinator * focusCoordinator;                     //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (assign,nonatomic) char shouldHideStatusBar;                                         //@synthesize shouldHideStatusBar=_shouldHideStatusBar - In the implementation block
@property (nonatomic,retain) IGSoundStateListener * soundStateListener;                        //@synthesize soundStateListener=_soundStateListener - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                  //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) IGTimerProxy * timerProxy;                                        //@synthesize timerProxy=_timerProxy - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                          //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGSoundStateListener *)soundStateListener;
-(void)soundListenerDidUpdate:(id)arg1 ;
-(void)didFireTimer:(id)arg1 ;
-(id)initWithEventService:(id)arg1 soundStateListener:(id)arg2 logger:(id)arg3 focusCoordinator:(id)arg4 ;
-(void)didReceiveStatusBarWillChangeFrameNotification:(id)arg1 ;
-(void)setupSnapshotView;
-(void)setupLoadingView;
-(void)setupSoundBadge;
-(IGEventViewerSoundBadge *)soundBadge;
-(void)didReceiveTapGestureRecognizer:(id)arg1 ;
-(void)requestInitialPosts;
-(char)shouldHideStatusBar;
-(UIView *)fromViewSnapshot;
-(UIView *)dimmedView;
-(IGEventViewerViewController *)eventViewerController;
-(IGEventService *)eventService;
-(void)setInitialPosts:(NSArray *)arg1 ;
-(NSArray *)initialPosts;
-(IGMediaPreloader *)mediaPreloader;
-(void)setTimerProxy:(IGTimerProxy *)arg1 ;
-(IGTimerProxy *)timerProxy;
-(void)presentEventViewer;
-(void)dismissLoadingView;
-(void)loadPosts:(id)arg1 ;
-(void)prepareToDismiss;
-(IGChannelFocusCoordinator *)focusCoordinator;
-(void)setSoundStateListener:(IGSoundStateListener *)arg1 ;
-(void)setEventViewerController:(IGEventViewerViewController *)arg1 ;
-(void)setShouldHideStatusBar:(char)arg1 ;
-(void)dismissEventViewer;
-(void)requestToDismissEventViewerViewController:(id)arg1 ;
-(void)eventService:(id)arg1 didFailWithError:(id)arg2 ;
-(void)eventService:(id)arg1 didLoadInitialPosts:(id)arg2 ;
-(void)eventService:(id)arg1 didFetchMorePosts:(id)arg2 ;
-(void)mediaPreloaderDidFinishLoading:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 focusCoordinator:(id)arg2 ;
-(void)setFocusCoordinator:(IGChannelFocusCoordinator *)arg1 ;
-(char)enableNavState;
-(char)prefersTabBarHidden;
-(IGEventViewerAnalyticsLogger *)logger;
-(void)stopTimer;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)startTimer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)setupSubviews;
-(char)prefersNavigationBarHidden;
-(IGEventViewerLoadingView *)loadingView;
@end

