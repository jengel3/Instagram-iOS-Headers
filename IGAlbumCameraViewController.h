
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGCaptureManagerAudioSampleBufferDelegate.h>
#import <Instagram/IGCaptureManagerAudioSessionDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGCaptureManagerVideoSampleBufferDelegate.h>
#import <Instagram/IGQuickCamCaptureButtonDelegate.h>
#import <Instagram/IGQuickCamAssetProcessorGenerationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol IGAlbumCameraViewControllerDelegate, IGQuickCamInputAsset, IGQuickCamOutputAsset;
@class IGTapButton, IGQuickCamCaptureButton, UIView, IGGradientView, IGQuickCamAssetProcessor, UIImageView, IGCaptureManager, IGVideoRecorder, IGStabilizationSampler, IGSampleBuffer, IGCameraAccessPromptView, IGLibraryAccessPromptView, NSString;

@interface IGAlbumCameraViewController : UIViewController <IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerAudioSessionDelegate, IGCaptureManagerDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGQuickCamCaptureButtonDelegate, IGQuickCamAssetProcessorGenerationDelegate, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate> {

	char _visible;
	char _isBackgrounded;
	char _hasStartedCapture;
	char _hasReceivedAudioFrames;
	char _hasShownAudioPermissionsDeniedAlertView;
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
	IGCaptureManager* _captureManager;
	IGVideoRecorder* _videoRecorder;
	IGStabilizationSampler* _stabilizer;
	IGSampleBuffer* _imageBufferData;
	IGCameraAccessPromptView* _cameraPermissionDeniedView;
	IGLibraryAccessPromptView* _libraryAccessDeniedView;
	/*^block*/id _recordAwaitingAudioSessionBlock;

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
@property (nonatomic,retain) IGCaptureManager * captureManager;                                    //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                                      //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizer;                                  //@synthesize stabilizer=_stabilizer - In the implementation block
@property (retain) IGSampleBuffer * imageBufferData;                                               //@synthesize imageBufferData=_imageBufferData - In the implementation block
@property (nonatomic,retain) IGCameraAccessPromptView * cameraPermissionDeniedView;                //@synthesize cameraPermissionDeniedView=_cameraPermissionDeniedView - In the implementation block
@property (nonatomic,retain) IGLibraryAccessPromptView * libraryAccessDeniedView;                  //@synthesize libraryAccessDeniedView=_libraryAccessDeniedView - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                               //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign) char hasReceivedAudioFrames;                                                    //@synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames - In the implementation block
@property (assign,nonatomic) char hasShownAudioPermissionsDeniedAlertView;                         //@synthesize hasShownAudioPermissionsDeniedAlertView=_hasShownAudioPermissionsDeniedAlertView - In the implementation block
@property (nonatomic,copy) id recordAwaitingAudioSessionBlock;                                     //@synthesize recordAwaitingAudioSessionBlock=_recordAwaitingAudioSessionBlock - In the implementation block
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
-(IGCaptureManager *)captureManager;
-(void)setViewColorToDefault;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)focusTap:(id)arg1 ;
-(void)handleSwipeUpGesture:(id)arg1 ;
-(void)handlePinchToZoom:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)closeButtonTapped;
-(void)flashButtonTapped;
-(void)onSwitchCamerasButtonTapped;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(char)hasStartedCapture;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)updateFlashButton;
-(void)showCameraPermissionDeniedView;
-(void)updateStabilizationSampler;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(void)setInputAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)flashScreen;
-(void)confirmInputAsset:(id)arg1 ;
-(void)showAudioPermissionsDeniedAlertView;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(IGVideoRecorder *)videoRecorder;
-(void)updateVideoSize;
-(UIView *)flashScreenView;
-(id<IGQuickCamInputAsset>)inputAsset;
-(void)setAssetProcessor:(IGQuickCamAssetProcessor *)arg1 ;
-(IGQuickCamAssetProcessor *)assetProcessor;
-(IGQuickCamCaptureButton *)captureButton;
-(void)finishWithOutputAsset:(id)arg1 ;
-(void)captureManagerDidSatisfyFocusRequest;
-(char)cameraIsReady;
-(IGStabilizationSampler *)stabilizer;
-(void)setHasReceivedAudioFrames:(char)arg1 ;
-(id)recordAwaitingAudioSessionBlock;
-(void)setRecordAwaitingAudioSessionBlock:(id)arg1 ;
-(void)internalSetState:(int)arg1 ;
-(id)inputLibraryAssetForFrameworkAsset:(id)arg1 ;
-(void)captureManagerDidDropAudioBuffer;
-(void)captureManagerDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureManagerAudioSessionDidStartRunning:(id)arg1 ;
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
-(IGTapButton *)switchCameraButton;
-(IGGradientView *)topGradient;
-(void)setTopGradient:(IGGradientView *)arg1 ;
-(IGGradientView *)bottomGradient;
-(void)setBottomGradient:(IGGradientView *)arg1 ;
-(id<IGQuickCamOutputAsset>)outputAsset;
-(void)setOutputAsset:(id<IGQuickCamOutputAsset>)arg1 ;
-(IGSampleBuffer *)imageBufferData;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(char)hasReceivedAudioFrames;
-(char)hasShownAudioPermissionsDeniedAlertView;
-(void)setHasShownAudioPermissionsDeniedAlertView:(char)arg1 ;
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
-(char)isVisible;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)stopRecording;
-(IGTapButton *)flashButton;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)cancelRecording;
-(void)setFlashMode:(int)arg1 ;
-(void)startRecording;
-(void)stopCapture;
-(IGTapButton *)closeButton;
@end

