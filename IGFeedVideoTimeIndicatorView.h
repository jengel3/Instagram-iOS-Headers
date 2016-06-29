
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGFeedVideoTimeIndicatorView : UIView {

	UILabel* _indicatorLabel;

}

@property (nonatomic,readonly) UILabel * indicatorLabel;              //@synthesize indicatorLabel=_indicatorLabel - In the implementation block
-(UILabel *)indicatorLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

