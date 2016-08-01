
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGAlbumCameraPermissionViewDelegate.h>
#import <Instagram/IGAlbumGalleryDelegate.h>
#import <Instagram/IGCaptureManagerAudioSampleBufferDelegate.h>
#import <Instagram/IGCaptureManagerAudioSessionDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGCaptureManagerVideoSampleBufferDelegate.h>
#import <Instagram/IGQuickCamCaptureButtonDelegate.h>
#import <Instagram/IGQuickCamAssetProcessorGenerationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol IGAlbumCameraViewControllerDelegate, IGQuickCamInputAsset, IGQuickCamOutputAsset;
@class IGTapButton, IGQuickCamCaptureButton, UIView, IGGradientView, IGQuickCamAssetProcessor, UIImageView, IGLabelTooltipView, IGCaptureManager, IGVideoRecorder, IGStabilizationSampler, IGSampleBuffer, IGAlbumCameraPermissionView, NSTimer, NSDate, IGAlbumGalleryViewController, UIVisualEffectView, IGPerformanceEvent, NSString;

@interface IGAlbumCameraViewController : IGViewController <IGAlbumCameraPermissionViewDelegate, IGAlbumGalleryDelegate, IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerAudioSessionDelegate, IGCaptureManagerDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGQuickCamCaptureButtonDelegate, IGQuickCamAssetProcessorGenerationDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UITextViewDelegate> {

	char _visible;
	char _isBackgrounded;
	char _hasStartedCapture;
	char _hasReceivedAudioFrames;
	char _volumeButtonIsRecordingVideo;
	int _state;
	id<IGAlbumCameraViewControllerDelegate> _delegate;
	IGTapButton* _closeButton;
	IGQuickCamCaptureButton* _captureButton;
	IGTapButton* _flashButton;
	IGTapButton* _switchCameraButton;
	UIView* _flashScreenView;
	UIView* _contentView;
	IGGradientView* _topGradient;
	IGGradientView* _bottomGradient;
	id<IGQuickCamInputAsset> _inputAsset;
	id<IGQuickCamOutputAsset> _outputAsset;
	IGQuickCamAssetProcessor* _assetProcessor;
	UIView* _previewView;
	UIImageView* _focusRing;
	IGLabelTooltipView* _nuxView;
	IGCaptureManager* _captureManager;
	IGVideoRecorder* _videoRecorder;
	IGStabilizationSampler* _stabilizer;
	IGSampleBuffer* _imageBufferData;
	IGAlbumCameraPermissionView* _permissionView;
	NSTimer* _volumePressTimer;
	NSDate* _lastVolumePress;
	/*^block*/id _recordAwaitingAudioSessionBlock;
	/*^block*/id _awaitingEndOfAudioSessionBlock;
	IGAlbumGalleryViewController* _galleryViewController;
	UIVisualEffectView* _cameraBlurOverlay;
	UIImageView* _galleryPreviewImageView;
	IGPerformanceEvent* _capturePhotoPerformanceEvent;
	IGPerformanceEvent* _captureVideoPerformanceEvent;
	double _targetCaptureSessionStopTime;

}

@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) IGGradientView * topGradient;                                         //@synthesize topGradient=_topGradient - In the implementation block
@property (nonatomic,retain) IGGradientView * bottomGradient;                                      //@synthesize bottomGradient=_bottomGradient - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> inputAsset;                                  //@synthesize inputAsset=_inputAsset - In the implementation block
@property (nonatomic,retain) id<IGQuickCamOutputAsset> outputAsset;                                //@synthesize outputAsset=_outputAsset - In the implementation block
@property (nonatomic,retain) IGQuickCamAssetProcessor * assetProcessor;                            //@synthesize assetProcessor=_assetProcessor - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                  //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                                 //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIImageView * focusRing;                                              //@synthesize focusRing=_focusRing - In the implementation block
@property (nonatomic,retain) IGLabelTooltipView * nuxView;                                         //@synthesize nuxView=_nuxView - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                                    //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                                      //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizer;                                  //@synthesize stabilizer=_stabilizer - In the implementation block
@property (retain) IGSampleBuffer * imageBufferData;                                               //@synthesize imageBufferData=_imageBufferData - In the implementation block
@property (nonatomic,retain) IGAlbumCameraPermissionView * permissionView;                         //@synthesize permissionView=_permissionView - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                               //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign) char hasReceivedAudioFrames;                                                    //@synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames - In the implementation block
@property (nonatomic,retain) NSTimer * volumePressTimer;                                           //@synthesize volumePressTimer=_volumePressTimer - In the implementation block
@property (nonatomic,retain) NSDate * lastVolumePress;                                             //@synthesize lastVolumePress=_lastVolumePress - In the implementation block
@property (assign,nonatomic) char volumeButtonIsRecordingVideo;                                    //@synthesize volumeButtonIsRecordingVideo=_volumeButtonIsRecordingVideo - In the implementation block
@property (nonatomic,copy) id recordAwaitingAudioSessionBlock;                                     //@synthesize recordAwaitingAudioSessionBlock=_recordAwaitingAudioSessionBlock - In the implementation block
@property (nonatomic,copy) id awaitingEndOfAudioSessionBlock;                                      //@synthesize awaitingEndOfAudioSessionBlock=_awaitingEndOfAudioSessionBlock - In the implementation block
@property (nonatomic,retain) IGAlbumGalleryViewController * galleryViewController;                 //@synthesize galleryViewController=_galleryViewController - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * cameraBlurOverlay;                               //@synthesize cameraBlurOverlay=_cameraBlurOverlay - In the implementation block
@property (nonatomic,retain) UIImageView * galleryPreviewImageView;                                //@synthesize galleryPreviewImageView=_galleryPreviewImageView - In the implementation block
@property (assign,nonatomic) double targetCaptureSessionStopTime;                                  //@synthesize targetCaptureSessionStopTime=_targetCaptureSessionStopTime - In the implementation block
@property (nonatomic,retain) IGPerformanceEvent * capturePhotoPerformanceEvent;                    //@synthesize capturePhotoPerformanceEvent=_capturePhotoPerformanceEvent - In the implementation block
@property (nonatomic,retain) IGPerformanceEvent * captureVideoPerformanceEvent;                    //@synthesize captureVideoPerformanceEvent=_captureVideoPerformanceEvent - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                                        //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) int state;                                                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCameraViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGTapButton * closeButton;                                          //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) IGQuickCamCaptureButton * captureButton;                            //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * flashButton;                                          //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * switchCameraButton;                                   //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
@property (nonatomic,readonly) UIView * flashScreenView;                                           //@synthesize flashScreenView=_flashScreenView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIVisualEffectView *)cameraBlurOverlay;
-(void)permissionsViewDidTapCameraEnable:(id)arg1 ;
-(void)permissionsViewDidTapMicrophoneEnable:(id)arg1 ;
-(IGCaptureManager *)captureManager;
-(void)setViewColorToDefault;
-(void)focusTap:(id)arg1 ;
-(void)doubleTapCamera:(id)arg1 ;
-(void)handleSwipeDownGesture:(id)arg1 ;
-(void)handlePinchToZoom:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)closeButtonTapped;
-(void)flashButtonTapped;
-(void)onSwitchCamerasButtonTapped;
-(void)showGallery;
-(char)shouldShowNUX;
-(void)showNUX;
-(IGAlbumCameraPermissionView *)permissionView;
-(void)updateWithChangedPermissions;
-(void)volumeButtonPressed:(id)arg1 ;
-(UIImageView *)galleryPreviewImageView;
-(void)setGalleryPreviewImageView:(UIImageView *)arg1 ;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(char)hasStartedCapture;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(IGVideoRecorder *)videoRecorder;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)updateFlashButton;
-(void)updateStabilizationSampler;
-(char)hasGrantedAllPermissions;
-(void)showMissingPermissionOverlay;
-(void)stopCaptureSessionIfNeededAfterTimeout:(double)arg1 ;
-(double)targetCaptureSessionStopTime;
-(void)setTargetCaptureSessionStopTime:(double)arg1 ;
-(void)setPermissionView:(IGAlbumCameraPermissionView *)arg1 ;
-(void)toggleCaptureButtonsHidden:(char)arg1 ;
-(void)setInputAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(IGPerformanceEvent *)capturePhotoPerformanceEvent;
-(void)setCapturePhotoPerformanceEvent:(IGPerformanceEvent *)arg1 ;
-(IGLabelTooltipView *)nuxView;
-(void)hideNUX;
-(void)flashScreen;
-(void)confirmInputAsset:(id)arg1 ;
-(id)analyticsModule;
-(IGPerformanceEvent *)captureVideoPerformanceEvent;
-(void)setCaptureVideoPerformanceEvent:(IGPerformanceEvent *)arg1 ;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(void)updateVideoSize;
-(UIView *)flashScreenView;
-(id<IGQuickCamInputAsset>)inputAsset;
-(void)setAssetProcessor:(IGQuickCamAssetProcessor *)arg1 ;
-(IGQuickCamAssetProcessor *)assetProcessor;
-(IGQuickCamCaptureButton *)captureButton;
-(void)setAwaitingEndOfAudioSessionBlock:(id)arg1 ;
-(void)finishWithOutputAsset:(id)arg1 ;
-(void)captureManagerDidSatisfyFocusRequest;
-(char)cameraIsReady;
-(IGStabilizationSampler *)stabilizer;
-(void)setHasReceivedAudioFrames:(char)arg1 ;
-(id)recordAwaitingAudioSessionBlock;
-(void)setRecordAwaitingAudioSessionBlock:(id)arg1 ;
-(void)internalSetState:(int)arg1 ;
-(id)awaitingEndOfAudioSessionBlock;
-(char)volumeButtonIsRecordingVideo;
-(void)captureButtonDidEndRecording;
-(void)captureButtonDidTakePicture;
-(void)setVolumePressTimer:(NSTimer *)arg1 ;
-(void)setVolumeButtonIsRecordingVideo:(char)arg1 ;
-(void)setLastVolumePress:(NSDate *)arg1 ;
-(NSTimer *)volumePressTimer;
-(void)captureButtonDidBeginRecording;
-(void)volumeButtonReleased;
-(IGAlbumGalleryViewController *)galleryViewController;
-(void)setGalleryViewController:(IGAlbumGalleryViewController *)arg1 ;
-(void)setCameraBlurOverlay:(UIVisualEffectView *)arg1 ;
-(void)handleTapToDismissGesture:(id)arg1 ;
-(void)handleSwipeUpToDismissGesture:(id)arg1 ;
-(void)dismissGallery;
-(void)albumGallery:(id)arg1 didPickAsset:(id)arg2 thumbnail:(id)arg3 ;
-(void)captureManagerDidDropAudioBuffer;
-(void)captureManagerDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureManagerAudioSessionDidStartRunning:(id)arg1 ;
-(void)captureManagerAudioSessionDidFinishCleanup:(id)arg1 ;
-(void)captureManagerWillTakePhoto;
-(void)captureManagerNeedsResume:(char)arg1 ;
-(void)captureManagerDidDropVideoBuffer;
-(void)captureManagerDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureButtonDidConfirm;
-(void)quickCamAssetProcessor:(id)arg1 didGeneratePhotoAsset:(id)arg2 ;
-(void)quickCamAssetProcessor:(id)arg1 didGenerateVideoAsset:(id)arg2 ;
-(void)quickCamAssetProcessor:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)quickCamAssetProcessorDidDetectIncompatible:(id)arg1 ;
-(void)quickCamAssetProcessorDidFailProcessing:(id)arg1 ;
-(char)prefersTabBarHidden;
-(void)warmCaptureSessionWithTimeout:(double)arg1 ;
-(void)stopCaptureIfNotVisible;
-(IGTapButton *)switchCameraButton;
-(IGGradientView *)topGradient;
-(void)setTopGradient:(IGGradientView *)arg1 ;
-(IGGradientView *)bottomGradient;
-(void)setBottomGradient:(IGGradientView *)arg1 ;
-(id<IGQuickCamOutputAsset>)outputAsset;
-(void)setOutputAsset:(id<IGQuickCamOutputAsset>)arg1 ;
-(void)setNuxView:(IGLabelTooltipView *)arg1 ;
-(IGSampleBuffer *)imageBufferData;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(char)hasReceivedAudioFrames;
-(NSDate *)lastVolumePress;
-(void)startCapture;
-(void)setDelegate:(id<IGAlbumCameraViewControllerDelegate>)arg1 ;
-(void)dealloc;
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
-(void)viewDidDisappear:(char)arg1 ;
-(char)isVisible;
-(void)stopRecording;
-(IGTapButton *)flashButton;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)cancelRecording;
-(void)setFlashMode:(int)arg1 ;
-(void)startRecording;
-(void)stopCapture;
-(IGTapButton *)closeButton;
-(char)prefersNavigationBarHidden;
@end

