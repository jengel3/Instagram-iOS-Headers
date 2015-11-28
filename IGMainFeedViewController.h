
#import <Instagram/IGFeedViewController.h>
#import <Instagram/IGMainFeedUploadCellContentViewDelegate.h>
#import <Instagram/IGFeedFollowPeopleCellDelegate.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/FBAnimationPerformanceTrackerDelegate.h>
#import <Instagram/IGDogfooderMegaphoneHelperDelegate.h>

@class UIView, UIImageView, IGInboxButton, NSArray, IGFeedPhotoPromptView, IGFeedFollowPeopleCell, NSDictionary, IGGenericMegaphoneView, FBAnimationPerformanceTracker, IGDogfooderMegaphoneHelper, NSString;

@interface IGMainFeedViewController : IGFeedViewController <IGMainFeedUploadCellContentViewDelegate, IGFeedFollowPeopleCellDelegate, IGGenericMegaphoneViewDelegate, FBAnimationPerformanceTrackerDelegate, IGDogfooderMegaphoneHelperDelegate> {

	char _hasFakedPullToRefresh;
	char _isFirstFeedLoad;
	UIView* _headerContainer;
	UIImageView* _logoImageView;
	UIView* _inboxButtonContainer;
	IGInboxButton* _inboxButton;
	NSArray* _uploadCellViews;
	IGFeedPhotoPromptView* _findFriendsFooterView;
	NSArray* _followAccountList;
	IGFeedFollowPeopleCell* _feedFollowPeopleCell;
	NSDictionary* _serverMegaphoneData;
	IGGenericMegaphoneView* _megaphoneView;
	FBAnimationPerformanceTracker* _apTracker;
	IGDogfooderMegaphoneHelper* _dogfooderMegaphoneHelper;

}

@property (nonatomic,retain) UIView * headerContainer;                                           //@synthesize headerContainer=_headerContainer - In the implementation block
@property (nonatomic,retain) UIImageView * logoImageView;                                        //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UIView * inboxButtonContainer;                                      //@synthesize inboxButtonContainer=_inboxButtonContainer - In the implementation block
@property (nonatomic,retain) IGInboxButton * inboxButton;                                        //@synthesize inboxButton=_inboxButton - In the implementation block
@property (nonatomic,retain) NSArray * uploadCellViews;                                          //@synthesize uploadCellViews=_uploadCellViews - In the implementation block
@property (assign,nonatomic) char hasFakedPullToRefresh;                                         //@synthesize hasFakedPullToRefresh=_hasFakedPullToRefresh - In the implementation block
@property (nonatomic,retain) IGFeedPhotoPromptView * findFriendsFooterView;                      //@synthesize findFriendsFooterView=_findFriendsFooterView - In the implementation block
@property (nonatomic,retain) NSArray * followAccountList;                                        //@synthesize followAccountList=_followAccountList - In the implementation block
@property (nonatomic,retain) IGFeedFollowPeopleCell * feedFollowPeopleCell;                      //@synthesize feedFollowPeopleCell=_feedFollowPeopleCell - In the implementation block
@property (assign,nonatomic) char isFirstFeedLoad;                                               //@synthesize isFirstFeedLoad=_isFirstFeedLoad - In the implementation block
@property (nonatomic,retain) NSDictionary * serverMegaphoneData;                                 //@synthesize serverMegaphoneData=_serverMegaphoneData - In the implementation block
@property (nonatomic,retain) IGGenericMegaphoneView * megaphoneView;                             //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,retain) FBAnimationPerformanceTracker * apTracker;                          //@synthesize apTracker=_apTracker - In the implementation block
@property (nonatomic,retain) IGDogfooderMegaphoneHelper * dogfooderMegaphoneHelper;              //@synthesize dogfooderMegaphoneHelper=_dogfooderMegaphoneHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)enableNavState;
-(void)setMegaphoneView:(IGGenericMegaphoneView *)arg1 ;
-(IGGenericMegaphoneView *)megaphoneView;
-(void)megaphoneDidDismiss:(id)arg1 ;
-(void)megaphone:(id)arg1 didOpenURL:(id)arg2 ;
-(char)hasFakedPullToRefresh;
-(void)setHasFakedPullToRefresh:(char)arg1 ;
-(void)handleLoadedContentDidChange;
-(void)reportDurationInMS:(int)arg1 smallDropEvent:(double)arg2 largeDropEvent:(double)arg3 ;
-(void)reportStackTrace:(id)arg1 withSlide:(id)arg2 frameTime:(int)arg3 ;
-(FBAnimationPerformanceTracker *)apTracker;
-(void)setApTracker:(FBAnimationPerformanceTracker *)arg1 ;
-(NSArray *)followAccountList;
-(void)feedFollowPeopleCellDidDismissUnit:(id)arg1 ;
-(void)feedFollowPeopleCellDidChangeHeight:(id)arg1 ;
-(void)feedFollowPeopleCell:(id)arg1 didTapUser:(id)arg2 ;
-(void)feedFollowPeopleCellDidTapBanner:(id)arg1 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)handleDidEndScrolling;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(char)shouldHideFeedItem:(id)arg1 ;
-(char)allowSponsoredContextForFeedItem:(id)arg1 ;
-(id)bugReportDescription;
-(UIView *)headerContainer;
-(UIImageView *)logoImageView;
-(UIView *)inboxButtonContainer;
-(void)setIsFirstFeedLoad:(char)arg1 ;
-(void)onFeedItemShareStarted:(id)arg1 ;
-(void)onFeedItemPosted:(id)arg1 ;
-(void)onFeedItemFailedToUpload:(id)arg1 ;
-(void)onFeedItemHidden:(id)arg1 ;
-(void)rebuildUploadsHeader;
-(void)onInboxTapped:(id)arg1 ;
-(IGInboxButton *)inboxButton;
-(NSArray *)uploadCellViews;
-(void)setUploadCellViews:(NSArray *)arg1 ;
-(void)setServerMegaphoneData:(NSDictionary *)arg1 ;
-(char)shouldShowFavoritesMegaphone;
-(void)showFavoritesMegaphone;
-(char)shouldShowFBEmployeeProdSoftNag;
-(void)showDogfooderSoftNagMegaphone;
-(void)loadFollowAccountListFromResponse:(id)arg1 ;
-(void)showFindFriendsViewIfNecessary;
-(void)logFeedLoadedOnce;
-(IGFeedFollowPeopleCell *)feedFollowPeopleCell;
-(void)setFollowAccountList:(NSArray *)arg1 ;
-(void)findFriendsButtonTapped;
-(IGFeedPhotoPromptView *)findFriendsFooterView;
-(void)friendRequestDetected:(id)arg1 ;
-(void)setMegaphoneView:(id)arg1 animated:(char)arg2 ;
-(IGDogfooderMegaphoneHelper *)dogfooderMegaphoneHelper;
-(char)isFirstFeedLoad;
-(void)uploadCellWantsDeletion:(id)arg1 ;
-(void)dogfooderSoftNagMegaphoneHelper:(id)arg1 megaphoneViewDidDismiss:(id)arg2 ;
-(id)initWithFeedNetworkSource:(id)arg1 ;
-(void)updateHeaderWithPercentVisible:(float)arg1 ;
-(char)shouldShowDirectShareNUX;
-(void)onFacebookAuthSuccess;
-(id)animationPerformanceTracker;
-(void)setHeaderContainer:(UIView *)arg1 ;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(void)setInboxButtonContainer:(UIView *)arg1 ;
-(void)setInboxButton:(IGInboxButton *)arg1 ;
-(void)setFindFriendsFooterView:(IGFeedPhotoPromptView *)arg1 ;
-(void)setFeedFollowPeopleCell:(IGFeedFollowPeopleCell *)arg1 ;
-(NSDictionary *)serverMegaphoneData;
-(void)setDogfooderMegaphoneHelper:(IGDogfooderMegaphoneHelper *)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

