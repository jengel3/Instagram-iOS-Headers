
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGAutocompleteControllerDelegate.h>
#import <Instagram/IGShareModeDropdownViewDataSource.h>
#import <Instagram/IGShareModeDropdownViewDelegate.h>
#import <Instagram/IGCaptionCellDelegate.h>
#import <Instagram/IGMediaRequestDelegate.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGCameraViewControllerProtocol.h>

@protocol IGShareViewControllerDelegate, IGShareManager;
@class IGKVOHandle, IGVideoComposition, IGMediaMetadata, IGChevronTitleButton, UIBarButtonItem, IGShareModeDropdownView, UIViewController, IGBroadcastShareManager, IGDirectMainCamShareViewController, IGCaptionCell, IGAutocompleteController, UIView, IGShareToggle, IGShareButton, IGCameraNavigationController, NSString;

@interface IGShareViewController : IGViewController <IGAutocompleteControllerDelegate, IGShareModeDropdownViewDataSource, IGShareModeDropdownViewDelegate, IGCaptionCellDelegate, IGMediaRequestDelegate, IGAnalyticsModule, IGCameraViewControllerProtocol> {

	IGKVOHandle* _readyToShareObserver;
	IGKVOHandle* _scrollViewObserver;
	char _isInCaptionMode;
	char _overlayIsOpaque;
	char _overlayHasDropShadow;
	char _renderInProgress;
	char _shouldUseNavBarShareButton;
	char _shouldUseDropDownTitleButton;
	id<IGShareViewControllerDelegate> _delegate;
	IGVideoComposition* _video;
	IGMediaMetadata* _mediaMetadata;
	int _shareMode;
	IGChevronTitleButton* _chevronTitleButton;
	UIBarButtonItem* _shareItem;
	IGShareModeDropdownView* _shareModeDropdownView;
	UIViewController*<IGShareManager> _shareManager;
	IGBroadcastShareManager* _broadcastShareManager;
	IGDirectMainCamShareViewController* _directShareManager;
	IGCaptionCell* _captionCell;
	IGAutocompleteController* _autocompleteController;
	UIView* _headerView;
	UIView* _topShadowView;
	IGShareToggle* _legacyShareToggle;
	IGShareButton* _bottomShareButton;
	UIView* _overlayView;

}

@property (nonatomic,readonly) IGCameraNavigationController * navController; 
@property (assign,nonatomic) char overlayIsOpaque;                                                 //@synthesize overlayIsOpaque=_overlayIsOpaque - In the implementation block
@property (assign,nonatomic) char overlayHasDropShadow;                                            //@synthesize overlayHasDropShadow=_overlayHasDropShadow - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGVideoComposition * video;                                           //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) char renderInProgress;                                                //@synthesize renderInProgress=_renderInProgress - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                      //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (assign,nonatomic) int shareMode;                                                        //@synthesize shareMode=_shareMode - In the implementation block
@property (nonatomic,retain) IGChevronTitleButton * chevronTitleButton;                            //@synthesize chevronTitleButton=_chevronTitleButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareItem;                                          //@synthesize shareItem=_shareItem - In the implementation block
@property (nonatomic,retain) IGShareModeDropdownView * shareModeDropdownView;                      //@synthesize shareModeDropdownView=_shareModeDropdownView - In the implementation block
@property (nonatomic,retain) UIViewController*<IGShareManager> shareManager;                       //@synthesize shareManager=_shareManager - In the implementation block
@property (nonatomic,retain) IGBroadcastShareManager * broadcastShareManager;                      //@synthesize broadcastShareManager=_broadcastShareManager - In the implementation block
@property (nonatomic,retain) IGDirectMainCamShareViewController * directShareManager;              //@synthesize directShareManager=_directShareManager - In the implementation block
@property (nonatomic,retain) IGCaptionCell * captionCell;                                          //@synthesize captionCell=_captionCell - In the implementation block
@property (nonatomic,retain) IGAutocompleteController * autocompleteController;                    //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                  //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * topShadowView;                                               //@synthesize topShadowView=_topShadowView - In the implementation block
@property (nonatomic,retain) IGShareToggle * legacyShareToggle;                                    //@synthesize legacyShareToggle=_legacyShareToggle - In the implementation block
@property (nonatomic,retain) IGShareButton * bottomShareButton;                                    //@synthesize bottomShareButton=_bottomShareButton - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                 //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) char shouldUseNavBarShareButton;                                    //@synthesize shouldUseNavBarShareButton=_shouldUseNavBarShareButton - In the implementation block
@property (nonatomic,readonly) char shouldUseDropDownTitleButton;                                  //@synthesize shouldUseDropDownTitleButton=_shouldUseDropDownTitleButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsMetadata;
-(char)enableNavState;
-(id)analyticsModule;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)autocompleteController:(id)arg1 willShowTableView:(id)arg2 ;
-(void)autocompleteController:(id)arg1 willHideTableView:(id)arg2 ;
-(void)autocompleteControllerDidAutocomplete:(id)arg1 ;
-(void)autocompleteController:(id)arg1 atIndex:(int)arg2 isUserSearch:(char)arg3 allResults:(id)arg4 ;
-(char)overlayIsOpaque;
-(char)prefersNavbarBottomBorderHidden;
-(id)ig_keyViewControllers;
-(void)setChevronTitleButton:(IGChevronTitleButton *)arg1 ;
-(IGChevronTitleButton *)chevronTitleButton;
-(IGAutocompleteController *)autocompleteController;
-(void)onChevronTitleButtonTapped;
-(void)setShareManager:(UIViewController*<IGShareManager>)arg1 ;
-(UIViewController*<IGShareManager>)shareManager;
-(id)initWithMediaMetadata:(id)arg1 ;
-(void)setShareMode:(int)arg1 ;
-(int)shareMode;
-(void)setAutocompleteController:(IGAutocompleteController *)arg1 ;
-(char)captionCellMediaOverlayViewTapEnabled;
-(void)captionCellMediaOverlayViewTapped;
-(void)captionTextViewDidChange:(id)arg1 ;
-(void)captionTextViewWillBeginEditing:(id)arg1 ;
-(void)captionTextViewDidBeginEditing:(id)arg1 ;
-(void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2 ;
-(char)captionTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)allResultsList:(id)arg1 ;
-(void)setOverlayIsOpaque:(char)arg1 ;
-(void)updateNavigationItemWithModeTitle:(id)arg1 animated:(char)arg2 ;
-(void)stopProgressHUDIfSlowDevice;
-(IGCaptionCell *)captionCell;
-(void)onOverlayViewTapped:(id)arg1 ;
-(CGRect)viewRectMinusNavigationBarAndShareButton;
-(void)updateShareButton;
-(void)updateCaptionOffset;
-(char)shouldUseNavBarShareButton;
-(void)onShareButtonTapped;
-(void)setShareItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)shareItem;
-(IGShareButton *)bottomShareButton;
-(CGRect)viewRectMinusNavigationBar;
-(char)shouldUseDropDownTitleButton;
-(char)renderInProgress;
-(void)startProgressHUDIfSlowDevice;
-(void)setBottomShareButton:(IGShareButton *)arg1 ;
-(void)setShareModeDropdownView:(IGShareModeDropdownView *)arg1 ;
-(IGShareModeDropdownView *)shareModeDropdownView;
-(void)setLegacyShareToggle:(IGShareToggle *)arg1 ;
-(IGShareToggle *)legacyShareToggle;
-(void)setTopShadowView:(UIView *)arg1 ;
-(UIView *)topShadowView;
-(void)updateTopShadowOffset;
-(void)internalSetShareMode:(int)arg1 ;
-(void)toggleTitleShareMode;
-(void)addOverlayViewHidden;
-(float)navigationBarMaxY;
-(void)removeOverlayView;
-(IGDirectMainCamShareViewController *)directShareManager;
-(void)setDirectShareManager:(IGDirectMainCamShareViewController *)arg1 ;
-(IGBroadcastShareManager *)broadcastShareManager;
-(void)setBroadcastShareManager:(IGBroadcastShareManager *)arg1 ;
-(void)layoutAutocompleteTableForKeyboardHeight:(float)arg1 ;
-(void)enterCaptionMode;
-(void)onCaptionModeOKButtonTapped;
-(void)onBackButtonTapped;
-(void)exitCaptionMode;
-(void)logAutocomplete:(id)arg1 clickEventAtIndex:(int)arg2 isUserSearch:(char)arg3 allResults:(id)arg4 ;
-(void)configureStickySharingSelections;
-(char)shouldEnableStickySharing;
-(void)setRenderInProgress:(char)arg1 ;
-(int)numberOfItemsInDropdownView:(id)arg1 ;
-(id)dropdownView:(id)arg1 titleForItemForIndex:(int)arg2 ;
-(void)dropdownView:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(char)overlayHasDropShadow;
-(void)setOverlayHasDropShadow:(char)arg1 ;
-(void)setCaptionCell:(IGCaptionCell *)arg1 ;
-(void)setDelegate:(id<IGShareViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGShareViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(IGCameraNavigationController *)navController;
-(void)share;
-(IGVideoComposition *)video;
-(void)setVideo:(IGVideoComposition *)arg1 ;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

