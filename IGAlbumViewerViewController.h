
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGAlbumFullScreenItemControllerDelegate.h>
#import <Instagram/IGAlbumDataControllerItemListener.h>
#import <Instagram/IGSoundStateListenerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGAlbumViewerDelegate;
@class UIView, IGAlbumDataController, IGAlbumViewerLoggingContext, UIScrollView, NSNumber, IGListCollectionView, IGListAdapter, IGListAdapterUpdaterLogger, IGAlbumViewerViewModel, NSArray, IGSoundStateListener, IGUserSession, IGAlbumSeenState, IGAlbumMediaPreloadController, IGProfilePictureImageView, IGAlbumFullscreenCell, NSString;

@interface IGAlbumViewerViewController : IGViewController <IGListAdapterDataSource, IGAlbumFullScreenItemControllerDelegate, IGAlbumDataControllerItemListener, IGSoundStateListenerDelegate, UIScrollViewDelegate> {

	char _isDismissing;
	char _isTransitioningBetweenStories;
	id<IGAlbumViewerDelegate> _delegate;
	UIView* _backgroundView;
	IGAlbumDataController* _dataController;
	IGAlbumViewerLoggingContext* _loggingContext;
	UIScrollView* _dismissScrollView;
	NSNumber* _navigationActionOverride;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGListAdapterUpdaterLogger* _listAdapterUpdaterLogger;
	IGAlbumViewerViewModel* _focusedModelItem;
	NSArray* _modelItems;
	IGSoundStateListener* _soundStateListener;
	IGUserSession* _userSession;
	IGAlbumSeenState* _pendingSeenState;
	IGAlbumMediaPreloadController* _mediaPreloadController;
	CGPoint _dismissScrollOffset;
	CGPoint _dismissCollectionViewOffset;

}

@property (nonatomic,readonly) IGAlbumDataController * dataController;                              //@synthesize dataController=_dataController - In the implementation block
@property (nonatomic,readonly) IGAlbumViewerLoggingContext * loggingContext;                        //@synthesize loggingContext=_loggingContext - In the implementation block
@property (nonatomic,retain) UIScrollView * dismissScrollView;                                      //@synthesize dismissScrollView=_dismissScrollView - In the implementation block
@property (assign,nonatomic) char isDismissing;                                                     //@synthesize isDismissing=_isDismissing - In the implementation block
@property (assign,nonatomic) CGPoint dismissScrollOffset;                                           //@synthesize dismissScrollOffset=_dismissScrollOffset - In the implementation block
@property (assign,nonatomic) CGPoint dismissCollectionViewOffset;                                   //@synthesize dismissCollectionViewOffset=_dismissCollectionViewOffset - In the implementation block
@property (nonatomic,retain) NSNumber * navigationActionOverride;                                   //@synthesize navigationActionOverride=_navigationActionOverride - In the implementation block
@property (nonatomic,retain) IGListCollectionView * collectionView;                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGListAdapter * listAdapter;                                           //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGListAdapterUpdaterLogger * listAdapterUpdaterLogger;               //@synthesize listAdapterUpdaterLogger=_listAdapterUpdaterLogger - In the implementation block
@property (nonatomic,retain) IGAlbumViewerViewModel * focusedModelItem;                             //@synthesize focusedModelItem=_focusedModelItem - In the implementation block
@property (nonatomic,retain) NSArray * modelItems;                                                  //@synthesize modelItems=_modelItems - In the implementation block
@property (assign,nonatomic) char isTransitioningBetweenStories;                                    //@synthesize isTransitioningBetweenStories=_isTransitioningBetweenStories - In the implementation block
@property (nonatomic,readonly) IGSoundStateListener * soundStateListener;                           //@synthesize soundStateListener=_soundStateListener - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                                         //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGAlbumSeenState * pendingSeenState;                                   //@synthesize pendingSeenState=_pendingSeenState - In the implementation block
@property (nonatomic,readonly) IGAlbumMediaPreloadController * mediaPreloadController;              //@synthesize mediaPreloadController=_mediaPreloadController - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumViewerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * focusedProfileImageView; 
@property (nonatomic,readonly) IGAlbumFullscreenCell * focusedCell; 
@property (nonatomic,readonly) NSString * focusedReelPK; 
@property (nonatomic,readonly) UIView * backgroundView;                                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(IGAlbumViewerLoggingContext *)loggingContext;
-(IGListAdapter *)listAdapter;
-(id)initWithReels:(id)arg1 currentReel:(id)arg2 dataController:(id)arg3 loggingContext:(id)arg4 delegate:(id)arg5 ;
-(IGListAdapterUpdaterLogger *)listAdapterUpdaterLogger;
-(NSString *)focusedReelPK;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)albumDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4 ;
-(void)albumDataController:(id)arg1 fetchItemsDidFailWithError:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4 ;
-(void)albumDataController:(id)arg1 didReturnNoResultsForPK:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4 ;
-(IGProfilePictureImageView *)focusedProfileImageView;
-(IGAlbumFullscreenCell *)focusedCell;
-(void)appEnteredBackground:(id)arg1 ;
-(IGAlbumViewerViewModel *)focusedModelItem;
-(void)scrollToInitialItem;
-(UIScrollView *)dismissScrollView;
-(void)flushPendingSeenStateToServer;
-(NSArray *)modelItems;
-(void)setFocusedModelItem:(IGAlbumViewerViewModel *)arg1 ;
-(void)setModelItems:(NSArray *)arg1 ;
-(void)dismissWithNavigationAction:(int)arg1 ;
-(void)preloadMedia;
-(char)isTransitioningBetweenStories;
-(char)isDismissing;
-(void)proceedToNextChannelWithNavigationAction:(int)arg1 ;
-(void)rewindToPreviousChannelWithNavigationAction:(int)arg1 ;
-(IGAlbumSeenState *)pendingSeenState;
-(void)setIsTransitioningBetweenStories:(char)arg1 ;
-(id)getMostVisibleItem;
-(void)fetchItemsForFocusedPreviousAndNextViewModels;
-(void)markSkippedForViewModel:(id)arg1 ;
-(void)setPendingSeenState:(IGAlbumSeenState *)arg1 ;
-(void)fullscreenItemControllerDidStartTransition;
-(CGPoint)dismissScrollOffset;
-(CGPoint)dismissCollectionViewOffset;
-(void)updateBackgroundForDragDistance:(float)arg1 ;
-(void)setIsDismissing:(char)arg1 ;
-(void)setDismissScrollOffset:(CGPoint)arg1 ;
-(void)setDismissCollectionViewOffset:(CGPoint)arg1 ;
-(void)fullscreenItemControllerDidEndTransition;
-(IGAlbumMediaPreloadController *)mediaPreloadController;
-(void)fullscreenItemController:(id)arg1 willUpdateFromAlbumModel:(id)arg2 toAlbumModel:(id)arg3 albumItem:(id)arg4 ;
-(void)fullscreenItemController:(id)arg1 didChangeItemWithNavigationAction:(int)arg2 ;
-(char)fullscreenItemControllerCanResumePlayback:(id)arg1 ;
-(void)fullscreenItemController:(id)arg1 didMarkItemAsSeen:(id)arg2 ;
-(void)fullscreenItemController:(id)arg1 didAdvancePastLastItemWithNavigationAction:(int)arg2 ;
-(void)fullscreenItemController:(id)arg1 didRewindPastFirstItemWithNavigationAction:(int)arg2 ;
-(void)fullscreenItemControllerDidTapDismiss:(id)arg1 ;
-(void)setDismissScrollView:(UIScrollView *)arg1 ;
-(NSNumber *)navigationActionOverride;
-(void)setNavigationActionOverride:(NSNumber *)arg1 ;
-(void)scrollToItem:(id)arg1 animated:(char)arg2 ;
-(IGSoundStateListener *)soundStateListener;
-(void)soundListenerDidUpdate:(id)arg1 ;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)setDelegate:(id<IGAlbumViewerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGAlbumViewerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UIView *)backgroundView;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
-(IGUserSession *)userSession;
-(char)prefersNavigationBarHidden;
-(IGAlbumDataController *)dataController;
@end

