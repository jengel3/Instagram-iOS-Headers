
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAssetPlayerViewDelegate.h>
#import <Instagram/IGCaptureManagerAudioSampleBufferDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGCaptureManagerVideoSampleBufferDelegate.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>
#import <Instagram/IGGridViewControllerDelegate.h>
#import <Instagram/IGSelectAlbumDelegate.h>
#import <Instagram/IGQuickCamCaptureButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol IGSelectAlbumDelegate, IGQuickCamViewControllerDelegate, IGQuickCamOutputAsset, IGQuickCamInputAsset, OS_dispatch_queue;
@class UIView, IGGridViewController, IGQuickCamLibraryButton, IGQuickCamCaptureButton, IGTapButton, IGCropView, IGCameraGuideView, UIImageView, IGCircularProgressView, IGLabel, IGEmptyLibraryView, IGAssetPlayerView, IGSelectAlbumController, IGCaptureManager, IGVideoRecorder, NSObject, IGStabilizationSampler, IGSampleBuffer, IGCameraAccessPromptView, IGLibraryAccessPromptView, UILabel, NSString;

@interface IGQuickCamViewController : UIViewController <IGAssetPlayerViewDelegate, IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGCropViewUserInteractionDelegate, IGGridViewControllerDelegate, IGSelectAlbumDelegate, IGQuickCamCaptureButtonDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	char _visible;
	char _gridViewIsLoaded;
	char _isBackgrounded;
	char _hasStartedCapture;
	char _hasReceivedAudioFrames;
	char _hasShownAudioPermissionsDeniedAlertView;
	char _hasCaptureButtonConfirmed;
	int _state;
	id<IGSelectAlbumDelegate> _albumControllerDelegate;
	id<IGQuickCamViewControllerDelegate> _delegate;
	id<IGQuickCamOutputAsset> _outputAsset;
	UIView* _contentView;
	UIView* _backgroundView;
	IGGridViewController* _gridViewController;
	IGQuickCamLibraryButton* _libraryButton;
	IGQuickCamCaptureButton* _captureButton;
	IGTapButton* _switchCameraButton;
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

@property (nonatomic,retain) UIView * contentView;                                                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) char gridViewIsLoaded;                                                 //@synthesize gridViewIsLoaded=_gridViewIsLoaded - In the implementation block
@property (nonatomic,retain) IGGridViewController * gridViewController;                             //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,retain) IGQuickCamLibraryButton * libraryButton;                               //@synthesize libraryButton=_libraryButton - In the implementation block
@property (nonatomic,retain) IGQuickCamCaptureButton * captureButton;                               //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,retain) IGTapButton * switchCameraButton;                                      //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
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
@property (nonatomic,retain) id<IGQuickCamOutputAsset> outputAsset;                                 //@synthesize outputAsset=_outputAsset - In the implementation block
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
@property (assign,getter=isVisible,nonatomic) char visible;                                         //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) int state;                                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGSelectAlbumDelegate> albumControllerDelegate;              //@synthesize albumControllerDelegate=_albumControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGCaptureManager *)captureManager;
-(void)setViewColorToDefault;
-(void)focusTap:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)onSwitchCamerasButtonTapped;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(char)hasStartedCapture;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(IGVideoRecorder *)videoRecorder;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)updateStabilizationSampler;
-(void)setInputAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)confirmInputAsset:(id)arg1 ;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(void)updateVideoSize;
-(id<IGQuickCamInputAsset>)inputAsset;
-(IGQuickCamCaptureButton *)captureButton;
-(void)captureManagerDidSatisfyFocusRequest;
-(char)cameraIsReady;
-(IGStabilizationSampler *)stabilizer;
-(void)setHasReceivedAudioFrames:(char)arg1 ;
-(void)internalSetState:(int)arg1 ;
-(void)captureButtonDidEndRecording;
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidBeginRecording;
-(id)inputLibraryAssetForFrameworkAsset:(id)arg1 ;
-(void)captureManagerDidDropAudioBuffer;
-(void)captureManagerDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureManagerWillTakePhoto;
-(void)captureManagerNeedsResume:(char)arg1 ;
-(void)captureManagerDidDropVideoBuffer;
-(void)captureManagerDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureButtonDidConfirm;
-(IGTapButton *)switchCameraButton;
-(id<IGQuickCamOutputAsset>)outputAsset;
-(void)setOutputAsset:(id<IGQuickCamOutputAsset>)arg1 ;
-(IGSampleBuffer *)imageBufferData;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(char)hasReceivedAudioFrames;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(UIView *)loadingOverlayView;
-(void)setMaxVideoDuration:(float)arg1 ;
-(void)showCameraPermissionDeniedView;
-(float)maxVideoDuration;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(void)gridViewControllerLibraryDidLoad:(id)arg1 ;
-(id)currentAlbumTitle;
-(void)gridViewController:(id)arg1 didClickDisabledAsset:(id)arg2 ;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1 ;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2 ;
-(void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2 ;
-(void)gridViewController:(id)arg1 firstAssetDidChange:(id)arg2 ;
-(void)setAlbum:(id)arg1 fromCollectionFetchResult:(id)arg2 ;
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
-(void)setCropAsset:(id)arg1 ;
-(id)selectedAsset;
-(char)gridViewIsLoaded;
-(void)setSelectAlbumVC:(IGSelectAlbumController *)arg1 ;
-(void)stopVideoPlayer;
-(void)selectFirstAsset;
-(void)showSelectAlbumController:(char)arg1 ;
-(void)setGridViewIsLoaded:(char)arg1 ;
-(unsigned)contentEditingInputRequestID;
-(void)setContentEditingInputRequestID:(unsigned)arg1 ;
-(void)setSelectedAsset:(id)arg1 ;
-(void)hideLoadingViews;
-(id<IGQuickCamInputAsset>)previewAsset;
-(void)setPreviewAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(void)assetPlayerViewPlayStateDidChange:(id)arg1 ;
-(void)assetPlayerView:(id)arg1 didPlayToTime:(SCD_Struct_IG19)arg2 ;
-(void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)setVideoTakenCount:(int)arg1 ;
-(int)videoTakenCount;
-(void)setTapToRecordLabel:(UILabel *)arg1 ;
-(UILabel *)tapToRecordLabel;
-(void)setLibraryButton:(IGQuickCamLibraryButton *)arg1 ;
-(IGQuickCamLibraryButton *)libraryButton;
-(void)attemptChangeToLibraryState;
-(void)setSwitchCameraButton:(IGTapButton *)arg1 ;
-(void)setCaptureButton:(IGQuickCamCaptureButton *)arg1 ;
-(void)startLibrary;
-(void)showLibraryAccessDeniedView;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(id<IGSelectAlbumDelegate>)albumControllerDelegate;
-(void)setHasCaptureButtonConfirmed:(char)arg1 ;
-(void)confirmAssetIfPossible;
-(char)hasCaptureButtonConfirmed;
-(void)finalizeOutputAsset;
-(CGRect)cropRectForOutputAsset;
-(id)finalizeImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(void)showAudioPermissionsDeniedAlertView;
-(int)fullSizeRequestID;
-(void)setFullSizeRequestID:(int)arg1 ;
-(void)setAlbumControllerDelegate:(id<IGSelectAlbumDelegate>)arg1 ;
-(char)hasShownAudioPermissionsDeniedAlertView;
-(void)setHasShownAudioPermissionsDeniedAlertView:(char)arg1 ;
-(void)setGridViewController:(IGGridViewController *)arg1 ;
-(IGAssetPlayerView *)playerView;
-(void)startCapture;
-(IGGridViewController *)gridViewController;
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
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIView *)backgroundView;
-(void)setVisible:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)isVisible;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(void)stopRecording;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)cancelRecording;
-(void)startRecording;
@end

