
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Instagram/IGPhotoMapDataSourceDelegate.h>
#import <Instagram/IGEditBubbleAnnotationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGPhotoMapGridviewOverlayDelegate.h>
#import <Instagram/IGClusterAnnotationViewDelegate.h>
#import <Instagram/IGPhotoMapReviewDelegate.h>
#import <Instagram/IGPhotoMapEditManagerDelegate.h>

@class IGMKOverlay, IGMKEditOverlayView, IGUserPhotoMapDataSource, IGQuadtreeRegion, IGQuadtreeClusterQuery, IGButton, IGMapButton, NSMutableArray, IGClusterAnnotationView, IGEditBubbleAnnotation, IGPhotoMapGridviewOverlay, UIView, UITapGestureRecognizer, IGClusterAnnotation, UIButton, UIPinchGestureRecognizer, NSOperationQueue, UIRotationGestureRecognizer, MKMapView, IGUser, IGQuadtree, IGPhotoMapEditManager, NSString;

@interface IGPhotoMapViewController : IGViewController <MKMapViewDelegate, IGPhotoMapDataSourceDelegate, IGEditBubbleAnnotationDelegate, UIGestureRecognizerDelegate, IGPhotoMapGridviewOverlayDelegate, IGClusterAnnotationViewDelegate, IGPhotoMapReviewDelegate, IGPhotoMapEditManagerDelegate> {

	IGMKOverlay* _mapOverlay;
	IGMKEditOverlayView* _mapOverlayView;
	IGUserPhotoMapDataSource* _dataSource;
	IGQuadtreeRegion* _currentRegion;
	double _currentLongitudeSpan;
	IGQuadtreeRegion* _lastRegionQueried;
	IGQuadtreeClusterQuery* _asyncClusterQuery;
	SCD_Struct_IG37 _lastZoomedRegion;
	char _asyncClusteringStarted;
	IGButton* _backButton;
	IGMapButton* _zoomOutButton;
	IGMapButton* _gridViewButton;
	IGButton* _editButton;
	IGButton* _reviewAllButton;
	IGButton* _retryButton;
	IGButton* _cancelEditButton;
	NSMutableArray* _zoomLevels;
	IGClusterAnnotationView* _selectedAnnotationView;
	IGClusterAnnotationView* _lastTappedAnnotationView;
	char _lastTappedAnnotationHasOnePoint;
	IGEditBubbleAnnotation* _editAnnotation;
	IGPhotoMapGridviewOverlay* _photoGridOverlay;
	UIView* _blackGridOverlay;
	SCD_Struct_IG36 _previousCoordinate;
	SCD_Struct_IG37 _previousRegion;
	char _recenterOnPreviousRegionAfterExplosion;
	char _stayAtZoomLevelAfterExplosion;
	char _explosionFinished;
	char _explosionMapMovementFinished;
	char _implosionFinished;
	char _implosionMapMovementFinished;
	UITapGestureRecognizer* _fullViewRecognizer;
	char _isImploding;
	IGClusterAnnotation* _explodedAnnotation;
	IGClusterAnnotationView* _explodedAnnotationView;
	IGClusterAnnotationView* _explodedAnnotationViewCopy;
	UIButton* _blackOverlayButton;
	UIPinchGestureRecognizer* _pinchGesture;
	float _currentPinchScale;
	float _lastPinchScale;
	NSMutableArray* _reusableClusterAnnotations;
	char _launchedReviewMode;
	char _exitMapIfEmpty;
	NSOperationQueue* _clusteringQueue;
	char _reenableMapUserInteractionAfterRegionChange;
	IGQuadtreeRegion* _originalZoomRegion;
	char _isMovingToOriginalZoomRegion;
	char _didHandleiOS6DoubleTap;
	char _isRegionEditing;
	UIRotationGestureRecognizer* _mapViewRotationGesture;
	char _isInEditMode;
	char _hasPermanentlyDeletedMedia;
	char _isInReviewMode;
	char _prefersStatusBarHidden;
	MKMapView* _mapView;
	IGUser* _user;
	IGQuadtree* _quadtree;
	IGPhotoMapEditManager* _editManager;

}

@property (nonatomic,retain) IGPhotoMapEditManager * editManager;              //@synthesize editManager=_editManager - In the implementation block
@property (assign,nonatomic) char prefersStatusBarHidden;                      //@synthesize prefersStatusBarHidden=_prefersStatusBarHidden - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                              //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                  //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) char isInEditMode;                                //@synthesize isInEditMode=_isInEditMode - In the implementation block
@property (assign,nonatomic) char hasPermanentlyDeletedMedia;                  //@synthesize hasPermanentlyDeletedMedia=_hasPermanentlyDeletedMedia - In the implementation block
@property (assign,nonatomic) char isInReviewMode;                              //@synthesize isInReviewMode=_isInReviewMode - In the implementation block
@property (nonatomic,readonly) IGQuadtree * quadtree;                          //@synthesize quadtree=_quadtree - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(id)analyticsExtras;
-(void)toggleEditMode;
-(SCD_Struct_IG37)defaultMapRegion;
-(void)initializeMap;
-(void)removeCalloutAnnotation:(char)arg1 ;
-(void)toggleZoomOutButton;
-(double)distanceOfRegionSpan:(SCD_Struct_IG37)arg1 ;
-(SCD_Struct_IG37)getExpandedMapRegion;
-(void)openDetailViewForPoints:(id)arg1 ;
-(void)updateClustersInCurrentViewport;
-(void)renderQuadtreeOnMap;
-(void)onRetryButtonTapped:(id)arg1 ;
-(void)onGridViewButtonTapped:(id)arg1 ;
-(void)onZoomOutButtonTapped:(id)arg1 ;
-(void)refillReusableAnnotations;
-(void)animateIncomingClusterAnnotationView:(id)arg1 ;
-(void)animateStoppedForPhotogridOverlay;
-(void)openDetailViewForPoints:(id)arg1 withClusters:(char)arg2 ;
-(void)animateStep2ForPhotogridOverlay;
-(void)setRegionAndRecordZoomHistory:(SCD_Struct_IG37)arg1 animated:(char)arg2 ;
-(char)canZoomToRegion:(SCD_Struct_IG37)arg1 ;
-(SCD_Struct_IG37)region:(SCD_Struct_IG37)arg1 withPadding:(UIEdgeInsets)arg2 ;
-(void)openClusterPhotoView:(id)arg1 zoomToClusterRegion:(char)arg2 ;
-(id)viewForClusterAnnotation:(id)arg1 withGestureRecognizerEnabled:(char)arg2 ;
-(void)refreshMapAnnotationsAsync;
-(id)findClusterAnnotationThatIsClosestTo:(id)arg1 inArrayOfClusterAnnotations:(id)arg2 ;
-(void)refreshMapAnnotations;
-(void)updateClustersInCurrentViewportAndForceRecluster:(char)arg1 takeIntoAccountCurrentClusters:(char)arg2 ;
-(void)computeClustersInRegion:(id)arg1 takeIntoAccountCurrentClusters:(char)arg2 ;
-(void)runWhenImplosionFinished;
-(void)runWhenExplosionFinished;
-(void)zoomToCluster:(id)arg1 ;
-(void)dismissPhotoMapGridView:(char)arg1 ;
-(void)onGridViewDimissed;
-(void)runImplosion:(char)arg1 ;
-(void)enableMapViewDelayed;
-(void)onTapOutsideOfExplodedCluster;
-(void)onQuadtreeRequestFailed:(id)arg1 ;
-(void)clusterAnnotationView:(id)arg1 explosionDidFinish:(char)arg2 ;
-(void)clusterAnnotationView:(id)arg1 implosionDidFinish:(char)arg2 ;
-(void)clusterAnnotationView:(id)arg1 fullScreenOpened:(char)arg2 withTouchedTile:(id)arg3 ;
-(void)clusterAnnotationView:(id)arg1 fullScreenClosed:(char)arg2 ;
-(void)clusterAnnotationView:(id)arg1 restoreDidFinish:(char)arg2 ;
-(void)clusterAnnotationView:(id)arg1 closeCluster:(char)arg2 ;
-(void)clusterAnnotationView:(id)arg1 showAllPhotosInCluster:(id)arg2 ;
-(void)clusterAnnotationView:(id)arg1 infoButtonTappedFor:(id)arg2 ;
-(void)clusterAnnotationView:(id)arg1 onDoubleTapFor:(id)arg2 ;
-(char)hasPermanentlyDeletedMedia;
-(IGPhotoMapEditManager *)editManager;
-(void)didTapPhoto:(id)arg1 ;
-(void)didDismissPhotoMapGridView;
-(char)canEditMap;
-(void)submitEditsAndPromptForConfirmation:(char)arg1 ;
-(void)cancelEditMode;
-(char)disableNavigationGesture;
-(id)getLargestAnnotation;
-(void)resetMap;
-(void)setSearchResultsAfterComputingThemAsynchronously:(id)arg1 ;
-(void)dismissPhotoMapGridViewAfterDelay;
-(char)canZoomToCluster:(id)arg1 ;
-(IGQuadtree *)quadtree;
-(id)initWithUser:(id)arg1 inReviewMode:(char)arg2 ;
-(char)isInReviewMode;
-(void)handleMapViewRotation:(id)arg1 ;
-(char)isMapOfCurrentUser;
-(void)launchReviewMode;
-(void)onMediaDeleted:(id)arg1 ;
-(void)updateClustersAfterEdits;
-(char)mapIsRotated;
-(void)compassDidDisappear;
-(void)updateClustersAfterEditsAreSubmitted;
-(void)updateControls;
-(void)runImplosionAndUpdateClusters;
-(void)showCancelButtonIfNeeded;
-(void)hideEditButton;
-(void)compassWillAppear;
-(void)onQuadtreeReceived:(id)arg1 ;
-(void)editBubbleAnnotationView:(id)arg1 onEditCluster:(id)arg2 ;
-(void)editBubbleAnnotationView:(id)arg1 onZoomToCluster:(id)arg2 ;
-(void)onReviewModeCompleted:(id)arg1 ;
-(void)onReviewModeCanceled;
-(void)photoMapEditManager:(id)arg1 onDeleteRequestFinished:(id)arg2 ;
-(void)photoMapEditManager:(id)arg1 onDeleteRequestFailed:(char)arg2 ;
-(void)photoMapEditManager:(id)arg1 onDeleteRequestStarted:(int)arg2 ;
-(void)enableEditMode;
-(void)setHasPermanentlyDeletedMedia:(char)arg1 ;
-(void)setIsInReviewMode:(char)arg1 ;
-(void)setEditManager:(IGPhotoMapEditManager *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)showEditButton;
-(SCD_Struct_IG37)mapRectForRect:(CGRect)arg1 ;
-(void)handleDoubleTap:(id)arg1 ;
-(char)isInEditMode;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(char)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(id)mapView:(id)arg1 viewForOverlay:(id)arg2 ;
-(MKMapView *)mapView;
-(void)setIsInEditMode:(char)arg1 ;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)handlePinch:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)goBack;
-(void)setPrefersStatusBarHidden:(char)arg1 ;
-(char)prefersNavigationBarHidden;
@end

