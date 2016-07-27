
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton;

@interface IGSearchResultsEnableLocationCell : UITableViewCell {

	char _shouldShowDetailLabel;
	UILabel* _label;
	UILabel* _detailLabel;
	UIButton* _enableLocationButton;

}

@property (nonatomic,retain) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                        //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIButton * enableLocationButton;              //@synthesize enableLocationButton=_enableLocationButton - In the implementation block
@property (assign,nonatomic) char shouldShowDetailLabel;                   //@synthesize shouldShowDetailLabel=_shouldShowDetailLabel - In the implementation block
+(char)shouldShowEnableLocationHeader;
-(char)shouldShowDetailLabel:(int)arg1 ;
-(void)didTapEnableLocationButton:(id)arg1 ;
-(UIButton *)enableLocationButton;
-(char)shouldShowDetailLabel;
-(void)setEnableLocationButton:(UIButton *)arg1 ;
-(void)setShouldShowDetailLabel:(char)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

