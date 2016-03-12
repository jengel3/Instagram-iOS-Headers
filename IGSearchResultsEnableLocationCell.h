
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton;

@interface IGSearchResultsEnableLocationCell : UITableViewCell {

	UILabel* _label;
	UIButton* _enableLocationButton;

}

@property (nonatomic,__weak,readonly) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * enableLocationButton;              //@synthesize enableLocationButton=_enableLocationButton - In the implementation block
+(char)shouldShowEnableLocationHeader;
-(void)shouldEnableLocation:(id)arg1 ;
-(UIButton *)enableLocationButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
@end

