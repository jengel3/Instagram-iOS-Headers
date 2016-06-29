
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGFeedStatusRestrictedViewDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGSwitchUsersControllerDelegate.h>
#import <Instagram/IGDirectedNUXViewDelegate.h>
#import <Instagram/IGMegaphonePresenterDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGProfilePicturePeekDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGCTAPresenterDelegate.h>
#import <Instagram/IGBusinessConversionDelegate.h>
#import <Instagram/IGPopoverControllerDelegate.h>
#import <Instagram/IGTranslationNetworkDataSourceDelegate.h>
#import <Instagram/IGTopAccountProfileNUXViewDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGUserDetailHeaderViewDelegate.h>

@protocol IGMegaphonePresenterProtocol, IGCTAPresenterProtocol, IGCTAPresentationViewType;
@class UIBarButtonItem, IGUser, IGCTAPresenterContext, IGUserSession, IGUserDetailHeaderView, IGNuxTapOnCameraView, UIView, UILabel, NSDictionary, IGFollowButton, NSArray, IGChevronTitleButton, IGSwitchUsersController, UIImageView, IGUserDetailPreviewingHandler, IGFeedItemPreviewingHandler, IGDirectedNUXView, IGProfilePicturePeekOverlay, IGProfilePictureHelper, IGTombstoneView, UITapGestureRecognizer, IGTranslationNetworkDataSource, IGInsightsLoggingHelper, NSString;

@interface IGUserDetailViewController : IGFeedViewController_DEPRECATED <IGFeedStatusRestrictedViewDelegate, IGRaindropAnalyticsDelegate, IGSwitchUsersControllerDelegate, IGDirectedNUXViewDelegate, IGMegaphonePresenterDelegate, IGProfilePictureHelperDelegate, IGProfilePicturePeekDelegate, IGActionSheetDelegate, IGCTAPresenterDelegate, IGBusinessConversionDelegate, IGPopoverControllerDelegate, IGTranslationNetworkDataSourceDelegate, IGTopAccountProfileNUXViewDelegate, IGFollowButtonDelegate, IGAnalyticsModule, IGUserDetailHeaderViewDelegate> {

	UIBarButtonItem* _configureBarButton;
	UIBarButtonItem* _insightsBarButton;
	char _needsFeedRefresh;
	char _hasLoggedView;
	char _displayingSwitchUsersTableView;
	char _currentlyShowingProfileTombstone;
	char _showEasyReportingActionSheetForUser;
	char _showEasyReportingActionSheetForProfilePic;
	char _displayFollowButtonNavigationBar;
	IGUser* _user;
	IGCTAPresenterContext* _ctaPresenterContext;
	IGUserSession* _userSession;
	IGUserDetailHeaderView* _headerView;
	IGNuxTapOnCameraView* _emptyFeedNUX;
	UIView* _blockedFooterView;
	UILabel* _emptyFeedLabel;
	NSDictionary* _userRestrictionData;
	UIBarButtonItem* _followBarButton;
	IGFollowButton* _navBarFollowButton;
	UIView* _genericHeaderMegaphoneView;
	NSArray* _accessibleElements;
	UIView* _overlayViewForTabBar;
	UIView* _overlayForMainView;
	IGChevronTitleButton* _titleButton;
	IGSwitchUsersController* _switchUsersController;
	UIImageView* _attentionMarkView;
	IGUserDetailPreviewingHandler* _userDetailPreviewDelegate;
	IGFeedItemPreviewingHandler* _thumbnailPreviewDelegate;
	IGDirectedNUXView* _NUXView;
	IGProfilePicturePeekOverlay* _profilePeekOverlay;
	IGProfilePictureHelper* _profilePictureHelper;
	IGTombstoneView* _tombstoneView;
	UITapGestureRecognizer* _mainViewNUXDismissTapGuestureRecognizer;
	UITapGestureRecognizer* _titleViewNUXDismissTapGuestureRecognizer;
	id<IGMegaphonePresenterProtocol> _megaphonePresenter;
	id<IGCTAPresenterProtocol> _ctaPresenter;
	UIView*<IGCTAPresentationViewType> _ctaView;
	UIBarButtonItem* _envSwitchButtonItem;
	float _insightsIconXPosition;
	IGTranslationNetworkDataSource* _translateDataSource;
	IGInsightsLoggingHelper* _insightsloggingHelper;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                                  //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGUserDetailHeaderView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGNuxTapOnCameraView * emptyFeedNUX;                                            //@synthesize emptyFeedNUX=_emptyFeedNUX - In the implementation block
@property (assign,nonatomic) char needsFeedRefresh;                                                          //@synthesize needsFeedRefresh=_needsFeedRefresh - In the implementation block
@property (assign,nonatomic) char hasLoggedView;                                                             //@synthesize hasLoggedView=_hasLoggedView - In the implementation block
@property (nonatomic,retain) UIView * blockedFooterView;                                                     //@synthesize blockedFooterView=_blockedFooterView - In the implementation block
@property (nonatomic,retain) UILabel * emptyFeedLabel;                                                       //@synthesize emptyFeedLabel=_emptyFeedLabel - In the implementation block
@property (nonatomic,retain) NSDictionary * userRestrictionData;                                             //@synthesize userRestrictionData=_userRestrictionData - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * followBarButton;                                              //@synthesize followBarButton=_followBarButton - In the implementation block
@property (nonatomic,retain) IGFollowButton * navBarFollowButton;                                            //@synthesize navBarFollowButton=_navBarFollowButton - In the implementation block
@property (nonatomic,retain) UIView * genericHeaderMegaphoneView;                                            //@synthesize genericHeaderMegaphoneView=_genericHeaderMegaphoneView - In the implementation block
@property (nonatomic,retain) NSArray * accessibleElements;                                                   //@synthesize accessibleElements=_accessibleElements - In the implementation block
@property (nonatomic,retain) UIView * overlayViewForTabBar;                                                  //@synthesize overlayViewForTabBar=_overlayViewForTabBar - In the implementation block
@property (nonatomic,retain) UIView * overlayForMainView;                                                    //@synthesize overlayForMainView=_overlayForMainView - In the implementation block
@property (nonatomic,retain) IGChevronTitleButton * titleButton;                                             //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) IGSwitchUsersController * switchUsersController;                                //@synthesize switchUsersController=_switchUsersController - In the implementation block
@property (assign,nonatomic) char displayingSwitchUsersTableView;                                            //@synthesize displayingSwitchUsersTableView=_displayingSwitchUsersTableView - In the implementation block
@property (nonatomic,retain) UIImageView * attentionMarkView;                                                //@synthesize attentionMarkView=_attentionMarkView - In the implementation block
@property (nonatomic,retain) IGUserDetailPreviewingHandler * userDetailPreviewDelegate;                      //@synthesize userDetailPreviewDelegate=_userDetailPreviewDelegate - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * thumbnailPreviewDelegate;                         //@synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate - In the implementation block
@property (nonatomic,retain) IGDirectedNUXView * NUXView;                                                    //@synthesize NUXView=_NUXView - In the implementation block
@property (nonatomic,retain) IGProfilePicturePeekOverlay * profilePeekOverlay;                               //@synthesize profilePeekOverlay=_profilePeekOverlay - In the implementation block
@property (nonatomic,retain) IGProfilePictureHelper * profilePictureHelper;                                  //@synthesize profilePictureHelper=_profilePictureHelper - In the implementation block
@property (nonatomic,retain) IGTombstoneView * tombstoneView;                                                //@synthesize tombstoneView=_tombstoneView - In the implementation block
@property (assign,nonatomic) char currentlyShowingProfileTombstone;                                          //@synthesize currentlyShowingProfileTombstone=_currentlyShowingProfileTombstone - In the implementation block
@property (assign,nonatomic) char showEasyReportingActionSheetForUser;                                       //@synthesize showEasyReportingActionSheetForUser=_showEasyReportingActionSheetForUser - In the implementation block
@property (assign,nonatomic) char showEasyReportingActionSheetForProfilePic;                                 //@synthesize showEasyReportingActionSheetForProfilePic=_showEasyReportingActionSheetForProfilePic - In the implementation block
@property (assign,nonatomic) char displayFollowButtonNavigationBar;                                          //@synthesize displayFollowButtonNavigationBar=_displayFollowButtonNavigationBar - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * mainViewNUXDismissTapGuestureRecognizer;               //@synthesize mainViewNUXDismissTapGuestureRecognizer=_mainViewNUXDismissTapGuestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * titleViewNUXDismissTapGuestureRecognizer;              //@synthesize titleViewNUXDismissTapGuestureRecognizer=_titleViewNUXDismissTapGuestureRecognizer - In the implementation block
@property (nonatomic,retain) id<IGMegaphonePresenterProtocol> megaphonePresenter;                            //@synthesize megaphonePresenter=_megaphonePresenter - In the implementation block
@property (nonatomic,retain) id<IGCTAPresenterProtocol> ctaPresenter;                                        //@synthesize ctaPresenter=_ctaPresenter - In the implementation block
@property (nonatomic,retain) UIView*<IGCTAPresentationViewType> ctaView;                                     //@synthesize ctaView=_ctaView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * envSwitchButtonItem;                                          //@synthesize envSwitchButtonItem=_envSwitchButtonItem - In the implementation block
@property (assign,nonatomic) float insightsIconXPosition;                                                    //@synthesize insightsIconXPosition=_insightsIconXPosition - In the implementation block
@property (nonatomic,retain) IGTranslationNetworkDataSource * translateDataSource;                           //@synthesize translateDataSource=_translateDataSource - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * insightsloggingHelper;                                //@synthesize insightsloggingHelper=_insightsloggingHelper - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                                                //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGCTAPresenterContext * ctaPresenterContext;                                    //@synthesize ctaPresenterContext=_ctaPresenterContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)onFriendStatusReceived:(id)arg1 ;
-(void)didTapCloseButtonWithTopAccountNUXView:(id)arg1 ;
-(void)didTapGetStartedButtonWithTopAccountNUXView:(id)arg1 ;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(IGDirectedNUXView *)NUXView;
-(void)setNUXView:(IGDirectedNUXView *)arg1 ;
-(id)analyticsExtras;
-(NSArray *)accessibleElements;
-(void)megaphonePresenterDidDismiss:(id)arg1 ;
-(void)megaphonePresenterNeedsMegaphoneResize:(id)arg1 ;
-(void)setThumbnailPreviewDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGFeedItemPreviewingHandler *)thumbnailPreviewDelegate;
-(id)initWithUser:(id)arg1 userSession:(id)arg2 ;
-(void)setAccessibleElements:(NSArray *)arg1 ;
-(IGTombstoneView *)tombstoneView;
-(void)setTombstoneView:(IGTombstoneView *)arg1 ;
-(void)feedToggle:(id)arg1 selectedButton:(int)arg2 ;
-(void)setCtaPresenterContext:(IGCTAPresenterContext *)arg1 ;
-(void)translationNetworkDataSource:(id)arg1 didLoadTranslations:(id)arg2 ;
-(void)translationNetworkDataSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2 ;
-(void)megaphonePresenterPopViewController:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 presentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)megaphonePresenter:(id)arg1 handleURL:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)collectionViewControllerDidStartPullToRefreshAction:(id)arg1 ;
-(void)collectionViewController:(id)arg1 didScrollWithDistanceToEndOfContent:(float)arg2 isScrollingDown:(char)arg3 ;
-(void)feedStatusViewMarkedUnderageWithResponse:(id)arg1 ;
-(void)feedStatusViewMarkedOverage;
-(id)createTombstoneView;
-(void)didDismiss:(id)arg1 ;
-(void)badgeInfoDidupdate:(id)arg1 ;
-(void)animateSwitchUsersTableView;
-(IGSwitchUsersController *)switchUsersController;
-(void)refreshData;
-(void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1 ;
-(void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2 ;
-(void)switchUsersControllerDidSelectAddAccountRow:(id)arg1 ;
-(void)setSwitchUsersController:(IGSwitchUsersController *)arg1 ;
-(void)directedNUXViewDidTap:(id)arg1 ;
-(void)logProfilePeekEvent:(id)arg1 ;
-(void)popToProfilePeekOverlay;
-(void)hideToolTip;
-(void)setTranslateDataSource:(IGTranslationNetworkDataSource *)arg1 ;
-(IGTranslationNetworkDataSource *)translateDataSource;
-(char)isShowingCurrentUser;
-(void)showProfileCompletionNux;
-(char)isProfilePeekExperimentEnabled;
-(void)setUserDetailPreviewDelegate:(IGUserDetailPreviewingHandler *)arg1 ;
-(IGUserDetailPreviewingHandler *)userDetailPreviewDelegate;
-(void)configureUserDetailFooterView;
-(void)updateScrollFromContextualFeed;
-(char)needsFeedRefresh;
-(void)setNeedsFeedRefresh:(char)arg1 ;
-(void)showPrereleaseIcon;
-(void)updateTitleButtonSize;
-(void)displayTombstoneView;
-(void)logProfileView;
-(void)displayCTAViewForLifeCycleTime:(int)arg1 ;
-(void)showTopAccountInsightsNUXIfNecessary;
-(void)fetchAdditionalUserData;
-(void)showAccountSwitchingNUX;
-(void)showInsightsNUXIfNecessary;
-(void)presentOrTearDownCameraNUX;
-(id<IGMegaphonePresenterProtocol>)megaphonePresenter;
-(IGProfilePicturePeekOverlay *)profilePeekOverlay;
-(char)displayingSwitchUsersTableView;
-(char)currentlyShowingProfileTombstone;
-(void)layoutTombstoneView;
-(char)shouldShowCameraNux;
-(void)showEmptyFeedNux;
-(void)dismissNUXAnimated:(char)arg1 ;
-(IGNuxTapOnCameraView *)emptyFeedNUX;
-(UIImageView *)attentionMarkView;
-(void)setUserRestrictionData:(NSDictionary *)arg1 ;
-(UIView*<IGCTAPresentationViewType>)ctaView;
-(id)postsFeedViewControllerForIndexPath:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 ;
-(void)displayFollowButtonInNavigationBar:(char)arg1 ;
-(NSDictionary *)userRestrictionData;
-(UIView *)blockedFooterView;
-(void)setBlockedFooterView:(UIView *)arg1 ;
-(void)overlayViewTapped:(id)arg1 ;
-(void)updateConfigureButtonsForCurrentUser;
-(void)setMegaphonePresenter:(id<IGMegaphonePresenterProtocol>)arg1 ;
-(UIView *)genericHeaderMegaphoneView;
-(void)setGenericHeaderMegaphoneView:(UIView *)arg1 ;
-(void)updateNetworkSource;
-(void)onUserInfoReceived:(id)arg1 ;
-(void)updateFeedRestrictionData:(id)arg1 ;
-(char)shouldShowFriendStatus;
-(void)checkFriendshipStatus;
-(void)presentFriendshipActionSheetFromTitleBar;
-(void)onFriendStatusFailed:(id)arg1 ;
-(void)onSpamMegaphoneFlaggedUser:(id)arg1 ;
-(void)onNeedsFullReload;
-(void)dismissNUX:(id)arg1 ;
-(void)pushAccountSettings;
-(id)insightsBarButton;
-(void)setInsightsIconXPosition:(float)arg1 ;
-(char)displayFollowButtonNavigationBar;
-(void)setDisplayFollowButtonNavigationBar:(char)arg1 ;
-(UIBarButtonItem *)followBarButton;
-(id)createFollowBarButton;
-(void)setFollowBarButton:(UIBarButtonItem *)arg1 ;
-(void)setSwitchUsersTitleView;
-(char)hasLoggedView;
-(void)setHasLoggedView:(char)arg1 ;
-(CGRect)profilePicRect;
-(void)preparePeekForPresentation;
-(void)presentFriendshipActionSheetWithOnlyProfilePictureOptions:(char)arg1 ;
-(void)switchUsersControllerResetTableView:(id)arg1 ;
-(IGFollowButton *)navBarFollowButton;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 clickPoint:(id)arg4 ;
-(void)pushInsightsFromNavigationBar;
-(void)setCurrentlyShowingProfileTombstone:(char)arg1 ;
-(void)tombstoneDidTapShowProfile;
-(void)setShowEasyReportingActionSheetForProfilePic:(char)arg1 ;
-(void)setShowEasyReportingActionSheetForUser:(char)arg1 ;
-(char)showEasyReportingActionSheetForUser;
-(char)showEasyReportingActionSheetForProfilePic;
-(UIBarButtonItem *)envSwitchButtonItem;
-(void)togglePrerelease:(id)arg1 ;
-(void)setEnvSwitchButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setEmptyFeedNUX:(IGNuxTapOnCameraView *)arg1 ;
-(UIView *)overlayViewForTabBar;
-(UIView *)overlayForMainView;
-(void)setDisplayingSwitchUsersTableView:(char)arg1 ;
-(void)showAccountSwitchingNUXInner;
-(void)showInsightsNUXInner;
-(float)insightsIconXPosition;
-(UITapGestureRecognizer *)titleViewNUXDismissTapGuestureRecognizer;
-(UITapGestureRecognizer *)mainViewNUXDismissTapGuestureRecognizer;
-(void)setInsightsloggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(IGInsightsLoggingHelper *)insightsloggingHelper;
-(IGCTAPresenterContext *)ctaPresenterContext;
-(id<IGCTAPresenterProtocol>)ctaPresenter;
-(void)setCtaPresenter:(id<IGCTAPresenterProtocol>)arg1 ;
-(void)setCtaView:(UIView*<IGCTAPresentationViewType>)arg1 ;
-(void)ctaPresenterDidDismiss:(id)arg1 ;
-(void)businessConversionDidCompleteFlow;
-(void)seeAllButtonTappedWithView:(id)arg1 ;
-(void)profilePictureChangeOptionChosen:(int)arg1 ;
-(void)didTapProfileCompletionNUX;
-(void)didTapTranslateBiography;
-(UILabel *)emptyFeedLabel;
-(void)setEmptyFeedLabel:(UILabel *)arg1 ;
-(void)setNavBarFollowButton:(IGFollowButton *)arg1 ;
-(void)setOverlayViewForTabBar:(UIView *)arg1 ;
-(void)setOverlayForMainView:(UIView *)arg1 ;
-(void)setAttentionMarkView:(UIImageView *)arg1 ;
-(void)setProfilePeekOverlay:(IGProfilePicturePeekOverlay *)arg1 ;
-(void)setMainViewNUXDismissTapGuestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTitleViewNUXDismissTapGuestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)peekOverlayDidPresent:(id)arg1 ;
-(void)peekOverlayDidDismiss:(id)arg1 ;
-(void)peekOverlayUserDidTapDismiss:(id)arg1 ;
-(void)peekOverlayUserDidTapChange:(id)arg1 ;
-(void)peekOverlayUserDidTapMenu:(id)arg1 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)setProfilePictureHelper:(IGProfilePictureHelper *)arg1 ;
-(IGProfilePictureHelper *)profilePictureHelper;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)setTitleButton:(IGChevronTitleButton *)arg1 ;
-(IGChevronTitleButton *)titleButton;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(IGUserDetailHeaderView *)headerView;
-(void)setHeaderView:(IGUserDetailHeaderView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IGUserSession *)userSession;
@end

