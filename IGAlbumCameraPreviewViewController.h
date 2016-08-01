
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGAlbumCreationDrawingViewControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <Instagram/IGAlbumSaveMediaRequestDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/FBKeyboardObserverDelegate.h>
#import <Instagram/IGAlbumSwipableFilterViewDelegate.h>
#import <Instagram/IGLabelTooltipViewDelegate.h>

@protocol IGAlbumCameraPreviewViewControllerDelegate, IGQuickCamOutputAsset;
@class IGTapButton, IGAlbumComposerWaterfallLoggingContext, UIImageView, UIView, IGReelCreationModel, IGAlbumSaveMediaRequest, IGGradientView, UITextView, UITapGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, FBKeyboardObserver, IGAlbumCreationDrawingViewController, IGAlbumSwipableFilterView, IGLabelTooltipView, UIImage, NSString;

@interface IGAlbumCameraPreviewViewController : IGViewController <IGAlbumCreationDrawingViewControllerDelegate, UITextViewDelegate, IGAlbumSaveMediaRequestDelegate, UIGestureRecognizerDelegate, FBKeyboardObserverDelegate, IGAlbumSwipableFilterViewDelegate, IGLabelTooltipViewDelegate> {

	char _textMoving;
	id<IGAlbumCameraPreviewViewControllerDelegate> _delegate;
	IGTapButton* _cancelButton;
	IGTapButton* _addTextButton;
	IGTapButton* _addDrawingButton;
	IGTapButton* _downloadButton;
	IGTapButton* _shareButton;
	IGAlbumComposerWaterfallLoggingContext* _loggingContext;
	UIImageView* _previewImageView;
	UIView* _contentView;
	id<IGQuickCamOutputAsset> _asset;
	IGReelCreationModel* _albumModel;
	IGAlbumSaveMediaRequest* _saveRequest;
	IGGradientView* _topGradient;
	IGGradientView* _bottomGradient;
	UITextView* _captionTextView;
	UIView* _captionDimmingView;
	UITapGestureRecognizer* _captionBackgroundTapRecognizer;
	UIPanGestureRecognizer* _captionPanRecognizer;
	UIPinchGestureRecognizer* _captionPinchRecognizer;
	UIRotationGestureRecognizer* _captionRotationRecognizer;
	FBKeyboardObserver* _keyboardObserver;
	IGAlbumCreationDrawingViewController* _drawingViewController;
	IGAlbumSwipableFilterView* _swipableFilterView;
	IGLabelTooltipView* _nuxView;
	IGCaptionLocationInfo _previousCaptionLocation;

}

@property (nonatomic,retain) IGAlbumComposerWaterfallLoggingContext * loggingContext;                     //@synthesize loggingContext=_loggingContext - In the implementation block
@property (nonatomic,retain) UIImageView * previewImageView;                                              //@synthesize previewImageView=_previewImageView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) id<IGQuickCamOutputAsset> asset;                                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) IGReelCreationModel * albumModel;                                            //@synthesize albumModel=_albumModel - In the implementation block
@property (nonatomic,retain) IGAlbumSaveMediaRequest * saveRequest;                                       //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,retain) IGGradientView * topGradient;                                                //@synthesize topGradient=_topGradient - In the implementation block
@property (nonatomic,retain) IGGradientView * bottomGradient;                                             //@synthesize bottomGradient=_bottomGradient - In the implementation block
@property (nonatomic,retain) UITextView * captionTextView;                                                //@synthesize captionTextView=_captionTextView - In the implementation block
@property (nonatomic,retain) UIView * captionDimmingView;                                                 //@synthesize captionDimmingView=_captionDimmingView - In the implementation block
@property (assign,nonatomic) char textMoving;                                                             //@synthesize textMoving=_textMoving - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * captionBackgroundTapRecognizer;                     //@synthesize captionBackgroundTapRecognizer=_captionBackgroundTapRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * captionPanRecognizer;                               //@synthesize captionPanRecognizer=_captionPanRecognizer - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * captionPinchRecognizer;                           //@synthesize captionPinchRecognizer=_captionPinchRecognizer - In the implementation block
@property (nonatomic,retain) UIRotationGestureRecognizer * captionRotationRecognizer;                     //@synthesize captionRotationRecognizer=_captionRotationRecognizer - In the implementation block
@property (assign,nonatomic) IGCaptionLocationInfo previousCaptionLocation;                               //@synthesize previousCaptionLocation=_previousCaptionLocation - In the implementation block
@property (nonatomic,retain) FBKeyboardObserver * keyboardObserver;                                       //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (nonatomic,retain) IGAlbumCreationDrawingViewController * drawingViewController;                //@synthesize drawingViewController=_drawingViewController - In the implementation block
@property (nonatomic,retain) IGAlbumSwipableFilterView * swipableFilterView;                              //@synthesize swipableFilterView=_swipableFilterView - In the implementation block
@property (nonatomic,retain) IGLabelTooltipView * nuxView;                                                //@synthesize nuxView=_nuxView - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCameraPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGTapButton * cancelButton;                                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * addTextButton;                                               //@synthesize addTextButton=_addTextButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * addDrawingButton;                                            //@synthesize addDrawingButton=_addDrawingButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * downloadButton;                                              //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * shareButton;                                                 //@synthesize shareButton=_shareButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDrawingViewController:(IGAlbumCreationDrawingViewController *)arg1 ;
-(IGAlbumCreationDrawingViewController *)drawingViewController;
-(void)addTextButtonTapped;
-(void)addDrawingButtonTapped;
-(void)downloadButtonTapped;
-(void)shareButtonTapped;
-(void)setCaptionTextView:(UITextView *)arg1 ;
-(void)captionMoved:(id)arg1 ;
-(void)captionBackgroundTapped:(id)arg1 ;
-(id)finalizedOutputAsset;
-(void)setSaveRequest:(IGAlbumSaveMediaRequest *)arg1 ;
-(void)hideControls:(char)arg1 ;
-(void)setCaptionGesturesEnabled:(char)arg1 ;
-(IGReelCreationModel *)albumModel;
-(IGCaptionLocationInfo)currentCaptionLocationInfo;
-(void)updateCaptionTransformWithTranslation:(CGPoint)arg1 rotation:(float)arg2 scale:(float)arg3 ;
-(IGAlbumSwipableFilterView *)swipableFilterView;
-(char)gestureIsCaptionGesture:(id)arg1 ;
-(void)setupInitialCaptionStateWithKeyboardFrame:(CGRect)arg1 ;
-(void)applyFilterToAsset;
-(void)albumSwipableFilterViewDidSwipeToFilter:(id)arg1 ;
-(id)initWithAsset:(id)arg1 frame:(CGRect)arg2 loggingContext:(id)arg3 ;
-(void)setAlbumModel:(IGReelCreationModel *)arg1 ;
-(UIView *)captionDimmingView;
-(void)setCaptionDimmingView:(UIView *)arg1 ;
-(char)textMoving;
-(void)setTextMoving:(char)arg1 ;
-(UITapGestureRecognizer *)captionBackgroundTapRecognizer;
-(void)setCaptionBackgroundTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)captionPanRecognizer;
-(void)setCaptionPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPinchGestureRecognizer *)captionPinchRecognizer;
-(void)setCaptionPinchRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(UIRotationGestureRecognizer *)captionRotationRecognizer;
-(void)setCaptionRotationRecognizer:(UIRotationGestureRecognizer *)arg1 ;
-(IGCaptionLocationInfo)previousCaptionLocation;
-(void)setPreviousCaptionLocation:(IGCaptionLocationInfo)arg1 ;
-(void)setSwipableFilterView:(IGAlbumSwipableFilterView *)arg1 ;
-(void)showNUX;
-(IGLabelTooltipView *)nuxView;
-(void)hideNUX;
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(IGGradientView *)topGradient;
-(void)setTopGradient:(IGGradientView *)arg1 ;
-(IGGradientView *)bottomGradient;
-(void)setBottomGradient:(IGGradientView *)arg1 ;
-(void)setNuxView:(IGLabelTooltipView *)arg1 ;
-(IGTapButton *)downloadButton;
-(IGTapButton *)addTextButton;
-(IGTapButton *)addDrawingButton;
-(void)drawingViewControllerDidDismiss:(id)arg1 ;
-(void)setLoggingContext:(IGAlbumComposerWaterfallLoggingContext *)arg1 ;
-(IGAlbumComposerWaterfallLoggingContext *)loggingContext;
-(void)setKeyboardObserver:(FBKeyboardObserver *)arg1 ;
-(FBKeyboardObserver *)keyboardObserver;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidShow:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)saveMediaRequestDidFailSaving:(id)arg1 ;
-(void)saveMediaRequest:(id)arg1 didSaveToCameraRollURL:(id)arg2 ;
-(void)setPreviewImageView:(UIImageView *)arg1 ;
-(UITextView *)captionTextView;
-(void)didTapTooltipView:(id)arg1 ;
-(IGAlbumSaveMediaRequest *)saveRequest;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<IGAlbumCameraPreviewViewControllerDelegate>)arg1 ;
-(id<IGAlbumCameraPreviewViewControllerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(UIImage *)image;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(IGTapButton *)cancelButton;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(id<IGQuickCamOutputAsset>)asset;
-(void)setAsset:(id<IGQuickCamOutputAsset>)arg1 ;
-(void)setPreviewImage:(id)arg1 ;
-(void)setVideo:(id)arg1 ;
-(UIImageView *)previewImageView;
-(void)cancelButtonTapped;
-(char)prefersNavigationBarHidden;
-(IGTapButton *)shareButton;
@end

