
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAssetPlayerViewDelegate.h>
#import <Instagram/IGAudioSampleBufferDelegate.h>
#import <Instagram/IGCaptureManagerDelegate.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>
#import <Instagram/IGPanAnimationViewDelegate.h>
#import <Instagram/IGQuickCamCaptureButtonDelegate.h>
#import <Instagram/IGVideoSampleBufferDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol IGAlbumCameraViewControllerDelegate, IGQuickCamInputAsset, IGQuickCamOutputAsset, OS_dispatch_queue;
@class UIView, IGTapButton, IGQuickCamCaptureButton, IGCropView, IGCameraGuideView, UIImageView, IGCircularProgressView, IGAssetPlayerView, IGCaptureManager, IGVideoRecorder, NSObject, IGStabilizationSampler, IGSampleBuffer, IGCameraAccessPromptView, IGLibraryAccessPromptView, IGSurface, IGPostPipelineFilter, IGContext, IGFilterCollectionController, NSArray, IGPanAnimationView, IGAdjustController, IGAlbumCreationViewModel, NSString;

@interface IGAlbumCameraViewController : UIViewController <IGAssetPlayerViewDelegate, IGAudioSampleBufferDelegate, IGCaptureManagerDelegate, IGCropViewUserInteractionDelegate, IGPanAnimationViewDelegate, IGQuickCamCaptureButtonDelegate, IGVideoSampleBufferDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	char _visible;
	char _isBackgrounded;
	char _hasStartedCapture;
	char _hasReceivedAudioFrames;
	char _hasShownAudioPermissionsDeniedAlertView;
	char _hasCaptureButtonConfirmed;
	int _state;
	id<IGAlbumCameraViewControllerDelegate> _delegate;
	UIView* _contentView;
	IGTapButton* _currentAlbumButton;
	IGTapButton* _addPeopleButton;
	IGTapButton* _changeTitleButton;
	IGTapButton* _closeButton;
	IGTapButton* _retakeButton;
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
	IGAssetPlayerView* _playerView;
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
	IGSurface* _outSurface;
	IGPostPipelineFilter* _postPipelineFilter;
	IGContext* _renderingContext;
	IGFilterCollectionController* _filterTrayController;
	NSArray* _filters;
	int _selectedFilterIndex;
	IGPanAnimationView* _filterableDisplayView;
	IGAdjustController* _adjustController;
	IGAlbumCreationViewModel* _viewModel;
	CGSize _filteredRenderSize;

}

@property (assign,getter=isVisible,nonatomic) char visible;                                        //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) int state;                                                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCameraViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) IGTapButton * currentAlbumButton;                                     //@synthesize currentAlbumButton=_currentAlbumButton - In the implementation block
@property (nonatomic,retain) IGTapButton * addPeopleButton;                                        //@synthesize addPeopleButton=_addPeopleButton - In the implementation block
@property (nonatomic,retain) IGTapButton * changeTitleButton;                                      //@synthesize changeTitleButton=_changeTitleButton - In the implementation block
@property (nonatomic,retain) IGTapButton * closeButton;                                            //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IGTapButton * retakeButton;                                           //@synthesize retakeButton=_retakeButton - In the implementation block
@property (nonatomic,retain) IGQuickCamCaptureButton * captureButton;                              //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,retain) IGTapButton * flashButton;                                            //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) IGTapButton * switchCameraButton;                                     //@synthesize switchCameraButton=_switchCameraButton - In the implementation block
@property (nonatomic,retain) UIView * cropBackground;                                              //@synthesize cropBackground=_cropBackground - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                                                //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * guideView;                                        //@synthesize guideView=_guideView - In the implementation block
@property (nonatomic,retain) UIImageView * videoCoverFrameImageView;                               //@synthesize videoCoverFrameImageView=_videoCoverFrameImageView - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                                //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlayView;                                          //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,retain) UIImageView * loadingThumbnailView;                                   //@synthesize loadingThumbnailView=_loadingThumbnailView - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> previewAsset;                                //@synthesize previewAsset=_previewAsset - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                       //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) int fullSizeRequestID;                                                //@synthesize fullSizeRequestID=_fullSizeRequestID - In the implementation block
@property (assign,nonatomic) unsigned contentEditingInputRequestID;                                //@synthesize contentEditingInputRequestID=_contentEditingInputRequestID - In the implementation block
@property (nonatomic,retain) id<IGQuickCamInputAsset> inputAsset;                                  //@synthesize inputAsset=_inputAsset - In the implementation block
@property (nonatomic,retain) id<IGQuickCamOutputAsset> outputAsset;                                //@synthesize outputAsset=_outputAsset - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                  //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                                 //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIImageView * focusRing;                                              //@synthesize focusRing=_focusRing - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                                    //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) IGVideoRecorder * videoRecorder;                                      //@synthesize videoRecorder=_videoRecorder - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageBufferQueue;                        //@synthesize imageBufferQueue=_imageBufferQueue - In the implementation block
@property (nonatomic,retain) IGStabilizationSampler * stabilizer;                                  //@synthesize stabilizer=_stabilizer - In the implementation block
@property (retain) IGSampleBuffer * imageBufferData;                                               //@synthesize imageBufferData=_imageBufferData - In the implementation block
@property (nonatomic,retain) IGCameraAccessPromptView * cameraPermissionDeniedView;                //@synthesize cameraPermissionDeniedView=_cameraPermissionDeniedView - In the implementation block
@property (nonatomic,retain) IGLibraryAccessPromptView * libraryAccessDeniedView;                  //@synthesize libraryAccessDeniedView=_libraryAccessDeniedView - In the implementation block
@property (assign,nonatomic) char hasStartedCapture;                                               //@synthesize hasStartedCapture=_hasStartedCapture - In the implementation block
@property (assign) char hasReceivedAudioFrames;                                                    //@synthesize hasReceivedAudioFrames=_hasReceivedAudioFrames - In the implementation block
@property (assign,nonatomic) char hasShownAudioPermissionsDeniedAlertView;                         //@synthesize hasShownAudioPermissionsDeniedAlertView=_hasShownAudioPermissionsDeniedAlertView - In the implementation block
@property (assign,nonatomic) float maxVideoDuration;                                               //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
@property (assign,nonatomic) char hasCaptureButtonConfirmed;                                       //@synthesize hasCaptureButtonConfirmed=_hasCaptureButtonConfirmed - In the implementation block
@property (nonatomic,retain) IGSurface * outSurface;                                               //@synthesize outSurface=_outSurface - In the implementation block
@property (nonatomic,retain) IGPostPipelineFilter * postPipelineFilter;                            //@synthesize postPipelineFilter=_postPipelineFilter - In the implementation block
@property (nonatomic,retain) IGContext * renderingContext;                                         //@synthesize renderingContext=_renderingContext - In the implementation block
@property (nonatomic,retain) IGFilterCollectionController * filterTrayController;                  //@synthesize filterTrayController=_filterTrayController - In the implementation block
@property (assign,nonatomic) CGSize filteredRenderSize;                                            //@synthesize filteredRenderSize=_filteredRenderSize - In the implementation block
@property (nonatomic,retain) NSArray * filters;                                                    //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) int selectedFilterIndex;                                              //@synthesize selectedFilterIndex=_selectedFilterIndex - In the implementation block
@property (nonatomic,retain) IGPanAnimationView * filterableDisplayView;                           //@synthesize filterableDisplayView=_filterableDisplayView - In the implementation block
@property (nonatomic,retain) IGAdjustController * adjustController;                                //@synthesize adjustController=_adjustController - In the implementation block
@property (nonatomic,retain) IGAlbumCreationViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGCaptureManager *)captureManager;
-(void)setViewColorToDefault;
-(void)setVideoRecorder:(IGVideoRecorder *)arg1 ;
-(void)setupFilters;
-(void)setImageBufferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)imageBufferQueue;
-(void)focusTap:(id)arg1 ;
-(void)handleDismiss:(id)arg1 ;
-(void)setFocusRing:(UIImageView *)arg1 ;
-(UIImageView *)focusRing;
-(void)setAddPeopleButton:(IGTapButton *)arg1 ;
-(IGTapButton *)addPeopleButton;
-(void)addPeopleButtonTapped;
-(void)setChangeTitleButton:(IGTapButton *)arg1 ;
-(void)updateChangeTitleButton;
-(IGTapButton *)changeTitleButton;
-(void)changeTitleButtonTapped;
-(void)closeButtonTapped;
-(void)setCurrentAlbumButton:(IGTapButton *)arg1 ;
-(IGTapButton *)currentAlbumButton;
-(void)updateCurrentAlbumButton;
-(void)currentAlbumButtonTapped;
-(void)flashButtonTapped;
-(void)setRetakeButton:(IGTapButton *)arg1 ;
-(IGTapButton *)retakeButton;
-(void)retakeButtonTapped;
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
-(void)setFilterableDisplayView:(IGPanAnimationView *)arg1 ;
-(IGPanAnimationView *)filterableDisplayView;
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
-(void)stopVideoPlayer;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(id<IGQuickCamOutputAsset>)outputAsset;
-(void)setImageForFilters:(id)arg1 ;
-(void)setFilteredRenderSize:(CGSize)arg1 ;
-(void)setHasCaptureButtonConfirmed:(char)arg1 ;
-(void)confirmAssetIfPossible;
-(char)hasCaptureButtonConfirmed;
-(void)finalizeOutputAsset;
-(void)setOutputAsset:(id<IGQuickCamOutputAsset>)arg1 ;
-(void)setInputAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(CGRect)cropRectForOutputAsset;
-(id<IGQuickCamInputAsset>)inputAsset;
-(id)finalizeImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(char)currentImageIsFiltered;
-(int)selectedFilterIndex;
-(int)filterIndexForIndexOffset:(int)arg1 ;
-(id)imageFromFilterIndex:(unsigned)arg1 ;
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
-(void)hideLoadingViews;
-(id<IGQuickCamInputAsset>)previewAsset;
-(void)setPreviewAsset:(id<IGQuickCamInputAsset>)arg1 ;
-(void)captureDeviceDidSatisfyFocusRequest;
-(char)cameraIsReady;
-(IGStabilizationSampler *)stabilizer;
-(void)setImageBufferData:(IGSampleBuffer *)arg1 ;
-(void)setHasReceivedAudioFrames:(char)arg1 ;
-(void)showHoldToRecordNUX;
-(void)setPostPipelineFilter:(IGPostPipelineFilter *)arg1 ;
-(void)setRenderingContext:(IGContext *)arg1 ;
-(void)setAdjustController:(IGAdjustController *)arg1 ;
-(void)setFilterTrayController:(IGFilterCollectionController *)arg1 ;
-(IGFilterCollectionController *)filterTrayController;
-(CGSize)filteredRenderSize;
-(IGPostPipelineFilter *)postPipelineFilter;
-(IGSurface *)outSurface;
-(id)filteredImageFromPipelineUsingSize:(CGSize)arg1 ;
-(void)setSelectedFilterIndex:(int)arg1 ;
-(id)getSurfaceFromImage:(id)arg1 ;
-(void)setOutSurface:(IGSurface *)arg1 ;
-(IGAdjustController *)adjustController;
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(void)assetPlayerViewPlayStateDidChange:(id)arg1 ;
-(void)assetPlayerView:(id)arg1 didPlayToTime:(SCD_Struct_IG0)arg2 ;
-(void)captureSessionDidDropAudioBuffer;
-(void)captureSessionDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)captureSessionWillTakePhoto;
-(void)captureSessionNeedsResume:(char)arg1 ;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(void)panAnimationView:(id)arg1 willFinishPanAnimationWithDuration:(float)arg2 ;
-(void)panAnimationView:(id)arg1 willCancelPanAnimationWithDuration:(float)arg2 ;
-(void)panAnimationViewDidFinishPanToRight:(id)arg1 ;
-(void)panAnimationViewDidFinishPanToLeft:(id)arg1 ;
-(void)panAnimationView:(id)arg1 didPanToRightBy:(float)arg2 ;
-(void)panAnimationView:(id)arg1 didPanToLeftBy:(float)arg2 ;
-(void)panAnimationViewDidUpdateCenterImage:(id)arg1 ;
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidBeginRecording;
-(void)captureButtonDidEndRecording;
-(void)captureButtonDidConfirm;
-(void)captureSessionDidDropVideoBuffer;
-(void)captureSessionDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)configureWithViewModel:(id)arg1 ;
-(id)inputLibraryAssetForFrameworkAsset:(id)arg1 ;
-(void)resetFilter;
-(void)showVideoTooShortNUX;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)hideNUX;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(char)hasReceivedAudioFrames;
-(char)hasShownAudioPermissionsDeniedAlertView;
-(void)setHasShownAudioPermissionsDeniedAlertView:(char)arg1 ;
-(float)maxVideoDuration;
-(void)setMaxVideoDuration:(float)arg1 ;
-(IGContext *)renderingContext;
-(IGAssetPlayerView *)playerView;
-(void)startCapture;
-(IGAlbumCreationViewModel *)viewModel;
-(void)setViewModel:(IGAlbumCreationViewModel *)arg1 ;
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
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
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

