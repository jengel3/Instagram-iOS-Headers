
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGAssetPlayerViewDelegate.h>
#import <Instagram/IGCropViewUserInteractionDelegate.h>
#import <Instagram/IGCustomAlertViewControllerDelegate.h>
#import <Instagram/IGGridViewControllerDelegate.h>
#import <Instagram/IGGridViewControllerScrollDelegate.h>
#import <Instagram/IGSelectAlbumDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/IGCaptureControllerDelegate.h>
#import <Instagram/IGAlbumCreationViewControllerNavigationDelegate.h>
#import <Instagram/IGGridViewControllerCameraItemDelegate.h>
#import <Instagram/IGDraftBrowserViewControllerDelegate.h>
#import <Instagram/IGCameraViewControllerProtocol.h>

@protocol IGMediaCaptureViewControllerDelegate;
@class IGMediaMetadata, IGUserSession, IGGridViewController, IGMediaTabBar, UIScrollView, NSArray, UIView, IGCaptureViewController, IGVideoInfo, IGVideoComposition, IGAlbumCreationViewController, IGAppInstallationsHelper, IGDirectedNUXView, IGCropView, IGCircularProgressView, UIImageView, IGTapButton, IGNuxButton, IGAssetPlayerView, IGVideoPlayButton, UITapGestureRecognizer, IGCameraGuideView, IGLabel, IGEmptyLibraryView, UIPanGestureRecognizer, NSMutableDictionary, NSDictionary, UIBarButtonItem, IGChevronTitleButton, IGSelectAlbumController, IGEditorViewController, IGCustomAlertViewController, NSString, IGCameraNavigationController;

@interface IGMediaCaptureViewController : IGViewController <IGAssetPlayerViewDelegate, IGCropViewUserInteractionDelegate, IGCustomAlertViewControllerDelegate, IGGridViewControllerDelegate, IGGridViewControllerScrollDelegate, IGSelectAlbumDelegate, UIScrollViewDelegate, IGCaptureControllerDelegate, IGAlbumCreationViewControllerNavigationDelegate, IGGridViewControllerCameraItemDelegate, IGDraftBrowserViewControllerDelegate, IGCameraViewControllerProtocol> {

	char _shouldCaptureFrames;
	char _isBackgrounded;
	char _gridViewIsLoaded;
	char _shouldStopCaptureInLibrary;
	char _reelEnabled;
	char _layoutButtonVisible;
	char _shouldShowDownloadLayoutNuxIfUnseen;
	char _shouldAutoPlayVideo;
	char _wasPlayingVideo;
	char _isPushingCropView;
	char _isAutoPlayVideoThumbnailEnabled;
	id<IGMediaCaptureViewControllerDelegate> _delegate;
	IGMediaMetadata* _mediaMetadata;
	IGMediaMetadata* _draftToSelect;
	IGUserSession* _userSession;
	int _state;
	int _mode;
	IGGridViewController* _gridViewController;
	IGMediaTabBar* _mediaTabBar;
	UIScrollView* _scrollView;
	NSArray* _disabledScrollViews;
	UIView* _cameraContainerView;
	IGCaptureViewController* _captureViewController;
	IGCaptureViewController* _presentedCaptureViewController;
	IGVideoInfo* _videoInfo;
	IGVideoComposition* _currentlyFilmingVideoComposition;
	IGAlbumCreationViewController* _albumCameraController;
	IGAppInstallationsHelper* _appInstallationsHelper;
	IGDirectedNUXView* _NUXView;
	UIView* _cropContainer;
	UIView* _cropContentsContainer;
	IGCropView* _cropView;
	IGCropView* _videoCoverFrameImageView;
	IGCircularProgressView* _progressView;
	UIView* _loadingOverlayView;
	UIImageView* _loadingThumbnailView;
	id _previewAsset;
	IGTapButton* _layoutButton;
	IGNuxButton* _boomerangButton;
	IGTapButton* _longcatButton;
	IGAssetPlayerView* _playerView;
	IGVideoPlayButton* _playButton;
	UITapGestureRecognizer* _playTap;
	IGCameraGuideView* _guideView;
	IGLabel* _unsupportedVideoLabel;
	IGEmptyLibraryView* _noMediaView;
	int _cropState;
	int _cropMode;
	float _startCropMaxY;
	float _cropOffsetY;
	UITapGestureRecognizer* _cropTap;
	UITapGestureRecognizer* _cropDoubleTap;
	UIPanGestureRecognizer* _cropPanExpand;
	UIPanGestureRecognizer* _cropPanMinimize;
	float _startCropPanTouchInsetY;
	UIView* _cropOverlayView;
	unsigned _contentEditingInputRequestID;
	NSMutableDictionary* _pendingVideoRequests;
	NSDictionary* _metadata;
	id _fullResolutionSource;
	/*^block*/id _fullResolutionCompletionBlock;
	/*^block*/id _multiClipCompletionBlock;
	id _selectedAsset;
	NSMutableDictionary* _selectedVideos;
	float _maxVideoDuration;
	UIBarButtonItem* _dismissButtonItem;
	UIBarButtonItem* _libraryNextButtonItem;
	UIBarButtonItem* _libraryLoadingNextButtonItem;
	IGChevronTitleButton* _chevronTitleButton;
	IGSelectAlbumController* _selectAlbumVC;
	IGEditorViewController* _currentEditor;
	IGCustomAlertViewController* _layoutAlertViewController;
	IGCustomAlertViewController* _boomerangAlertViewController;
	CGSize _previewImageSize;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                           //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic) char isBackgrounded;                                                     //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int mode;                                                                //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) char gridViewIsLoaded;                                                   //@synthesize gridViewIsLoaded=_gridViewIsLoaded - In the implementation block
@property (nonatomic,retain) IGGridViewController * gridViewController;                               //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,retain) IGMediaTabBar * mediaTabBar;                                             //@synthesize mediaTabBar=_mediaTabBar - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSArray * disabledScrollViews;                                           //@synthesize disabledScrollViews=_disabledScrollViews - In the implementation block
@property (nonatomic,retain) UIView * cameraContainerView;                                            //@synthesize cameraContainerView=_cameraContainerView - In the implementation block
@property (nonatomic,retain) IGCaptureViewController * captureViewController;                         //@synthesize captureViewController=_captureViewController - In the implementation block
@property (nonatomic,retain) IGCaptureViewController * presentedCaptureViewController;                //@synthesize presentedCaptureViewController=_presentedCaptureViewController - In the implementation block
@property (nonatomic,retain) IGVideoInfo * videoInfo;                                                 //@synthesize videoInfo=_videoInfo - In the implementation block
@property (assign,nonatomic) char shouldStopCaptureInLibrary;                                         //@synthesize shouldStopCaptureInLibrary=_shouldStopCaptureInLibrary - In the implementation block
@property (nonatomic,retain) IGVideoComposition * currentlyFilmingVideoComposition;                   //@synthesize currentlyFilmingVideoComposition=_currentlyFilmingVideoComposition - In the implementation block
@property (nonatomic,readonly) char reelEnabled;                                                      //@synthesize reelEnabled=_reelEnabled - In the implementation block
@property (nonatomic,retain) IGAlbumCreationViewController * albumCameraController;                   //@synthesize albumCameraController=_albumCameraController - In the implementation block
@property (nonatomic,retain) IGAppInstallationsHelper * appInstallationsHelper;                       //@synthesize appInstallationsHelper=_appInstallationsHelper - In the implementation block
@property (nonatomic,retain) IGDirectedNUXView * NUXView;                                             //@synthesize NUXView=_NUXView - In the implementation block
@property (nonatomic,retain) UIView * cropContainer;                                                  //@synthesize cropContainer=_cropContainer - In the implementation block
@property (nonatomic,retain) UIView * cropContentsContainer;                                          //@synthesize cropContentsContainer=_cropContentsContainer - In the implementation block
@property (nonatomic,retain) IGCropView * cropView;                                                   //@synthesize cropView=_cropView - In the implementation block
@property (nonatomic,retain) IGCropView * videoCoverFrameImageView;                                   //@synthesize videoCoverFrameImageView=_videoCoverFrameImageView - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;                                   //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlayView;                                             //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (nonatomic,retain) UIImageView * loadingThumbnailView;                                      //@synthesize loadingThumbnailView=_loadingThumbnailView - In the implementation block
@property (nonatomic,retain) id previewAsset;                                                         //@synthesize previewAsset=_previewAsset - In the implementation block
@property (assign,nonatomic) char layoutButtonVisible;                                                //@synthesize layoutButtonVisible=_layoutButtonVisible - In the implementation block
@property (assign,nonatomic) char shouldShowDownloadLayoutNuxIfUnseen;                                //@synthesize shouldShowDownloadLayoutNuxIfUnseen=_shouldShowDownloadLayoutNuxIfUnseen - In the implementation block
@property (nonatomic,retain) IGTapButton * layoutButton;                                              //@synthesize layoutButton=_layoutButton - In the implementation block
@property (nonatomic,retain) IGNuxButton * boomerangButton;                                           //@synthesize boomerangButton=_boomerangButton - In the implementation block
@property (nonatomic,retain) IGTapButton * longcatButton;                                             //@synthesize longcatButton=_longcatButton - In the implementation block
@property (nonatomic,retain) IGAssetPlayerView * playerView;                                          //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) IGVideoPlayButton * playButton;                                          //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * playTap;                                        //@synthesize playTap=_playTap - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * guideView;                                           //@synthesize guideView=_guideView - In the implementation block
@property (assign,nonatomic) char shouldAutoPlayVideo;                                                //@synthesize shouldAutoPlayVideo=_shouldAutoPlayVideo - In the implementation block
@property (assign,nonatomic) char wasPlayingVideo;                                                    //@synthesize wasPlayingVideo=_wasPlayingVideo - In the implementation block
@property (nonatomic,retain) IGLabel * unsupportedVideoLabel;                                         //@synthesize unsupportedVideoLabel=_unsupportedVideoLabel - In the implementation block
@property (nonatomic,retain) IGEmptyLibraryView * noMediaView;                                        //@synthesize noMediaView=_noMediaView - In the implementation block
@property (assign,nonatomic) int cropState;                                                           //@synthesize cropState=_cropState - In the implementation block
@property (assign,nonatomic) int cropMode;                                                            //@synthesize cropMode=_cropMode - In the implementation block
@property (assign,nonatomic) float startCropMaxY;                                                     //@synthesize startCropMaxY=_startCropMaxY - In the implementation block
@property (assign,nonatomic) float cropOffsetY;                                                       //@synthesize cropOffsetY=_cropOffsetY - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * cropTap;                                        //@synthesize cropTap=_cropTap - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * cropDoubleTap;                                  //@synthesize cropDoubleTap=_cropDoubleTap - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * cropPanExpand;                                  //@synthesize cropPanExpand=_cropPanExpand - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * cropPanMinimize;                                //@synthesize cropPanMinimize=_cropPanMinimize - In the implementation block
@property (assign,nonatomic) float startCropPanTouchInsetY;                                           //@synthesize startCropPanTouchInsetY=_startCropPanTouchInsetY - In the implementation block
@property (assign,nonatomic) char isPushingCropView;                                                  //@synthesize isPushingCropView=_isPushingCropView - In the implementation block
@property (nonatomic,retain) UIView * cropOverlayView;                                                //@synthesize cropOverlayView=_cropOverlayView - In the implementation block
@property (assign,nonatomic) unsigned contentEditingInputRequestID;                                   //@synthesize contentEditingInputRequestID=_contentEditingInputRequestID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingVideoRequests;                              //@synthesize pendingVideoRequests=_pendingVideoRequests - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                 //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) CGSize previewImageSize;                                                 //@synthesize previewImageSize=_previewImageSize - In the implementation block
@property (nonatomic,retain) id fullResolutionSource;                                                 //@synthesize fullResolutionSource=_fullResolutionSource - In the implementation block
@property (nonatomic,copy) id fullResolutionCompletionBlock;                                          //@synthesize fullResolutionCompletionBlock=_fullResolutionCompletionBlock - In the implementation block
@property (nonatomic,copy) id multiClipCompletionBlock;                                               //@synthesize multiClipCompletionBlock=_multiClipCompletionBlock - In the implementation block
@property (nonatomic,retain) id selectedAsset;                                                        //@synthesize selectedAsset=_selectedAsset - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * selectedVideos;                                    //@synthesize selectedVideos=_selectedVideos - In the implementation block
@property (assign,nonatomic) float maxVideoDuration;                                                  //@synthesize maxVideoDuration=_maxVideoDuration - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * dismissButtonItem;                                     //@synthesize dismissButtonItem=_dismissButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryNextButtonItem;                                 //@synthesize libraryNextButtonItem=_libraryNextButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryLoadingNextButtonItem;                          //@synthesize libraryLoadingNextButtonItem=_libraryLoadingNextButtonItem - In the implementation block
@property (nonatomic,retain) IGChevronTitleButton * chevronTitleButton;                               //@synthesize chevronTitleButton=_chevronTitleButton - In the implementation block
@property (nonatomic,retain) IGSelectAlbumController * selectAlbumVC;                                 //@synthesize selectAlbumVC=_selectAlbumVC - In the implementation block
@property (assign,nonatomic,__weak) IGEditorViewController * currentEditor;                           //@synthesize currentEditor=_currentEditor - In the implementation block
@property (nonatomic,retain) IGCustomAlertViewController * layoutAlertViewController;                 //@synthesize layoutAlertViewController=_layoutAlertViewController - In the implementation block
@property (nonatomic,retain) IGCustomAlertViewController * boomerangAlertViewController;              //@synthesize boomerangAlertViewController=_boomerangAlertViewController - In the implementation block
@property (nonatomic,readonly) char isAutoPlayVideoThumbnailEnabled;                                  //@synthesize isAutoPlayVideoThumbnailEnabled=_isAutoPlayVideoThumbnailEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGMediaCaptureViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                         //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * draftToSelect;                                         //@synthesize draftToSelect=_draftToSelect - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGCameraNavigationController * navController; 
-(void)hideNUX;
-(id)analyticsModule;
-(IGVideoInfo *)videoInfo;
-(void)creationViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)creationViewController:(id)arg1 didFinishWithExitPoint:(int)arg2 ;
-(void)creationViewControllerDidSharePost:(id)arg1 ;
-(void)creationViewController:(id)arg1 sharePostDidDismissWithExitPoint:(int)arg2 ;
-(void)customAlertViewDidConfirm:(id)arg1 ;
-(void)customAlertViewDidCancel:(id)arg1 ;
-(void)setPlayerView:(IGAssetPlayerView *)arg1 ;
-(UIView *)loadingOverlayView;
-(void)setMaxVideoDuration:(float)arg1 ;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(void)captureController:(id)arg1 didUpdateVideoComposition:(id)arg2 ;
-(void)captureControllerDidEndFilmingClip:(id)arg1 ;
-(void)captureController:(id)arg1 didConfirmVideoComposition:(id)arg2 mediaMetadata:(id)arg3 ;
-(void)captureControllerDidCancelCapture:(id)arg1 ;
-(void)showNUXWithTitle:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)captureController:(id)arg1 willTakePhotoWithPreviewBuffer:(id)arg2 mediaMetadata:(id)arg3 ;
-(void)captureController:(id)arg1 didTakePhotoWithBuffer:(id)arg2 mediaMetadata:(id)arg3 ;
-(void)captureControllerWillBeginFilmingClip:(id)arg1 ;
-(void)captureController:(id)arg1 didChangeToCameraMode:(int)arg2 ;
-(id)initWithDraft:(id)arg1 userSession:(id)arg2 ;
-(char)overlayIsOpaque;
-(char)prefersNavbarBottomBorderHidden;
-(float)maxVideoDuration;
-(void)draftsBrowserViewControllerWantsDismiss:(id)arg1 ;
-(void)draftsBrowserViewController:(id)arg1 didSelectDraft:(id)arg2 ;
-(void)cropViewVisibleContentFrameDidChange:(CGRect)arg1 ;
-(void)cropView:(id)arg1 didFinishAnimationWithCropRect:(CGRect)arg2 ;
-(void)cropViewUserInteractionDidBegin:(id)arg1 ;
-(void)cropViewUserInteractionDidEnd:(id)arg1 ;
-(id)initWithMode:(int)arg1 userSession:(id)arg2 ;
-(void)setDraftToSelect:(IGMediaMetadata *)arg1 ;
-(void)gridViewControllerLibraryDidLoad:(id)arg1 ;
-(void)gridViewControllerDidSelectCameraItem:(id)arg1 ;
-(void)gridViewController:(id)arg1 didSelectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(char)gridViewController:(id)arg1 isAssetLoadedInPlayer:(id)arg2 ;
-(void)gridViewController:(id)arg1 didDeselectAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(void)gridViewControllerDidScroll:(id)arg1 ;
-(void)gridViewControllerDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)gridViewControllerSelectedAlbumWasRemoved:(id)arg1 ;
-(void)gridViewController:(id)arg1 didChangeAlbumTitle:(id)arg2 ;
-(void)gridViewControllerDidTapMoreDrafts:(id)arg1 ;
-(void)gridViewController:(id)arg1 selectedAssetWasRemoved:(id)arg2 ;
-(NSMutableDictionary *)pendingVideoRequests;
-(void)assertModeIsValid;
-(void)onCancelButtonTapped;
-(void)setPendingVideoRequests:(NSMutableDictionary *)arg1 ;
-(char)allowTabScrolling;
-(void)setCameraContainerView:(UIView *)arg1 ;
-(UIView *)cameraContainerView;
-(char)reelEnabled;
-(void)setDismissButtonItem:(UIBarButtonItem *)arg1 ;
-(void)showLibraryAccessDeniedDialog;
-(void)insertMediaTabBar;
-(unsigned)assetFilterTypeForMediaCaptureMode:(int)arg1 ;
-(IGAssetSelectionMechanic)assetSelectionMechanicForMediaCaptureMode:(int)arg1 ;
-(char)isAutoPlayVideoThumbnailEnabled;
-(NSMutableDictionary *)selectedVideos;
-(void)setCropContainer:(UIView *)arg1 ;
-(UIView *)cropContainer;
-(void)setCropContentsContainer:(UIView *)arg1 ;
-(UIView *)cropContentsContainer;
-(void)setCropView:(IGCropView *)arg1 ;
-(IGCropView *)cropView;
-(void)panCrop:(id)arg1 ;
-(void)setGuideView:(IGCameraGuideView *)arg1 ;
-(IGCameraGuideView *)guideView;
-(char)inMultiClipMode;
-(void)onCropViewSingleTap;
-(void)toggleCropperCropMode;
-(void)setCropDoubleTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)cropDoubleTap;
-(void)setLongcatButton:(IGTapButton *)arg1 ;
-(IGTapButton *)longcatButton;
-(void)toggleCropperCropModeFromButton;
-(char)layoutButtonEnabled;
-(void)setLayoutButton:(IGTapButton *)arg1 ;
-(IGTapButton *)layoutButton;
-(void)layoutButtonTapped;
-(void)setLayoutButtonVisible:(char)arg1 ;
-(void)setShouldShowDownloadLayoutNuxIfUnseen:(char)arg1 ;
-(char)boomerangButtonEnabled;
-(void)setBoomerangButton:(IGNuxButton *)arg1 ;
-(IGNuxButton *)boomerangButton;
-(void)boomerangButtonTapped;
-(void)tapExpandCrop:(id)arg1 ;
-(void)setCropTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)cropTap;
-(void)setCropPanExpand:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)cropPanExpand;
-(void)setVideoCoverFrameImageView:(IGCropView *)arg1 ;
-(IGCropView *)videoCoverFrameImageView;
-(void)setLoadingThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)loadingThumbnailView;
-(void)setLoadingOverlayView:(UIView *)arg1 ;
-(void)setUnsupportedVideoLabel:(IGLabel *)arg1 ;
-(IGLabel *)unsupportedVideoLabel;
-(void)setNoMediaView:(IGEmptyLibraryView *)arg1 ;
-(IGEmptyLibraryView *)noMediaView;
-(void)setCropOverlayView:(UIView *)arg1 ;
-(UIView *)cropOverlayView;
-(void)setStartCropMaxY:(float)arg1 ;
-(float)tabBarHeight;
-(void)onLibraryNextButtonTapped;
-(void)setLibraryNextButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setLibraryLoadingNextButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)libraryLoadingNextButtonItem;
-(void)setChevronTitleButton:(IGChevronTitleButton *)arg1 ;
-(IGChevronTitleButton *)chevronTitleButton;
-(void)onAlbumTitleTapped;
-(IGSelectAlbumController *)selectAlbumVC;
-(IGCaptureViewController *)captureViewController;
-(void)setCropAsset:(id)arg1 ;
-(id)selectedAsset;
-(int)assetType:(id)arg1 ;
-(char)shouldAutoPlayVideo;
-(char)gridViewIsLoaded;
-(IGMediaMetadata *)draftToSelect;
-(void)pauseVideoPlayer;
-(IGMediaTabBar *)mediaTabBar;
-(void)setSelectAlbumVC:(IGSelectAlbumController *)arg1 ;
-(void)stopVideoPlayer;
-(void)_layoutMediaTabBar;
-(float)cropOffsetY;
-(void)disableScrollingInChildViews;
-(void)enableDisabledScrollViews;
-(id)disableScrollViewsForViewController:(id)arg1 ;
-(void)setDisabledScrollViews:(NSArray *)arg1 ;
-(NSArray *)disabledScrollViews;
-(char)showsMediaTabBar;
-(void)setMediaTabBar:(IGMediaTabBar *)arg1 ;
-(void)tabBarButtonTapped;
-(char)wasPlayingVideo;
-(void)playVideoPlayer;
-(char)shouldStopCaptureInLibrary;
-(void)setVerticalOffset;
-(void)setNavigationBarButtons;
-(void)setWasPlayingVideo:(char)arg1 ;
-(id)fullResolutionCompletionBlock;
-(id)multiClipCompletionBlock;
-(UIBarButtonItem *)libraryNextButtonItem;
-(UIBarButtonItem *)dismissButtonItem;
-(void)selectFirstAsset;
-(void)showSelectAlbumController:(char)arg1 ;
-(id)assetIdentifierForAsset:(id)arg1 ;
-(char)assetIsPreparedAssetFromMetadata:(id)arg1 ;
-(char)allVideosCompatible;
-(char)videoTotalDurationValid;
-(void)presentDraftsController;
-(void)setShouldAutoPlayVideo:(char)arg1 ;
-(void)setGridViewIsLoaded:(char)arg1 ;
-(void)expandCropWithVelocity:(float)arg1 expanding:(char)arg2 ;
-(unsigned)contentEditingInputRequestID;
-(void)setContentEditingInputRequestID:(unsigned)arg1 ;
-(void)setSelectedAsset:(id)arg1 ;
-(void)setSelectedVideos:(NSMutableDictionary *)arg1 ;
-(void)setFullResolutionSource:(id)arg1 ;
-(void)setFullResolutionCompletionBlock:(id)arg1 ;
-(void)setMultiClipCompletionBlock:(id)arg1 ;
-(UITapGestureRecognizer *)playTap;
-(void)setBoomerangButtonPositionForAsset:(id)arg1 ;
-(void)hideLoadingViews;
-(void)showDownloadLayoutNUX;
-(char)allVideosLoaded;
-(void)updateVideoLibraryNextButtonEnabled;
-(void)showMinDurationAssetNUX;
-(id)previewAsset;
-(void)setPreviewAsset:(id)arg1 ;
-(void)showCouldNotLoadAlert:(int)arg1 ;
-(char)isPushingCropView;
-(void)setStartCropPanTouchInsetY:(float)arg1 ;
-(float)startCropPanTouchInsetY;
-(float)startCropMaxY;
-(void)updateCropOffsetY:(float)arg1 expanding:(char)arg2 ;
-(void)cropViewDraggingEndedWithVelocity:(float)arg1 ;
-(int)cropState;
-(void)minimizeCropWithVelocity:(float)arg1 ;
-(void)setCropState:(int)arg1 ;
-(id)cropOffsetYAnimationExpanding:(char)arg1 ;
-(float)minCropOffsetY;
-(void)setIsPushingCropView:(char)arg1 ;
-(void)setCropOffsetY:(float)arg1 ;
-(id)selectedAssetIdentifier;
-(void)showLayoutAppInstallAlertViewPopover;
-(void)setAppInstallationsHelper:(IGAppInstallationsHelper *)arg1 ;
-(IGAppInstallationsHelper *)appInstallationsHelper;
-(void)showBoomerangAppInstallAlertViewPopover;
-(void)continueWithAsset;
-(id)fullResolutionSource;
-(void)showInvalidVideoNUX;
-(void)showMinDurationVideoNUX;
-(void)updateClipCropRect;
-(void)proceedWithVideoComposition:(id)arg1 ;
-(char)layoutButtonVisible;
-(char)shouldShowDownloadLayoutNuxIfUnseen;
-(IGDirectedNUXView *)NUXView;
-(void)presentEditorWithBuffer:(id)arg1 isPreviewBuffer:(char)arg2 ;
-(void)dismissCaptureViewControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setMediaTabBarHidden:(char)arg1 ;
-(void)presentCaptureViewController;
-(void)assetPlayerViewAssetLoaded:(id)arg1 ;
-(void)assetPlayerViewPlayStateDidChange:(id)arg1 ;
-(void)assetPlayerView:(id)arg1 didPlayToTime:(SCD_Struct_IG19)arg2 ;
-(void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2 ;
-(int)preferredDevicePosition;
-(char)modeAllowsState:(int)arg1 ;
-(void)setCaptureViewController:(IGCaptureViewController *)arg1 ;
-(IGCaptureViewController *)presentedCaptureViewController;
-(void)setPresentedCaptureViewController:(IGCaptureViewController *)arg1 ;
-(void)setShouldStopCaptureInLibrary:(char)arg1 ;
-(IGVideoComposition *)currentlyFilmingVideoComposition;
-(void)setCurrentlyFilmingVideoComposition:(IGVideoComposition *)arg1 ;
-(IGAlbumCreationViewController *)albumCameraController;
-(void)setAlbumCameraController:(IGAlbumCreationViewController *)arg1 ;
-(void)setNUXView:(IGDirectedNUXView *)arg1 ;
-(void)setPlayTap:(UITapGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)cropPanMinimize;
-(void)setCropPanMinimize:(UIPanGestureRecognizer *)arg1 ;
-(IGCustomAlertViewController *)layoutAlertViewController;
-(void)setLayoutAlertViewController:(IGCustomAlertViewController *)arg1 ;
-(IGCustomAlertViewController *)boomerangAlertViewController;
-(void)setBoomerangAlertViewController:(IGCustomAlertViewController *)arg1 ;
-(CGSize)previewImageSize;
-(IGEditorViewController *)currentEditor;
-(void)setCurrentEditor:(IGEditorViewController *)arg1 ;
-(void)setGridViewController:(IGGridViewController *)arg1 ;
-(IGAssetPlayerView *)playerView;
-(IGGridViewController *)gridViewController;
-(void)setDelegate:(id<IGMediaCaptureViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGMediaCaptureViewControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(char)isBackgrounded;
-(void)setIsBackgrounded:(char)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(IGCameraNavigationController *)navController;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(void)setCropMode:(int)arg1 ;
-(int)cropMode;
-(IGUserSession *)userSession;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setState:(int)arg1 animated:(char)arg2 ;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(void)setPlayButton:(IGVideoPlayButton *)arg1 ;
-(IGVideoPlayButton *)playButton;
@end

