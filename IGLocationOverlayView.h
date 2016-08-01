
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class MKMapView, UIView, UIImageView, CLLocation, NSString;

@interface IGLocationOverlayView : UIView <MKMapViewDelegate> {

	MKMapView* _map;
	UIView* _wrapperView;
	UIImageView* _frameView;
	CLLocation* _centerLocation;

}

@property (nonatomic,retain) MKMapView * map;                          //@synthesize map=_map - In the implementation block
@property (nonatomic,retain) UIView * wrapperView;                     //@synthesize wrapperView=_wrapperView - In the implementation block
@property (nonatomic,retain) UIImageView * frameView;                  //@synthesize frameView=_frameView - In the implementation block
@property (nonatomic,retain) CLLocation * centerLocation;              //@synthesize centerLocation=_centerLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCenterLocation:(id)arg1 ;
-(void)setWrapperView:(UIView *)arg1 ;
-(void)setCenterLocation:(CLLocation *)arg1 ;
-(void)setFrameView:(UIImageView *)arg1 ;
-(UIView *)wrapperView;
-(CLLocation *)centerLocation;
-(void)dealloc;
-(UIImageView *)frameView;
-(void)showInView:(id)arg1 ;
-(void)dismiss;
-(void)setMap:(MKMapView *)arg1 ;
-(MKMapView *)map;
@end

