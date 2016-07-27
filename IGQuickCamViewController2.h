
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGViewControllerSlideable.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>
#import <Instagram/IGAssetPlayerViewDelegate.h>
#import <Instagram/IGGridViewControllerDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGQuickCamControlBarDelegate.h>
#import <Instagram/IGQuickCamCaptureButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGCaptureManagerVideoSampleBufferDelegate.h>
#import <Instagram/IGCaptureManagerAudioSampleBufferDelegate.h>
#import <Instagram/IGCaptureManagerVideoSessionDelegate.h>
#import <Instagram/IGSelectAlbumDelegate.h>
#import <Instagram/IGQuickCamPhotoEditViewControllerDelegate.h>
#import <Instagram/IGQuickCamAssetProcessorGenerationDelegate.h>
#import <Instagram/IGQuickCamAssetProcessorPreviewDelegate.h>

@protocol IGQuickCamViewControllerDelegate, IGQuickCamInputAsset, IGQuickCamOutputAsset, OS_dispatch_queue;
@class UIView, IGTapButton, IGCropView, IGCameraGuideView, UIImageView, IGLabel, IGEmptyLibraryView, IGCircularProgressView, IGAssetPlayerView, UILabel, IGCaptureManager, IGVideoRecorder, NSObject, IGStabilizationSampler, IGSampleBuffer, IGQuickCamAssetProcessor, IGQuickCamControlBar, IGQuickCamPhotoEditViewController, IGGridViewController, IGQuickCamViewManager, IGSwipeDismissManager, UIColor, IGSelectAlbumController, NSString;

@interface IGQuickCamViewController2 : UIViewController <UIViewControllerTransitioningDelegate, IGViewControllerSlideable, IGCropViewUserInteractionDelegate, IGAssetPlayerViewDelegate, IGGridViewControllerDelegate, IGCaptureManagerDelegate, IGQuickCamControlBarDelegate, IGQuickCamCaptureButtonDelegate, UIGestureRecognizerDelegate, IGCaptureManagerDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerVideoSessionDelegate, IGSelectAlbumDelegate, IGQuickCamPhotoEditViewControllerDelegate, IGQuickCamAssetProcessorGenerationDelegate, IGQuickCamAssetProcessorPreviewDelegate> {

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
	IGTapButton* _dismissButton;
	IGTapButton* _backButton;
	UIView* _mediaViewContainer;
	id<IGQuickCamInputAsset> _inputAsset;
	id<IGQuickCamOutputAsset> _outputAsset;
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
	IGQuickCamAssetProcessor* _assetProcessor;
	IGQuickCamControlBar* _controlBar;
	IGQuickCamPhotoEditViewController* _editViewController;
	IGGridViewController* _gridViewController;
	float _maxVideoDuration;
	IGQuickCamViewManager* _viewManager;
	IGSwipeDismissManager* _swipeDismissManager;
	UIColor* _backgroundColor;
	IGSelectAlbumController* _selectAlbumVC;
	CGRect _cropRect;

}

@property (nonatomic,retain) UIView * overlayView;                                                //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * contentContainerView;                                       //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) IGTapButton * dismissButton;                                         //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) IGTapButton * backButton;                                            //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIView * mediaViewContainer;                                         //@synthesize mediaViewContainer=_mediaViewContainer - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> inputAsset;                                 //@synthesize inputAsset=_inputAsset - In the implementation block
@property (nonatomic,retain) id<IGQuickCamOutputAsset> outputAsset;                               //@synthesize outputAsset=_outputAsset - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                                               //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * guideView;                                       //@synthesize guideView=_guideView - In the implementation block
@property (nonatomic,retain) UIImageView * videoCoverFrameImageView;                              //@synthesize videoCoverFrameImageView=_videoCoverFrameImageView - In the implementation block
@property (nonatomic,retain) IGLabel * unsupportedVideoLabel;                                     //@synthesize unsupportedVideoLabel=_unsupportedVideoLabel - In the implementation block
@property (nonatomic,retain) IGEmptyLibraryView * noMediaView;                                    //@synthesize noMediaView=_noMediaView - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlayView;                                         //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,retain) UIImageView * loadingThumbnailView;                                  //@synthesize loadingThumbnailView=_loadingThumbnailView - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> previewAsset;                               //@synthesize previewAsset=_previewAsset - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                                     //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                      //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                                //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIImageView * focusRing;                                             //@synthesize focusRing=_focusRing - In the implementation block
@property (nonatomic,retain) UILabel * tapToRecordLabel;                                          //@synthesize tapToRecordLabel=_tapToRecordLabel - In the implementation block
@property (assign,nonatomic) int videoTakenCount;                                                 //@synthesize videoTakenCount=_videoTakenCount - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                                   //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                                     //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageBufferQueue;                       //@synthesize imageBufferQueue=_imageBufferQueue - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizer;                                 //@synthesize stabilizer=_stabilizer - In the implementation block
@property (retain) IGSampleBuffer * imageBufferData;                                              //@synthesize imageBufferData=_imageBufferData - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                              //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign) char hasReceivedAudioFrames;                                                   //@synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames - In the implementation block
@property (assign,nonatomic) char hasShownAudioPermissionsDeniedAlertView;                        //@synthesize hasShownAudioPermissionsDeniedAlertView=_hasShownAudioPermissionsDeniedAlertView - In the implementation block
@property (nonatomic,retain) IGQuickCamAssetProcessor * assetProcessor;                           //@synthesize assetProcessor=_assetProcessor - In the implementation block
@property (nonatomic,retain) IGQuickCamControlBar * controlBar;                                   //@synthesize controlBar=_controlBar - In the implementation block
@property (nonatomic,retain) IGQuickCamPhotoEditViewController * editViewController;              //@synthesize editViewController=_editViewController - In the implementation block
@property (assign,nonatomic) char hasCaptureButtonConfirmed;                                      //@synthesize hasCaptureButtonConfirmed=_hasCaptureButtonConfirmed - In the implementation block
@property (nonatomic,retain) IGGridViewController * gridViewController;                           //@synthesize gridViewController=_gridViewController - In the implementation block
@property (assign,nonatomic) char gridViewIsLoaded;                                               //@synthesize gridViewIsLoaded=_gridViewIsLoaded - In the implementation block
@property (assign,nonatomic) char canShowSelectedOverlay;                                         //@synthesize canShowSelectedOverlay=_canShowSelectedOverlay - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                 //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (assign,nonatomic) float maxVideoDuration;                                              //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
@property (nonatomic,retain) IGQuickCamViewManager * viewManager;                                 //@synthesize viewManager=_viewManager - In the implementation block
@property (nonatomic,retain) IGSwipeDismissManager * swipeDismissManager;                         //@synthesize swipeDismissManager=_swipeDismissManager - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) IGSelectAlbumController * selectAlbumVC;                             //@synthesize selectAlbumVC=_selectAlbumVC - In the implementation block
@property (assign,nonatomic) char mediaIsEdited;                                                  //@synthesize mediaIsEdited=_mediaIsEdited - In the implementation block
@property (assign,nonatomic) char cropViewInteractionDidBegin;                                    //@synthesize cropViewInteractionDidBegin=_cropViewInteractionDidBegin - In the implementation block
@property (assign,nonatomic) int state;                                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGCaptureManager *)captureManager;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)focusTap:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(char)hasStartedCapture;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)updateStabilizationSampler;
-(void)setInputAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)confirmInputAsset:(id)arg1 ;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(IGVideoRecorder *)videoRecorder;
-(void)updateVideoSize;
-(id<IGQuickCamInputAsset>)inputAsset;
-(void)setAssetProcessor:(IGQuickCamAssetProcessor *)arg1 ;
-(IGQuickCamAssetProcessor *)assetProcessor;
-(void)captureManagerDidSatisfyFocusRequest;
-(char)cameraIsReady;
-(IGStabilizationSampler *)stabilizer;
-(void)setHasReceivedAudioFrames:(char)arg1 ;
-(void)captureManagerDidDropAudioBuffer;
-(void)captureManagerDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureManagerWillTakePhoto;
-(void)captureManagerNeedsResume:(char)arg1 ;
-(void)captureManagerDidDropVideoBuffer;
-(void)captureManagerDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidBeginRecording;
-(void)captureButtonDidEndRecording;
-(void)captureButtonDidConfirm;
-(void)quickCamAssetProcessor:(id)arg1 didGeneratePhotoAsset:(id)arg2 ;
-(void)quickCamAssetProcessor:(id)arg1 didGenerateVideoAsset:(id)arg2 ;
-(void)quickCamAssetProcessor:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)quickCamAssetProcessorDidDetectIncompatible:(id)arg1 ;
-(void)quickCamAssetProcessorDidFailProcessing:(id)arg1 ;
-(id<IGQuickCamOutputAsset>)outputAsset;
-(void)setOutputAsset:(id<IGQuickCamOutputAsset>)arg1 ;
-(IGSampleBuffer *)imageBufferData;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(char)hasReceivedAudioFrames;
-(char)hasShownAudioPermissionsDeniedAlertView;
-(void)setHasShownAudioPermissionsDeniedAlertView:(char)arg1 ;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(UIView *)loadingOverlayView;
-(void)captureManagerVideoSessionDidStartRunning:(id)arg1 ;
-(void)setMaxVideoDuration:(float)arg1 ;
-(float)maxVideoDuration;
-(void)dismissButtonTapped;
-(void)cropViewVisibleContentFrameDidChange:(CGRect)arg1 ;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(void)setCanShowSelectedOverlay:(char)arg1 ;
-(void)gridViewControllerLibraryDidLoad:(id)arg1 ;
-(id)currentAlbumTitle;
-(char)canShowSelectedOverlay;
-(void)gridViewController:(id)arg1 didClickDisabledAsset:(id)arg2 ;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1 ;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2 ;
-(void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2 ;
-(void)setCropView:(IGCropView *)arg1 ;
-(IGCropView *)cropView;
-(void)setGuideView:(IGCameraGuideView *)arg1 ;
-(IGCameraGuideView *)guideView;
-(void)setVideoCoverFrameImageView:(UIImageView *)arg1 ;
-(UIImageView *)videoCoverFrameImageView;
-(void)setLoadingThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)loadingThumbnailView;
-(void)setLoadingOverlayView:(UIView *)arg1 ;
-(void)setUnsupportedVideoLabel:(IGLabel *)arg1 ;
-(IGLabel *)unsupportedVideoLabel;
-(void)setNoMediaView:(IGEmptyLibraryView *)arg1 ;
-(IGEmptyLibraryView *)noMediaView;
-(IGSelectAlbumController *)selectAlbumVC;
-(char)gridViewIsLoaded;
-(void)setSelectAlbumVC:(IGSelectAlbumController *)arg1 ;
-(void)stopVideoPlayer;
-(void)showSelectAlbumController:(char)arg1 ;
-(void)setGridViewIsLoaded:(char)arg1 ;
-(void)hideLoadingViews;
-(id<IGQuickCamInputAsset>)previewAsset;
-(void)setPreviewAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(void)assetPlayerViewPlayStateDidChange:(id)arg1 ;
-(void)assetPlayerView:(id)arg1 didPlayToTime:(SCD_Struct_IG18)arg2 ;
-(void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(void)setSwipeDismissManager:(IGSwipeDismissManager *)arg1 ;
-(IGSwipeDismissManager *)swipeDismissManager;
-(void)onOverlayTapped;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)setVideoTakenCount:(int)arg1 ;
-(int)videoTakenCount;
-(void)setTapToRecordLabel:(UILabel *)arg1 ;
-(UILabel *)tapToRecordLabel;
-(void)attemptChangeToLibraryState;
-(void)startLibrary;
-(void)setHasCaptureButtonConfirmed:(char)arg1 ;
-(char)hasCaptureButtonConfirmed;
-(void)quickCamAssetProcessor:(id)arg1 didGeneratePreviewForPhoto:(id)arg2 ;
-(void)quickCamAssetProcessor:(id)arg1 didGeneratePreviewForVideo:(id)arg2 ;
-(void)quickCamControlBarDidTapSwitchCamerasButton;
-(void)editViewController:(id)arg1 didUpdateImage:(id)arg2 ;
-(void)editViewControllerDidStartToApplyFilter:(id)arg1 ;
-(IGQuickCamPhotoEditViewController *)editViewController;
-(void)setMediaIsEdited:(char)arg1 ;
-(void)setCropViewInteractionDidBegin:(char)arg1 ;
-(void)setupImageBufferQueue;
-(void)setViewManager:(IGQuickCamViewManager *)arg1 ;
-(IGQuickCamControlBar *)controlBar;
-(IGQuickCamViewManager *)viewManager;
-(UIView *)mediaViewContainer;
-(void)libraryAlbumUpdated;
-(void)showVideoNUXIfNeeded;
-(void)removeAllNuxAnimation;
-(char)cropViewInteractionDidBegin;
-(void)updateMedia;
-(char)mediaIsEdited;
-(void)createSelectAlbumVC;
-(void)updateFilteredMediaSentTakenCount;
-(void)confirmOutputAssetIfPossible;
-(char)currentMediaIsFiltered;
-(void)setMediaViewContainer:(UIView *)arg1 ;
-(void)setEditViewController:(IGQuickCamPhotoEditViewController *)arg1 ;
-(void)setControlBar:(IGQuickCamControlBar *)arg1 ;
-(void)updateCropView:(id)arg1 forAsset:(id)arg2 ;
-(void)quickCamControlBarDidStartCrop;
-(void)quickCamControlBarDidFinishCrop;
-(void)quickCamControlBarDidTapBoomerangButton;
-(void)quickCamControlBarDidTapBackButton;
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
-(void)dealloc;
-(id)init;
-(id<IGQuickCamViewControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(char)isBackgrounded;
-(void)setIsBackgrounded:(char)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(void)reset;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(void)stopRecording;
-(void)setBackButton:(IGTapButton *)arg1 ;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)cancelRecording;
-(void)startRecording;
-(IGTapButton *)dismissButton;
-(void)stopCapture;
-(void)backButtonTapped;
-(void)setContentContainerView:(UIView *)arg1 ;
-(void)setDismissButton:(IGTapButton *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(IGTapButton *)backButton;
-(UIView *)overlayView;
-(void)setupView;
@end

