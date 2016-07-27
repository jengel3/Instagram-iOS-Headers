
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGCaptureManagerVideoSampleBufferDelegate.h>
#import <Instagram/IGCaptureManagerAudioSampleBufferDelegate.h>
#import <Instagram/IGMediaCaptureButtonDelegate.h>
#import <Instagram/IGCaptureViewDelegate.h>
#import <Instagram/IGCameraViewControllerProtocol.h>

@protocol IGCaptureControllerDelegate;
@class IGCameraNavigationController, IGMediaMetadata, IGCaptureView, IGCaptureManager, IGVideoRecorder, IGDeviceAngleSampler, IGStabilizationSampler, IGVideoInfo, IGSampleBuffer, UIBarButtonItem, IGDirectedNUXView, NSOperationQueue, NSString;

@interface IGCaptureViewController : IGViewController <IGCaptureManagerDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGCaptureManagerAudioSampleBufferDelegate, IGMediaCaptureButtonDelegate, IGCaptureViewDelegate, IGCameraViewControllerProtocol> {

	char _shouldDelayCapture;
	char _hasStartedCapture;
	char _shouldCaptureFrames;
	char _changingModes;
	char _enableVideoTimer;
	id<IGCaptureControllerDelegate> _delegate;
	int _cameraMode;
	IGMediaMetadata* _mediaMetadata;
	IGCaptureView* _captureView;
	float _maxVideoDuration;
	IGCaptureManager* _captureManager;
	IGVideoRecorder* _videoRecorder;
	IGDeviceAngleSampler* _deviceAngleSampler;
	IGStabilizationSampler* _stabilizationSampler;
	IGVideoInfo* _videoInfo;
	IGSampleBuffer* _sampleBuffer;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _videoNextButton;
	IGDirectedNUXView* _nuxView;
	NSOperationQueue* _cameraModeQueue;

}

@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                              //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) IGCaptureView * captureView;                                  //@synthesize captureView=_captureView - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                       //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign,nonatomic) char shouldCaptureFrames;                                     //@synthesize shouldCaptureFrames=_shouldCaptureFrames - In the implementation block
@property (assign,nonatomic) char changingModes;                                           //@synthesize changingModes=_changingModes - In the implementation block
@property (assign,nonatomic) float maxVideoDuration;                                       //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                            //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                              //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) IGDeviceAngleSampler * deviceAngleSampler;                    //@synthesize deviceAngleSampler=_deviceAngleSampler - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizationSampler;                //@synthesize stabilizationSampler=_stabilizationSampler - In the implementation block
@property (nonatomic,retain) IGVideoInfo * videoInfo;                                      //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,retain) IGSampleBuffer * sampleBuffer;                                //@synthesize sampleBuffer=_sampleBuffer - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                               //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * videoNextButton;                            //@synthesize videoNextButton=_videoNextButton - In the implementation block
@property (nonatomic,retain) IGDirectedNUXView * nuxView;                                  //@synthesize nuxView=_nuxView - In the implementation block
@property (nonatomic,retain) NSOperationQueue * cameraModeQueue;                           //@synthesize cameraModeQueue=_cameraModeQueue - In the implementation block
@property (nonatomic,readonly) char enableVideoTimer;                                      //@synthesize enableVideoTimer=_enableVideoTimer - In the implementation block
@property (assign,nonatomic,__weak) id<IGCaptureControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int devicePosition; 
@property (assign,nonatomic) char shouldDelayCapture;                                      //@synthesize shouldDelayCapture=_shouldDelayCapture - In the implementation block
@property (assign,nonatomic) char cameraModeLocked; 
@property (nonatomic,readonly) int cameraMode;                                             //@synthesize cameraMode=_cameraMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGCameraNavigationController * navController; 
-(IGCaptureManager *)captureManager;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)setHasStartedCapture:(char)arg1 ;
-(char)hasStartedCapture;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)updateFlashButton;
-(void)updateStabilizationSampler;
-(void)setDevicePosition:(int)arg1 ;
-(id)analyticsModule;
-(IGVideoRecorder *)videoRecorder;
-(void)switchCameras;
-(void)updateVideoSize;
-(IGVideoInfo *)videoInfo;
-(void)captureManagerDidSatisfyFocusRequest;
-(char)cameraIsReady;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(void)captureManagerDidDropAudioBuffer;
-(void)captureManagerDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureManagerWillTakePhoto;
-(void)captureManagerNeedsResume:(char)arg1 ;
-(void)captureManagerDidDropVideoBuffer;
-(void)captureManagerDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)devicePosition;
-(void)toggleFlashMode;
-(void)updateHardwareOptionButtons;
-(void)setMaxVideoDuration:(float)arg1 ;
-(char)enableVideoTimer;
-(void)deleteClipButtonTapped;
-(void)deleteClipButtonLongPressed:(id)arg1 ;
-(void)focusUpdateRequested:(id)arg1 ;
-(void)setCameraMode:(int)arg1 animated:(char)arg2 informCaptureView:(char)arg3 ;
-(char)cameraModeLocked;
-(void)setCameraModeLocked:(char)arg1 ;
-(void)videoNextButtonTapped;
-(void)setCameraMode:(int)arg1 animated:(char)arg2 ;
-(void)updateSwitchCamerasButton;
-(void)stopVideoRenderAndUpload;
-(char)canCaptureAnotherClip;
-(void)showVideoNextNUX;
-(void)showHoldToRecordNUX;
-(void)updateVideoState;
-(void)showMinimumVideoDurationNUX;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)mediaCaptureButtonDidTakePicture;
-(void)mediaCaptureButtonDidBeginRecording;
-(void)mediaCaptureButtonDidEndRecording;
-(void)captureView:(id)arg1 didChangeToCameraMode:(int)arg2 ;
-(id)initWithDraft:(id)arg1 userSession:(id)arg2 ;
-(char)overlayIsOpaque;
-(char)prefersNavbarBottomBorderHidden;
-(id)initWithMediaMetadata:(id)arg1 ;
-(void)showAudioPermissionDialogIfNecessary;
-(char)shouldDelayCapture;
-(void)setShouldDelayCapture:(char)arg1 ;
-(IGCaptureView *)captureView;
-(void)setCaptureView:(IGCaptureView *)arg1 ;
-(char)shouldCaptureFrames;
-(void)setShouldCaptureFrames:(char)arg1 ;
-(char)changingModes;
-(void)setChangingModes:(char)arg1 ;
-(float)maxVideoDuration;
-(IGDeviceAngleSampler *)deviceAngleSampler;
-(void)setDeviceAngleSampler:(IGDeviceAngleSampler *)arg1 ;
-(IGStabilizationSampler *)stabilizationSampler;
-(void)setStabilizationSampler:(IGStabilizationSampler *)arg1 ;
-(void)setSampleBuffer:(IGSampleBuffer *)arg1 ;
-(UIBarButtonItem *)videoNextButton;
-(void)setVideoNextButton:(UIBarButtonItem *)arg1 ;
-(IGDirectedNUXView *)nuxView;
-(void)setNuxView:(IGDirectedNUXView *)arg1 ;
-(NSOperationQueue *)cameraModeQueue;
-(void)setCameraModeQueue:(NSOperationQueue *)arg1 ;
-(void)startCapture;
-(void)setDelegate:(id<IGCaptureControllerDelegate>)arg1 ;
-(id<IGCaptureControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(IGCameraNavigationController *)navController;
-(void)stopRecording;
-(IGSampleBuffer *)sampleBuffer;
-(void)orientationDidChange:(id)arg1 ;
-(void)stopCapture;
-(int)cameraMode;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(void)cancelButtonTapped;
@end

