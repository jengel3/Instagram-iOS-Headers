
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGMainFeedUploadCellContentViewDelegate.h>
#import <Instagram/IGFeedFollowPeopleCellDelegate.h>
#import <Instagram/IGMegaphonePresenterDelegate.h>
#import <Instagram/FBAnimationPerformanceTrackerDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGMegaphonePresenterProtocol;
@class NSArray, IGFeedPhotoPromptView, IGFeedFollowPeopleCell, UIView, IGMainFeedMegaphoneProvider, FBAnimationPerformanceTracker, NSString;

@interface IGMainFeedViewController : IGFeedViewController_DEPRECATED <IGMainFeedUploadCellContentViewDelegate, IGFeedFollowPeopleCellDelegate, IGMegaphonePresenterDelegate, FBAnimationPerformanceTrackerDelegate, IGFeedNetworkSourceDelegate> {

	char _hasFakedPullToRefresh;
	char _isFirstFeedLoad;
	NSArray* _uploadCellViews;
	IGFeedPhotoPromptView* _findFriendsFooterView;
	IGFeedFollowPeopleCell* _feedFollowPeopleCell;
	UIView* _megaphoneView;
	IGMainFeedMegaphoneProvider* _megaphoneProvider;
	id<IGMegaphonePresenterProtocol> _megaphonePresenter;
	FBAnimationPerformanceTracker* _apTracker;

}

@property (nonatomic,retain) NSArray * uploadCellViews;                                        //@synthesize uploadCellViews=_uploadCellViews - In the implementation block
@property (assign,nonatomic) char hasFakedPullToRefresh;                                       //@synthesize hasFakedPullToRefresh=_hasFakedPullToRefresh - In the implementation block
@property (nonatomic,retain) IGFeedPhotoPromptView * findFriendsFooterView;                    //@synthesize findFriendsFooterView=_findFriendsFooterView - In the implementation block
@property (nonatomic,retain) IGFeedFollowPeopleCell * feedFollowPeopleCell;                    //@synthesize feedFollowPeopleCell=_feedFollowPeopleCell - In the implementation block
@property (assign,nonatomic) char isFirstFeedLoad;                                             //@synthesize isFirstFeedLoad=_isFirstFeedLoad - In the implementation block
@property (nonatomic,retain) UIView * megaphoneView;                                           //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,readonly) IGMainFeedMegaphoneProvider * megaphoneProvider;                //@synthesize megaphoneProvider=_megaphoneProvider - In the implementation block
@property (nonatomic,retain) id<IGMegaphonePresenterProtocol> megaphonePresenter;              //@synthesize megaphonePresenter=_megaphonePresenter - In the implementation block
@property (nonatomic,retain) FBAnimationPerformanceTracker * apTracker;                        //@synthesize apTracker=_apTracker - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)additionalParamsForFetchRequest;
-(char)enableNavState;
-(void)setMegaphoneView:(UIView *)arg1 ;
-(UIView *)megaphoneView;
-(char)hasFakedPullToRefresh;
-(void)setHasFakedPullToRefresh:(char)arg1 ;
-(void)handleLoadedContentDidChange;
-(void)reportDurationInMS:(int)arg1 smallDropEvent:(double)arg2 largeDropEvent:(double)arg3 ;
-(void)reportStackTrace:(id)arg1 withSlide:(id)arg2 frameTime:(int)arg3 ;
-(FBAnimationPerformanceTracker *)apTracker;
-(void)setApTracker:(FBAnimationPerformanceTracker *)arg1 ;
-(void)feedFollowPeopleCellDidDismissUnit:(id)arg1 ;
-(void)feedFollowPeopleCellDidChangeHeight:(id)arg1 ;
-(void)feedFollowPeopleCell:(id)arg1 didTapUser:(id)arg2 ;
-(void)feedFollowPeopleCellDidTapBanner:(id)arg1 ;
-(void)feedFollowPeopleCellDidTapFooterBanner:(id)arg1 ;
-(IGMainFeedMegaphoneProvider *)megaphoneProvider;
-(void)megaphonePresenterDidDismiss:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2 ;
-(void)megaphonePresenterPopViewController:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 handleURL:(id)arg2 ;
-(void)updateFeedAfterReloadingforFetchAction:(int)arg1 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)handleDidEndScrolling;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(id)bugReportDescription;
-(void)setIsFirstFeedLoad:(char)arg1 ;
-(void)onFeedItemShareStarted:(id)arg1 ;
-(void)onFeedItemPosted:(id)arg1 ;
-(void)onFeedItemFailedToUpload:(id)arg1 ;
-(void)onFeedItemHidden:(id)arg1 ;
-(void)rebuildUploadsHeader;
-(NSArray *)uploadCellViews;
-(void)setUploadCellViews:(NSArray *)arg1 ;
-(void)hideFeedItemOriginalImmediate:(id)arg1 ;
-(void)hideWithTombstoneForFeedItem:(id)arg1 ;
-(void)hideFeedItemLeavingScreen:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(void)updateCurrentMegaphone;
-(void)loadFollowAccountListFromResponse:(id)arg1 ;
-(void)showFindFriendsViewIfNecessary;
-(void)logFeedLoadedOnce;
-(IGFeedFollowPeopleCell *)feedFollowPeopleCell;
-(void)setFeedFollowPeopleCell:(IGFeedFollowPeopleCell *)arg1 ;
-(void)resetFollowAccountList;
-(void)findFriendsButtonTapped;
-(IGFeedPhotoPromptView *)findFriendsFooterView;
-(void)friendRequestDetected:(id)arg1 ;
-(void)setMegaphonePresenter:(id<IGMegaphonePresenterProtocol>)arg1 ;
-(id<IGMegaphonePresenterProtocol>)megaphonePresenter;
-(void)setMegaphoneView:(id)arg1 animated:(char)arg2 ;
-(char)isFirstFeedLoad;
-(void)uploadCellWantsDeletion:(id)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 ;
-(void)setFindFriendsFooterView:(IGFeedPhotoPromptView *)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

