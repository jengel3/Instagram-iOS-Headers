
#import <UIKit/UIViewController.h>
#import <Instagram/IGDimmedOverlayViewControllerDelegate.h>
#import <Instagram/IGExplorePromptTooltipPresenterDelegate.h>
#import <Instagram/IGInlineGalleryPresenter.h>
#import <Instagram/IGNavigationControllerDelegate.h>
#import <Instagram/IGSwitchUsersControllerDelegate.h>
#import <Instagram/IGToastViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class IGTabBar, IGTabBarButton, NSArray, IGUserSession, IGToastViewPopup, IGToastData, IGSwitchUsersController, UIWindow, IGDimmedOverlayViewController, IGInlineGalleryViewController, IGExplorePromptTooltipPresenter, IGNavigationController, IGNewsViewController, UIViewController, UIView, NSString;

@interface IGTabBarController : UIViewController <IGDimmedOverlayViewControllerDelegate, IGExplorePromptTooltipPresenterDelegate, IGInlineGalleryPresenter, IGNavigationControllerDelegate, IGSwitchUsersControllerDelegate, IGToastViewDelegate, UIGestureRecognizerDelegate> {

	IGTabBar* _tabBar;
	IGTabBarButton* _homeButton;
	IGTabBarButton* _popularButton;
	IGTabBarButton* _cameraButton;
	IGTabBarButton* _newsButton;
	IGTabBarButton* _profileButton;
	char _isPerformingTabBarAction;
	char _isDisplayingSwitchUsersTableView;
	NSArray* _viewControllers;
	int _selectedTabBarItem;
	IGUserSession* _userSession;
	IGToastViewPopup* _activityToastView;
	int _cameraButtonMode;
	IGToastData* _suppressedToastData;
	int _pendingRequestCount;
	IGSwitchUsersController* _switchUsersController;
	UIWindow* _dimmedOverlayWindow;
	IGDimmedOverlayViewController* _dimmedOverlayViewController;
	IGInlineGalleryViewController* _inlineGalleryController;
	IGExplorePromptTooltipPresenter* _tooltipPresenter;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                            //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic) char isPerformingTabBarAction;                                            //@synthesize isPerformingTabBarAction=_isPerformingTabBarAction - In the implementation block
@property (nonatomic,retain) IGToastViewPopup * activityToastView;                                     //@synthesize activityToastView=_activityToastView - In the implementation block
@property (nonatomic,readonly) IGNavigationController * newsNavigationController; 
@property (nonatomic,readonly) IGNewsViewController * newsViewController; 
@property (assign,nonatomic) int cameraButtonMode;                                                     //@synthesize cameraButtonMode=_cameraButtonMode - In the implementation block
@property (nonatomic,readonly) char shouldDelayToastPopup; 
@property (nonatomic,retain) IGToastData * suppressedToastData;                                        //@synthesize suppressedToastData=_suppressedToastData - In the implementation block
@property (assign,nonatomic) int pendingRequestCount;                                                  //@synthesize pendingRequestCount=_pendingRequestCount - In the implementation block
@property (nonatomic,retain) IGSwitchUsersController * switchUsersController;                          //@synthesize switchUsersController=_switchUsersController - In the implementation block
@property (nonatomic,retain) UIWindow * dimmedOverlayWindow;                                           //@synthesize dimmedOverlayWindow=_dimmedOverlayWindow - In the implementation block
@property (nonatomic,retain) IGDimmedOverlayViewController * dimmedOverlayViewController;              //@synthesize dimmedOverlayViewController=_dimmedOverlayViewController - In the implementation block
@property (assign,nonatomic) char isDisplayingSwitchUsersTableView;                                    //@synthesize isDisplayingSwitchUsersTableView=_isDisplayingSwitchUsersTableView - In the implementation block
@property (nonatomic,retain) IGInlineGalleryViewController * inlineGalleryController;                  //@synthesize inlineGalleryController=_inlineGalleryController - In the implementation block
@property (nonatomic,retain) IGExplorePromptTooltipPresenter * tooltipPresenter;                       //@synthesize tooltipPresenter=_tooltipPresenter - In the implementation block
@property (nonatomic,readonly) char isTabBarVisible; 
@property (nonatomic,readonly) int selectedTabBarItem;                                                 //@synthesize selectedTabBarItem=_selectedTabBarItem - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedViewController; 
@property (nonatomic,readonly) NSArray * viewControllers;                                              //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,readonly) UIView * tabBar; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prefetchAndFocusInboxInNewsTab;
-(void)setSelectedTabBarItem:(int)arg1 animated:(char)arg2 ;
-(id)initWithUserSession:(id)arg1 ;
-(void)inboxCountDidUpdate:(id)arg1 ;
-(void)settingsCountDidUpdate:(id)arg1 ;
-(void)toastCountsReceived:(id)arg1 ;
-(void)tabBarIsHiding;
-(void)badgeInfoDidupdate:(id)arg1 ;
-(void)newPromotionCreated;
-(void)didReceiveCopyrightViolation:(id)arg1 ;
-(void)navigateToSearchController;
-(void)setTooltipPresenter:(IGExplorePromptTooltipPresenter *)arg1 ;
-(IGExplorePromptTooltipPresenter *)tooltipPresenter;
-(char)isDisplayingSwitchUsersTableView;
-(void)animateSwitchUsersTableView;
-(void)popularButtonPressed;
-(void)popularButtonLongPressed:(id)arg1 ;
-(void)cameraButtonPressed;
-(void)cameraButtonLongPressed:(id)arg1 ;
-(void)newsButtonPressed;
-(void)profileButtonPressed;
-(void)profileButtonLongPressed:(id)arg1 ;
-(void)setNeedsAttention:(char)arg1 forItem:(int)arg2 ;
-(void)initializeInlineGalleryVCIfNeeded;
-(IGNavigationController *)newsNavigationController;
-(IGDimmedOverlayViewController *)dimmedOverlayViewController;
-(IGInlineGalleryViewController *)inlineGalleryController;
-(void)setInlineGalleryController:(IGInlineGalleryViewController *)arg1 ;
-(void)logNavigationEventForClickPoint:(id)arg1 ;
-(int)selectedTabBarItem;
-(char)presentInlineGalleryWithStyle:(int)arg1 animated:(char)arg2 ;
-(IGSwitchUsersController *)switchUsersController;
-(UIWindow *)dimmedOverlayWindow;
-(void)setIsDisplayingSwitchUsersTableView:(char)arg1 ;
-(char)itemNeedsAttention:(int)arg1 ;
-(void)updateTabBarButtonsToSelectedItem:(int)arg1 ;
-(void)hideActivityToastAnimated:(char)arg1 ;
-(char)isPerformingTabBarAction;
-(void)setIsPerformingTabBarAction:(char)arg1 ;
-(IGToastViewPopup *)activityToastView;
-(void)layoutToast;
-(void)hideActivityToastWithAnimation;
-(IGNewsViewController *)newsViewController;
-(char)shouldDelayToastPopup;
-(void)displaySuppressedActivityToastWhenApporiate;
-(IGToastData *)suppressedToastData;
-(void)displayActivityToastWithToastData:(id)arg1 ;
-(void)setSuppressedToastData:(IGToastData *)arg1 ;
-(void)removeInlineGalleryAsChildViewController;
-(char)showingActivityToast;
-(void)grayOverlayViewTapped;
-(void)dimmedOverlayViewControllerDidTapDimmedOverlay:(id)arg1 ;
-(void)directUserToSearchTab;
-(void)setAttentionOnExploreTab;
-(char)isInlineGalleryVisible;
-(float)referenceYPositionForInlineGallery:(id)arg1 ;
-(void)inlineGallery:(id)arg1 didUpdateToState:(int)arg2 ;
-(void)autoPromptInlineGallery:(id)arg1 ;
-(void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(char)arg3 ;
-(void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1 ;
-(void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2 ;
-(void)switchUsersControllerDidSelectAddAccountRow:(id)arg1 ;
-(void)toastViewTapped:(id)arg1 ;
-(void)initializeViewControllers;
-(char)isTabBarVisible;
-(void)moveDownTabBarToOffset:(float)arg1 ;
-(void)impressionDebugging:(id)arg1 ;
-(void)openURLInNewsTab:(id)arg1 ;
-(void)refetchUserProfile;
-(id)navigationControllerForTabBarItem:(int)arg1 ;
-(void)setActivityToastView:(IGToastViewPopup *)arg1 ;
-(int)cameraButtonMode;
-(void)setCameraButtonMode:(int)arg1 ;
-(int)pendingRequestCount;
-(void)setPendingRequestCount:(int)arg1 ;
-(void)setSwitchUsersController:(IGSwitchUsersController *)arg1 ;
-(void)setDimmedOverlayWindow:(UIWindow *)arg1 ;
-(void)setDimmedOverlayViewController:(IGDimmedOverlayViewController *)arg1 ;
-(void)dealloc;
-(char)shouldAutorotate;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(UIView *)tabBar;
-(NSArray *)viewControllers;
-(UIViewController *)selectedViewController;
-(IGUserSession *)userSession;
-(void)homeButtonPressed;
@end

