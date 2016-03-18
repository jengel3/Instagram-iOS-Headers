
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGAutocompleteControllerDelegate.h>
#import <Instagram/IGCameraNavigationShareModeDropdownViewDataSource.h>
#import <Instagram/IGCameraNavigationShareModeDropdownViewDelegate.h>
#import <Instagram/IGCaptionCellDelegate.h>
#import <Instagram/IGMediaRequestDelegate.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGCameraViewControllerProtocol.h>

@protocol IGShareViewControllerDelegate, IGShareManager;
@class IGKVOHandle, IGVideoComposition, IGMediaMetadata, UIViewController, IGBroadcastShareManager, IGDirectMainCamShareViewController, IGShareToggle, IGCaptionCell, IGAutocompleteController, UIView, IGShareButton, IGCameraNavigationSelectorButton, IGCameraNavigationShareModeDropdownView, IGCameraNavigationController, NSString;

@interface IGShareViewController : IGViewController <IGAutocompleteControllerDelegate, IGCameraNavigationShareModeDropdownViewDataSource, IGCameraNavigationShareModeDropdownViewDelegate, IGCaptionCellDelegate, IGMediaRequestDelegate, IGAnalyticsModule, IGCameraViewControllerProtocol> {

	IGKVOHandle* _readyToShareObserver;
	IGKVOHandle* _scrollViewObserver;
	char _isInMode;
	char _overlayIsOpaque;
	char _overlayHasDropShadow;
	char _renderInProgress;
	char _addToPostSelectionAvailable;
	id<IGShareViewControllerDelegate> _delegate;
	IGVideoComposition* _video;
	IGMediaMetadata* _mediaMetadata;
	int _shareMode;
	UIViewController*<IGShareManager> _shareManager;
	IGBroadcastShareManager* _broadcastShareManager;
	IGDirectMainCamShareViewController* _directShareManager;
	IGShareToggle* _toggleView;
	IGCaptionCell* _captionCell;
	IGAutocompleteController* _autocompleteController;
	UIView* _headerView;
	IGShareButton* _shareButton;
	IGCameraNavigationSelectorButton* _titleShareModeButton;
	IGCameraNavigationShareModeDropdownView* _titleShareModeDropdownView;
	UIView* _overlayView;

}

@property (nonatomic,readonly) IGCameraNavigationController * navController; 
@property (assign,nonatomic) char overlayIsOpaque;                                                              //@synthesize overlayIsOpaque=_overlayIsOpaque - In the implementation block
@property (assign,nonatomic) char overlayHasDropShadow;                                                         //@synthesize overlayHasDropShadow=_overlayHasDropShadow - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGVideoComposition * video;                                                        //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) char renderInProgress;                                                             //@synthesize renderInProgress=_renderInProgress - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                                   //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (assign,nonatomic) int shareMode;                                                                     //@synthesize shareMode=_shareMode - In the implementation block
@property (nonatomic,retain) UIViewController*<IGShareManager> shareManager;                                    //@synthesize shareManager=_shareManager - In the implementation block
@property (nonatomic,retain) IGBroadcastShareManager * broadcastShareManager;                                   //@synthesize broadcastShareManager=_broadcastShareManager - In the implementation block
@property (nonatomic,retain) IGDirectMainCamShareViewController * directShareManager;                           //@synthesize directShareManager=_directShareManager - In the implementation block
@property (nonatomic,retain) IGShareToggle * toggleView;                                                        //@synthesize toggleView=_toggleView - In the implementation block
@property (nonatomic,retain) IGCaptionCell * captionCell;                                                       //@synthesize captionCell=_captionCell - In the implementation block
@property (nonatomic,retain) IGAutocompleteController * autocompleteController;                                 //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGShareButton * shareButton;                                                       //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) IGCameraNavigationSelectorButton * titleShareModeButton;                           //@synthesize titleShareModeButton=_titleShareModeButton - In the implementation block
@property (nonatomic,retain) IGCameraNavigationShareModeDropdownView * titleShareModeDropdownView;              //@synthesize titleShareModeDropdownView=_titleShareModeDropdownView - In the implementation block
@property (nonatomic,readonly) char addToPostSelectionAvailable;                                                //@synthesize addToPostSelectionAvailable=_addToPostSelectionAvailable - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                              //@synthesize overlayView=_overlayView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)autocompleteController:(id)arg1 willShowTableView:(id)arg2 ;
-(void)autocompleteController:(id)arg1 willHideTableView:(id)arg2 ;
-(void)autocompleteControllerDidAutocomplete:(id)arg1 ;
-(void)autocompleteController:(id)arg1 atIndex:(int)arg2 isUserSearch:(char)arg3 allResults:(id)arg4 ;
-(id)initWithMediaMetadata:(id)arg1 ;
-(void)setRenderInProgress:(char)arg1 ;
-(char)overlayIsOpaque;
-(char)prefersToolbarHidden;
-(char)prefersNavbarBottomBorderHidden;
-(id)analyticsMetadata;
-(id)ig_keyViewControllers;
-(IGAutocompleteController *)autocompleteController;
-(char)enableNavState;
-(void)setAutocompleteController:(IGAutocompleteController *)arg1 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)setShareManager:(UIViewController*<IGShareManager>)arg1 ;
-(UIViewController*<IGShareManager>)shareManager;
-(void)setShareMode:(int)arg1 ;
-(int)shareMode;
-(void)onBackButtonTapped;
-(char)captionCellMediaOverlayViewTapEnabled;
-(void)captionCellMediaOverlayViewTapped;
-(void)captionTextViewDidChange:(id)arg1 ;
-(void)captionTextViewWillBeginEditing:(id)arg1 ;
-(void)captionTextViewDidBeginEditing:(id)arg1 ;
-(void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2 ;
-(char)captionTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(int)dropdownViewNumberOfItems;
-(id)dropdownViewItemForIndex:(int)arg1 ;
-(void)dropdownViewDidSelectItemAtIndex:(int)arg1 ;
-(id)allResultsList:(id)arg1 ;
-(void)logAutocomplete:(id)arg1 clickEventAtIndex:(int)arg2 isUserSearch:(char)arg3 allResults:(id)arg4 ;
-(void)setOverlayIsOpaque:(char)arg1 ;
-(void)fetchAddToPostThumbnail:(id)arg1 ;
-(void)setTitleShareModeButton:(IGCameraNavigationSelectorButton *)arg1 ;
-(IGCameraNavigationSelectorButton *)titleShareModeButton;
-(void)titleShareModeButtonTapped;
-(void)updateShareModeButtonWithItem:(id)arg1 ;
-(void)updateNavigationItemWithModeTitle:(id)arg1 animated:(char)arg2 ;
-(void)stopProgressHUDIfSlowDevice;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(IGCaptionCell *)captionCell;
-(void)onOverlayViewTapped:(id)arg1 ;
-(void)onShareButtonTapped;
-(IGCameraNavigationShareModeDropdownView *)titleShareModeDropdownView;
-(void)updateShareButton;
-(void)updateCaptionOffset;
-(IGShareToggle *)toggleView;
-(char)renderInProgress;
-(void)startProgressHUDIfSlowDevice;
-(char)addToPostSelectionAvailable;
-(void)setTitleShareModeDropdownView:(IGCameraNavigationShareModeDropdownView *)arg1 ;
-(void)internalSetShareMode:(int)arg1 ;
-(void)toggleTitleShareMode;
-(void)addOverlayViewHidden;
-(void)removeOverlayView;
-(void)addToPostThumbnailReceived:(id)arg1 ;
-(IGDirectMainCamShareViewController *)directShareManager;
-(void)setDirectShareManager:(IGDirectMainCamShareViewController *)arg1 ;
-(IGBroadcastShareManager *)broadcastShareManager;
-(void)setBroadcastShareManager:(IGBroadcastShareManager *)arg1 ;
-(void)layoutAutocompleteTableForKeyboardHeight:(float)arg1 ;
-(void)enterCaptionMode;
-(void)onTitleTapped;
-(void)onCaptionModeOKButtonTapped;
-(void)exitCaptionMode;
-(void)configureStickySharingSelections;
-(char)shouldEnableStickySharing;
-(char)overlayHasDropShadow;
-(void)setOverlayHasDropShadow:(char)arg1 ;
-(void)setToggleView:(IGShareToggle *)arg1 ;
-(void)setCaptionCell:(IGCaptionCell *)arg1 ;
-(void)setShareButton:(IGShareButton *)arg1 ;
-(void)setDelegate:(id<IGShareViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGShareViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
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
-(IGShareButton *)shareButton;
-(UIView *)overlayView;
@end

