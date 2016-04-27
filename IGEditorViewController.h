
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGBaseCameraViewController.h>
#import <Instagram/IGShareViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGEditorTabBarDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGFilterCollectionControllerDelegate.h>
#import <Instagram/IGFilterControlViewDelegate.h>
#import <Instagram/IGAdjustControllerDelegate.h>
#import <Instagram/IGOverlayNuxControllerDelegate.h>

@protocol IGEditorTabView, OS_dispatch_queue;
@class UIView, UIButton, UIBarButtonItem, IGAdjustController, UIImage, IGFilteredPhotoView, IGMediaMetadata, NSMutableDictionary, IGCameraGuideView, UILongPressGestureRecognizer, IGRearrangeOverlayView, IGEditorTabBar, UICollectionView, IGFilterCollectionController, IGFilterControlView, IGOverlayNuxController, IGTiltShiftGestureController, NSObject, ALAssetsLibrary, NSString;

@interface IGEditorViewController : IGBaseCameraViewController <IGShareViewControllerDelegate, UIGestureRecognizerDelegate, IGEditorTabBarDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGFilterCollectionControllerDelegate, IGFilterControlViewDelegate, IGAdjustControllerDelegate, IGOverlayNuxControllerDelegate> {

	int _photoOrigin;
	UIView* _editContainerView;
	char _needsRender;
	UIButton* _gridOverlayButton;
	UIButton* _rotateOverlayButton;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _doneButton;
	float _originalCropAspectRatio;
	IGAdjustController* _adjustController;
	char _luxEnabled;
	char _luxHasBeenEdited;
	char _bordersEnabled;
	char _readyToProceed;
	char _didReceiveFullSizedBuffer;
	char _didReorderTray;
	UIImage* _image;
	IGFilteredPhotoView* _editView;
	int _imageSourceType;
	IGMediaMetadata* _mediaMetadata;
	NSMutableDictionary* _adjustedFilterStrengthValues;
	IGCameraGuideView* _cropGridView;
	UIView* _cropLetterBoxViewOne;
	UIView* _cropLetterBoxViewTwo;
	UILongPressGestureRecognizer* _showUneditedGestureRecognizer;
	UIView* _toolContainerView;
	IGRearrangeOverlayView* _rearrangeFilterOverlayView;
	IGEditorTabBar* _modeTabBar;
	IGEditorTabBar* _luxTabBar;
	UIView*<IGEditorTabView> _filterTabView;
	UIView*<IGEditorTabView> _luxTabView;
	UIView*<IGEditorTabView> _toolsTabView;
	UIView* _NUXView;
	UICollectionView* _filterCollectionView;
	IGFilterCollectionController* _filterTrayController;
	UICollectionView* _toolCollectionView;
	IGFilterControlView* _luxControlView;
	IGFilterControlView* _filterControlView;
	IGOverlayNuxController* _overlayNuxController;
	IGTiltShiftGestureController* _tiltShiftController;
	float _orientationAngle;
	float _cropZoomScale;
	float _perspectiveXRotateAngle;
	float _perspectiveYRotateAngle;
	float _perspectiveZRotateAngle;
	NSObject*<OS_dispatch_queue> _renderQueue;
	ALAssetsLibrary* _assetsLibrary;
	CGSize _maxTextureSize;
	CGPoint _cropCenter;
	CGRect _cropRect;

}

@property (nonatomic,readonly) UIImage * image;                                                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) char luxEnabled;                                                           //@synthesize luxEnabled=_luxEnabled - In the implementation block
@property (assign,nonatomic) char luxHasBeenEdited;                                                     //@synthesize luxHasBeenEdited=_luxHasBeenEdited - In the implementation block
@property (assign,nonatomic) char bordersEnabled;                                                       //@synthesize bordersEnabled=_bordersEnabled - In the implementation block
@property (assign,nonatomic) unsigned tiltShiftMode; 
@property (nonatomic,retain) IGFilteredPhotoView * editView;                                            //@synthesize editView=_editView - In the implementation block
@property (assign,nonatomic) int imageSourceType;                                                       //@synthesize imageSourceType=_imageSourceType - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                           //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * adjustedFilterStrengthValues;                        //@synthesize adjustedFilterStrengthValues=_adjustedFilterStrengthValues - In the implementation block
@property (nonatomic,retain) IGCameraGuideView * cropGridView;                                          //@synthesize cropGridView=_cropGridView - In the implementation block
@property (assign,nonatomic,__weak) UIView * cropLetterBoxViewOne;                                      //@synthesize cropLetterBoxViewOne=_cropLetterBoxViewOne - In the implementation block
@property (assign,nonatomic,__weak) UIView * cropLetterBoxViewTwo;                                      //@synthesize cropLetterBoxViewTwo=_cropLetterBoxViewTwo - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * showUneditedGestureRecognizer;              //@synthesize showUneditedGestureRecognizer=_showUneditedGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * toolContainerView;                                                //@synthesize toolContainerView=_toolContainerView - In the implementation block
@property (nonatomic,retain) IGRearrangeOverlayView * rearrangeFilterOverlayView;                       //@synthesize rearrangeFilterOverlayView=_rearrangeFilterOverlayView - In the implementation block
@property (nonatomic,retain) IGEditorTabBar * modeTabBar;                                               //@synthesize modeTabBar=_modeTabBar - In the implementation block
@property (nonatomic,retain) IGEditorTabBar * luxTabBar;                                                //@synthesize luxTabBar=_luxTabBar - In the implementation block
@property (nonatomic,retain) UIView*<IGEditorTabView> filterTabView;                                    //@synthesize filterTabView=_filterTabView - In the implementation block
@property (nonatomic,retain) UIView*<IGEditorTabView> luxTabView;                                       //@synthesize luxTabView=_luxTabView - In the implementation block
@property (nonatomic,retain) UIView*<IGEditorTabView> toolsTabView;                                     //@synthesize toolsTabView=_toolsTabView - In the implementation block
@property (nonatomic,retain) UIView * NUXView;                                                          //@synthesize NUXView=_NUXView - In the implementation block
@property (nonatomic,retain) UICollectionView * filterCollectionView;                                   //@synthesize filterCollectionView=_filterCollectionView - In the implementation block
@property (nonatomic,retain) IGFilterCollectionController * filterTrayController;                       //@synthesize filterTrayController=_filterTrayController - In the implementation block
@property (nonatomic,retain) UICollectionView * toolCollectionView;                                     //@synthesize toolCollectionView=_toolCollectionView - In the implementation block
@property (nonatomic,retain) IGFilterControlView * luxControlView;                                      //@synthesize luxControlView=_luxControlView - In the implementation block
@property (nonatomic,retain) IGFilterControlView * filterControlView;                                   //@synthesize filterControlView=_filterControlView - In the implementation block
@property (nonatomic,retain) IGOverlayNuxController * overlayNuxController;                             //@synthesize overlayNuxController=_overlayNuxController - In the implementation block
@property (nonatomic,retain) IGTiltShiftGestureController * tiltShiftController;                        //@synthesize tiltShiftController=_tiltShiftController - In the implementation block
@property (assign,nonatomic) CGSize maxTextureSize;                                                     //@synthesize maxTextureSize=_maxTextureSize - In the implementation block
@property (assign,nonatomic) float orientationAngle;                                                    //@synthesize orientationAngle=_orientationAngle - In the implementation block
@property (assign,nonatomic) float straightenAngle; 
@property (assign,nonatomic) CGPoint cropCenter;                                                        //@synthesize cropCenter=_cropCenter - In the implementation block
@property (assign,nonatomic) float cropZoomScale;                                                       //@synthesize cropZoomScale=_cropZoomScale - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                                           //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) float perspectiveXRotateAngle;                                             //@synthesize perspectiveXRotateAngle=_perspectiveXRotateAngle - In the implementation block
@property (assign,nonatomic) float perspectiveYRotateAngle;                                             //@synthesize perspectiveYRotateAngle=_perspectiveYRotateAngle - In the implementation block
@property (assign,nonatomic) float perspectiveZRotateAngle;                                             //@synthesize perspectiveZRotateAngle=_perspectiveZRotateAngle - In the implementation block
@property (assign,getter=isReadyToProceed,nonatomic) char readyToProceed;                               //@synthesize readyToProceed=_readyToProceed - In the implementation block
@property (assign,nonatomic) char didReceiveFullSizedBuffer;                                            //@synthesize didReceiveFullSizedBuffer=_didReceiveFullSizedBuffer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> renderQueue;                                  //@synthesize renderQueue=_renderQueue - In the implementation block
@property (assign,nonatomic) char didReorderTray;                                                       //@synthesize didReorderTray=_didReorderTray - In the implementation block
@property (nonatomic,retain) ALAssetsLibrary * assetsLibrary;                                           //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(CGSize)maxTextureSize;
-(void)setLuxEnabled:(char)arg1 ;
-(UICollectionView *)filterCollectionView;
-(void)setFilterCollectionView:(UICollectionView *)arg1 ;
-(void)adjustControllerWillUpdate:(id)arg1 ;
-(void)adjustControllerDidUpdate:(id)arg1 ;
-(float)perspectiveXRotateAngle;
-(float)perspectiveYRotateAngle;
-(float)perspectiveZRotateAngle;
-(void)setPerspectiveXRotateAngle:(float)arg1 ;
-(void)setPerspectiveYRotateAngle:(float)arg1 ;
-(void)setPerspectiveZRotateAngle:(float)arg1 ;
-(void)setCropZoomScale:(float)arg1 ;
-(void)setCropCenter:(CGPoint)arg1 ;
-(CGPoint)cropCenter;
-(id)initWithPhotoOrigin:(int)arg1 sourceType:(int)arg2 mediaMetadata:(id)arg3 ;
-(void)setImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(void)setReadyToProceed:(char)arg1 ;
-(void)buildNavbar;
-(IGFilteredPhotoView *)editView;
-(void)setTiltShiftController:(IGTiltShiftGestureController *)arg1 ;
-(IGTiltShiftGestureController *)tiltShiftController;
-(unsigned)tiltShiftMode;
-(id)editContainerView;
-(void)buildToolContainerView;
-(void)buildModeTabBar;
-(void)buildLuxTabBar;
-(void)buildFilterPicker;
-(void)buildToolPicker;
-(void)setOverlayNuxController:(IGOverlayNuxController *)arg1 ;
-(IGOverlayNuxController *)overlayNuxController;
-(UIView *)toolContainerView;
-(void)updateReadyState;
-(IGFilterControlView *)filterControlView;
-(id)rotateOverlayButton;
-(id)gridOverlayButton;
-(void)allowUserInteraction:(char)arg1 ;
-(void)setTiltShiftMode:(unsigned)arg1 ;
-(void)setBordersEnabled:(char)arg1 ;
-(id)croppedSurfaceWithSize:(CGSize)arg1 ;
-(void)cancelUploadAndSetNeedsRender;
-(void)updateEditViewImage;
-(char)didReceiveFullSizedBuffer;
-(void)setDidReceiveFullSizedBuffer:(char)arg1 ;
-(UILongPressGestureRecognizer *)showUneditedGestureRecognizer;
-(UIView*<IGEditorTabView>)filterTabView;
-(CGRect)pickerFrame;
-(IGEditorTabBar *)modeTabBar;
-(float)valueForFilterControl:(int)arg1 ;
-(char)shouldHighlightControl:(int)arg1 ;
-(void)createCropGridView;
-(void)createLetterboxMasks;
-(void)setFilterControlView:(IGFilterControlView *)arg1 ;
-(id)subTitleForAdjustView;
-(void)updateGridViewScale;
-(void)onRotateTap;
-(void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 leftBarButtonItem:(id)arg4 rightBarButtonItem:(id)arg5 andCompletion:(/*^block*/id)arg6 ;
-(UICollectionView *)toolCollectionView;
-(id)_overlayButtonWithIcon:(id)arg1 ;
-(void)setDidReorderTray:(char)arg1 ;
-(IGRearrangeOverlayView *)rearrangeFilterOverlayView;
-(id)createTitleView:(id)arg1 withSubtitle:(id)arg2 ;
-(void)onToolCancel:(id)arg1 ;
-(void)onToolDone:(id)arg1 ;
-(void)setNavigationItemTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)analyticsToolStringForControl:(int)arg1 ;
-(IGCameraGuideView *)cropGridView;
-(void)removeLetterboxMasks;
-(void)updateTitleForSelectedTab;
-(id)titleForTabView:(id)arg1 ;
-(void)setValue:(float)arg1 forFilterControl:(int)arg2 ;
-(void)logFilterControlDismiss:(id)arg1 confirmed:(char)arg2 ;
-(void)dismissFilterControlView:(id)arg1 ;
-(NSMutableDictionary *)adjustedFilterStrengthValues;
-(void)setLuxHasBeenEdited:(char)arg1 ;
-(void)configureAccessibiltyForTabBar:(id)arg1 ;
-(id)identifierForTabView:(id)arg1 ;
-(IGFilterControlView *)luxControlView;
-(void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 andCompletion:(/*^block*/id)arg4 ;
-(char)isReadyToProceed;
-(char)isDraftWorthWarningBeforeDiscard;
-(id)editsDictionary;
-(id)accessibilityLabelForView:(id)arg1 ;
-(id)accessibilityHintForView:(id)arg1 ;
-(char)bordersEnabled;
-(void)renderWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)gestureShowUnedited:(id)arg1 ;
-(void)tabBar:(id)arg1 didSelectTabView:(id)arg2 previousTabView:(id)arg3 ;
-(char)tabBar:(id)arg1 shouldSelectTabView:(id)arg2 ;
-(void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(char)arg3 willScroll:(char)arg4 ;
-(void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2 ;
-(float)filterController:(id)arg1 filterStrengthForClass:(Class)arg2 ;
-(void)filterControllerDidSelectAddMoreFilters:(id)arg1 ;
-(void)filterControllerDidStartReordering:(id)arg1 ;
-(void)filterControllerDidFinishReordering:(id)arg1 ;
-(void)filterControlViewDidTapRotate:(id)arg1 ;
-(void)overlayNuxControllerWillDismiss;
-(char)luxEnabled;
-(char)luxHasBeenEdited;
-(void)setEditView:(IGFilteredPhotoView *)arg1 ;
-(int)imageSourceType;
-(void)setImageSourceType:(int)arg1 ;
-(void)setAdjustedFilterStrengthValues:(NSMutableDictionary *)arg1 ;
-(void)setCropGridView:(IGCameraGuideView *)arg1 ;
-(UIView *)cropLetterBoxViewOne;
-(void)setCropLetterBoxViewOne:(UIView *)arg1 ;
-(UIView *)cropLetterBoxViewTwo;
-(void)setCropLetterBoxViewTwo:(UIView *)arg1 ;
-(void)setShowUneditedGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setToolContainerView:(UIView *)arg1 ;
-(void)setRearrangeFilterOverlayView:(IGRearrangeOverlayView *)arg1 ;
-(void)setModeTabBar:(IGEditorTabBar *)arg1 ;
-(IGEditorTabBar *)luxTabBar;
-(void)setLuxTabBar:(IGEditorTabBar *)arg1 ;
-(void)setFilterTabView:(UIView*<IGEditorTabView>)arg1 ;
-(UIView*<IGEditorTabView>)luxTabView;
-(void)setLuxTabView:(UIView*<IGEditorTabView>)arg1 ;
-(UIView*<IGEditorTabView>)toolsTabView;
-(void)setToolsTabView:(UIView*<IGEditorTabView>)arg1 ;
-(void)setToolCollectionView:(UICollectionView *)arg1 ;
-(void)setLuxControlView:(IGFilterControlView *)arg1 ;
-(void)setMaxTextureSize:(CGSize)arg1 ;
-(char)didReorderTray;
-(void)filterControlView:(id)arg1 didChangeValue:(float)arg2 ;
-(void)filterControlViewDidStartDragging:(id)arg1 ;
-(void)filterControlViewDidEndDragging:(id)arg1 ;
-(void)filterControlViewDidToggleGrid:(char)arg1 ;
-(void)filterControlViewDidPressDone:(id)arg1 ;
-(void)filterControlViewDidPressCancel:(id)arg1 ;
-(void)filterControlView:(id)arg1 didChangeBorderSelection:(char)arg2 ;
-(void)filterControlViewNeedUpdateValue;
-(void)filterControlView:(id)arg1 didChangeTintColor:(unsigned)arg2 withTintType:(unsigned)arg3 ;
-(void)filterControlView:(id)arg1 didChangetintIntensity:(float)arg2 tintType:(unsigned)arg3 ;
-(void)setOrientationAngle:(float)arg1 ;
-(float)orientationAngle;
-(id)initWithImageFromLightweightCropper:(id)arg1 cropRect:(CGRect)arg2 mediaMetadata:(id)arg3 ;
-(char)overlayIsOpaque;
-(id)initWithImageDirectToEditor:(id)arg1 cropRect:(CGRect)arg2 mediaMetadata:(id)arg3 ;
-(void)setImageWithBufferData:(id)arg1 isPreviewBuffer:(char)arg2 ;
-(id)initForImageFromCameraWithMediaMetadata:(id)arg1 ;
-(void)setImageWithBufferData:(id)arg1 isPreviewBuffer:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithImageFromLibrary:(id)arg1 cropRect:(CGRect)arg2 mediaMetadata:(id)arg3 ;
-(UIView *)NUXView;
-(void)setNUXView:(UIView *)arg1 ;
-(void)setFilterTrayController:(IGFilterCollectionController *)arg1 ;
-(IGFilterCollectionController *)filterTrayController;
-(id)adjustController;
-(void)setRenderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)shareViewControllerDidAppear:(id)arg1 ;
-(void)shareViewControllerDidCancel:(id)arg1 ;
-(void)shareViewControllerWillFinish:(id)arg1 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(float)straightenAngle;
-(CGRect)cropRect;
-(void)setStraightenAngle:(float)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setDefaults;
-(ALAssetsLibrary *)assetsLibrary;
-(void)cancel;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIImage *)image;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)done:(id)arg1 ;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
-(float)cropZoomScale;
-(NSObject*<OS_dispatch_queue>)renderQueue;
@end

