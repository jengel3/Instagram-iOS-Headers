
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Instagram/IGQuickCamCaptureButtonDelegate.h>
#import <Instagram/IGAssetPlayerViewDelegate.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>
#import <Instagram/IGGridViewControllerDelegate.h>
#import <Instagram/IGSelectAlbumDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGVideoSampleBufferDelegate.h>
#import <Instagram/IGAudioSampleBufferDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGSelectAlbumDelegate.h>

@protocol IGSelectAlbumDelegate, IGAlbumCameraViewControllerDelegate, IGQuickCamOutputAsset, IGQuickCamInputAsset, OS_dispatch_queue;
@class UIView, IGGridViewController, IGQuickCamLibraryButton, IGTapButton, IGQuickCamCaptureButton, IGCropView, IGCameraGuideView, UIImageView, IGCircularProgressView, IGLabel, IGEmptyLibraryView, IGAssetPlayerView, IGSelectAlbumController, IGCaptureManager, IGVideoRecorder, NSObject, IGStabilizationSampler, IGSampleBuffer, IGCameraAccessPromptView, IGLibraryAccessPromptView, UILabel, NSString;

@interface IGAlbumCameraViewController : UIViewController <UIGestureRecognizerDelegate, UINavigationControllerDelegate, IGQuickCamCaptureButtonDelegate, IGAssetPlayerViewDelegate, IGCropViewUserInteractionDelegate, IGGridViewControllerDelegate, IGSelectAlbumDelegate, IGCaptureManagerDelegate, IGVideoSampleBufferDelegate, IGAudioSampleBufferDelegate, UIGestureRecognizerDelegate, IGSelectAlbumDelegate> {

	char _visible;
	char _gridViewIsLoaded;
	char _isBackgrounded;
	char _hasStartedCapture;
	char _hasReceivedAudioFrames;
	char _hasShownAudioPermissionsDeniedAlertView;
	char _hasCaptureButtonConfirmed;
	int _state;
	id<IGSelectAlbumDelegate> _albumControllerDelegate;
	id<IGAlbumCameraViewControllerDelegate> _delegate;
	id<IGQuickCamOutputAsset> _outputAsset;
	UIView* _contentView;
	IGGridViewController* _gridViewController;
	IGQuickCamLibraryButton* _libraryButton;
	IGTapButton* _startNewAlbumButton;
	IGTapButton* _addPeopleButton;
	IGTapButton* _closeButton;
	IGQuickCamCaptureButton* _captureButton;
	IGTapButton* _flashButton;
	IGTapButton* _switchCameraButton;
	UIView* _cropBackground;
	IGCropView* _cropView;
	IGCameraGuideView* _guideView;
	UIImageView* _videoCoverFrameImageView;
	IGCircularProgressView* _progressView;
	UIView* _loadingOverlayView;
	UIImageView* _loadingThumbnailView;
	id<IGQuickCamInputAsset> _previewAsset;
	IGLabel* _unsupportedVideoLabel;
	IGEmptyLibraryView* _noMediaView;
	IGAssetPlayerView* _playerView;
	int _fullSizeRequestID;
	unsigned _contentEditingInputRequestID;
	id<IGQuickCamInputAsset> _inputAsset;
	IGSelectAlbumController* _selectAlbumVC;
	id _selectedAsset;
	UIView* _previewView;
	UIImageView* _focusRing;
	IGCaptureManager* _captureManager;
	IGVideoRecorder* _videoRecorder;
	NSObject*<OS_dispatch_queue> _imageBufferQueue;
	IGStabilizationSampler* _stabilizer;
	IGSampleBuffer* _imageBufferData;
	IGCameraAccessPromptView* _cameraPermissionDeniedView;
	IGLibraryAccessPromptView* _libraryAccessDeniedView;
	UILabel* _tapToRecordLabel;
	int _videoTakenCount;
	float _maxVideoDuration;

}

@property (assign,getter=isVisible,nonatomic) char visible;                                         //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) int state;                                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGSelectAlbumDelegate> albumControllerDelegate;              //@synthesize albumControllerDelegate=_albumControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCameraViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<IGQuickCamOutputAsset> outputAsset;                                 //@synthesize outputAsset=_outputAsset - In the implementation block
@property (assign,nonatomic) char showStartNewAlbumButton; 
@property (nonatomic,retain) UIView * contentView;                                                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) char gridViewIsLoaded;                                                 //@synthesize gridViewIsLoaded=_gridViewIsLoaded - In the implementation block
@property (nonatomic,retain) IGGridViewController * gridViewController;                             //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,retain) IGQuickCamLibraryButton * libraryButton;                               //@synthesize libraryButton=_libraryButton - In the implementation block
@property (nonatomic,retain) IGTapButton * startNewAlbumButton;                                     //@synthesize startNewAlbumButton=_startNewAlbumButton - In the implementation block
@property (nonatomic,retain) IGTapButton * addPeopleButton;                                         //@synthesize addPeopleButton=_addPeopleButton - In the implementation block
@property (nonatomic,retain) IGTapButton * closeButton;                                             //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IGQuickCamCaptureButton * captureButton;                               //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,retain) IGTapButton * flashButton;                                             //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) IGTapButton * switchCameraButton;                                      //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
@property (nonatomic,retain) UIView * cropBackground;                                               //@synthesize cropBackground=_cropBackground - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                                                 //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * guideView;                                         //@synthesize guideView=_guideView - In the implementation block
@property (nonatomic,retain) UIImageView * videoCoverFrameImageView;                                //@synthesize videoCoverFrameImageView=_videoCoverFrameImageView - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                                 //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlayView;                                           //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,retain) UIImageView * loadingThumbnailView;                                    //@synthesize loadingThumbnailView=_loadingThumbnailView - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> previewAsset;                                 //@synthesize previewAsset=_previewAsset - In the implementation block
@property (nonatomic,retain) IGLabel * unsupportedVideoLabel;                                       //@synthesize unsupportedVideoLabel=_unsupportedVideoLabel - In the implementation block
@property (nonatomic,retain) IGEmptyLibraryView * noMediaView;                                      //@synthesize noMediaView=_noMediaView - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                        //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) int fullSizeRequestID;                                                 //@synthesize fullSizeRequestID=_fullSizeRequestID - In the implementation block
@property (assign,nonatomic) unsigned contentEditingInputRequestID;                                 //@synthesize contentEditingInputRequestID=_contentEditingInputRequestID - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> inputAsset;                                   //@synthesize inputAsset=_inputAsset - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                   //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (nonatomic,retain) IGSelectAlbumController * selectAlbumVC;                               //@synthesize selectAlbumVC=_selectAlbumVC - In the implementation block
@property (nonatomic,retain) id selectedAsset;                                                      //@synthesize selectedAsset=_selectedAsset - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                                  //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIImageView * focusRing;                                               //@synthesize focusRing=_focusRing - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                                     //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                                       //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageBufferQueue;                         //@synthesize imageBufferQueue=_imageBufferQueue - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizer;                                   //@synthesize stabilizer=_stabilizer - In the implementation block
@property (retain) IGSampleBuffer * imageBufferData;                                                //@synthesize imageBufferData=_imageBufferData - In the implementation block
@property (nonatomic,retain) IGCameraAccessPromptView * cameraPermissionDeniedView;                 //@synthesize cameraPermissionDeniedView=_cameraPermissionDeniedView - In the implementation block
@property (nonatomic,retain) IGLibraryAccessPromptView * libraryAccessDeniedView;                   //@synthesize libraryAccessDeniedView=_libraryAccessDeniedView - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                                //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign) char hasReceivedAudioFrames;                                                     //@synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames - In the implementation block
@property (assign,nonatomic) char hasShownAudioPermissionsDeniedAlertView;                          //@synthesize hasShownAudioPermissionsDeniedAlertView=_hasShownAudioPermissionsDeniedAlertView - In the implementation block
@property (nonatomic,retain) UILabel * tapToRecordLabel;                                            //@synthesize tapToRecordLabel=_tapToRecordLabel - In the implementation block
@property (assign,nonatomic) int videoTakenCount;                                                   //@synthesize videoTakenCount=_videoTakenCount - In the implementation block
@property (assign,nonatomic) float maxVideoDuration;                                                //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
@property (assign,nonatomic) char hasCaptureButtonConfirmed;                                        //@synthesize hasCaptureButtonConfirmed=_hasCaptureButtonConfirmed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGCaptureManager *)captureManager;
-(void)setViewColorToDefault;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)focusTap:(id)arg1 ;
-(void)handleDismiss:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)setVideoTakenCount:(int)arg1 ;
-(int)videoTakenCount;
-(void)setTapToRecordLabel:(UILabel *)arg1 ;
-(UILabel *)tapToRecordLabel;
-(void)setAddPeopleButton:(IGTapButton *)arg1 ;
-(IGTapButton *)addPeopleButton;
-(void)addPeopleButtonTapped;
-(void)closeButtonTapped;
-(void)setLibraryButton:(IGQuickCamLibraryButton *)arg1 ;
-(IGQuickCamLibraryButton *)libraryButton;
-(void)attemptChangeToLibraryState;
-(void)setStartNewAlbumButton:(IGTapButton *)arg1 ;
-(IGTapButton *)startNewAlbumButton;
-(void)startNewAlbumButtonTapped;
-(void)flashButtonTapped;
-(void)setSwitchCameraButton:(IGTapButton *)arg1 ;
-(IGTapButton *)switchCameraButton;
-(void)onSwitchCamerasButtonTapped;
-(void)setCropBackground:(UIView *)arg1 ;
-(UIView *)cropBackground;
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
-(void)setCaptureButton:(IGQuickCamCaptureButton *)arg1 ;
-(IGQuickCamCaptureButton *)captureButton;
-(void)startLibrary;
-(IGSelectAlbumController *)selectAlbumVC;
-(char)gridViewIsLoaded;
-(char)hasStartedCapture;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)updateFlashButton;
-(void)showCameraPermissionDeniedView;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)updateStabilizationSampler;
-(void)internalSetState:(int)arg1 ;
-(void)showLibraryAccessDeniedView;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(void)stopVideoPlayer;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(id)inputLibraryAssetForFrameworkAsset:(id)arg1 ;
-(void)confirmInputAsset:(id)arg1 ;
-(void)setGridViewIsLoaded:(char)arg1 ;
-(void)setAlbum:(id)arg1 fromCollectionFetchResult:(id)arg2 ;
-(void)selectFirstAsset;
-(id<IGSelectAlbumDelegate>)albumControllerDelegate;
-(void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(void)showSelectAlbumController:(char)arg1 ;
-(void)setCropAsset:(id)arg1 ;
-(id)selectedAsset;
-(id)currentAlbumTitle;
-(void)setHasCaptureButtonConfirmed:(char)arg1 ;
-(void)confirmAssetIfPossible;
-(char)hasCaptureButtonConfirmed;
-(id<IGQuickCamOutputAsset>)outputAsset;
-(void)finalizeOutputAsset;
-(void)setOutputAsset:(id<IGQuickCamOutputAsset>)arg1 ;
-(void)setInputAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(CGRect)cropRectForOutputAsset;
-(id<IGQuickCamInputAsset>)inputAsset;
-(id)finalizeImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(IGSampleBuffer *)imageBufferData;
-(void)showAudioPermissionsDeniedAlertView;
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
-(void)showHoldToRecordNUX;
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidBeginRecording;
-(void)captureButtonDidEndRecording;
-(void)captureButtonDidConfirm;
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(void)assetPlayerViewPlayStateDidChange:(id)arg1 ;
-(void)assetPlayerView:(id)arg1 didPlayToTime:(SCD_Struct_IG0)arg2 ;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2 ;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1 ;
-(void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2 ;
-(void)gridViewControllerLibraryDidLoad:(id)arg1 ;
-(void)gridViewController:(id)arg1 didClickDisabledAsset:(id)arg2 ;
-(void)gridViewController:(id)arg1 firstAssetDidChange:(id)arg2 ;
-(void)captureSessionWillTakePhoto;
-(void)captureSessionNeedsResume:(char)arg1 ;
-(void)captureSessionDidDropVideoBuffer;
-(void)captureSessionDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureSessionDidDropAudioBuffer;
-(void)captureSessionDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)showStartNewAlbumButton;
-(void)setShowStartNewAlbumButton:(char)arg1 ;
-(void)showVideoTooShortNUX;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)hideNUX;
-(void)setAlbumControllerDelegate:(id<IGSelectAlbumDelegate>)arg1 ;
-(void)setSelectAlbumVC:(IGSelectAlbumController *)arg1 ;
-(void)setSelectedAsset:(id)arg1 ;
-(char)hasReceivedAudioFrames;
-(char)hasShownAudioPermissionsDeniedAlertView;
-(void)setHasShownAudioPermissionsDeniedAlertView:(char)arg1 ;
-(float)maxVideoDuration;
-(void)setMaxVideoDuration:(float)arg1 ;
-(void)setGridViewController:(IGGridViewController *)arg1 ;
-(IGAssetPlayerView *)playerView;
-(void)startCapture;
-(IGGridViewController *)gridViewController;
-(void)setCloseButton:(IGTapButton *)arg1 ;
-(void)setDelegate:(id<IGAlbumCameraViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGAlbumCameraViewControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(char)isBackgrounded;
-(void)setIsBackgrounded:(char)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setVisible:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)isVisible;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(void)stopRecording;
-(void)setFlashButton:(IGTapButton *)arg1 ;
-(IGTapButton *)flashButton;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)cancelRecording;
-(void)setFlashMode:(int)arg1 ;
-(void)startRecording;
-(IGTapButton *)closeButton;
@end

