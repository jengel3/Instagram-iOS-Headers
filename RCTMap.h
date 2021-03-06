
#import <Instagram/Instagram-Structs.h>
#import <MapKit/MKMapView.h>

@class UIView, CLLocationManager, NSTimer, NSArray;

@interface RCTMap : MKMapView {

	UIView* _legalLabel;
	CLLocationManager* _locationManager;
	char _followUserLocation;
	char _hasStartedRendering;
	float _minDelta;
	float _maxDelta;
	NSTimer* _regionChangeObserveTimer;
	NSArray* _annotationIDs;
	NSArray* _overlayIDs;
	/*^block*/id _onChange;
	/*^block*/id _onPress;
	/*^block*/id _onAnnotationDragStateChange;
	/*^block*/id _onAnnotationFocus;
	/*^block*/id _onAnnotationBlur;
	UIEdgeInsets _legalLabelInsets;

}

@property (assign,nonatomic) char followUserLocation;                         //@synthesize followUserLocation=_followUserLocation - In the implementation block
@property (assign,nonatomic) char hasStartedRendering;                        //@synthesize hasStartedRendering=_hasStartedRendering - In the implementation block
@property (assign,nonatomic) float minDelta;                                  //@synthesize minDelta=_minDelta - In the implementation block
@property (assign,nonatomic) float maxDelta;                                  //@synthesize maxDelta=_maxDelta - In the implementation block
@property (assign,nonatomic) UIEdgeInsets legalLabelInsets;                   //@synthesize legalLabelInsets=_legalLabelInsets - In the implementation block
@property (nonatomic,retain) NSTimer * regionChangeObserveTimer;              //@synthesize regionChangeObserveTimer=_regionChangeObserveTimer - In the implementation block
@property (nonatomic,copy) NSArray * annotationIDs;                           //@synthesize annotationIDs=_annotationIDs - In the implementation block
@property (nonatomic,copy) NSArray * overlayIDs;                              //@synthesize overlayIDs=_overlayIDs - In the implementation block
@property (nonatomic,copy) id onChange;                                       //@synthesize onChange=_onChange - In the implementation block
@property (nonatomic,copy) id onPress;                                        //@synthesize onPress=_onPress - In the implementation block
@property (nonatomic,copy) id onAnnotationDragStateChange;                    //@synthesize onAnnotationDragStateChange=_onAnnotationDragStateChange - In the implementation block
@property (nonatomic,copy) id onAnnotationFocus;                              //@synthesize onAnnotationFocus=_onAnnotationFocus - In the implementation block
@property (nonatomic,copy) id onAnnotationBlur;                               //@synthesize onAnnotationBlur=_onAnnotationBlur - In the implementation block
-(id)onChange;
-(void)didUpdateReactSubviews;
-(void)setOnChange:(id)arg1 ;
-(void)setAnnotationIDs:(NSArray *)arg1 ;
-(void)setOverlayIDs:(NSArray *)arg1 ;
-(void)setOverlays:(id)arg1 ;
-(void)setFollowUserLocation:(char)arg1 ;
-(void)setMinDelta:(float)arg1 ;
-(void)setMaxDelta:(float)arg1 ;
-(UIEdgeInsets)legalLabelInsets;
-(void)setLegalLabelInsets:(UIEdgeInsets)arg1 ;
-(NSArray *)annotationIDs;
-(NSArray *)overlayIDs;
-(void)setOnPress:(id)arg1 ;
-(void)setOnAnnotationDragStateChange:(id)arg1 ;
-(void)setOnAnnotationFocus:(id)arg1 ;
-(void)setOnAnnotationBlur:(id)arg1 ;
-(id)onPress;
-(id)onAnnotationFocus;
-(id)onAnnotationBlur;
-(id)onAnnotationDragStateChange;
-(char)followUserLocation;
-(void)setRegionChangeObserveTimer:(NSTimer *)arg1 ;
-(NSTimer *)regionChangeObserveTimer;
-(char)hasStartedRendering;
-(void)setHasStartedRendering:(char)arg1 ;
-(float)maxDelta;
-(float)minDelta;
-(void)setRegion:(SCD_Struct_IG37)arg1 animated:(char)arg2 ;
-(void)setShowsCompass:(char)arg1 ;
-(char)showsCompass;
-(void)setShowsUserLocation:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setAnnotations:(id)arg1 ;
@end

