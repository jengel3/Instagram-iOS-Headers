
#import <UIKit/UIViewController.h>
#import <Instagram/IGEventViewerViewControllerDelegate.h>
#import <Instagram/IGEventServiceNetworkDelegate.h>
#import <Instagram/IGEventServiceCacheDelegate.h>
#import <Instagram/IGEventViewerMediaPreloaderCompletionDelegate.h>

@class IGEventViewerMediaPreloader, UIView, IGEventViewerLoadingView, IGEventViewerSoundBadge, IGEventService, NSArray, IGEventViewerViewController, IGEventViewerSoundEffectPlayer, NSString;

@interface IGEventViewerPresenterViewController : UIViewController <IGEventViewerViewControllerDelegate, IGEventServiceNetworkDelegate, IGEventServiceCacheDelegate, IGEventViewerMediaPreloaderCompletionDelegate> {

	char _shouldHideStatusBar;
	IGEventViewerMediaPreloader* _mediaPreloader;
	UIView* _snapshotView;
	UIView* _dimmedView;
	IGEventViewerLoadingView* _loadingView;
	IGEventViewerSoundBadge* _soundBadge;
	IGEventService* _eventService;
	NSArray* _initialPosts;
	IGEventViewerViewController* _eventViewerController;
	IGEventViewerSoundEffectPlayer* _player;

}

@property (nonatomic,__weak,readonly) UIView * snapshotView;                                   //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * dimmedView;                                     //@synthesize dimmedView=_dimmedView - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerLoadingView * loadingView;                  //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerSoundBadge * soundBadge;                    //@synthesize soundBadge=_soundBadge - In the implementation block
@property (nonatomic,readonly) IGEventService * eventService;                                  //@synthesize eventService=_eventService - In the implementation block
@property (nonatomic,readonly) IGEventViewerMediaPreloader * mediaPreloader;                   //@synthesize mediaPreloader=_mediaPreloader - In the implementation block
@property (nonatomic,copy) NSArray * initialPosts;                                             //@synthesize initialPosts=_initialPosts - In the implementation block
@property (nonatomic,retain) IGEventViewerViewController * eventViewerController;              //@synthesize eventViewerController=_eventViewerController - In the implementation block
@property (assign,nonatomic) char shouldHideStatusBar;                                         //@synthesize shouldHideStatusBar=_shouldHideStatusBar - In the implementation block
@property (nonatomic,retain) IGEventViewerSoundEffectPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEventId:(id)arg1 ;
-(void)eventService:(id)arg1 didLoadCachedPosts:(id)arg2 ;
-(void)eventServiceFailedToLoadFromCache:(id)arg1 ;
-(void)eventService:(id)arg1 didFailWithError:(id)arg2 ;
-(void)eventService:(id)arg1 didLoadInitialPosts:(id)arg2 ;
-(void)eventService:(id)arg1 didFetchMorePosts:(id)arg2 ;
-(void)eventMediaPreloaderDidFinishLoading:(id)arg1 ;
-(id)initWithEventService:(id)arg1 ;
-(id)initWithEventService:(id)arg1 soundEffectPlayer:(id)arg2 ;
-(void)didReceiveStatusBarWillChangeFrameNotification:(id)arg1 ;
-(void)setupSnapshotView;
-(void)setupLoadingView;
-(void)setupSoundBadge;
-(IGEventViewerSoundBadge *)soundBadge;
-(void)didReceiveTapGestureRecognizer:(id)arg1 ;
-(void)requestInitialPosts;
-(char)shouldHideStatusBar;
-(UIView *)dimmedView;
-(IGEventViewerViewController *)eventViewerController;
-(IGEventService *)eventService;
-(void)setInitialPosts:(NSArray *)arg1 ;
-(void)presentEventViewer;
-(IGEventViewerMediaPreloader *)mediaPreloader;
-(void)loadPosts:(id)arg1 ;
-(void)prepareToDismiss;
-(NSArray *)initialPosts;
-(void)setEventViewerController:(IGEventViewerViewController *)arg1 ;
-(void)setShouldHideStatusBar:(char)arg1 ;
-(void)dismissEventViewer;
-(void)didDismissEventViewerViewController:(id)arg1 ;
-(void)setPlayer:(IGEventViewerSoundEffectPlayer *)arg1 ;
-(IGEventViewerSoundEffectPlayer *)player;
-(void)dealloc;
-(UIView *)snapshotView;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setupSubviews;
-(IGEventViewerLoadingView *)loadingView;
@end

