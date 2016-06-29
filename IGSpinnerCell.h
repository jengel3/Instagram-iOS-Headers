
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIActivityIndicatorView, IGSpinnerCellConfiguration;

@interface IGSpinnerCell : UICollectionViewCell {

	UIActivityIndicatorView* _activityIndicator;
	IGSpinnerCellConfiguration* _config;

}

@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) IGSpinnerCellConfiguration * config;                        //@synthesize config=_config - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIActivityIndicatorView *)activityIndicator;
-(IGSpinnerCellConfiguration *)config;
-(void)setConfig:(IGSpinnerCellConfiguration *)arg1 ;
@end

