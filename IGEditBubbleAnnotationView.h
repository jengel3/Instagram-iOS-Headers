
#import <Instagram/Instagram-Structs.h>
#import <MapKit/MKAnnotationView.h>

@protocol IGEditBubbleAnnotationDelegate;
@class UIImageView, IGButton, IGClusterAnnotationView, MKMapView, UIView, IGQuadtreeCluster;

@interface IGEditBubbleAnnotationView : MKAnnotationView {

	float _yShadowOffset;
	float _contentHeight;
	double _lastHit;
	UIImageView* _accessory;
	IGButton* _editButton;
	IGButton* _zoomButton;
	char _uiInitialized;
	IGClusterAnnotationView* _parentAnnotationView;
	MKMapView* _mapView;
	UIView* _contentView;
	IGQuadtreeCluster* _cluster;
	id<IGEditBubbleAnnotationDelegate> _delegate;

}

@property (nonatomic,retain) IGClusterAnnotationView * parentAnnotationView;                  //@synthesize parentAnnotationView=_parentAnnotationView - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                             //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                            //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) IGQuadtreeCluster * cluster;                                   //@synthesize cluster=_cluster - In the implementation block
@property (assign,nonatomic,__weak) id<IGEditBubbleAnnotationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)clusterAnnotation;
-(void)prepareContentFrame;
-(IGClusterAnnotationView *)parentAnnotationView;
-(char)isTipOnRightSide;
-(id)editBubbleAnnotation;
-(void)enableSibling:(id)arg1 ;
-(void)recenterIfNeededAnimated;
-(void)performBounce;
-(void)setParentAnnotationView:(IGClusterAnnotationView *)arg1 ;
-(float)yShadowOffset;
-(float)relativeParentXPosition;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(MKMapView *)mapView;
-(void)setDelegate:(id<IGEditBubbleAnnotationDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<IGEditBubbleAnnotationDelegate>)delegate;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)didMoveToSuperview;
-(void)updateButtons;
-(void)handleTap:(id)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(IGQuadtreeCluster *)cluster;
@end

