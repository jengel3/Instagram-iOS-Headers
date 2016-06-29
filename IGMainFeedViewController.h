
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGMainFeedUploadCellContentViewDelegate.h>
#import <Instagram/IGFeedFollowPeopleCellDelegate.h>
#import <Instagram/IGMegaphonePresenterDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGAnalyticsModule.h>

@protocol IGMegaphonePresenterProtocol;
@class NSArray, IGFeedPhotoPromptView, IGFeedFollowPeopleCell, UIView, IGMainFeedMegaphoneProvider, IGDogfooderAlertBarPresenter, IGFeedViewControllerScrollPerfLogger, NSString;

@interface IGMainFeedViewController : IGFeedViewController_DEPRECATED <IGMainFeedUploadCellContentViewDelegate, IGFeedFollowPeopleCellDelegate, IGMegaphonePresenterDelegate, IGFeedNetworkSourceDelegate, IGAnalyticsModule> {

	char _hasFakedPullToRefresh;
	char _findFriendsFooterViewShowing;
	char _isFirstFeedLoad;
	NSArray* _uploadCellViews;
	IGFeedPhotoPromptView* _findFriendsFooterView;
	IGFeedFollowPeopleCell* _feedFollowPeopleCell;
	UIView* _megaphoneView;
	IGMainFeedMegaphoneProvider* _megaphoneProvider;
	IGDogfooderAlertBarPresenter* _dogfooderAlertBarPresenter;
	id<IGMegaphonePresenterProtocol> _megaphonePresenter;
	IGFeedViewControllerScrollPerfLogger* _scrollPerfLogger;

}

@property (nonatomic,retain) NSArray * uploadCellViews;                                                //@synthesize uploadCellViews=_uploadCellViews - In the implementation block
@property (assign,nonatomic) char hasFakedPullToRefresh;                                               //@synthesize hasFakedPullToRefresh=_hasFakedPullToRefresh - In the implementation block
@property (nonatomic,retain) IGFeedPhotoPromptView * findFriendsFooterView;                            //@synthesize findFriendsFooterView=_findFriendsFooterView - In the implementation block
@property (assign,nonatomic) char findFriendsFooterViewShowing;                                        //@synthesize findFriendsFooterViewShowing=_findFriendsFooterViewShowing - In the implementation block
@property (nonatomic,retain) IGFeedFollowPeopleCell * feedFollowPeopleCell;                            //@synthesize feedFollowPeopleCell=_feedFollowPeopleCell - In the implementation block
@property (assign,nonatomic) char isFirstFeedLoad;                                                     //@synthesize isFirstFeedLoad=_isFirstFeedLoad - In the implementation block
@property (nonatomic,retain) UIView * megaphoneView;                                                   //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,readonly) IGMainFeedMegaphoneProvider * megaphoneProvider;                        //@synthesize megaphoneProvider=_megaphoneProvider - In the implementation block
@property (nonatomic,readonly) IGDogfooderAlertBarPresenter * dogfooderAlertBarPresenter;              //@synthesize dogfooderAlertBarPresenter=_dogfooderAlertBarPresenter - In the implementation block
@property (nonatomic,retain) id<IGMegaphonePresenterProtocol> megaphonePresenter;                      //@synthesize megaphonePresenter=_megaphonePresenter - In the implementation block
@property (nonatomic,readonly) IGFeedViewControllerScrollPerfLogger * scrollPerfLogger;                //@synthesize scrollPerfLogger=_scrollPerfLogger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)megaphonePresenterDidDismiss:(id)arg1 ;
-(void)megaphonePresenterNeedsMegaphoneResize:(id)arg1 ;
-(void)setMegaphoneView:(UIView *)arg1 ;
-(UIView *)megaphoneView;
-(void)feedFollowPeopleCellDidDismissUnit:(id)arg1 ;
-(void)feedFollowPeopleCellDidChangeHeight:(id)arg1 ;
-(void)feedFollowPeopleCell:(id)arg1 didTapUser:(id)arg2 ;
-(void)feedFollowPeopleCellDidTapBanner:(id)arg1 ;
-(void)feedFollowPeopleCellDidTapFooterBanner:(id)arg1 ;
-(void)onApplicationWillEnterBackgroundNotification:(id)arg1 ;
-(IGDogfooderAlertBarPresenter *)dogfooderAlertBarPresenter;
-(void)onFeedItemWillPost:(id)arg1 ;
-(IGFeedViewControllerScrollPerfLogger *)scrollPerfLogger;
-(IGMainFeedMegaphoneProvider *)megaphoneProvider;
-(void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2 ;
-(void)megaphonePresenterPopViewController:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 presentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)megaphonePresenter:(id)arg1 handleURL:(id)arg2 ;
-(void)onUploadsUnarchived:(id)arg1 ;
-(void)onFeedItemShareStarted:(id)arg1 ;
-(void)onFeedItemPosted:(id)arg1 ;
-(void)onFeedItemFailedToUpload:(id)arg1 ;
-(void)uploadCellWantsDeletion:(id)arg1 ;
-(void)handleLoadedContentDidChange;
-(void)updateFeedAfterReloadingforFetchAction:(int)arg1 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)handleDidEndScrolling;
-(id)bugReportDescription;
-(void)setIsFirstFeedLoad:(char)arg1 ;
-(char)hasFakedPullToRefresh;
-(void)setHasFakedPullToRefresh:(char)arg1 ;
-(void)rebuildUploadsHeader;
-(NSArray *)uploadCellViews;
-(void)setUploadCellViews:(NSArray *)arg1 ;
-(void)updateCurrentMegaphone;
-(void)showFindFriendsViewIfNecessary;
-(void)logFeedLoadedOnce;
-(void)resetFollowAccountList;
-(IGFeedPhotoPromptView *)findFriendsFooterView;
-(void)friendRequestDetected:(id)arg1 ;
-(void)setFindFriendsFooterViewShowing:(char)arg1 ;
-(char)findFriendsFooterViewShowing;
-(char)isFirstFeedLoad;
-(void)setFindFriendsFooterView:(IGFeedPhotoPromptView *)arg1 ;
-(void)loadFollowAccountListFromResponse:(id)arg1 ;
-(IGFeedFollowPeopleCell *)feedFollowPeopleCell;
-(void)setFeedFollowPeopleCell:(IGFeedFollowPeopleCell *)arg1 ;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)setMegaphoneView:(id)arg1 animated:(char)arg2 ;
-(id)initWithFeedNetworkSource:(id)arg1 dogfooderAlertBarPresenter:(id)arg2 ;
-(char)canHostInlineGallery:(char)arg1 ;
-(void)findFriendsButtonTapped;
-(id<IGMegaphonePresenterProtocol>)megaphonePresenter;
-(void)setMegaphonePresenter:(id<IGMegaphonePresenterProtocol>)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

