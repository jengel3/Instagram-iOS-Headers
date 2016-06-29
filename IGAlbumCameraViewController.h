
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumCameraPreviewActionViewDelegate.h>
#import <Instagram/IGCaptureManagerAudioSampleBufferDelegate.h>
#import <Instagram/IGCaptureManagerAudioSessionDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGCaptureManagerVideoSampleBufferDelegate.h>
#import <Instagram/IGDrawControllerDelegate.h>
#import <Instagram/IGQuickCamCaptureButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol IGAlbumCameraViewControllerDelegate, IGQuickCamInputAsset, IGQuickCamOutputAsset, OS_dispatch_queue;
@class UIView, UITextView, IGTapButton, IGAlbumCameraPreviewActionView, IGQuickCamCaptureButton, UIImageView, IGCaptureManager, IGVideoRecorder, NSObject, IGStabilizationSampler, IGSampleBuffer, IGCameraAccessPromptView, IGLibraryAccessPromptView, IGAlbumCameraPreviewViewController, IGReelCreationModel, IGDrawViewController, NSString;

@interface IGAlbumCameraViewController : UIViewController <IGAlbumCameraPreviewActionViewDelegate, IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerAudioSessionDelegate, IGCaptureManagerDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGDrawControllerDelegate, IGQuickCamCaptureButtonDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	char _visible;
	char _isBackgrounded;
	char _hasStartedCapture;
	char _hasReceivedAudioFrames;
	char _hasShownAudioPermissionsDeniedAlertView;
	char _hasCaptureButtonConfirmed;
	int _state;
	id<IGAlbumCameraViewControllerDelegate> _delegate;
	UIView* _contentView;
	UITextView* _captionTextView;
	IGTapButton* _closeButton;
	IGTapButton* _retakeButton;
	IGTapButton* _addTextButton;
	IGTapButton* _addDrawingButton;
	IGAlbumCameraPreviewActionView* _previewActionView;
	IGQuickCamCaptureButton* _captureButton;
	IGTapButton* _flashButton;
	IGTapButton* _switchCameraButton;
	int _fullSizeRequestID;
	unsigned _contentEditingInputRequestID;
	id<IGQuickCamInputAsset> _inputAsset;
	id<IGQuickCamOutputAsset> _outputAsset;
	UIView* _previewView;
	UIImageView* _focusRing;
	IGCaptureManager* _captureManager;
	IGVideoRecorder* _videoRecorder;
	NSObject*<OS_dispatch_queue> _imageBufferQueue;
	IGStabilizationSampler* _stabilizer;
	IGSampleBuffer* _imageBufferData;
	IGCameraAccessPromptView* _cameraPermissionDeniedView;
	IGLibraryAccessPromptView* _libraryAccessDeniedView;
	/*^block*/id _recordAwaitingAudioSessionBlock;
	IGAlbumCameraPreviewViewController* _previewViewController;
	id<IGQuickCamInputAsset> _previewAsset;
	IGReelCreationModel* _albumModel;
	IGDrawViewController* _drawViewController;
	IGTapButton* _drawCancelButton;
	IGTapButton* _drawConfirmButton;
	IGTapButton* _drawUndoButton;
	UIImageView* _drawingOverlayImageView;

}

@property (nonatomic,retain) UIView * contentView;                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UITextView * captionTextView;                                            //@synthesize captionTextView=_captionTextView - In the implementation block
@property (nonatomic,retain) IGTapButton * closeButton;                                               //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IGTapButton * retakeButton;                                              //@synthesize retakeButton=_retakeButton - In the implementation block
@property (nonatomic,retain) IGTapButton * addTextButton;                                             //@synthesize addTextButton=_addTextButton - In the implementation block
@property (nonatomic,retain) IGTapButton * addDrawingButton;                                          //@synthesize addDrawingButton=_addDrawingButton - In the implementation block
@property (nonatomic,retain) IGAlbumCameraPreviewActionView * previewActionView;                      //@synthesize previewActionView=_previewActionView - In the implementation block
@property (nonatomic,retain) IGQuickCamCaptureButton * captureButton;                                 //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,retain) IGTapButton * flashButton;                                               //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) IGTapButton * switchCameraButton;                                        //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
@property (assign,nonatomic) int fullSizeRequestID;                                                   //@synthesize fullSizeRequestID=_fullSizeRequestID - In the implementation block
@property (assign,nonatomic) unsigned contentEditingInputRequestID;                                   //@synthesize contentEditingInputRequestID=_contentEditingInputRequestID - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> inputAsset;                                     //@synthesize inputAsset=_inputAsset - In the implementation block
@property (nonatomic,retain) id<IGQuickCamOutputAsset> outputAsset;                                   //@synthesize outputAsset=_outputAsset - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                     //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                                    //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIImageView * focusRing;                                                 //@synthesize focusRing=_focusRing - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                                       //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                                         //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageBufferQueue;                           //@synthesize imageBufferQueue=_imageBufferQueue - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizer;                                     //@synthesize stabilizer=_stabilizer - In the implementation block
@property (retain) IGSampleBuffer * imageBufferData;                                                  //@synthesize imageBufferData=_imageBufferData - In the implementation block
@property (nonatomic,retain) IGCameraAccessPromptView * cameraPermissionDeniedView;                   //@synthesize cameraPermissionDeniedView=_cameraPermissionDeniedView - In the implementation block
@property (nonatomic,retain) IGLibraryAccessPromptView * libraryAccessDeniedView;                     //@synthesize libraryAccessDeniedView=_libraryAccessDeniedView - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                                  //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign) char hasReceivedAudioFrames;                                                       //@synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames - In the implementation block
@property (assign,nonatomic) char hasShownAudioPermissionsDeniedAlertView;                            //@synthesize hasShownAudioPermissionsDeniedAlertView=_hasShownAudioPermissionsDeniedAlertView - In the implementation block
@property (assign,nonatomic) char hasCaptureButtonConfirmed;                                          //@synthesize hasCaptureButtonConfirmed=_hasCaptureButtonConfirmed - In the implementation block
@property (nonatomic,copy) id recordAwaitingAudioSessionBlock;                                        //@synthesize recordAwaitingAudioSessionBlock=_recordAwaitingAudioSessionBlock - In the implementation block
@property (nonatomic,retain) IGAlbumCameraPreviewViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> previewAsset;                                   //@synthesize previewAsset=_previewAsset - In the implementation block
@property (nonatomic,retain) IGReelCreationModel * albumModel;                                        //@synthesize albumModel=_albumModel - In the implementation block
@property (nonatomic,retain) IGDrawViewController * drawViewController;                               //@synthesize drawViewController=_drawViewController - In the implementation block
@property (nonatomic,retain) IGTapButton * drawCancelButton;                                          //@synthesize drawCancelButton=_drawCancelButton - In the implementation block
@property (nonatomic,retain) IGTapButton * drawConfirmButton;                                         //@synthesize drawConfirmButton=_drawConfirmButton - In the implementation block
@property (nonatomic,retain) IGTapButton * drawUndoButton;                                            //@synthesize drawUndoButton=_drawUndoButton - In the implementation block
@property (nonatomic,retain) UIImageView * drawingOverlayImageView;                                   //@synthesize drawingOverlayImageView=_drawingOverlayImageView - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                                           //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCameraViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)undoLastStroke;
-(void)drawControllerDidAddStroke:(id)arg1 ;
-(void)albumCameraPreviewActionViewDidTapShare:(id)arg1 ;
-(IGCaptureManager *)captureManager;
-(void)setViewColorToDefault;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)focusTap:(id)arg1 ;
-(void)handleDismiss:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)setAddTextButton:(IGTapButton *)arg1 ;
-(IGTapButton *)addTextButton;
-(void)addTextButtonTapped;
-(void)setAddDrawingButton:(IGTapButton *)arg1 ;
-(IGTapButton *)addDrawingButton;
-(void)addDrawingButtonTapped;
-(void)closeButtonTapped;
-(void)setCaptionTextView:(UITextView *)arg1 ;
-(UITextView *)captionTextView;
-(void)setPreviewActionView:(IGAlbumCameraPreviewActionView *)arg1 ;
-(IGAlbumCameraPreviewActionView *)previewActionView;
-(void)flashButtonTapped;
-(void)setRetakeButton:(IGTapButton *)arg1 ;
-(IGTapButton *)retakeButton;
-(void)retakeButtonTapped;
-(void)setSwitchCameraButton:(IGTapButton *)arg1 ;
-(IGTapButton *)switchCameraButton;
-(void)onSwitchCamerasButtonTapped;
-(void)setCaptureButton:(IGQuickCamCaptureButton *)arg1 ;
-(IGQuickCamCaptureButton *)captureButton;
-(void)startLibrary;
-(char)hasStartedCapture;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)updateFlashButton;
-(void)showCameraPermissionDeniedView;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)updateStabilizationSampler;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(IGReelCreationModel *)albumModel;
-(void)setAlbumModel:(IGReelCreationModel *)arg1 ;
-(void)updateCaption;
-(void)dismissDrawingOverlay;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(UIImageView *)drawingOverlayImageView;
-(void)cancelDrawing;
-(void)confirmDrawing;
-(void)presentDrawingOverlay;
-(void)clearDrawing;
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
-(void)confirmInputAsset:(id)arg1 ;
-(void)internalSetState:(int)arg1 ;
-(IGSampleBuffer *)imageBufferData;
-(void)showAudioPermissionsDeniedAlertView;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(IGVideoRecorder *)videoRecorder;
-(void)updateVideoSize;
-(int)fullSizeRequestID;
-(void)setFullSizeRequestID:(int)arg1 ;
-(unsigned)contentEditingInputRequestID;
-(void)setContentEditingInputRequestID:(unsigned)arg1 ;
-(id<IGQuickCamInputAsset>)previewAsset;
-(void)setPreviewAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)captureManagerDidSatisfyFocusRequest;
-(char)cameraIsReady;
-(IGStabilizationSampler *)stabilizer;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(void)setHasReceivedAudioFrames:(char)arg1 ;
-(id)recordAwaitingAudioSessionBlock;
-(void)setRecordAwaitingAudioSessionBlock:(id)arg1 ;
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
-(void)configureWithViewModel:(id)arg1 ;
-(id)inputLibraryAssetForFrameworkAsset:(id)arg1 ;
-(void)albumCameraPreviewActionViewDidTapAlbum:(id)arg1 ;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(char)hasReceivedAudioFrames;
-(char)hasShownAudioPermissionsDeniedAlertView;
-(void)setHasShownAudioPermissionsDeniedAlertView:(char)arg1 ;
-(IGDrawViewController *)drawViewController;
-(void)setDrawViewController:(IGDrawViewController *)arg1 ;
-(IGTapButton *)drawCancelButton;
-(void)setDrawCancelButton:(IGTapButton *)arg1 ;
-(IGTapButton *)drawConfirmButton;
-(void)setDrawConfirmButton:(IGTapButton *)arg1 ;
-(IGTapButton *)drawUndoButton;
-(void)setDrawUndoButton:(IGTapButton *)arg1 ;
-(void)setDrawingOverlayImageView:(UIImageView *)arg1 ;
-(void)startCapture;
-(IGAlbumCameraPreviewViewController *)previewViewController;
-(void)setPreviewViewController:(IGAlbumCameraPreviewViewController *)arg1 ;
-(void)setCloseButton:(IGTapButton *)arg1 ;
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
-(char)isVisible;
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

