
#import <MapKit/MKAnnotationView.h>

@class UIView;

@interface RCTMapAnnotationView : MKAnnotationView {

	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
@end

