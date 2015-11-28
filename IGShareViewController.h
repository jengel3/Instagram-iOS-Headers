
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGCaptionCellDelegate.h>
#import <Instagram/IGAutocompleteControllerDelegate.h>
#import <Instagram/IGShareManagerDelegate.h>
#import <Instagram/IGCaptionCellDelegate.h>
#import <Instagram/IGCameraViewControllerProtocol.h>

@protocol IGShareViewControllerDelegate, IGShareManager;
@class IGKVOHandle, IGVideoComposition, IGMediaMetadata, UIViewController, IGShareToggle, IGCaptionCell, IGAutocompleteController, UIView, IGShareButton, IGCameraNavigationController, NSString;

@interface IGShareViewController : IGViewController <IGCaptionCellDelegate, IGAutocompleteControllerDelegate, IGShareManagerDelegate, IGCaptionCellDelegate, IGCameraViewControllerProtocol> {

	IGKVOHandle* _readyToShareObserver;
	IGKVOHandle* _scrollViewObserver;
	char _isInMode;
	char _overlayIsOpaque;
	char _overlayHasDropShadow;
	char _renderInProgress;
	id<IGShareViewControllerDelegate> _delegate;
	IGVideoComposition* _video;
	IGMediaMetadata* _mediaMetadata;
	UIViewController*<IGShareManager> _shareManager;
	int _shareMode;
	IGShareToggle* _toggleView;
	IGCaptionCell* _captionCell;
	IGAutocompleteController* _autocompleteController;
	UIView* _headerView;
	IGShareButton* _shareButton;
	UIView* _overlayView;
	/*^block*/id _modeCompletionHandler;

}

@property (nonatomic,readonly) IGCameraNavigationController * navController; 
@property (assign,nonatomic) char overlayIsOpaque;                                           //@synthesize overlayIsOpaque=_overlayIsOpaque - In the implementation block
@property (assign,nonatomic) char overlayHasDropShadow;                                      //@synthesize overlayHasDropShadow=_overlayHasDropShadow - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGVideoComposition * video;                                     //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) char renderInProgress;                                          //@synthesize renderInProgress=_renderInProgress - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) UIViewController*<IGShareManager> shareManager;                 //@synthesize shareManager=_shareManager - In the implementation block
@property (assign,nonatomic) int shareMode;                                                  //@synthesize shareMode=_shareMode - In the implementation block
@property (nonatomic,retain) IGShareToggle * toggleView;                                     //@synthesize toggleView=_toggleView - In the implementation block
@property (nonatomic,retain) IGCaptionCell * captionCell;                                    //@synthesize captionCell=_captionCell - In the implementation block
@property (nonatomic,retain) IGAutocompleteController * autocompleteController;              //@synthesize autocompleteController=_autocompleteController - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGShareButton * shareButton;                                    //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,copy) id modeCompletionHandler;                                         //@synthesize modeCompletionHandler=_modeCompletionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)autocompleteController:(id)arg1 willShowTableView:(id)arg2 ;
-(void)autocompleteController:(id)arg1 willHideTableView:(id)arg2 ;
-(void)autocompleteControllerDidAutocomplete:(id)arg1 ;
-(id)initWithMediaMetadata:(id)arg1 ;
-(void)setRenderInProgress:(char)arg1 ;
-(char)overlayIsOpaque;
-(char)prefersToolbarHidden;
-(char)prefersNavbarBottomBorderHidden;
-(id)analyticsMetadata;
-(id)ig_keyViewControllers;
-(IGAutocompleteController *)autocompleteController;
-(void)setAutocompleteController:(IGAutocompleteController *)arg1 ;
-(char)enableNavState;
-(void)setShareManager:(UIViewController*<IGShareManager>)arg1 ;
-(UIViewController*<IGShareManager>)shareManager;
-(void)setShareMode:(int)arg1 ;
-(int)shareMode;
-(void)onBackButtonTapped;
-(void)captionTextViewWantsMediaDisplay;
-(void)captionTextViewDidChange:(id)arg1 ;
-(void)captionTextViewWillBeginEditing:(id)arg1 ;
-(void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2 ;
-(char)captionTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setOverlayIsOpaque:(char)arg1 ;
-(void)updateNavigationItemWithModeTitle:(id)arg1 animated:(char)arg2 ;
-(void)stopProgressHUDIfSlowDevice;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(IGCaptionCell *)captionCell;
-(void)onOverlayViewTapped:(id)arg1 ;
-(void)onShareButtonTapped;
-(void)updateShareButton;
-(void)updateCaptionOffset;
-(IGShareToggle *)toggleView;
-(char)renderInProgress;
-(void)startProgressHUDIfSlowDevice;
-(void)layoutAutocompleteTableForKeyboardHeight:(float)arg1 ;
-(void)enterCaptionMode;
-(void)exitCaptionMode;
-(void)enterModeWithTitle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)exitMode;
-(void)setModeCompletionHandler:(id)arg1 ;
-(id)modeCompletionHandler;
-(void)onTitleTapped;
-(void)onDoneEditingButtonTapped;
-(void)shareManagerWantsModeExit;
-(void)shareManagerWantsModeWithTitle:(id)arg1 completion:(/*^block*/id)arg2 ;
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

