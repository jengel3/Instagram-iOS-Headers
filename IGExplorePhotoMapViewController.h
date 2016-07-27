
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Instagram/IGExplorePhotoMapDataSourceDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGClusterAnnotationViewDelegate.h>
#import <Instagram/IGPhotoMapGridviewOverlayDelegate.h>

@class IGMKOverlay, IGMKEditOverlayView, IGExplorePhotoMapDataSource, IGQuadtree, IGQuadtreeRegion, IGQuadtreeClusterQuery, IGButton, IGMapButton, UILabel, NSMutableArray, IGClusterAnnotationView, IGPhotoMapGridviewOverlay, UIView, UITapGestureRecognizer, IGClusterAnnotation, UIButton, UIPinchGestureRecognizer, NSOperationQueue, MKMapView, NSString;

@interface IGExplorePhotoMapViewController : IGViewController <MKMapViewDelegate, IGExplorePhotoMapDataSourceDelegate, UIGestureRecognizerDelegate, IGClusterAnnotationViewDelegate, IGPhotoMapGridviewOverlayDelegate> {

	IGMKOverlay* _mapOverlay;
	IGMKEditOverlayView* _mapOverlayView;
	IGExplorePhotoMapDataSource* _dataSource;
	IGQuadtree* _deltaQuadTree;
	IGQuadtreeRegion* _currentRegion;
	double _currentLongitudeSpan;
	IGQuadtreeRegion* _lastRegionQueried;
	IGQuadtreeClusterQuery* _asyncClusterQuery;
	SCD_Struct_IG36 _lastZoomedRegion;
	char _asyncClusteringStarted;
	IGButton* _backButton;
	IGMapButton* _refreshButton;
	IGMapButton* _zoomOutButton;
	IGMapButton* _gridViewButton;
	IGButton* _retryButton;
	IGMapButton* _locationButton;
	UILabel* _distanceLabel;
	UILabel* _latLabel;
	UILabel* _lngLabel;
	NSMutableArray* _zoomLevels;
	IGClusterAnnotationView* _selectedAnnotationView;
	IGClusterAnnotationView* _lastTappedAnnotationView;
	char _lastTappedAnnotationHasOnePoint;
	IGPhotoMapGridviewOverlay* _photoGridOverlay;
	UIView* _blackGridOverlay;
	SCD_Struct_IG34 _previousCoordinate;
	SCD_Struct_IG36 _previousRegion;
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
	char _exitMapIfEmpty;
	NSOperationQueue* _clusteringQueue;
	char _reenableMapUserInteractionAfterRegionChange;
	IGQuadtreeRegion* _originalZoomRegion;
	char _isMovingToOriginalZoomRegion;
	char _didHandleiOS6DoubleTap;
	char _prefersStatusBarHidden;
	MKMapView* _mapView;
	IGQuadtree* _quadtree;

}

@property (assign,nonatomic) char prefersStatusBarHidden;              //@synthesize prefersStatusBarHidden=_prefersStatusBarHidden - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                      //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) IGQuadtree * quadtree;                  //@synthesize quadtree=_quadtree - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)toggleEditMode;
-(char)disableNavigationGesture;
-(SCD_Struct_IG36)defaultMapRegion;
-(void)initializeMap;
-(void)removeCalloutAnnotation:(char)arg1 ;
-(void)toggleZoomOutButton;
-(double)distanceOfRegionSpan:(SCD_Struct_IG36)arg1 ;
-(SCD_Struct_IG36)getExpandedMapRegion;
-(void)openDetailViewForPoints:(id)arg1 ;
-(void)updateClustersInCurrentViewport;
-(void)renderQuadtreeOnMap;
-(void)onRetryButtonTapped:(id)arg1 ;
-(void)onGridViewButtonTapped:(id)arg1 ;
-(void)onZoomOutButtonTapped:(id)arg1 ;
-(void)onRefreshButtonTapped:(id)arg1 ;
-(void)onLocationButtonTapped:(id)arg1 ;
-(void)refillReusableAnnotations;
-(void)animateIncomingClusterAnnotationView:(id)arg1 ;
-(void)animateStoppedForPhotogridOverlay;
-(void)openDetailViewForPoints:(id)arg1 withClusters:(char)arg2 ;
-(void)animateStep2ForPhotogridOverlay;
-(void)setRegionAndRecordZoomHistory:(SCD_Struct_IG36)arg1 animated:(char)arg2 ;
-(char)canZoomToRegion:(SCD_Struct_IG36)arg1 ;
-(SCD_Struct_IG36)region:(SCD_Struct_IG36)arg1 withPadding:(UIEdgeInsets)arg2 ;
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
-(void)onQuadtreeReceived:(id)arg1 isRefresh:(char)arg2 ;
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
-(id)editManager;
-(void)didTapPhoto:(id)arg1 ;
-(void)didDismissPhotoMapGridView;
-(char)canEditMap;
-(void)submitEditsAndPromptForConfirmation:(char)arg1 ;
-(void)cancelEditMode;
-(id)getLargestAnnotation;
-(void)resetMap;
-(void)setSearchResultsAfterComputingThemAsynchronously:(id)arg1 ;
-(void)dismissPhotoMapGridViewAfterDelay;
-(char)canZoomToCluster:(id)arg1 ;
-(IGQuadtree *)quadtree;
-(char)prefersTabBarHidden;
-(SCD_Struct_IG36)mapRectForRect:(CGRect)arg1 ;
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
-(void)dealloc;
-(id)init;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)handlePinch:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)hidesBottomBarWhenPushed;
-(void)goBack;
-(void)setPrefersStatusBarHidden:(char)arg1 ;
-(char)prefersNavigationBarHidden;
@end

