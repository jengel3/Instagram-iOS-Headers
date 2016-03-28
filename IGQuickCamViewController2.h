
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGDirectSlideableViewController.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>
#import <Instagram/IGAssetPlayerViewDelegate.h>
#import <Instagram/IGGridViewControllerDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGQuickCamControlBarDelegate.h>
#import <Instagram/IGQuickCamCaptureButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGVideoSampleBufferDelegate.h>
#import <Instagram/IGAudioSampleBufferDelegate.h>
#import <Instagram/IGGalleryCollectionViewControllerDelegate.h>
#import <Instagram/IGSelectAlbumDelegate.h>
#import <Instagram/IGQuickCamPhotoEditViewControllerDelegate.h>

@protocol IGQuickCamViewControllerDelegate, IGQuickCamInputAsset, IGQuickCamOutputAsset, OS_dispatch_queue;
@class UIView, IGTapButton, UILabel, IGChevronTitleButton, IGCropView, IGCameraGuideView, UIImageView, IGLabel, IGEmptyLibraryView, IGCircularProgressView, IGAssetPlayerView, IGCaptureManager, IGVideoRecorder, NSObject, IGStabilizationSampler, IGSampleBuffer, IGQuickCamControlBar, IGGalleryCollectionViewController, IGQuickCamPhotoEditViewController, IGGridViewController, IGQuickCamViewManager, IGSwipeDismissManager, UIColor, IGSelectAlbumController, NSString;

@interface IGQuickCamViewController2 : UIViewController <UIViewControllerTransitioningDelegate, IGDirectSlideableViewController, IGCropViewUserInteractionDelegate, IGAssetPlayerViewDelegate, IGGridViewControllerDelegate, IGCaptureManagerDelegate, IGQuickCamControlBarDelegate, IGQuickCamCaptureButtonDelegate, UIGestureRecognizerDelegate, IGCaptureManagerDelegate, IGVideoSampleBufferDelegate, IGAudioSampleBufferDelegate, IGGalleryCollectionViewControllerDelegate, IGSelectAlbumDelegate, IGQuickCamPhotoEditViewControllerDelegate> {

	char _hasStartedCapture;
	char _hasReceivedAudioFrames;
	char _hasShownAudioPermissionsDeniedAlertView;
	char _hasCaptureButtonConfirmed;
	char _gridViewIsLoaded;
	char _canShowSelectedOverlay;
	char _isBackgrounded;
	char _mediaIsEdited;
	char _cropViewInteractionDidBegin;
	int _state;
	id<IGQuickCamViewControllerDelegate> _delegate;
	UIView* _overlayView;
	UIView* _contentContainerView;
	UIView* _titleBar;
	IGTapButton* _titleBarDismissButton;
	IGTapButton* _titleBarBackButton;
	UILabel* _titleLabel;
	IGChevronTitleButton* _chevronTitleButton;
	UILabel* _warningView;
	UIView* _mediaViewContainer;
	id<IGQuickCamInputAsset> _inputAsset;
	id<IGQuickCamOutputAsset> _outputAsset;
	int _fullSizeRequestID;
	unsigned _contentEditingInputRequestID;
	IGCropView* _cropView;
	IGCameraGuideView* _guideView;
	UIImageView* _videoCoverFrameImageView;
	IGLabel* _unsupportedVideoLabel;
	IGEmptyLibraryView* _noMediaView;
	IGCircularProgressView* _progressView;
	UIView* _loadingOverlayView;
	UIImageView* _loadingThumbnailView;
	id<IGQuickCamInputAsset> _previewAsset;
	IGAssetPlayerView* _playerView;
	UIView* _previewView;
	UIImageView* _focusRing;
	UILabel* _tapToRecordLabel;
	int _videoTakenCount;
	IGCaptureManager* _captureManager;
	IGVideoRecorder* _videoRecorder;
	NSObject*<OS_dispatch_queue> _imageBufferQueue;
	IGStabilizationSampler* _stabilizer;
	IGSampleBuffer* _imageBufferData;
	IGQuickCamControlBar* _controlBar;
	IGGalleryCollectionViewController* _galleryViewController;
	IGQuickCamPhotoEditViewController* _editViewController;
	IGGridViewController* _gridViewController;
	float _maxVideoDuration;
	IGQuickCamViewManager* _viewManager;
	IGSwipeDismissManager* _swipeDismissManager;
	UIColor* _backgroundColor;
	IGSelectAlbumController* _selectAlbumVC;
	CGRect _cropRect;

}

@property (assign,nonatomic) int state;                                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                   //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * contentContainerView;                                          //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) UIView * titleBar;                                                      //@synthesize titleBar=_titleBar - In the implementation block
@property (nonatomic,retain) IGTapButton * titleBarDismissButton;                                    //@synthesize titleBarDismissButton=_titleBarDismissButton - In the implementation block
@property (nonatomic,retain) IGTapButton * titleBarBackButton;                                       //@synthesize titleBarBackButton=_titleBarBackButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGChevronTitleButton * chevronTitleButton;                              //@synthesize chevronTitleButton=_chevronTitleButton - In the implementation block
@property (nonatomic,retain) UILabel * warningView;                                                  //@synthesize warningView=_warningView - In the implementation block
@property (nonatomic,retain) UIView * mediaViewContainer;                                            //@synthesize mediaViewContainer=_mediaViewContainer - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> inputAsset;                                    //@synthesize inputAsset=_inputAsset - In the implementation block
@property (nonatomic,retain) id<IGQuickCamOutputAsset> outputAsset;                                  //@synthesize outputAsset=_outputAsset - In the implementation block
@property (assign,nonatomic) int fullSizeRequestID;                                                  //@synthesize fullSizeRequestID=_fullSizeRequestID - In the implementation block
@property (assign,nonatomic) unsigned contentEditingInputRequestID;                                  //@synthesize contentEditingInputRequestID=_contentEditingInputRequestID - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                                                  //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * guideView;                                          //@synthesize guideView=_guideView - In the implementation block
@property (nonatomic,retain) UIImageView * videoCoverFrameImageView;                                 //@synthesize videoCoverFrameImageView=_videoCoverFrameImageView - In the implementation block
@property (nonatomic,retain) IGLabel * unsupportedVideoLabel;                                        //@synthesize unsupportedVideoLabel=_unsupportedVideoLabel - In the implementation block
@property (nonatomic,retain) IGEmptyLibraryView * noMediaView;                                       //@synthesize noMediaView=_noMediaView - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                                  //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlayView;                                            //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,retain) UIImageView * loadingThumbnailView;                                     //@synthesize loadingThumbnailView=_loadingThumbnailView - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> previewAsset;                                  //@synthesize previewAsset=_previewAsset - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                                        //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                         //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                                   //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIImageView * focusRing;                                                //@synthesize focusRing=_focusRing - In the implementation block
@property (nonatomic,retain) UILabel * tapToRecordLabel;                                             //@synthesize tapToRecordLabel=_tapToRecordLabel - In the implementation block
@property (assign,nonatomic) int videoTakenCount;                                                    //@synthesize videoTakenCount=_videoTakenCount - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                                      //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                                        //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageBufferQueue;                          //@synthesize imageBufferQueue=_imageBufferQueue - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizer;                                    //@synthesize stabilizer=_stabilizer - In the implementation block
@property (retain) IGSampleBuffer * imageBufferData;                                                 //@synthesize imageBufferData=_imageBufferData - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                                 //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign) char hasReceivedAudioFrames;                                                      //@synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames - In the implementation block
@property (assign,nonatomic) char hasShownAudioPermissionsDeniedAlertView;                           //@synthesize hasShownAudioPermissionsDeniedAlertView=_hasShownAudioPermissionsDeniedAlertView - In the implementation block
@property (nonatomic,retain) IGQuickCamControlBar * controlBar;                                      //@synthesize controlBar=_controlBar - In the implementation block
@property (nonatomic,retain) IGGalleryCollectionViewController * galleryViewController;              //@synthesize galleryViewController=_galleryViewController - In the implementation block
@property (nonatomic,retain) IGQuickCamPhotoEditViewController * editViewController;                 //@synthesize editViewController=_editViewController - In the implementation block
@property (assign,nonatomic) char hasCaptureButtonConfirmed;                                         //@synthesize hasCaptureButtonConfirmed=_hasCaptureButtonConfirmed - In the implementation block
@property (nonatomic,retain) IGGridViewController * gridViewController;                              //@synthesize gridViewController=_gridViewController - In the implementation block
@property (assign,nonatomic) char gridViewIsLoaded;                                                  //@synthesize gridViewIsLoaded=_gridViewIsLoaded - In the implementation block
@property (assign,nonatomic) char canShowSelectedOverlay;                                            //@synthesize canShowSelectedOverlay=_canShowSelectedOverlay - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                    //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (assign,nonatomic) float maxVideoDuration;                                                 //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
@property (nonatomic,retain) IGQuickCamViewManager * viewManager;                                    //@synthesize viewManager=_viewManager - In the implementation block
@property (nonatomic,retain) IGSwipeDismissManager * swipeDismissManager;                            //@synthesize swipeDismissManager=_swipeDismissManager - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) IGSelectAlbumController * selectAlbumVC;                                //@synthesize selectAlbumVC=_selectAlbumVC - In the implementation block
@property (assign,nonatomic) char mediaIsEdited;                                                     //@synthesize mediaIsEdited=_mediaIsEdited - In the implementation block
@property (assign,nonatomic) char cropViewInteractionDidBegin;                                       //@synthesize cropViewInteractionDidBegin=_cropViewInteractionDidBegin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGCaptureManager *)captureManager;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)focusTap:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)setVideoTakenCount:(int)arg1 ;
-(int)videoTakenCount;
-(void)setTapToRecordLabel:(UILabel *)arg1 ;
-(UILabel *)tapToRecordLabel;
-(void)attemptChangeToLibraryState;
-(void)setCropView:(IGCropView *)arg1 ;
-(IGCropView *)cropView;
-(void)setGuideView:(IGCameraGuideView *)arg1 ;
-(IGCameraGuideView *)guideView;
-(void)setVideoCoverFrameImageView:(UIImageView *)arg1 ;
-(UIImageView *)videoCoverFrameImageView;
-(void)setLoadingThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)loadingThumbnailView;
-(void)setLoadingOverlayView:(UIView *)arg1 ;
-(UIView *)loadingOverlayView;
-(void)setUnsupportedVideoLabel:(IGLabel *)arg1 ;
-(IGLabel *)unsupportedVideoLabel;
-(void)setNoMediaView:(IGEmptyLibraryView *)arg1 ;
-(IGEmptyLibraryView *)noMediaView;
-(void)startLibrary;
-(IGSelectAlbumController *)selectAlbumVC;
-(void)setCanShowSelectedOverlay:(char)arg1 ;
-(char)gridViewIsLoaded;
-(char)hasStartedCapture;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)updateStabilizationSampler;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(void)stopVideoPlayer;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(id)inputLibraryAssetForFrameworkAsset:(id)arg1 ;
-(void)confirmInputAsset:(id)arg1 ;
-(void)setGridViewIsLoaded:(char)arg1 ;
-(void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(void)showSelectAlbumController:(char)arg1 ;
-(id)currentAlbumTitle;
-(void)setHasCaptureButtonConfirmed:(char)arg1 ;
-(char)hasCaptureButtonConfirmed;
-(id<IGQuickCamOutputAsset>)outputAsset;
-(void)setOutputAsset:(id<IGQuickCamOutputAsset>)arg1 ;
-(void)setInputAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(id<IGQuickCamInputAsset>)inputAsset;
-(IGSampleBuffer *)imageBufferData;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(IGVideoRecorder *)videoRecorder;
-(void)updateVideoSize;
-(int)fullSizeRequestID;
-(void)setFullSizeRequestID:(int)arg1 ;
-(unsigned)contentEditingInputRequestID;
-(void)setContentEditingInputRequestID:(unsigned)arg1 ;
-(void)hideLoadingViews;
-(id<IGQuickCamInputAsset>)previewAsset;
-(void)setPreviewAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)captureDeviceDidSatisfyFocusRequest;
-(char)cameraIsReady;
-(IGStabilizationSampler *)stabilizer;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(void)setHasReceivedAudioFrames:(char)arg1 ;
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidBeginRecording;
-(void)captureButtonDidEndRecording;
-(void)captureButtonDidConfirm;
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(void)assetPlayerViewPlayStateDidChange:(id)arg1 ;
-(void)assetPlayerView:(id)arg1 didPlayToTime:(SCD_Struct_IG0)arg2 ;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(void)cropViewVisibleContentFrameDidChange:(CGRect)arg1 ;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2 ;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1 ;
-(void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2 ;
-(void)gridViewControllerLibraryDidLoad:(id)arg1 ;
-(void)gridViewController:(id)arg1 didClickDisabledAsset:(id)arg2 ;
-(void)captureSessionWillTakePhoto;
-(void)captureSessionNeedsResume:(char)arg1 ;
-(void)captureSessionDidDropVideoBuffer;
-(void)captureSessionDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureSessionDidDropAudioBuffer;
-(void)captureSessionDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setSelectAlbumVC:(IGSelectAlbumController *)arg1 ;
-(char)hasReceivedAudioFrames;
-(char)hasShownAudioPermissionsDeniedAlertView;
-(void)setHasShownAudioPermissionsDeniedAlertView:(char)arg1 ;
-(float)maxVideoDuration;
-(void)setMaxVideoDuration:(float)arg1 ;
-(char)canShowSelectedOverlay;
-(void)setChevronTitleButton:(IGChevronTitleButton *)arg1 ;
-(IGChevronTitleButton *)chevronTitleButton;
-(void)galleryCollectionViewControllerDidClickDisabledAsset:(id)arg1 ;
-(void)galleryCollectionViewControllerDidTapSeeAll:(id)arg1 ;
-(void)galleryCollectionViewController:(id)arg1 didPickAsset:(id)arg2 ;
-(void)quickCamControlBarDidTapSwitchCamerasButton;
-(void)quickCamControlBarDidTapBoomerangButton;
-(void)quickCamControlBarDidTapBackButton;
-(void)quickCamControlBarDidStartCrop;
-(void)quickCamControlBarDidFinishCrop;
-(void)editViewController:(id)arg1 didUpdateImage:(id)arg2 ;
-(void)editViewControllerDidStartToApplyFilter:(id)arg1 ;
-(IGQuickCamPhotoEditViewController *)editViewController;
-(void)setMediaIsEdited:(char)arg1 ;
-(void)setCropViewInteractionDidBegin:(char)arg1 ;
-(IGGalleryCollectionViewController *)galleryViewController;
-(void)setupImageBufferQueue;
-(void)setViewManager:(IGQuickCamViewManager *)arg1 ;
-(void)setSwipeDismissManager:(IGSwipeDismissManager *)arg1 ;
-(IGSwipeDismissManager *)swipeDismissManager;
-(IGQuickCamControlBar *)controlBar;
-(IGQuickCamViewManager *)viewManager;
-(UIView *)titleBar;
-(IGTapButton *)titleBarDismissButton;
-(IGTapButton *)titleBarBackButton;
-(UILabel *)warningView;
-(UIView *)mediaViewContainer;
-(void)updateTitleLabel:(id)arg1 ;
-(void)libraryAlbumUpdated;
-(void)removeAllNuxAnimation;
-(char)cropViewInteractionDidBegin;
-(void)updateMedia;
-(char)mediaIsEdited;
-(void)createSelectAlbumVC;
-(void)updateFilteredMediaSentTakenCount;
-(void)confirmOutputAssetIfPossible;
-(char)currentMediaIsFiltered;
-(void)updateGalleryAssetsFromController:(id)arg1 ;
-(void)onOverlayTapped;
-(void)setTitleBar:(UIView *)arg1 ;
-(void)setTitleBarDismissButton:(IGTapButton *)arg1 ;
-(void)titleBarDismissButtonTapped;
-(void)setTitleBarBackButton:(IGTapButton *)arg1 ;
-(void)titleBarBackButtonTapped;
-(void)onChevronTitleButtonTapped;
-(void)setWarningView:(UILabel *)arg1 ;
-(void)setControlBar:(IGQuickCamControlBar *)arg1 ;
-(void)setMediaViewContainer:(UIView *)arg1 ;
-(void)setEditViewController:(IGQuickCamPhotoEditViewController *)arg1 ;
-(void)setGalleryViewController:(IGGalleryCollectionViewController *)arg1 ;
-(id)thumbnailPreviewImage:(id)arg1 ;
-(void)imagePreviewDone:(id)arg1 ;
-(void)imageDone:(id)arg1 ;
-(void)videoDone:(id)arg1 ;
-(void)progressBlock:(double)arg1 withAsset:(id)arg2 ;
-(void)videoPreviewDone:(id)arg1 ;
-(void)setGridViewController:(IGGridViewController *)arg1 ;
-(IGAssetPlayerView *)playerView;
-(void)startCapture;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(IGGridViewController *)gridViewController;
-(UIView *)contentContainerView;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<IGQuickCamViewControllerDelegate>)arg1 ;
-(id)init;
-(id<IGQuickCamViewControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(char)isBackgrounded;
-(void)setIsBackgrounded:(char)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)reset;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(void)stopRecording;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)cancelRecording;
-(void)startRecording;
-(void)stopCapture;
-(void)setContentContainerView:(UIView *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)setupView;
@end

