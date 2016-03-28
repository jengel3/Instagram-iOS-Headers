
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton;

@interface IGSearchResultsEnableLocationCell : UITableViewCell {

	UILabel* _label;
	UIButton* _enableLocationButton;

}

@property (nonatomic,retain) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIButton * enableLocationButton;              //@synthesize enableLocationButton=_enableLocationButton - In the implementation block
+(char)shouldShowEnableLocationHeader;
-(void)shouldEnableLocation:(id)arg1 ;
-(UIButton *)enableLocationButton;
-(void)setEnableLocationButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

