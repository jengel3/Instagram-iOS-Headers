
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol IGLocationHeaderViewDelegate;
@class IGMapView, NSString;

@interface IGLocationHeaderView : UIView <MKMapViewDelegate> {

	id<IGLocationHeaderViewDelegate> _delegate;
	IGMapView* _mapView;

}

@property (assign,nonatomic,__weak) id<IGLocationHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) IGMapView * mapView;                                    //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSuperviewWidth:(float)arg1 location:(id)arg2 ;
-(void)mapViewDidReceiveTap:(id)arg1 ;
-(void)setMapView:(IGMapView *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(IGMapView *)mapView;
-(void)setDelegate:(id<IGLocationHeaderViewDelegate>)arg1 ;
-(id<IGLocationHeaderViewDelegate>)delegate;
@end

