
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface IGClusterBrowsingSelectionSummaryView : UIView {

	UILabel* _textLabel;
	UIButton* _continueButton;

}

@property (nonatomic,retain) UILabel * textLabel;                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;              //@synthesize continueButton=_continueButton - In the implementation block
-(UIButton *)continueButton;
-(void)setContinueButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

