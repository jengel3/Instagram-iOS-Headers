
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGAutocompleteControllerDelegate.h>
#import <Instagram/IGShareModeDropdownViewDataSource.h>
#import <Instagram/IGShareModeDropdownViewDelegate.h>
#import <Instagram/IGCaptionCellDelegate.h>
#import <Instagram/IGMediaRequestDelegate.h>
#import <Instagram/IGDirectedNUXViewDelegate.h>
#import <Instagram/IGCameraViewControllerProtocol.h>
#import <Instagram/IGAnalyticsModule.h>

@protocol IGShareViewControllerDelegate, IGShareManager;
@class IGKVOHandle, IGMediaMetadata, IGChevronTitleButton, UIBarButtonItem, IGShareModeDropdownView, UIViewController, IGBroadcastShareManager, IGDirectMainCamShareViewController, IGShareSwitchView, IGCaptionCell, IGAutocompleteController, UIView, IGShareToggle, IGShareButton, IGUserSession, IGDirectedNUXView, UITapGestureRecognizer, NSString, IGCameraNavigationController;

@interface IGShareViewController : IGViewController <IGAutocompleteControllerDelegate, IGShareModeDropdownViewDataSource, IGShareModeDropdownViewDelegate, IGCaptionCellDelegate, IGMediaRequestDelegate, IGDirectedNUXViewDelegate, IGCameraViewControllerProtocol, IGAnalyticsModule> {

	IGKVOHandle* _readyToShareObserver;
	IGKVOHandle* _scrollViewObserver;
	char _isInCaptionMode;
	char _renderInProgress;
	char _shouldUseNavBarShareButton;
	char _shouldUseDropDownTitleButton;
	char _shouldShowDropdownNUX;
	char _canDisableShareScreen;
	char _shareScreenEnabled;
	char _captionTextNeedsToBeClearedOnBackOut;
	char _wasInitializedFromDraft;
	id<IGShareViewControllerDelegate> _delegate;
	IGMediaMetadata* _mediaMetadata;
	int _shareMode;
	IGChevronTitleButton* _chevronTitleButton;
	UIBarButtonItem* _shareItem;
	IGShareModeDropdownView* _shareModeDropdownView;
	UIViewController*<IGShareManager> _shareManager;
	IGBroadcastShareManager* _broadcastShareManager;
	IGDirectMainCamShareViewController* _directShareManager;
	IGShareSwitchView* _shareSwitchView;
	IGCaptionCell* _captionCell;
	IGAutocompleteController* _autocompleteController;
	UIView* _headerView;
	UIView* _topShadowView;
	IGShareToggle* _legacyShareToggle;
	IGShareButton* _bottomShareButton;
	UIView* _overlayView;
	IGUserSession* _userSession;
	IGDirectedNUXView* _shareDropdownNUXView;
	UITapGestureRecognizer* _mainViewShareDropdownNUXDismissTapGuestureRecognizer;
	UITapGestureRecognizer* _titleViewShareDropdownNUXDismissTapGuestureRecognizer;

}

@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                                             //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (assign,nonatomic) int shareMode;                                                                               //@synthesize shareMode=_shareMode - In the implementation block
@property (nonatomic,retain) IGChevronTitleButton * chevronTitleButton;                                                   //@synthesize chevronTitleButton=_chevronTitleButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareItem;                                                                 //@synthesize shareItem=_shareItem - In the implementation block
@property (nonatomic,retain) IGShareModeDropdownView * shareModeDropdownView;                                             //@synthesize shareModeDropdownView=_shareModeDropdownView - In the implementation block
@property (nonatomic,retain) UIViewController*<IGShareManager> shareManager;                                              //@synthesize shareManager=_shareManager - In the implementation block
@property (nonatomic,retain) IGBroadcastShareManager * broadcastShareManager;                                             //@synthesize broadcastShareManager=_broadcastShareManager - In the implementation block
@property (nonatomic,retain) IGDirectMainCamShareViewController * directShareManager;                                     //@synthesize directShareManager=_directShareManager - In the implementation block
@property (nonatomic,retain) IGShareSwitchView * shareSwitchView;                                                         //@synthesize shareSwitchView=_shareSwitchView - In the implementation block
@property (nonatomic,retain) IGCaptionCell * captionCell;                                                                 //@synthesize captionCell=_captionCell - In the implementation block
@property (nonatomic,retain) IGAutocompleteController * autocompleteController;                                           //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * topShadowView;                                                                      //@synthesize topShadowView=_topShadowView - In the implementation block
@property (nonatomic,retain) IGShareToggle * legacyShareToggle;                                                           //@synthesize legacyShareToggle=_legacyShareToggle - In the implementation block
@property (nonatomic,retain) IGShareButton * bottomShareButton;                                                           //@synthesize bottomShareButton=_bottomShareButton - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                                                               //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGDirectedNUXView * shareDropdownNUXView;                                                    //@synthesize shareDropdownNUXView=_shareDropdownNUXView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * mainViewShareDropdownNUXDismissTapGuestureRecognizer;               //@synthesize mainViewShareDropdownNUXDismissTapGuestureRecognizer=_mainViewShareDropdownNUXDismissTapGuestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * titleViewShareDropdownNUXDismissTapGuestureRecognizer;              //@synthesize titleViewShareDropdownNUXDismissTapGuestureRecognizer=_titleViewShareDropdownNUXDismissTapGuestureRecognizer - In the implementation block
@property (nonatomic,readonly) char shouldUseNavBarShareButton;                                                           //@synthesize shouldUseNavBarShareButton=_shouldUseNavBarShareButton - In the implementation block
@property (nonatomic,readonly) char shouldUseDropDownTitleButton;                                                         //@synthesize shouldUseDropDownTitleButton=_shouldUseDropDownTitleButton - In the implementation block
@property (nonatomic,readonly) char shouldShowDropdownNUX;                                                                //@synthesize shouldShowDropdownNUX=_shouldShowDropdownNUX - In the implementation block
@property (assign,nonatomic) char canDisableShareScreen;                                                                  //@synthesize canDisableShareScreen=_canDisableShareScreen - In the implementation block
@property (assign,nonatomic) char shareScreenEnabled;                                                                     //@synthesize shareScreenEnabled=_shareScreenEnabled - In the implementation block
@property (assign,nonatomic) char captionTextNeedsToBeClearedOnBackOut;                                                   //@synthesize captionTextNeedsToBeClearedOnBackOut=_captionTextNeedsToBeClearedOnBackOut - In the implementation block
@property (assign,nonatomic) char wasInitializedFromDraft;                                                                //@synthesize wasInitializedFromDraft=_wasInitializedFromDraft - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareViewControllerDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char renderInProgress;                                                                       //@synthesize renderInProgress=_renderInProgress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGCameraNavigationController * navController; 
-(id)analyticsModule;
-(id)ig_keyViewControllers;
-(id)initWithDraft:(id)arg1 userSession:(id)arg2 ;
-(char)overlayIsOpaque;
-(char)prefersNavbarBottomBorderHidden;
-(id)initWithMediaMetadata:(id)arg1 userSession:(id)arg2 ;
-(void)setRenderInProgress:(char)arg1 ;
-(void)onCancelButtonTapped;
-(void)setChevronTitleButton:(IGChevronTitleButton *)arg1 ;
-(IGChevronTitleButton *)chevronTitleButton;
-(IGAutocompleteController *)autocompleteController;
-(void)autocompleteController:(id)arg1 willShowTableView:(id)arg2 ;
-(void)autocompleteController:(id)arg1 willHideTableView:(id)arg2 ;
-(void)autocompleteControllerDidAutocomplete:(id)arg1 ;
-(void)autocompleteController:(id)arg1 atIndex:(int)arg2 isUserSearch:(char)arg3 allResults:(id)arg4 ;
-(id)analyticsMetadata;
-(id)initWithMediaMetadata:(id)arg1 canDisableShareScreen:(char)arg2 userSession:(id)arg3 ;
-(void)updateNavigationItemWithModeTitle:(id)arg1 animated:(char)arg2 isEnteringCaptionMode:(char)arg3 ;
-(void)stopProgressHUDIfSlowDevice;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(UIViewController*<IGShareManager>)shareManager;
-(char)canDisableShareScreen;
-(int)shareMode;
-(void)setShareScreenEnabled:(char)arg1 ;
-(char)wasInitializedFromDraft;
-(IGCaptionCell *)captionCell;
-(IGShareSwitchView *)shareSwitchView;
-(void)onOverlayViewTapped:(id)arg1 ;
-(CGRect)viewRectMinusNavigationBarAndShareButton;
-(void)updateShareButton;
-(void)updateCaptionOffset;
-(void)updateShareSwitchViewOffset;
-(char)shouldUseNavBarShareButton;
-(char)shareScreenEnabled;
-(void)onShareButtonTapped;
-(void)setShareItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)shareItem;
-(char)isSharingProfileMedia;
-(IGShareButton *)bottomShareButton;
-(CGRect)viewRectMinusNavigationBar;
-(char)shouldUseDropDownTitleButton;
-(void)setCaptionTextNeedsToBeClearedOnBackOut:(char)arg1 ;
-(char)renderInProgress;
-(void)startProgressHUDIfSlowDevice;
-(void)setBottomShareButton:(IGShareButton *)arg1 ;
-(void)onChevronTitleButtonTapped;
-(void)setShareModeDropdownView:(IGShareModeDropdownView *)arg1 ;
-(IGShareModeDropdownView *)shareModeDropdownView;
-(void)setShareDropdownNUXView:(IGDirectedNUXView *)arg1 ;
-(IGDirectedNUXView *)shareDropdownNUXView;
-(void)hideShareDropdownNUX;
-(void)setMainViewShareDropdownNUXDismissTapGuestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setTitleViewShareDropdownNUXDismissTapGuestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setLegacyShareToggle:(IGShareToggle *)arg1 ;
-(IGShareToggle *)legacyShareToggle;
-(void)setShareMode:(int)arg1 ;
-(void)setTopShadowView:(UIView *)arg1 ;
-(UIView *)topShadowView;
-(void)updateTopShadowOffset;
-(void)internalSetShareMode:(int)arg1 ;
-(void)showShareDropdownNUX;
-(void)layoutShareButton;
-(void)toggleTitleShareMode;
-(void)addOverlayViewHiddenWithRect:(CGRect)arg1 ;
-(float)navigationBarMaxY;
-(void)removeOverlayView;
-(IGDirectMainCamShareViewController *)directShareManager;
-(void)setDirectShareManager:(IGDirectMainCamShareViewController *)arg1 ;
-(IGBroadcastShareManager *)broadcastShareManager;
-(void)setBroadcastShareManager:(IGBroadcastShareManager *)arg1 ;
-(void)setShareManager:(UIViewController*<IGShareManager>)arg1 ;
-(char)shouldShowDropdownNUX;
-(void)doShowShareDropdownNUX;
-(UITapGestureRecognizer *)titleViewShareDropdownNUXDismissTapGuestureRecognizer;
-(UITapGestureRecognizer *)mainViewShareDropdownNUXDismissTapGuestureRecognizer;
-(char)captionTextNeedsToBeClearedOnBackOut;
-(char)isInProfilePictureSharingFlow;
-(void)layoutAutocompleteTableForKeyboardHeight:(float)arg1 ;
-(void)enterCaptionMode;
-(void)captionTextViewDidChange:(id)arg1 ;
-(void)onCaptionModeOKButtonTapped;
-(char)isInSingleStepShareFlow;
-(void)onBackButtonTapped;
-(void)exitCaptionMode;
-(CGRect)viewRectForShareSwitchedOffOverlay;
-(void)logAutocomplete:(id)arg1 clickEventAtIndex:(int)arg2 isUserSearch:(char)arg3 allResults:(id)arg4 ;
-(void)shareWithPreserveShareServicesInfo:(char)arg1 ;
-(id)removeShareServicesInfoFromDictionary:(id)arg1 ;
-(void)uploadToDirectRecipient:(id)arg1 ;
-(void)configureStickySharingSelections;
-(char)shouldEnableStickySharing;
-(int)numberOfItemsInDropdownView:(id)arg1 ;
-(id)dropdownView:(id)arg1 titleForItemForIndex:(int)arg2 ;
-(void)dropdownView:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(char)captionCellMediaOverlayViewTapEnabled;
-(void)captionCellMediaOverlayViewTapped;
-(void)captionCellEditButtonTapped;
-(void)captionTextViewWillBeginEditing:(id)arg1 ;
-(void)captionTextViewDidBeginEditing:(id)arg1 ;
-(void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2 ;
-(char)captionTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)directedNUXViewDidTap:(id)arg1 ;
-(id)initForProfilePictureOptionalSharingWithMediaMetadata:(id)arg1 userSession:(id)arg2 ;
-(void)setDefaultCaptionText:(id)arg1 ;
-(void)instantShareToFeed;
-(void)setShareSwitchView:(IGShareSwitchView *)arg1 ;
-(void)setCaptionCell:(IGCaptionCell *)arg1 ;
-(void)setAutocompleteController:(IGAutocompleteController *)arg1 ;
-(void)setCanDisableShareScreen:(char)arg1 ;
-(void)setWasInitializedFromDraft:(char)arg1 ;
-(char)enableNavState;
-(void)setDelegate:(id<IGShareViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGShareViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(id)leftBarButtonItem;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(IGCameraNavigationController *)navController;
-(void)share;
-(IGUserSession *)userSession;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

