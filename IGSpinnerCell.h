
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIActivityIndicatorView;

@interface IGSpinnerCell : UICollectionViewCell {

	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)activityIndicator;
@end

