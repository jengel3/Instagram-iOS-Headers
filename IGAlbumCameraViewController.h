/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumCameraPreviewActionViewDelegate.h>
#import <Instagram/IGCaptureManagerAudioSampleBufferDelegate.h>
#import <Instagram/IGCaptureManagerAudioSessionDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGCaptureManagerVideoSampleBufferDelegate.h>
#import <Instagram/IGQuickCamCaptureButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol IGAlbumCameraViewControllerDelegate, IGQuickCamInputAsset, IGQuickCamOutputAsset, OS_dispatch_queue;
@class UIView, IGTapButton, UITextView, IGAlbumCameraPreviewActionView, IGQuickCamCaptureButton, UIImageView, IGCaptureManager, IGVideoRecorder, NSObject, IGStabilizationSampler, IGSampleBuffer, IGCameraAccessPromptView, IGLibraryAccessPromptView, IGAlbumCameraPreviewViewController, IGAlbumCreationViewModel, NSString;

@interface IGAlbumCameraViewController : UIViewController <IGAlbumCameraPreviewActionViewDelegate, IGCaptureManagerAudioSampleBufferDelegate, IGCaptureManagerAudioSessionDelegate, IGCaptureManagerDelegate, IGCaptureManagerVideoSampleBufferDelegate, IGQuickCamCaptureButtonDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	char _visible;
	char _isBackgrounded;
	char _hasStartedCapture;
	char _hasReceivedAudioFrames;
	char _hasShownAudioPermissionsDeniedAlertView;
	char _hasCaptureButtonConfirmed;
	int _state;
	id<IGAlbumCameraViewControllerDelegate> _delegate;
	UIView* _contentView;
	IGTapButton* _addPeopleButton;
	UITextView* _captionTextView;
	IGTapButton* _closeButton;
	IGTapButton* _retakeButton;
	IGTapButton* _addTextButton;
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
	float _maxVideoDuration;
	/*^block*/id _recordAwaitingAudioSessionBlock;
	IGAlbumCameraPreviewViewController* _previewViewController;
	id<IGQuickCamInputAsset> _previewAsset;
	IGAlbumCreationViewModel* _viewModel;

}

@property (nonatomic,retain) UIView * contentView;                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) IGTapButton * addPeopleButton;                                           //@synthesize addPeopleButton=_addPeopleButton - In the implementation block
@property (nonatomic,retain) UITextView * captionTextView;                                            //@synthesize captionTextView=_captionTextView - In the implementation block
@property (nonatomic,retain) IGTapButton * closeButton;                                               //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IGTapButton * retakeButton;                                              //@synthesize retakeButton=_retakeButton - In the implementation block
@property (nonatomic,retain) IGTapButton * addTextButton;                                             //@synthesize addTextButton=_addTextButton - In the implementation block
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
@property (assign,nonatomic) float maxVideoDuration;                                                  //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
@property (assign,nonatomic) char hasCaptureButtonConfirmed;                                          //@synthesize hasCaptureButtonConfirmed=_hasCaptureButtonConfirmed - In the implementation block
@property (nonatomic,copy) id recordAwaitingAudioSessionBlock;                                        //@synthesize recordAwaitingAudioSessionBlock=_recordAwaitingAudioSessionBlock - In the implementation block
@property (nonatomic,retain) IGAlbumCameraPreviewViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> previewAsset;                                   //@synthesize previewAsset=_previewAsset - In the implementation block
@property (nonatomic,retain) IGAlbumCreationViewModel * viewModel;                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,getter=isVisible,nonatomic) char visible;                                           //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCameraViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewColorToDefault;
-(void)focusTap:(id)arg1 ;
-(void)handleDismiss:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)setAddPeopleButton:(IGTapButton *)arg1 ;
-(IGTapButton *)addPeopleButton;
-(void)addPeopleButtonTapped;
-(void)setAddTextButton:(IGTapButton *)arg1 ;
-(IGTapButton *)addTextButton;
-(void)addTextButtonTapped;
-(void)closeButtonTapped;
-(void)setPreviewActionView:(IGAlbumCameraPreviewActionView *)arg1 ;
-(IGAlbumCameraPreviewActionView *)previewActionView;
-(void)updateCurrentAlbumButton;
-(void)flashButtonTapped;
-(void)setRetakeButton:(IGTapButton *)arg1 ;
-(IGTapButton *)retakeButton;
-(void)retakeButtonTapped;
-(void)setSwitchCameraButton:(IGTapButton *)arg1 ;
-(IGTapButton *)switchCameraButton;
-(void)setCaptureButton:(IGQuickCamCaptureButton *)arg1 ;
-(IGQuickCamCaptureButton *)captureButton;
-(void)startLibrary;
-(void)updateFlashButton;
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
-(void)showAudioPermissionsDeniedAlertView;
-(int)fullSizeRequestID;
-(void)setFullSizeRequestID:(int)arg1 ;
-(void)setHasReceivedAudioFrames:(char)arg1 ;
-(id)recordAwaitingAudioSessionBlock;
-(void)setRecordAwaitingAudioSessionBlock:(id)arg1 ;
-(void)albumCameraPreviewActionViewDidTapAlbum:(id)arg1 ;
-(void)albumCameraPreviewActionViewDidTapShare:(id)arg1 ;
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidBeginRecording;
-(void)captureButtonDidEndRecording;
-(void)currentAlbumButtonTapped;
-(id)inputLibraryAssetForFrameworkAsset:(id)arg1 ;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(char)hasReceivedAudioFrames;
-(char)hasShownAudioPermissionsDeniedAlertView;
-(void)setHasShownAudioPermissionsDeniedAlertView:(char)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
-(void)captureButtonDidConfirm;
-(void)setCaptionTextView:(UITextView *)arg1 ;
-(UITextView *)captionTextView;
-(void)updateCaption;
-(void)captureManagerAudioSessionDidStartRunning:(id)arg1 ;
-(void)captureManagerDidSatisfyFocusRequest;
-(void)captureManagerNeedsResume:(char)arg1 ;
-(void)captureManagerDidDropVideoBuffer;
-(void)captureManagerDidDropAudioBuffer;
-(void)captureManagerDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureManagerDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureManagerWillTakePhoto;
-(IGCaptureManager *)captureManager;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)onSwitchCamerasButtonTapped;
-(void)setMaxVideoDuration:(float)arg1 ;
-(IGVideoRecorder *)videoRecorder;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(void)setHasStartedCapture:(char)arg1 ;
-(char)hasStartedCapture;
-(void)showCameraPermissionDeniedView;
-(void)updateStabilizationSampler;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(void)hideNUX;
-(unsigned)contentEditingInputRequestID;
-(void)setContentEditingInputRequestID:(unsigned)arg1 ;
-(id<IGQuickCamInputAsset>)previewAsset;
-(void)setPreviewAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)updateVideoSize;
-(void)showVideoTooShortNUX;
-(void)showHoldToRecordNUX;
-(IGSampleBuffer *)imageBufferData;
-(IGStabilizationSampler *)stabilizer;
-(char)cameraIsReady;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(float)maxVideoDuration;
-(void)startCapture;
-(IGAlbumCreationViewModel *)viewModel;
-(void)setViewModel:(IGAlbumCreationViewModel *)arg1 ;
-(IGAlbumCameraPreviewViewController *)previewViewController;
-(void)setPreviewViewController:(IGAlbumCameraPreviewViewController *)arg1 ;
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
