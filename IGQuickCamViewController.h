/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:50 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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

@protocol IGQuickCamViewControllerDelegate, IGQuickCamOutputAsset, IGQuickCamInputAsset, OS_dispatch_queue;
@class UIView, IGGridViewController, IGQuickCamLibraryButton, IGQuickCamCaptureButton, IGTapButton, IGCropView, IGCameraGuideView, UIImageView, IGCircularProgressView, IGLabel, IGEmptyLibraryView, IGAssetPlayerView, IGSelectAlbumController, IGCaptureManager, IGVideoRecorder, NSObject, IGStabilizationSampler, IGSampleBuffer, IGCameraAccessPromptView, IGLibraryAccessPromptView, UILabel, NSString;

@interface IGQuickCamViewController : UIViewController <UIGestureRecognizerDelegate, UINavigationControllerDelegate, IGQuickCamCaptureButtonDelegate, IGAssetPlayerViewDelegate, IGCropViewUserInteractionDelegate, IGGridViewControllerDelegate, IGSelectAlbumDelegate, IGCaptureManagerDelegate, IGVideoSampleBufferDelegate, IGAudioSampleBufferDelegate, UIGestureRecognizerDelegate> {

	char _visible;
	char _gridViewIsLoaded;
	char _isBackgrounded;
	char _hasStartedCapture;
	char _hasReceivedAudioFrames;
	int _state;
	id<IGQuickCamViewControllerDelegate> _delegate;
	id<IGQuickCamOutputAsset> _outputAsset;
	UIView* _contentView;
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

}

@property (assign,getter=isVisible,nonatomic) char visible;                                      //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) int state;                                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<IGQuickCamOutputAsset> outputAsset;                              //@synthesize outputAsset=_outputAsset - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) char gridViewIsLoaded;                                              //@synthesize gridViewIsLoaded=_gridViewIsLoaded - In the implementation block
@property (nonatomic,retain) IGGridViewController * gridViewController;                          //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,retain) IGQuickCamLibraryButton * libraryButton;                            //@synthesize libraryButton=_libraryButton - In the implementation block
@property (nonatomic,retain) IGQuickCamCaptureButton * captureButton;                            //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,retain) IGTapButton * switchCameraButton;                                   //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                                              //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * guideView;                                      //@synthesize guideView=_guideView - In the implementation block
@property (nonatomic,retain) UIImageView * videoCoverFrameImageView;                             //@synthesize videoCoverFrameImageView=_videoCoverFrameImageView - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlayView;                                        //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,retain) UIImageView * loadingThumbnailView;                                 //@synthesize loadingThumbnailView=_loadingThumbnailView - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> previewAsset;                              //@synthesize previewAsset=_previewAsset - In the implementation block
@property (nonatomic,retain) IGLabel * unsupportedVideoLabel;                                    //@synthesize unsupportedVideoLabel=_unsupportedVideoLabel - In the implementation block
@property (nonatomic,retain) IGEmptyLibraryView * noMediaView;                                   //@synthesize noMediaView=_noMediaView - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                     //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) int fullSizeRequestID;                                              //@synthesize fullSizeRequestID=_fullSizeRequestID - In the implementation block
@property (assign,nonatomic) unsigned contentEditingInputRequestID;                              //@synthesize contentEditingInputRequestID=_contentEditingInputRequestID - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> inputAsset;                                //@synthesize inputAsset=_inputAsset - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (nonatomic,retain) IGSelectAlbumController * selectAlbumVC;                            //@synthesize selectAlbumVC=_selectAlbumVC - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                               //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIImageView * focusRing;                                            //@synthesize focusRing=_focusRing - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                                  //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                                    //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageBufferQueue;                      //@synthesize imageBufferQueue=_imageBufferQueue - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizer;                                //@synthesize stabilizer=_stabilizer - In the implementation block
@property (retain) IGSampleBuffer * imageBufferData;                                             //@synthesize imageBufferData=_imageBufferData - In the implementation block
@property (nonatomic,retain) IGCameraAccessPromptView * cameraPermissionDeniedView;              //@synthesize cameraPermissionDeniedView=_cameraPermissionDeniedView - In the implementation block
@property (nonatomic,retain) IGLibraryAccessPromptView * libraryAccessDeniedView;                //@synthesize libraryAccessDeniedView=_libraryAccessDeniedView - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                             //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign) char hasReceivedAudioFrames;                                                  //@synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames - In the implementation block
@property (nonatomic,retain) UILabel * tapToRecordLabel;                                         //@synthesize tapToRecordLabel=_tapToRecordLabel - In the implementation block
@property (assign,nonatomic) int videoTakenCount;                                                //@synthesize videoTakenCount=_videoTakenCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(void)captureDeviceDidSatisfyFocusRequest;
-(void)captureSessionNeedsResume:(char)arg1 ;
-(void)captureSessionDidDropVideoBuffer;
-(void)captureSessionDidDropAudioBuffer;
-(void)captureSessionDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureSessionDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureSessionWillTakePhoto;
-(IGCropView *)cropView;
-(void)hideNUX;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(IGCaptureManager *)captureManager;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)gridViewControllerLibraryDidLoad:(id)arg1 ;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1 ;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2 ;
-(void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2 ;
-(void)gridViewController:(id)arg1 firstAssetDidChange:(id)arg2 ;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)onSwitchCamerasButtonTapped;
-(IGVideoRecorder *)videoRecorder;
-(void)setCropView:(IGCropView *)arg1 ;
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
-(IGSelectAlbumController *)selectAlbumVC;
-(void)setSelectAlbumVC:(IGSelectAlbumController *)arg1 ;
-(char)gridViewIsLoaded;
-(char)hasStartedCapture;
-(void)setHasStartedCapture:(char)arg1 ;
-(void)showCameraPermissionDeniedView;
-(void)updateStabilizationSampler;
-(void)setStabilizer:(IGStabilizationSampler *)arg1 ;
-(void)stopVideoPlayer;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(void)showSelectAlbumController:(char)arg1 ;
-(void)setGridViewIsLoaded:(char)arg1 ;
-(unsigned)contentEditingInputRequestID;
-(void)setContentEditingInputRequestID:(unsigned)arg1 ;
-(void)hideLoadingViews;
-(id<IGQuickCamInputAsset>)previewAsset;
-(void)setPreviewAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)stopRecordingOnCaptureQueue:(char)arg1 ;
-(void)updateVideoSize;
-(void)showVideoTooShortNUX;
-(void)showHoldToRecordNUX;
-(IGSampleBuffer *)imageBufferData;
-(IGStabilizationSampler *)stabilizer;
-(char)cameraIsReady;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidConfirm;
-(void)captureButtonDidBeginRecording;
-(void)captureButtonDidEndRecording;
-(void)setViewColorToDefault;
-(void)focusTap:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)setVideoTakenCount:(int)arg1 ;
-(int)videoTakenCount;
-(void)setTapToRecordLabel:(UILabel *)arg1 ;
-(UILabel *)tapToRecordLabel;
-(void)setLibraryButton:(IGQuickCamLibraryButton *)arg1 ;
-(IGQuickCamLibraryButton *)libraryButton;
-(void)libraryButtonTapped;
-(void)setSwitchCameraButton:(IGTapButton *)arg1 ;
-(IGTapButton *)switchCameraButton;
-(void)setCaptureButton:(IGQuickCamCaptureButton *)arg1 ;
-(IGQuickCamCaptureButton *)captureButton;
-(void)startLibrary;
-(void)internalSetState:(int)arg1 ;
-(void)showLibraryAccessDeniedView;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(id)inputLibraryAssetForFrameworkAsset:(id)arg1 ;
-(void)confirmInputAsset:(id)arg1 ;
-(void)finalizeOutputAsset;
-(id<IGQuickCamOutputAsset>)outputAsset;
-(void)setOutputAsset:(id<IGQuickCamOutputAsset>)arg1 ;
-(void)setInputAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(CGRect)cropRectForOutputAsset;
-(id<IGQuickCamInputAsset>)inputAsset;
-(id)finalizeImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(void)showAudioPermissionsDeniedAlertView;
-(int)fullSizeRequestID;
-(void)setFullSizeRequestID:(int)arg1 ;
-(char)hasReceivedAudioFrames;
-(void)setHasReceivedAudioFrames:(char)arg1 ;
-(void)setGridViewController:(IGGridViewController *)arg1 ;
-(IGAssetPlayerView *)playerView;
-(void)startCapture;
-(IGGridViewController *)gridViewController;
-(void)setDelegate:(id<IGQuickCamViewControllerDelegate>)arg1 ;
-(void)dealloc;
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
-(void)startRecording;
@end

